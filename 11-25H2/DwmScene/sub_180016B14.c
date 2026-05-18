/*
 * XREFs of sub_180016B14 @ 0x180016B14
 * Callers:
 *     sub_180016644 @ 0x180016644 (sub_180016644.c)
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 *     sub_1800962B0 @ 0x1800962B0 (sub_1800962B0.c)
 *     sub_18009A044 @ 0x18009A044 (sub_18009A044.c)
 * Callees:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 */

__int64 __fastcall sub_180016B14(unsigned __int64 a1)
{
  if ( a1 > 0x1FFFFFFFFFFFFFFFLL )
    sub_1800119FC();
  return 8 * a1;
}
