/*
 * XREFs of sub_180082BD8 @ 0x180082BD8
 * Callers:
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180015C98 @ 0x180015C98 (sub_180015C98.c)
 *     sub_18002797C @ 0x18002797C (sub_18002797C.c)
 *     sub_180045508 @ 0x180045508 (sub_180045508.c)
 *     sub_180046290 @ 0x180046290 (sub_180046290.c)
 *     sub_1800462A4 @ 0x1800462A4 (sub_1800462A4.c)
 *     sub_18004667C @ 0x18004667C (sub_18004667C.c)
 *     sub_1800467B4 @ 0x1800467B4 (sub_1800467B4.c)
 *     sub_180046A14 @ 0x180046A14 (sub_180046A14.c)
 *     sub_180046AA8 @ 0x180046AA8 (sub_180046AA8.c)
 *     sub_180046CF8 @ 0x180046CF8 (sub_180046CF8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180082BD8(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r9
  _OWORD v6[2]; // [rsp+30h] [rbp-69h] BYREF
  _OWORD v7[3]; // [rsp+50h] [rbp-49h] BYREF
  _OWORD v8[3]; // [rsp+80h] [rbp-19h] BYREF
  _DWORD v9[4]; // [rsp+B0h] [rbp+17h] BYREF

  sub_18002797C((__int64)v7, 12LL, 4LL, sub_180010240);
  sub_18002797C((__int64)v6, 8LL, 4LL, (__int64 (__fastcall *)(__int64))sub_180017210);
  sub_18002797C((__int64)v8, 12LL, 4LL, sub_180010240);
  v7[0] = xmmword_1800F9110;
  v7[1] = xmmword_1800F9130;
  v7[2] = xmmword_18018C610;
  v8[0] = xmmword_18018C3C0;
  v8[1] = xmmword_18018C380;
  v8[2] = xmmword_18018C5E0;
  v6[0] = xmmword_18018C600;
  v6[1] = xmmword_18018C3C0;
  v9[0] = 0x10000;
  v9[1] = 65538;
  v9[2] = 131075;
  sub_180015C98(a2, a1);
  sub_180046CF8(*a1, 4);
  sub_180046290(*a1, 6);
  sub_180046A14(*a1, 0);
  sub_1800467B4(*a1, (__int64)v7);
  sub_1800462A4(*a1, (__int64)v9);
  sub_18004667C(*a1, (__int64)v8, 0, v4);
  sub_180046AA8(*a1, (__int64)v6);
  sub_180045508(*a1);
  return a1;
}
