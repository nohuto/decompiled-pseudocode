/*
 * XREFs of KeReleaseInStackQueuedSpinLockForDpc @ 0x1404623E0
 * Callers:
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x1405B90F0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     DifKeReleaseInStackQueuedSpinLockForDpcWrapper @ 0x1406233E0 (DifKeReleaseInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockForDpc(PKLOCK_QUEUE_HANDLE LockHandle)
{
  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
    KeReleaseInStackQueuedSpinLock(LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
}
