/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x1404CA254
 * Callers:
 *     PopHandleWakeSources @ 0x140B5BE24 (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140B5C0F4 (PopProcessDeviceWakeSource.c)
 *     PopNewWakeInfo @ 0x140B67F44 (PopNewWakeInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall PopReleaseWakeSourceSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  KeReleaseInStackQueuedSpinLock(a1);
}
