/*
 * XREFs of sub_1800949C0 @ 0x1800949C0
 * Callers:
 *     sub_180094890 @ 0x180094890 (sub_180094890.c)
 *     sub_1800948B0 @ 0x1800948B0 (sub_1800948B0.c)
 *     sub_1800948D0 @ 0x1800948D0 (sub_1800948D0.c)
 *     sub_1800948F0 @ 0x1800948F0 (sub_1800948F0.c)
 *     sub_180094910 @ 0x180094910 (sub_180094910.c)
 *     sub_180094930 @ 0x180094930 (sub_180094930.c)
 *     sub_180094950 @ 0x180094950 (sub_180094950.c)
 *     sub_180094970 @ 0x180094970 (sub_180094970.c)
 *     sub_180094990 @ 0x180094990 (sub_180094990.c)
 *     sub_1800949A0 @ 0x1800949A0 (sub_1800949A0.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180094720 @ 0x180094720 (sub_180094720.c)
 */

_QWORD *__fastcall sub_1800949C0(_QWORD *lpMem, char a2)
{
  sub_180094720(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
