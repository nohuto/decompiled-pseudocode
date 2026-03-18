/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x1404573E0
 * Callers:
 *     KeRemoveByKeyDeviceQueue @ 0x1404570C0 (KeRemoveByKeyDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x140457310 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1405B90F0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     DifKeAcquireInStackQueuedSpinLockForDpcWrapper @ 0x140620450 (DifKeAcquireInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  struct _KPRCB **v3; // rdx

  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  }
  else
  {
    LockHandle->LockQueue.Next = 0LL;
    LockHandle->LockQueue.Lock = SpinLock;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v3 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle);
      if ( v3 )
        KxWaitForLockOwnerShip((struct _KPRCB *)LockHandle, v3);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)LockHandle, (volatile __int64 *)SpinLock);
    }
  }
}
