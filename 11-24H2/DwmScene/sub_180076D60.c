/*
 * XREFs of sub_180076D60 @ 0x180076D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003682C @ 0x18003682C (sub_18003682C.c)
 *     sub_180073E24 @ 0x180073E24 (sub_180073E24.c)
 *     sub_18008DF4C @ 0x18008DF4C (sub_18008DF4C.c)
 *     sub_18008F1A8 @ 0x18008F1A8 (sub_18008F1A8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180076D60(__int64 a1, __int64 a2)
{
  _BYTE *v4; // r8
  const void *v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF
  char v9; // [rsp+78h] [rbp+20h] BYREF

  sub_18008F1A8(a1, a2, 0LL);
  v8 = 0LL;
  v6[0] = &v8;
  v6[1] = &v9;
  sub_180073E24(v7, v6, v4);
  sub_18008DF4C(a1, a2, v7);
  return sub_18003682C((__int64)v7);
}
