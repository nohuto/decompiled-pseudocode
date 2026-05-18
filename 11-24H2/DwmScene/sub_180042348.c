/*
 * XREFs of sub_180042348 @ 0x180042348
 * Callers:
 *     sub_1800424B8 @ 0x1800424B8 (sub_1800424B8.c)
 *     sub_180043314 @ 0x180043314 (sub_180043314.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180077074 @ 0x180077074 (sub_180077074.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180041F58 @ 0x180041F58 (sub_180041F58.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180042348(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  float v7; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+24h] [rbp-44h] BYREF
  _QWORD v9[5]; // [rsp+30h] [rbp-38h] BYREF

  v9[2] = a1;
  v9[4] = a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 2;
  v7 = a4;
  v9[0] = &v7;
  v9[1] = &v8;
  sub_180041F58((__int64 *)(a1 + 40), (__int64)v9, a3);
  sub_180011B5C(a2);
  return a1;
}
