/*
 * XREFs of sub_180025294 @ 0x180025294
 * Callers:
 *     sub_180025DD0 @ 0x180025DD0 (sub_180025DD0.c)
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_180032804 @ 0x180032804 (sub_180032804.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     sub_1800BAF10 @ 0x1800BAF10 (sub_1800BAF10.c)
 * Callees:
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 */

__int64 __fastcall sub_180025294(__int64 a1)
{
  sub_18002894C(a1 + 24);
  return (__int64)(*(_QWORD *)(a1 + 256) - *(_QWORD *)(a1 + 248)) >> 4;
}
