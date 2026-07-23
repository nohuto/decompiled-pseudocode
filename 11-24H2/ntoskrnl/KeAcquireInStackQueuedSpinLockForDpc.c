/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x14038D250
 * Callers:
 *     KeRemoveByKeyDeviceQueue @ 0x14038CF30 (KeRemoveByKeyDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x14038D180 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1405BA5C0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     DifKeAcquireInStackQueuedSpinLockForDpcWrapper @ 0x14062A9D0 (DifKeAcquireInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  _QWORD *v3; // rdx

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
      v3 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle);
      if ( v3 )
        KxWaitForLockOwnerShip((__int64)LockHandle, v3);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)LockHandle, (volatile __int64 *)SpinLock);
    }
  }
}
