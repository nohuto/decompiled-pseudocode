/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1801490A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCtContextFree @ 0x180148F48 (RtlpCtContextFree.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 */

__int64 __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8

  NtWaitForSingleObject(*(HANDLE *)(a2 + 16), 0, 0LL);
  RtlpCtContextFree((__int64 *)a2, v3, v4);
  return (unsigned int)_InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
