/*
 * XREFs of ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x140207264
 * Callers:
 *     DxgkDeviceIoctl @ 0x140070210 (DxgkDeviceIoctl.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401ED020 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x140209830 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

bool DXGVAILOBJECT::IsFeatureEnabled(void)
{
  bool v0; // zf
  bool v1; // sf
  __int64 v3; // [rsp+30h] [rbp+8h]

  v0 = g_IsVailEnabled == 0;
  v1 = g_IsVailEnabled < 0;
  if ( g_IsVailEnabled < 0 )
  {
    v3 = (unsigned int)Feature_Vail__private_featureState;
    if ( (Feature_Vail__private_featureState & 0x10) == 0 )
    {
      LODWORD(v3) = Feature_Vail__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_Vail__private_descriptor, v3, 3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v3, 3, (__int64)&Feature_Vail__private_descriptor);
    }
    _InterlockedCompareExchange(&g_IsVailEnabled, 1, -1);
    v0 = g_IsVailEnabled == 0;
    v1 = g_IsVailEnabled < 0;
  }
  return !v1 && !v0;
}
