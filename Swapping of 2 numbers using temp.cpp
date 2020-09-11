#include<iostream>
using namespace std;
int main()
{
	int x, y, temp;
	cout << "Enter First number: ";
	cin >> x;
	cout << "Enter Second number: ";
	cin >> y;
	temp = x;
	x = y;
	y = temp;
	cout << "After swapping x = " << x << " , y = " << y;
	cout << endl;
	system("pause");
	return 0;
}