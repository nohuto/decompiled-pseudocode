/*
 * XREFs of ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1403D5E88
 * Callers:
 *     DxgkGetMemoryBudgetTarget @ 0x1401EE220 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1401EE850 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetYieldPercentage @ 0x1401EEC90 (DxgkGetYieldPercentage.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401EF1F0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkSetMemoryBudgetTarget @ 0x1403D5890 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetYieldPercentage @ 0x1403D5B80 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool CheckTokenForResourceManagerAccess(void)
{
  __int64 v0; // rdx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v0 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 38109);
  return v0 && (int)RtlCheckTokenMembership(0LL, v0, &v2) >= 0 && v2 != 0;
}
