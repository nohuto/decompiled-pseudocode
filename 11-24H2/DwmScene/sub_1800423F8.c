/*
 * XREFs of sub_1800423F8 @ 0x1800423F8
 * Callers:
 *     sub_180043314 @ 0x180043314 (sub_180043314.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180041FE4 @ 0x180041FE4 (sub_180041FE4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800423F8(__int64 a1, __int64 a2)
{
  _DWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v6 = a1;
  v7 = a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v5[0] = 0;
  sub_180041FE4((_QWORD *)(a1 + 40), a2, v5);
  sub_180011B5C(a2);
  return a1;
}
