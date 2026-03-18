/*
 * XREFs of KiUpdateSharedReadyQueueStatisticsOnRemoval @ 0x14030D724
 * Callers:
 *     KiRemoveCurrentThreadSharedReadyQueueEnumerator @ 0x14030D370 (KiRemoveCurrentThreadSharedReadyQueueEnumerator.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14030D3E8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x14030D510 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x14030D6C0 (KiRemoveThreadFromSharedReadyQueue.c)
 * Callees:
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x1403CBEA0 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 */

__int64 __fastcall KiUpdateSharedReadyQueueStatisticsOnRemoval(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 12))-- == 1 )
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 720) + 392LL), ~*(_QWORD *)(a1 + 712));
  *(_QWORD *)(a1 + 16) -= *(unsigned int *)(a2 + 1784);
  return KiUpdateSoftParkElectionStatisticsOnRemoval(a1, a2, 0LL);
}
