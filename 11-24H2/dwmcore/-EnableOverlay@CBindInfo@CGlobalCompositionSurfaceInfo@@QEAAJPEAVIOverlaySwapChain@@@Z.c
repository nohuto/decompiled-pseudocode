/*
 * XREFs of ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z @ 0x180208330
 * Callers:
 *     ?EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KPEAVIOverlaySwapChain@@@Z @ 0x1802082C0 (-EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801DF404 (-EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapCha.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180227418 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnableOverlay(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct IOverlaySwapChain *a2)
{
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 184) )
    {
      v4 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x4CEu, 0LL);
      return v4;
    }
LABEL_8:
    v5 = CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      v7 = 1234;
    }
    else
    {
      v5 = CGlobalCompositionSurfaceInfo::CBindInfo::EnsureOverlaySwapChainWeakRef(this, a2);
      v4 = v5;
      if ( v5 >= 0 )
      {
        *((_BYTE *)this + 187) = 1;
        return v4;
      }
      v7 = 1235;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, v7, 0LL);
    return v4;
  }
  if ( !*((_BYTE *)this + 186) && !*((_BYTE *)this + 187) && !*((_BYTE *)this + 184) )
    goto LABEL_8;
  v4 = -2003292412;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x4C7u, 0LL);
  return v4;
}
