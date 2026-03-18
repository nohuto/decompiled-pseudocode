/*
 * XREFs of sub_140A93FF8 @ 0x140A93FF8
 * Callers:
 *     sub_1408FD018 @ 0x1408FD018 (sub_1408FD018.c)
 *     sub_1409E0124 @ 0x1409E0124 (sub_1409E0124.c)
 * Callees:
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 */

__int64 __fastcall sub_140A93FF8(void **a1)
{
  if ( a1 )
  {
    SddlpFree(a1[5]);
    SddlpFree(a1[7]);
    SddlpFree(a1);
  }
  return 0LL;
}
