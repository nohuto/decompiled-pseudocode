/*
 * XREFs of KiSearchForNewThreadsWithinL0SearchContext @ 0x1404E9D30
 * Callers:
 *     KiSearchForNewThread @ 0x140296D10 (KiSearchForNewThread.c)
 * Callees:
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1404E9D80 (KiSearchForNewThreadsWithinSearchContext.c)
 */

__int64 __fastcall KiSearchForNewThreadsWithinL0SearchContext(struct _KPRCB *a1)
{
  return KiSearchForNewThreadsWithinSearchContext(a1);
}
