/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x1404610E0
 * Callers:
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1405BCF90 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     DifKeReleaseInStackQueuedSpinLockForDpcWrapper @ 0x14062F3A0 (DifKeReleaseInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockForDpc(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 DpcRequestSummary; // rdx

  DpcRequestSummary = (unsigned int)KeGetCurrentPrcb()->DpcRequestSummary;
  if ( (DpcRequestSummary & 0x10000) != 0 )
    KeReleaseInStackQueuedSpinLock(LockHandle);
  else
    KxReleaseQueuedSpinLock((volatile signed __int64 **)LockHandle, DpcRequestSummary);
}
