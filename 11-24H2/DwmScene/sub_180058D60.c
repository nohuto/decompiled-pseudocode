/*
 * XREFs of sub_180058D60 @ 0x180058D60
 * Callers:
 *     sub_180084AF0 @ 0x180084AF0 (sub_180084AF0.c)
 * Callees:
 *     sub_1800588F0 @ 0x1800588F0 (sub_1800588F0.c)
 *     sub_180058A5C @ 0x180058A5C (sub_180058A5C.c)
 */

__int64 __fastcall sub_180058D60(__int64 a1)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  sub_180058A5C(a1, v3);
  *(_OWORD *)v3 = 0LL;
  sub_1800588F0(a1, v3);
  return sub_180050C60((_QWORD *)(a1 + 448));
}
