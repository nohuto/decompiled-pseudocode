/*
 * XREFs of sub_180082D38 @ 0x180082D38
 * Callers:
 *     sub_18006BAB4 @ 0x18006BAB4 (sub_18006BAB4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180015D98 @ 0x180015D98 (sub_180015D98.c)
 *     sub_180027ADC @ 0x180027ADC (sub_180027ADC.c)
 *     sub_180045668 @ 0x180045668 (sub_180045668.c)
 *     sub_1800463F0 @ 0x1800463F0 (sub_1800463F0.c)
 *     sub_180046404 @ 0x180046404 (sub_180046404.c)
 *     sub_1800467DC @ 0x1800467DC (sub_1800467DC.c)
 *     sub_180046914 @ 0x180046914 (sub_180046914.c)
 *     sub_180046B74 @ 0x180046B74 (sub_180046B74.c)
 *     sub_180046C08 @ 0x180046C08 (sub_180046C08.c)
 *     sub_180046E58 @ 0x180046E58 (sub_180046E58.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180082D38(__int64 *a1, __int64 *a2)
{
  __int64 v4; // r9
  _OWORD v6[2]; // [rsp+30h] [rbp-69h] BYREF
  _OWORD v7[3]; // [rsp+50h] [rbp-49h] BYREF
  _OWORD v8[3]; // [rsp+80h] [rbp-19h] BYREF
  _DWORD v9[4]; // [rsp+B0h] [rbp+17h] BYREF

  sub_180027ADC((__int64)v7, 12LL, 4LL, sub_180010340);
  sub_180027ADC((__int64)v6, 8LL, 4LL, (__int64 (__fastcall *)(__int64))sub_180017310);
  sub_180027ADC((__int64)v8, 12LL, 4LL, sub_180010340);
  v7[0] = xmmword_1800FA110;
  v7[1] = xmmword_1800FA130;
  v7[2] = xmmword_18018D600;
  v8[0] = xmmword_18018D3B0;
  v8[1] = xmmword_18018D370;
  v8[2] = xmmword_18018D5D0;
  v6[0] = xmmword_18018D5F0;
  v6[1] = xmmword_18018D3B0;
  v9[0] = 0x10000;
  v9[1] = 65538;
  v9[2] = 131075;
  sub_180015D98(a2, a1);
  sub_180046E58(*a1, 4);
  sub_1800463F0(*a1, 6);
  sub_180046B74(*a1, 0);
  sub_180046914(*a1, (__int64)v7);
  sub_180046404(*a1, (__int64)v9);
  sub_1800467DC(*a1, (__int64)v8, 0, v4);
  sub_180046C08(*a1, (__int64)v6);
  sub_180045668(*a1);
  return a1;
}
