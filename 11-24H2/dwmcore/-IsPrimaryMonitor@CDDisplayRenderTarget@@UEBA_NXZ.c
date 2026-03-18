/*
 * XREFs of ?IsPrimaryMonitor@CDDisplayRenderTarget@@UEBA_NXZ @ 0x18009B660
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180098EA4 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x18009B4E8 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 */

char __fastcall CDDisplayRenderTarget::IsPrimaryMonitor(CDDisplayRenderTarget *this)
{
  char IsEnabled; // al
  float v3; // xmm0_4
  char v4; // dl

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl);
  v3 = *((float *)this + 7590);
  v4 = 0;
  if ( IsEnabled )
  {
    if ( v3 == 0.0 && *((float *)this + 7591) == 0.0 && *((_BYTE *)this + 33361) )
      return 1;
  }
  else if ( v3 == 0.0 && *((float *)this + 7591) == 0.0 )
  {
    return 1;
  }
  return v4;
}
