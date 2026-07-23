/*
 * XREFs of PopFxDeviceCriticalRegionLeave @ 0x1405CE5B0
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1402AE658 (PopFxActivateComponentWorker.c)
 *     PopFxCompleteComponentActivation @ 0x1402BFDF0 (PopFxCompleteComponentActivation.c)
 *     PopFxIdleWorker @ 0x1403A9020 (PopFxIdleWorker.c)
 *     PopFxIdleWorkerTail @ 0x1404E22FC (PopFxIdleWorkerTail.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 */

void __fastcall PopFxDeviceCriticalRegionLeave(__int64 a1)
{
  if ( KeGetCurrentIrql() < 2u && (*(_DWORD *)(a1 + 864) & 0x1000) != 0 )
    KeLeaveGuardedRegion();
}
