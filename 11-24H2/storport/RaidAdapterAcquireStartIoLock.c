/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x140029420
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x140016D40 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     RaidInitializePerfOptsPassive @ 0x140043D90 (RaidInitializePerfOptsPassive.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 872) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 864), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
}
