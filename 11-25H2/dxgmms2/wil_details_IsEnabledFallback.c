/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14004D570
 * Callers:
 *     Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledFallback @ 0x14004CC80 (Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback @ 0x14004CCD4 (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledFallback @ 0x14004CD28 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledFallback.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledFallback @ 0x14004CD7C (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledFallback @ 0x14004DAAC (Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledFallback.c)
 *     Feature_191927608__private_IsEnabledFallback @ 0x14004DC4C (Feature_191927608__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_IsEnabledFallback @ 0x14004DCA0 (Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledFallback @ 0x14004DFA0 (Feature_Servicing_GraphicsKernel_MDLMemoryLeak__private_IsEnabledFallback.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback @ 0x14004F6AC (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback.c)
 *     Feature_FlipPlaneLayerIndexFix__private_IsEnabledFallback @ 0x14004F700 (Feature_FlipPlaneLayerIndexFix__private_IsEnabledFallback.c)
 *     Feature_Servicing_NonVolatileReadInVidSch__private_IsEnabledFallback @ 0x1400510C4 (Feature_Servicing_NonVolatileReadInVidSch__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004D130 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14004D2A4 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004D3B4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, volatile signed __int32 **a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, (__int64)a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService((__int64)a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, (__int64)a3);
  }
  return v5 & 1;
}
