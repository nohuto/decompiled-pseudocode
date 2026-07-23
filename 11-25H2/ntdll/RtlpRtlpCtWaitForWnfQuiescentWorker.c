/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1801490A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCtContextFree @ 0x180148F48 (RtlpCtContextFree.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 */

void __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(PTP_CALLBACK_INSTANCE a1, HANDLE *a2, PTP_WORK a3)
{
  NtWaitForSingleObject(a2[2], 0, 0LL);
  RtlpCtContextFree((__int64)a2);
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
