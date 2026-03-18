/*
 * XREFs of ?FindHighestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18023D1B0
 * Callers:
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002D664 (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023D308 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180189EF0 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x1801D4478 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?BetterIsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x1802742F8 (-BetterIsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 */

__int64 __fastcall COverlayContext::FindHighestPriorityOverlayCandidateIndex(unsigned __int64 *a1)
{
  int v1; // esi
  unsigned int i; // edi
  const struct COverlayContext::OverlayPlaneInfo *v4; // rbx
  const struct COverlayContext::OverlayPlaneInfo **v5; // rax
  const struct COverlayContext::OverlayPlaneInfo *v6; // rbx
  const struct COverlayContext::OverlayPlaneInfo **v7; // rax

  v1 = -1;
  if ( *a1 )
  {
    v1 = 0;
    for ( i = 1; i < *(_DWORD *)a1; ++i )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
      {
        v4 = *(const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                   a1,
                                                                   v1);
        v5 = (const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                  a1,
                                                                  i);
        if ( COverlayContext::BetterIsHigherProprity(*v5, v4) )
          v1 = i;
      }
      else
      {
        v6 = *(const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                   a1,
                                                                   v1);
        v7 = (const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                  a1,
                                                                  i);
        if ( COverlayContext::IsHigherProprity(*v7, v6) )
          v1 = i;
      }
    }
  }
  return (unsigned int)v1;
}
