/*
 * XREFs of sub_180058C08 @ 0x180058C08
 * Callers:
 *     sub_1800558A8 @ 0x1800558A8 (sub_1800558A8.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_180083AF0 @ 0x180083AF0 (sub_180083AF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_180054878 @ 0x180054878 (sub_180054878.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180058C08(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  _DWORD *v7; // rdx
  _BYTE v9[16]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h]
  int v11; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-30h] BYREF

  v10 = a2;
  v11 = a4;
  sub_180017054((__int64)v12, a2);
  v7 = *(_DWORD **)sub_180054878((_QWORD *)(a1 + 1616), (__int64)v9, &v11);
  v7[18] = *a3;
  v7[19] = a3[1];
  v7[20] = a3[2];
  v7[21] = a3[3];
  sub_180011B5C((__int64)v12);
  return sub_180011B5C(a2);
}
