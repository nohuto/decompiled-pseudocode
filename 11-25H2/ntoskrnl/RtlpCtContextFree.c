/*
 * XREFs of RtlpCtContextFree @ 0x140777E3C
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405E3BE0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x140777E98 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x140778010 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x140A63170 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
