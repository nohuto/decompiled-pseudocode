/*
 * XREFs of ?IsPanelFitterCompatibleScale@COverlayContext@@AEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18005EBE4
 * Callers:
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x18005E784 (-IsCandidateDirectFlipCompatible@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 *     ?IsOverlayCompatibleScale@COverlayContext@@AEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_N@Z @ 0x18026C6A4 (-IsOverlayCompatibleScale@COverlayContext@@AEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4Overl.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800234D0 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreSupportedStretchFactors@COverlayContext@@AEBA_NAEBUtagRECT@@0AEBUDXGI_MULTIPLANE_OVERLAY_GROUP_CAPS@@_N@Z @ 0x1801E9160 (-AreSupportedStretchFactors@COverlayContext@@AEBA_NAEBUtagRECT@@0AEBUDXGI_MULTIPLANE_OVERLAY_GRO.c)
 */

bool __fastcall COverlayContext::IsPanelFitterCompatibleScale(
        COverlayContext *this,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a2)
{
  const struct tagRECT *v2; // rbx
  COverlayContext *v3; // rcx
  __int64 v4; // r9
  const struct tagRECT *v5; // r11
  const struct DXGI_MULTIPLANE_OVERLAY_GROUP_CAPS *v7; // r9

  if ( *((_DWORD *)a2 + 13) != 1 )
    return 0;
  v2 = (const struct tagRECT *)((char *)a2 + 4);
  if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
         (unsigned int *)a2 + 1,
         (_DWORD *)a2 + 5) )
  {
    return 1;
  }
  v7 = (const struct DXGI_MULTIPLANE_OVERLAY_GROUP_CAPS *)(v4 + 64);
  return *(_DWORD *)v7 && COverlayContext::AreSupportedStretchFactors(v3, v2, v5, v7, 0);
}
