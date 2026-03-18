/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x140787260
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x14078708C (RtlpCtContextFree.c)
 */

void __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(PVOID *P)
{
  KeWaitForSingleObject(P[2], Executive, 0, 0, 0LL);
  RtlpCtContextFree(P);
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
