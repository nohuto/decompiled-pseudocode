/*
 * XREFs of Feature_CompSwapchainDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x140073430
 * Callers:
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14000AD24 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14004336C (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 *     ?GetDirtyRegionRectCount@CIFlipPresentHistoryTokenFlipManager@@UEBAIXZ @ 0x14005DE30 (-GetDirtyRegionRectCount@CIFlipPresentHistoryTokenFlipManager@@UEBAIXZ.c)
 *     ?GetDirtyRegionRects@CIFlipPresentHistoryTokenFlipManager@@UEBAPEBUtagRECT@@XZ @ 0x14005DE60 (-GetDirtyRegionRects@CIFlipPresentHistoryTokenFlipManager@@UEBAPEBUtagRECT@@XZ.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009DA2C (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z @ 0x14009F2C8 (-Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z.c)
 * Callees:
 *     Feature_CompSwapchainDX12Support__private_IsEnabledFallback @ 0x140073468 (Feature_CompSwapchainDX12Support__private_IsEnabledFallback.c)
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
