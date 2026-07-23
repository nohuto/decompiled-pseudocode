/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x1404566F0
 * Callers:
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1405BA5C0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     DifKeReleaseInStackQueuedSpinLockForDpcWrapper @ 0x14062D960 (DifKeReleaseInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
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
