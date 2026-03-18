/*
 * XREFs of ?PreventOverlay@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z @ 0x18029CAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x1801E8964 (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@details@wil@@QEAA_NXZ @ 0x18029CF4C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@details@wil@@Q.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::PreventOverlay(CGlobalCompositionSurfaceInfo *this, char a2)
{
  CGlobalComposition *v4; // rax

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkMPOCapsChange>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_InkMPOCapsChange>::GetImpl'::`2'::impl) )
  {
    if ( a2 != *((_BYTE *)this + 296) )
    {
      *((_BYTE *)this + 296) = a2;
      if ( a2 )
      {
        if ( *((_BYTE *)this + 299) )
          CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay((CGlobalCompositionSurfaceInfo *)((char *)this + 112));
      }
    }
  }
  else
  {
    if ( a2 && !*((_BYTE *)this + 296) && *((_BYTE *)this + 299) )
      CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay((CGlobalCompositionSurfaceInfo *)((char *)this + 112));
    if ( a2 != *((_BYTE *)this + 296) )
    {
      v4 = g_pComposition;
      *((_BYTE *)this + 296) = a2;
      *(_BYTE *)(*((_QWORD *)v4 + 77) + 746LL) = 1;
    }
  }
}
