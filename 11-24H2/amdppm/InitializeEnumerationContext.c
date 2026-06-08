/*
 * XREFs of InitializeEnumerationContext @ 0x140003C50
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14003B770 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x14003BA58 (RetrieveEfficiencyClassInformation.c)
 *     ProcLibTraceControlCallback @ 0x14003EA10 (ProcLibTraceControlCallback.c)
 *     GetPerfDomain @ 0x1400415F0 (GetPerfDomain.c)
 *     CpcHighestNotifyWorker @ 0x140041A78 (CpcHighestNotifyWorker.c)
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
