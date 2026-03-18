/*
 * XREFs of ?HasRevokablePlanes@COverlayContext@@QEBA_NXZ @ 0x18023D270
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18013DBE0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x18023C6A8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 * Callees:
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18018959C (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::HasRevokablePlanes(COverlayContext *this)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  char IsRevokable; // al

  v1 = *((_QWORD *)this + 1617);
  v3 = *((_QWORD *)this + 1618);
  while ( v1 != v3 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
    {
      if ( *(_DWORD *)(v1 + 360) )
        goto LABEL_8;
      IsRevokable = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 16) + 152LL))(*(_QWORD *)(v1 + 16));
    }
    else
    {
      IsRevokable = COverlayContext::IsRevokable(
                      (CLegacyRenderTarget **)this,
                      (const struct COverlayContext::OverlayPlaneInfo *)v1);
    }
    if ( IsRevokable )
      return 1;
LABEL_8:
    v1 += 400LL;
  }
  return 0;
}
