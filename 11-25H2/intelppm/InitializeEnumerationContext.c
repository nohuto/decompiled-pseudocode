/*
 * XREFs of InitializeEnumerationContext @ 0x1400054C4
 * Callers:
 *     RetrieveEfficiencyClassInformation @ 0x140029798 (RetrieveEfficiencyClassInformation.c)
 *     ProcLibTraceControlCallback @ 0x140041B80 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1400454CC (CpcHighestNotifyWorker.c)
 *     GetPerfDomain @ 0x140045878 (GetPerfDomain.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x140046278 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeEnumerationContext(__int64 a1, int a2, __int64 a3)
{
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)(a3 + 24) = a2;
}
