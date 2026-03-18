/*
 * XREFs of ?IsOverlayRevokable@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180189760
 * Callers:
 *     ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18018959C (-IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@details@wil@@QEAA_NXZ @ 0x18029CF4C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::IsOverlayRevokable(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v2; // rcx
  char result; // al

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkMPOCapsChange>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_InkMPOCapsChange>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 296) )
      return 1;
    v2 = *((_QWORD *)this + 26);
    if ( !v2 )
      return 1;
  }
  else
  {
    v2 = *((_QWORD *)this + 26);
    result = 1;
    if ( !v2 )
      return result;
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 160LL))(v2);
}
