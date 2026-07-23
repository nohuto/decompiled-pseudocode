/*
 * XREFs of RtlpCtContextFree @ 0x140786FBC
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405ED4D0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x140787018 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x140787190 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x140A5D360 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtContextFree(PVOID *P)
{
  PVOID v2; // rcx
  PVOID v3; // rcx

  v2 = P[1];
  if ( v2 )
    ExUnsubscribeWnfStateChange(v2);
  v3 = P[2];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x67744364u);
    P[2] = 0LL;
  }
  if ( *P )
    ExFreePoolWithTag(*P, 0x67744364u);
  ExFreePoolWithTag(P, 0x67744364u);
}
