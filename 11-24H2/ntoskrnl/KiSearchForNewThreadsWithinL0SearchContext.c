/*
 * XREFs of KiSearchForNewThreadsWithinL0SearchContext @ 0x1404E0CE0
 * Callers:
 *     KiSearchForNewThread @ 0x1402A59F0 (KiSearchForNewThread.c)
 * Callees:
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1404E0D30 (KiSearchForNewThreadsWithinSearchContext.c)
 */

__int64 __fastcall KiSearchForNewThreadsWithinL0SearchContext(struct _KPRCB *a1)
{
  return KiSearchForNewThreadsWithinSearchContext(a1);
}
