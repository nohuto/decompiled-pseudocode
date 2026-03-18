/*
 * XREFs of ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x180102DE0
 * Callers:
 *     ?ApplyClockBoost@CRenderTargetManager@@AEAA_NXZ @ 0x180102D10 (-ApplyClockBoost@CRenderTargetManager@@AEAA_NXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x1801C5750 (-HasActiveInk@CSuperWetInkManager@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@Q.c)
 */

bool __fastcall CComposition::GetCompositorClockBoost(CComposition *this)
{
  CGlobalComposition *v1; // rbx
  __int64 v2; // rax
  bool v3; // zf

  v1 = g_pComposition;
  v3 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetImpl'::`2'::impl) == 0;
  v2 = *((_QWORD *)v1 + 77);
  if ( v3 )
  {
    if ( *(_BYTE *)(v2 + 753) )
      return 0;
    v3 = *((_BYTE *)v1 + 6471) == 0;
  }
  else
  {
    if ( *(_BYTE *)(v2 + 753) || *((_BYTE *)v1 + 6471) )
      return 0;
    v3 = *((_BYTE *)v1 + 6472) == 0;
  }
  return v3 && (*((_DWORD *)v1 + 1595) || CSuperWetInkManager::HasActiveInk(*((CSuperWetInkManager **)v1 + 82)));
}
