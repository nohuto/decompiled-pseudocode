/*
 * XREFs of RaidAdapterReleaseStartIoLock @ 0x1400276F0
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x140016D40 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     RaidInitializePerfOptsPassive @ 0x140043D90 (RaidInitializePerfOptsPassive.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1400277E0 (RaidAdapterReleaseInterruptLock.c)
 */

void __fastcall RaidAdapterReleaseStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 872) )
    KeReleaseInStackQueuedSpinLock(a2);
  else
    RaidAdapterReleaseInterruptLock(a1, LOBYTE(a2->LockQueue.Next));
}
