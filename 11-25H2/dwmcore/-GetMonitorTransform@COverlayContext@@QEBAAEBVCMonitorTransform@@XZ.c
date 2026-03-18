/*
 * XREFs of ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x18002C7A4 (-IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChai.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ @ 0x18002D8C8 (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x18002DA20 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18002E0FC (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?CalcDesktopClip@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002E47C (-CalcDesktopClip@COverlayContext@@AEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gs.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1801FF944 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x18023C6A8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023E0CC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?AddInvertedContentBounds@COverlayContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18025002C (-AddInvertedContentBounds@COverlayContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?CalcOverlaySize@COverlayContext@@AEBA?AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1802744E8 (-CalcOverlaySize@COverlayContext@@AEBA-AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180274714 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?HasOverlappingCornerRects@COverlayContext@@CA_NPEAVOverlayPlaneInfo@1@AEBV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180276C08 (-HasOverlappingCornerRects@COverlayContext@@CA_NPEAVOverlayPlaneInfo@1@AEBV-$vector_facade@PEAVO.c)
 *     ?IsCursorScaledByHardware@COverlayContext@@QEBA_NPEBVCD3DDevice@@@Z @ 0x18027708C (-IsCursorScaledByHardware@COverlayContext@@QEBA_NPEBVCD3DDevice@@@Z.c)
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180277784 (-TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRec.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct CMonitorTransform *__fastcall COverlayContext::GetMonitorTransform(COverlayContext *this)
{
  __int64 v1; // rcx
  const struct CMonitorTransform *(__fastcall *v2)(CLegacyRenderTarget *__hidden); // rax

  v1 = *(_QWORD *)this;
  v2 = *(const struct CMonitorTransform *(__fastcall **)(CLegacyRenderTarget *__hidden))(*(_QWORD *)v1 + 256LL);
  if ( v2 == CLegacyRenderTarget::GetMonitorTransform )
    return (const struct CMonitorTransform *)(v1 + 30728);
  if ( v2 == CDDisplayRenderTarget::GetMonitorTransform )
    return (const struct CMonitorTransform *)(v1 + 30736);
  return (const struct CMonitorTransform *)((__int64 (*)(void))v2)();
}
