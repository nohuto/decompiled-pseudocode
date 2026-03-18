/*
 * XREFs of KiSearchForNewThreadsWithinL1SearchContext @ 0x1404F2160
 * Callers:
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 * Callees:
 *     KiSearchForNewThreadsWithinSearchContext @ 0x1403CFC10 (KiSearchForNewThreadsWithinSearchContext.c)
 */

_KTHREAD *__fastcall KiSearchForNewThreadsWithinL1SearchContext(__int64 a1, unsigned __int64 *a2)
{
  return KiSearchForNewThreadsWithinSearchContext(
           (struct _KPRCB *)a1,
           a2,
           *(_QWORD *)(a1 + 37920),
           *(__int64 **)(a1 + 37936));
}
