/*
 * XREFs of Feature_Wddm30CpuVisible__private_IsEnabledPreCheck @ 0x14003C378
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DCBA4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004C9EC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004CC70 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_Wddm30CpuVisible__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_Wddm30CpuVisible__private_featureState;
  if ( (Feature_Wddm30CpuVisible__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_Wddm30CpuVisible__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_Wddm30CpuVisible__private_descriptor, v1, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v1, 3LL, &Feature_Wddm30CpuVisible__private_descriptor);
  }
  return 1LL;
}
