/*
 * XREFs of ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060
 * Callers:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000BCC0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030238 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x180030658 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 *     ?DeleteUnusedDevices@CDeviceManager@@AEAAXXZ @ 0x180031AC0 (-DeleteUnusedDevices@CDeviceManager@@AEAAXXZ.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180075F80 (-AddNewContent@CComposeTop@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18007DABC (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180086B40 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x1800AE6D0 (-BeginCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x1800C1E9C (-AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x1800C2DFC (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?RenderPerf_ApplyLayer@CLayer@@QEBAXXZ @ 0x1800DC09C (-RenderPerf_ApplyLayer@CLayer@@QEBAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180109860 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180109DB8 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z @ 0x180109E20 (-NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z.c)
 *     ?GetFlipExSurfaceZ@CWindowOcclusionInfo@@QEAAHPEBVCVisualTree@@@Z @ 0x180109E90 (-GetFlipExSurfaceZ@CWindowOcclusionInfo@@QEAAHPEBVCVisualTree@@@Z.c)
 *     ?Check@CCheckMPOCache@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180109ED0 (-Check@CCheckMPOCache@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x18012FBF8 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ??0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Composition@UI@Windows@@@Z @ 0x18013C768 (--0CEffectCompilationTask@@AEAA@PEAVCEffectCompilationService@@PEAUIEffectDescription@Compositio.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180169268 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x18016F0D0 (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 *     ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x1801CFEE0 (-SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z.c)
 *     ?InvalidateAnimationSources@CDataSourceReader@@QEAAXI@Z @ 0x1801D02EC (-InvalidateAnimationSources@CDataSourceReader@@QEAAXI@Z.c)
 *     ??0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x1801FF098 (--0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z @ 0x180222388 (-ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLU.c)
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x18022C09C (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x18022CD78 (-InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?NotifyDrawVisualTree@CRenderPerf@@QEAAX_K@Z @ 0x180239AD8 (-NotifyDrawVisualTree@CRenderPerf@@QEAAX_K@Z.c)
 *     ?NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z @ 0x18023A8CC (-NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x18023C6A8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x18025851C (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18025AA8C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     ?Trace_TargetRender@CRenderPerf@@IEAAXW4Type@IRenderTarget@@@Z @ 0x18026D068 (-Trace_TargetRender@CRenderPerf@@IEAAXW4Type@IRenderTarget@@@Z.c)
 *     ?NotifyEndFrame@CRenderPerf@@QEAAXXZ @ 0x1802717A4 (-NotifyEndFrame@CRenderPerf@@QEAAXXZ.c)
 *     ?NotifyPresent@CTargetStats@@QEAAXJ_K@Z @ 0x180289940 (-NotifyPresent@CTargetStats@@QEAAXJ_K@Z.c)
 *     ?GetPresentTime@CRemoteRenderTarget@@IEBA_KXZ @ 0x18028AED0 (-GetPresentTime@CRemoteRenderTarget@@IEBA_KXZ.c)
 *     ?Present@CRemoteRenderTarget@@IEAAJXZ @ 0x18028B210 (-Present@CRemoteRenderTarget@@IEAAJXZ.c)
 *     ?NotifyRevoked@CGlobalCompositionSurfaceInfo@@UEAAXXZ @ 0x18029CAB0 (-NotifyRevoked@CGlobalCompositionSurfaceInfo@@UEAAXXZ.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CCheckMPOCache_std::default_delete_CCheckMPOCache___________lambda_977d6bda85a50585b288e206ad017f41___ @ 0x1802C1E50 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CCheckM.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x1802C68BC (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
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
