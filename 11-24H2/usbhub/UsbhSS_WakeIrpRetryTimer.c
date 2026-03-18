/*
 * XREFs of UsbhSS_WakeIrpRetryTimer @ 0x14005DAC0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x14001CB60 (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhSS_WakeIrpRetryTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (__int64)UsbhSS_PdoWakeWorker, 0, a4, 0, 0x77505353u);
}
