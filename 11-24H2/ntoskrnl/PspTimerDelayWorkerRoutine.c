/*
 * XREFs of PspTimerDelayWorkerRoutine @ 0x1405E5FD0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PspApplyTimerDelayProcess @ 0x1405E5820 (PspApplyTimerDelayProcess.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PspTimerDelayWorkerRoutine(_QWORD *P)
{
  __int64 v2; // r8

  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(P[4] + 488LL)) )
  {
    PspApplyTimerDelayProcess(P[4], 0LL, v2);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 488LL));
  }
  ObfDereferenceObjectWithTag((PVOID)P[4], 0x624A7350u);
  ExFreePoolWithTag(P, 0x65446954u);
}
