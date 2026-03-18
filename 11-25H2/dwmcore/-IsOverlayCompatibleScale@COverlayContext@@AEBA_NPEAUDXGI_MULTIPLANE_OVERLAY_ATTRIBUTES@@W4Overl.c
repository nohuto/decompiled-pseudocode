/*
 * XREFs of ?IsOverlayCompatibleScale@COverlayContext@@AEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_N@Z @ 0x1802771EC
 * Callers:
 *     ?IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_NI5@Z @ 0x180276E90 (-IsCandidateOverlayCompatible@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 * Callees:
 *     ?OverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x1800C2FC0 (-OverlaysEnabled@COverlayContext@@QEBA_NXZ.c)
 *     ?IsPanelFitterCompatibleScale@COverlayContext@@AEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801899A4 (-IsPanelFitterCompatibleScale@COverlayContext@@AEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 *     ?AreSupportedStretchFactors@COverlayContext@@AEBA_NAEBUtagRECT@@0AEBUDXGI_MULTIPLANE_OVERLAY_GROUP_CAPS@@_N@Z @ 0x1801F6320 (-AreSupportedStretchFactors@COverlayContext@@AEBA_NAEBUtagRECT@@0AEBUDXGI_MULTIPLANE_OVERLAY_GRO.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 */

char __fastcall COverlayContext::IsOverlayCompatibleScale(COverlayContext *a1, __int64 a2, int a3, char a4)
{
  COverlayContext *v5; // rdi

  v5 = a1;
  if ( a3 != 2 || a4 )
    return COverlayContext::AreSupportedStretchFactors(
             a1,
             (const struct tagRECT *)(a2 + 4),
             (const struct tagRECT *)(a2 + 20),
             (COverlayContext *)((char *)v5 + 44),
             *(_DWORD *)(a2 + 52) == 2);
  a1 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl)
     ? (COverlayContext *)!COverlayContext::OverlaysEnabled(v5)
     : (COverlayContext *)(*((_DWORD *)v5 + 11) == 1);
  if ( !(_DWORD)a1 || *((float *)v5 + 14) != 1.0 || *((float *)v5 + 15) != 1.0 )
    return COverlayContext::AreSupportedStretchFactors(
             a1,
             (const struct tagRECT *)(a2 + 4),
             (const struct tagRECT *)(a2 + 20),
             (COverlayContext *)((char *)v5 + 44),
             *(_DWORD *)(a2 + 52) == 2);
  if ( !COverlayContext::IsPanelFitterCompatibleScale(v5, (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)a2) )
    return 0;
  *(_DWORD *)a2 |= 4u;
  return 1;
}
