/*
 * XREFs of ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1403D7C7C
 * Callers:
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401B2900 (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 *     ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140427920 (-VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400670D8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006735C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

bool DXGVAILOBJECT::IsIFlipFeatureEnabled(void)
{
  bool v0; // zf
  bool v1; // sf
  __int64 v3; // [rsp+30h] [rbp+8h]

  v0 = g_IsVailIFlipEnabled == 0;
  v1 = g_IsVailIFlipEnabled < 0;
  if ( g_IsVailIFlipEnabled < 0 )
  {
    v3 = (unsigned int)Feature_Vail_iFLIP__private_featureState;
    if ( (Feature_Vail_iFLIP__private_featureState & 0x10) == 0 )
    {
      LODWORD(v3) = Feature_Vail_iFLIP__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_Vail_iFLIP__private_descriptor, v3, 3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v3,
        3,
        (__int64)&Feature_Vail_iFLIP__private_descriptor);
    }
    _InterlockedCompareExchange(&g_IsVailIFlipEnabled, 1, -1);
    v0 = g_IsVailIFlipEnabled == 0;
    v1 = g_IsVailIFlipEnabled < 0;
  }
  return !v1 && !v0;
}
