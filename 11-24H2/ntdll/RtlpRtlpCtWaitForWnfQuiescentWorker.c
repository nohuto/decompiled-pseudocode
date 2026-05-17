/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180147AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCtContextFree @ 0x180147998 (RtlpCtContextFree.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 */

__int64 __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(__int64 a1, __int64 a2)
{
  NtWaitForSingleObject(*(HANDLE *)(a2 + 16), 0, 0LL);
  RtlpCtContextFree((unsigned __int64 *)a2);
  return (unsigned int)_InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
