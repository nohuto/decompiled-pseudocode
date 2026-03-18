/*
 * XREFs of ?OverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x18018A47C
 * Callers:
 *     ?UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ @ 0x180189A34 (-UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ @ 0x18018A414 (-UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x180231CCC (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@111AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180268E88 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?IsDFlipOnMPO@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18026C604 (-IsDFlipOnMPO@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?IsOverlayCompatibleScale@COverlayContext@@AEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_N@Z @ 0x18026C6A4 (-IsOverlayCompatibleScale@COverlayContext@@AEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4Overl.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::OverlaysEnabled(COverlayContext *this)
{
  return CCommonRegistryData::m_dwOverlayTestMode != 5 && *((_DWORD *)this + 10) > 1u;
}
