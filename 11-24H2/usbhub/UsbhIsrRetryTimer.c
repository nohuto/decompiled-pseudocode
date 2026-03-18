/*
 * XREFs of UsbhIsrRetryTimer @ 0x140046E80
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x14001CB60 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhIsrRetryTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (__int64)UsbhHubIsrWorker, 0, a4, a3, 0x49577369u);
}
