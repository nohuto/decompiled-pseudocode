/*
 * XREFs of sub_180058C00 @ 0x180058C00
 * Callers:
 *     sub_180084990 @ 0x180084990 (sub_180084990.c)
 * Callees:
 *     sub_180058790 @ 0x180058790 (sub_180058790.c)
 *     sub_1800588FC @ 0x1800588FC (sub_1800588FC.c)
 */

__int64 __fastcall sub_180058C00(__int64 a1)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  sub_1800588FC(a1, v3);
  *(_OWORD *)v3 = 0LL;
  sub_180058790(a1, v3);
  return sub_180050B00((_QWORD *)(a1 + 448));
}
