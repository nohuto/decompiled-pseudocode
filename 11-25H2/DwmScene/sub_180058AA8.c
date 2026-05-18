/*
 * XREFs of sub_180058AA8 @ 0x180058AA8
 * Callers:
 *     sub_180055748 @ 0x180055748 (sub_180055748.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_180083990 @ 0x180083990 (sub_180083990.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180054718 @ 0x180054718 (sub_180054718.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180058AA8(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  _DWORD *v7; // rdx
  _BYTE v9[16]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h]
  int v11; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-30h] BYREF

  v10 = a2;
  v11 = a4;
  sub_180016F54((__int64)v12, a2);
  v7 = *(_DWORD **)sub_180054718((_QWORD *)(a1 + 1616), (__int64)v9, &v11);
  v7[18] = *a3;
  v7[19] = a3[1];
  v7[20] = a3[2];
  v7[21] = a3[3];
  sub_180011A5C((__int64)v12);
  return sub_180011A5C(a2);
}
