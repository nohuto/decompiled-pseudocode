/*
 * XREFs of Feature_DisplayMux_Dynamic_Enabled__private_IsEnabledPreCheck @ 0x1400895C8
 * Callers:
 *     ?Init@DISPLAY_MUX_MGR@@QEAAJXZ @ 0x1400849D4 (-Init@DISPLAY_MUX_MGR@@QEAAJXZ.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400670D8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006735C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_DisplayMux_Dynamic_Enabled__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_DisplayMux_Dynamic_Enabled__private_featureState;
  if ( (Feature_DisplayMux_Dynamic_Enabled__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_DisplayMux_Dynamic_Enabled__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_DisplayMux_Dynamic_Enabled__private_descriptor,
      v1,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3,
      (__int64)&Feature_DisplayMux_Dynamic_Enabled__private_descriptor);
  }
  return 1LL;
}
