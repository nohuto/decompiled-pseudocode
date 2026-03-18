/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x1404BC574
 * Callers:
 *     PopHandleWakeSources @ 0x140B5BE24 (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140B5C0F4 (PopProcessDeviceWakeSource.c)
 *     PopNewWakeInfo @ 0x140B67F44 (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
