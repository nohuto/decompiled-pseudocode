/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x1404B7484
 * Callers:
 *     PopHandleWakeSources @ 0x140B5DE94 (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140B5E164 (PopProcessDeviceWakeSource.c)
 *     PopNewWakeInfo @ 0x140B6A084 (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
