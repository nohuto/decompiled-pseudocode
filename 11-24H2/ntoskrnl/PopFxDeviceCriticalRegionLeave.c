/*
 * XREFs of PopFxDeviceCriticalRegionLeave @ 0x1405D0E90
 * Callers:
 *     PopFxCompleteComponentActivation @ 0x140317240 (PopFxCompleteComponentActivation.c)
 *     PopFxIdleWorker @ 0x1403B4B50 (PopFxIdleWorker.c)
 *     PopFxActivateComponentWorker @ 0x1403B6358 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1404EB37C (PopFxIdleWorkerTail.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 */

void __fastcall PopFxDeviceCriticalRegionLeave(__int64 a1)
{
  if ( KeGetCurrentIrql() < 2u && (*(_DWORD *)(a1 + 864) & 0x1000) != 0 )
    KeLeaveGuardedRegion();
}
