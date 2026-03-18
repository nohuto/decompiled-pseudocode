/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x140393920
 * Callers:
 *     KeRemoveByKeyDeviceQueue @ 0x140393600 (KeRemoveByKeyDeviceQueue.c)
 *     KeInsertByKeyDeviceQueue @ 0x140393850 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1405BCF90 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     DifKeAcquireInStackQueuedSpinLockForDpcWrapper @ 0x14062C410 (DifKeAcquireInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
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
