/*
 * XREFs of Feature_4234972473__private_IsEnabledDeviceUsageNoInline @ 0x140079100
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x1401FE624 (-DestroySurfacesResourcesGlobal@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_SURF_INFO@1@@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140423DEC (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 * Callees:
 *     Feature_4234972473__private_IsEnabledFallback @ 0x140079138 (Feature_4234972473__private_IsEnabledFallback.c)
 */

__int64 Feature_4234972473__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_4234972473__private_featureState & 0x10) != 0 )
    return Feature_4234972473__private_featureState & 1;
  else
    return Feature_4234972473__private_IsEnabledFallback((unsigned int)Feature_4234972473__private_featureState, 3LL);
}
