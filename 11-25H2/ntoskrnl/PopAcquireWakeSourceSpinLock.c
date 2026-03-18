/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x1404BD414
 * Callers:
 *     PopHandleWakeSources @ 0x140B4BE20 (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140B4C0F0 (PopProcessDeviceWakeSource.c)
 *     PopNewWakeInfo @ 0x140B58114 (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
