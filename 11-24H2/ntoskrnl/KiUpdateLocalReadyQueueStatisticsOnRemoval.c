/*
 * XREFs of KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x1402D8F08
 * Callers:
 *     KiRemoveThreadFromReadyQueue @ 0x1402D8C40 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x1402D8CB0 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 * Callees:
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x1403BC6D0 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 */

__int64 __fastcall KiUpdateLocalReadyQueueStatisticsOnRemoval(__int64 a1, __int64 a2)
{
  bool v2; // zf

  v2 = (*(_DWORD *)(a1 + 34420))-- == 1;
  if ( v2 && !*(_QWORD *)(a1 + 33840) )
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 192) + 384LL), ~*(_QWORD *)(a1 + 200));
  *(_QWORD *)(a1 + 34424) -= *(unsigned int *)(a2 + 1784);
  return KiUpdateSoftParkElectionStatisticsOnRemoval(*(_QWORD *)(a1 + 36424), a2, 0LL);
}
