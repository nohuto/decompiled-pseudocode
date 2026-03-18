/*
 * XREFs of Feature_DelayedForceEviction__private_IsEnabledPreCheck @ 0x1400430B8
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004D130 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004D3B4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_DelayedForceEviction__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_DelayedForceEviction__private_featureState;
  if ( (Feature_DelayedForceEviction__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_DelayedForceEviction__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_DelayedForceEviction__private_descriptor, v1, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_DelayedForceEviction__private_descriptor);
  }
  return 1LL;
}
