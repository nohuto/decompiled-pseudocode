/*
 * XREFs of Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140073F20
 * Callers:
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A264 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14004309C (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 *     ?GetDirtyRegionRectCount@CIFlipPresentHistoryTokenFlipManager@@UEBAIXZ @ 0x14005DCD0 (-GetDirtyRegionRectCount@CIFlipPresentHistoryTokenFlipManager@@UEBAIXZ.c)
 *     ?GetDirtyRegionRects@CIFlipPresentHistoryTokenFlipManager@@UEBAPEBUtagRECT@@XZ @ 0x14005DD00 (-GetDirtyRegionRects@CIFlipPresentHistoryTokenFlipManager@@UEBAPEBUtagRECT@@XZ.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009FD8C (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z @ 0x1400A1628 (-Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z.c)
 * Callees:
 *     Feature_CompSwapchainDX12Support__private_IsEnabledFallback @ 0x140073F58 (Feature_CompSwapchainDX12Support__private_IsEnabledFallback.c)
 */

__int64 Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompSwapchainDX12Support__private_featureState & 0x10) != 0 )
    return Feature_CompSwapchainDX12Support__private_featureState & 1;
  else
    return Feature_CompSwapchainDX12Support__private_IsEnabledFallback(
             (unsigned int)Feature_CompSwapchainDX12Support__private_featureState,
             3LL);
}
