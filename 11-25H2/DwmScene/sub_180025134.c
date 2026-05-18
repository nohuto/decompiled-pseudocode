/*
 * XREFs of sub_180025134 @ 0x180025134
 * Callers:
 *     sub_180025C70 @ 0x180025C70 (sub_180025C70.c)
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_1800326A4 @ 0x1800326A4 (sub_1800326A4.c)
 *     sub_1800372BC @ 0x1800372BC (sub_1800372BC.c)
 *     sub_1800BADB0 @ 0x1800BADB0 (sub_1800BADB0.c)
 * Callees:
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 */

__int64 __fastcall sub_180025134(__int64 a1)
{
  sub_1800287EC(a1 + 24);
  return (__int64)(*(_QWORD *)(a1 + 256) - *(_QWORD *)(a1 + 248)) >> 4;
}
