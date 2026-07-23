/*
 * XREFs of PspTimerDelayWorkerRoutine @ 0x1405E3570
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PspApplyTimerDelayProcess @ 0x1405E2DC8 (PspApplyTimerDelayProcess.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PspTimerDelayWorkerRoutine(_QWORD *P)
{
  __int64 v2; // r8

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 488LL)) )
  {
    PspApplyTimerDelayProcess(P[4], 0LL, v2);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 488LL));
  }
  ObfDereferenceObjectWithTag((PVOID)P[4], 0x624A7350u);
  ExFreePoolWithTag(P, 0x65446954u);
}
