/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14004CE2C
 * Callers:
 *     Feature_3694358843__private_IsEnabledFallback @ 0x14004C440 (Feature_3694358843__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledFallback @ 0x14004C494 (Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback @ 0x14004C4E8 (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_IsEnabledFallback @ 0x14004C53C (Feature_Servicing_GraphicsKernel_UpdateGpuVirtualAddressFailure__private_IsEnabledFallback.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledFallback @ 0x14004C590 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledFallback.c)
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback @ 0x14004C5E4 (Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback.c)
 *     Feature_Servicing_VARangeRaceCondition__private_IsEnabledFallback @ 0x14004C638 (Feature_Servicing_VARangeRaceCondition__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledFallback @ 0x14004CF98 (Feature_Servicing_GraphicsKernel_StabilityImprovements__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_IsEnabledFallback @ 0x14004CFEC (Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_IsEnabledFallback @ 0x14004D410 (Feature_Servicing_GraphicsKernel_PromotionRegistryKeyPerAdapter__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledFallback @ 0x14004D464 (Feature_Servicing_GraphicsKernel_PromotionRegistryKey__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_IsEnabledFallback @ 0x14004D4B8 (Feature_Servicing_GraphicsKernel_VidMmSetPagingQueueStatus__private_IsEnabledFallback.c)
 *     Feature_Servicing_PteDeadLock__private_IsEnabledFallback @ 0x14004D658 (Feature_Servicing_PteDeadLock__private_IsEnabledFallback.c)
 *     Feature_GraphicsKernel2602BugFixes__private_IsEnabledFallback @ 0x1400509A4 (Feature_GraphicsKernel2602BugFixes__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_FlipQueueRecursionFix__private_IsEnabledFallback @ 0x1400509F8 (Feature_Servicing_GraphicsKernel_FlipQueueRecursionFix__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_IsEnabledFallback @ 0x140050A4C (Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_SchedulerSuspendedHwfqDrainFix__private_IsEnabledFallback @ 0x140050AA0 (Feature_Servicing_GraphicsKernel_SchedulerSuspendedHwfqDrainFix__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_IsEnabledFallback @ 0x140050AF4 (Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_IsEnabledFallback.c)
 *     Feature_Servicing_NonVolatileReadInVidSch__private_IsEnabledFallback @ 0x140050B48 (Feature_Servicing_NonVolatileReadInVidSch__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004C9EC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14004CB60 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004CC70 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
