/*
 * XREFs of sub_180058944 @ 0x180058944
 * Callers:
 *     sub_1800648A8 @ 0x1800648A8 (sub_1800648A8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180058944(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_DWORD *)(a1 + 172) = a2;
  *(_DWORD *)(a1 + 176) = 0;
  sub_1800133F4(a1 + 184, a4);
  sub_1800133F4(a1 + 216, a5);
  sub_1800133F4(a1 + 248, a6);
  sub_180011B5C(a4);
  sub_180011B5C(a5);
  return sub_180011B5C(a6);
}
