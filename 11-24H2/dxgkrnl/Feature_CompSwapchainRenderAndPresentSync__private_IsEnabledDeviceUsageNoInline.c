/*
 * XREFs of Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x1400792CC
 * Callers:
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x140025728 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x14004E2F8 (-ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z.c)
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x140057B28 (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x14005B280 (-Initialize@CFlipManager@@IEAAJPEAX@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x14005F6A0 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x14005F940 (-Delete@CFlipManager@@MEAAJPEAX@Z.c)
 *     ??0CAdapter@@IEAA@I@Z @ 0x14009AF84 (--0CAdapter@@IEAA@I@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x14009B090 (--1CAdapter@@IEAA@XZ.c)
 *     ?FlipManagerCreateFlipObjectHandle@@YAJPEAUFlipManagerObject@@_KPEAPEAX@Z @ 0x14009E430 (-FlipManagerCreateFlipObjectHandle@@YAJPEAUFlipManagerObject@@_KPEAPEAX@Z.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@PEAPEAUPresentedContentOverlayInfo@@@Z @ 0x14009EEC4 (-ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@PEAPEAUPresentedContentOverlay.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009EF2C (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009F2A8 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x1400A068C (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
 *     ?GetInfo@CCompositionSwapchainBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1400A17D0 (-GetInfo@CCompositionSwapchainBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1401F96AC (--1DXGSESSIONDATA@@QEAA@XZ.c)
 * Callees:
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback @ 0x140079304 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback.c)
 */

__int64 Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CompSwapchainRenderAndPresentSync__private_featureState & 0x10) != 0 )
    return Feature_CompSwapchainRenderAndPresentSync__private_featureState & 1;
  else
    return Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledFallback(
             (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_featureState,
             3LL);
}
