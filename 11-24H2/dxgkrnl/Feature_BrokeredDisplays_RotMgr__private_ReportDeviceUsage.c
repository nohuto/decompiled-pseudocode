/*
 * XREFs of Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage @ 0x140064840
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1403C5E54 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_BrokeredDisplays_RotMgr__private_featureState;
  if ( (Feature_BrokeredDisplays_RotMgr__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_BrokeredDisplays_RotMgr__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_BrokeredDisplays_RotMgr__private_descriptor, v1, 3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_BrokeredDisplays_RotMgr__private_descriptor);
  }
  return result;
}
