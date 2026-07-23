/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x1404C35A4
 * Callers:
 *     PopHandleWakeSources @ 0x140B5DE94 (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140B5E164 (PopProcessDeviceWakeSource.c)
 *     PopNewWakeInfo @ 0x140B6A084 (PopNewWakeInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall PopReleaseWakeSourceSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  KeReleaseInStackQueuedSpinLock(a1);
}
