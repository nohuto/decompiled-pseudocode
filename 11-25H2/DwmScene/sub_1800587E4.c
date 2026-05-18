/*
 * XREFs of sub_1800587E4 @ 0x1800587E4
 * Callers:
 *     sub_180064748 @ 0x180064748 (sub_180064748.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800132F4 @ 0x1800132F4 (sub_1800132F4.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800587E4(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_DWORD *)(a1 + 172) = a2;
  *(_DWORD *)(a1 + 176) = 0;
  sub_1800132F4(a1 + 184, a4);
  sub_1800132F4(a1 + 216, a5);
  sub_1800132F4(a1 + 248, a6);
  sub_180011A5C(a4);
  sub_180011A5C(a5);
  return sub_180011A5C(a6);
}
