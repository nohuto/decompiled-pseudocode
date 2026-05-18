/*
 * XREFs of sub_180076C00 @ 0x180076C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800366CC @ 0x1800366CC (sub_1800366CC.c)
 *     sub_180073CC4 @ 0x180073CC4 (sub_180073CC4.c)
 *     sub_18008DDEC @ 0x18008DDEC (sub_18008DDEC.c)
 *     sub_18008F048 @ 0x18008F048 (sub_18008F048.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180076C00(__int64 a1, __int64 a2)
{
  _BYTE *v4; // r8
  const void *v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF
  char v9; // [rsp+78h] [rbp+20h] BYREF

  sub_18008F048(a1, a2, 0LL);
  v8 = 0LL;
  v6[0] = &v8;
  v6[1] = &v9;
  sub_180073CC4(v7, v6, v4);
  sub_18008DDEC(a1, a2, v7);
  return sub_1800366CC((__int64)v7);
}
