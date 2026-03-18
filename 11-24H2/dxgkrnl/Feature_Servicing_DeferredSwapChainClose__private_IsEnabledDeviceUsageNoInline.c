/*
 * XREFs of Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline @ 0x140079454
 * Callers:
 *     ?AsyncCloseNtHandle@DXGSWAPCHAIN@@CAXPEAX@Z @ 0x1401FE280 (-AsyncCloseNtHandle@DXGSWAPCHAIN@@CAXPEAX@Z.c)
 *     DxgkCreateSwapChain @ 0x140201340 (DxgkCreateSwapChain.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x140379498 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 *     ?DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_INFO@1@@Z @ 0x140423DEC (-DestroySurfacesResourcesLocal@DXGSWAPCHAIN@@AEAAXW4SWAPCHAIN_CLIENT_TYPE@1@PEAUSWAPCHAIN_SURF_I.c)
 * Callees:
 *     Feature_Servicing_DeferredSwapChainClose__private_IsEnabledFallback @ 0x14007948C (Feature_Servicing_DeferredSwapChainClose__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_DeferredSwapChainClose__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_DeferredSwapChainClose__private_featureState & 0x10) != 0 )
    return Feature_Servicing_DeferredSwapChainClose__private_featureState & 1;
  else
    return Feature_Servicing_DeferredSwapChainClose__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_DeferredSwapChainClose__private_featureState,
             3LL);
}
