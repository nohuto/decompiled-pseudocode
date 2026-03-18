/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x1404C9F84
 * Callers:
 *     PopHandleWakeSources @ 0x140B4BE20 (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140B4C0F0 (PopProcessDeviceWakeSource.c)
 *     PopNewWakeInfo @ 0x140B58114 (PopNewWakeInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall PopReleaseWakeSourceSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  KeReleaseInStackQueuedSpinLock(a1);
}
