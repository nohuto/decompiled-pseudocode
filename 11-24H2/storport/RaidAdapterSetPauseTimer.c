/*
 * XREFs of RaidAdapterSetPauseTimer @ 0x14006179C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140001040 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     RaidAdapterDeviceReset @ 0x140059DAC (RaidAdapterDeviceReset.c)
 *     RaidAdapterResetBusNoLock @ 0x14005E034 (RaidAdapterResetBusNoLock.c)
 * Callees:
 *     RaidResumeAdapterQueue @ 0x14000FA30 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x14000FD00 (RaidAdapterRestartQueues.c)
 */

BOOLEAN __fastcall RaidAdapterSetPauseTimer(__int64 a1, struct _KTIMER *a2, struct _KDPC *Dpc, unsigned int a4)
{
  BOOLEAN v5; // di

  v5 = KeSetCoalescableTimer(a2, (LARGE_INTEGER)(-10000000LL * a4), 0, 0, Dpc);
  if ( v5 && !(unsigned int)RaidResumeAdapterQueue(a1, 0, 0) )
    RaidAdapterRestartQueues(a1, 0);
  return v5;
}
