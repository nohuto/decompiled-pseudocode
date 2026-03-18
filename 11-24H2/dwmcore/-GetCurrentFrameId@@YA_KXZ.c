/*
 * XREFs of ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510
 * Callers:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000A7D0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000B988 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18003941C (--1CVisual@@MEAA@XZ.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180039D50 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x18003A2A8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z @ 0x18003A310 (-NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z.c)
 *     ?Check@CCheckMPOCache@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18003A380 (-Check@CCheckMPOCache@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x18003AF7C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x18006F300 (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 *     ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x18007C6F0 (-BeginCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?HandleCompletedTasks@CEffectCompilationService@@QEAAXXZ @ 0x18007CAD8 (-HandleCompletedTasks@CEffectCompilationService@@QEAAXXZ.c)
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x1800F2360 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 *     ?DeleteUnusedDevices@CDeviceManager@@AEAAXXZ @ 0x1800F3600 (-DeleteUnusedDevices@CDeviceManager@@AEAAXXZ.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FA800 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderPerf_ApplyLayer@CLayer@@QEBAXXZ @ 0x1800FBF8C (-RenderPerf_ApplyLayer@CLayer@@QEBAXXZ.c)
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180136C8C (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x180157DA0 (--0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Compositio.c)
 *     ?InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1801589D8 (-InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180186168 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x180189C9C (-AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18018A29C (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x1801A8380 (-SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z.c)
 *     ?InvalidateAnimationSources@CDataSourceReader@@QEAAXI@Z @ 0x1801A878C (-InvalidateAnimationSources@CDataSourceReader@@QEAAXI@Z.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1801B0F38 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ??0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x1801F2968 (--0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z @ 0x1802168C8 (-ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLU.c)
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x180220F3C (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?NotifyDrawVisualTree@CRenderPerf@@QEAAX_K@Z @ 0x18022DD38 (-NotifyDrawVisualTree@CRenderPerf@@QEAAX_K@Z.c)
 *     ?NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z @ 0x18022E7BC (-NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1802317DC (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x18024D0BC (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18024F55C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     ?Trace_TargetRender@CRenderPerf@@IEAAXW4Type@IRenderTarget@@@Z @ 0x180261018 (-Trace_TargetRender@CRenderPerf@@IEAAXW4Type@IRenderTarget@@@Z.c)
 *     ?NotifyEndFrame@CRenderPerf@@QEAAXXZ @ 0x180265794 (-NotifyEndFrame@CRenderPerf@@QEAAXXZ.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_K@Z @ 0x18027E900 (-NotifyPresent@CTargetStats@@QEAAXJ_K@Z.c)
 *     ?GetPresentTime@CRemoteRenderTarget@@IEBA_KXZ @ 0x180280180 (-GetPresentTime@CRemoteRenderTarget@@IEBA_KXZ.c)
 *     ?Present@CRemoteRenderTarget@@IEAAJXZ @ 0x1802804C0 (-Present@CRemoteRenderTarget@@IEAAJXZ.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CCheckMPOCache_std::default_delete_CCheckMPOCache___________lambda_977d6bda85a50585b288e206ad017f41___ @ 0x1802B8810 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CCheckM.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x1802BD52C (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 * Callees:
 *     <none>
 */

CGlobalComposition *GetCurrentFrameId(void)
{
  CGlobalComposition *result; // rax

  result = g_pComposition;
  if ( g_pComposition )
    return (CGlobalComposition *)*((_QWORD *)g_pComposition + 111);
  return result;
}
