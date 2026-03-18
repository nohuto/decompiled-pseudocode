/*
 * XREFs of ?HasRevokablePlanes@COverlayContext@@QEBA_NXZ @ 0x180232A20
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180102130 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1802317DC (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 * Callees:
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18002324C (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::HasRevokablePlanes(COverlayContext *this)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  char IsRevokable; // al

  v1 = *((_QWORD *)this + 1585);
  v3 = *((_QWORD *)this + 1586);
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
    v1 += 392LL;
  }
  return 0;
}
