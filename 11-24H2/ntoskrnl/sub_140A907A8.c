/*
 * XREFs of sub_140A907A8 @ 0x140A907A8
 * Callers:
 *     sub_14091F8F8 @ 0x14091F8F8 (sub_14091F8F8.c)
 *     sub_1409D9ED4 @ 0x1409D9ED4 (sub_1409D9ED4.c)
 * Callees:
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 */

__int64 __fastcall sub_140A907A8(void **a1)
{
  if ( a1 )
  {
    SddlpFree(a1[5]);
    SddlpFree(a1[7]);
    SddlpFree(a1);
  }
  return 0LL;
}
