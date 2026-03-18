/*
 * XREFs of Feature_DDisplay_AggCheckMpo__private_IsEnabledDeviceUsageNoInline @ 0x14006CAF0
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x140410868 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     Feature_DDisplay_AggCheckMpo__private_IsEnabledFallback @ 0x14006CB28 (Feature_DDisplay_AggCheckMpo__private_IsEnabledFallback.c)
 */

__int64 Feature_DDisplay_AggCheckMpo__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DDisplay_AggCheckMpo__private_featureState & 0x10) != 0 )
    return Feature_DDisplay_AggCheckMpo__private_featureState & 1;
  else
    return Feature_DDisplay_AggCheckMpo__private_IsEnabledFallback(
             (unsigned int)Feature_DDisplay_AggCheckMpo__private_featureState,
             3LL);
}
