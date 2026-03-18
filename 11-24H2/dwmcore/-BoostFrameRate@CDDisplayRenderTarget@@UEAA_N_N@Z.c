/*
 * XREFs of ?BoostFrameRate@CDDisplayRenderTarget@@UEAA_N_N@Z @ 0x180234630
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z @ 0x18020F060 (-SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z.c)
 *     ?IsPowerSaverEnabled@CComposition@@QEBA_NXZ @ 0x18025BEB8 (-IsPowerSaverEnabled@CComposition@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@Q.c)
 */

char __fastcall CDDisplayRenderTarget::BoostFrameRate(CDDisplayRenderTarget *this, char a2)
{
  __int64 v2; // rax
  CDDisplaySwapChain *v4; // rcx
  unsigned int v5; // edx

  v2 = *((_QWORD *)this + 6);
  if ( !v2 )
    return 0;
  if ( a2 )
  {
    v4 = (CDDisplaySwapChain *)(v2 + 24);
    v5 = *(_DWORD *)(v2 + 152);
    if ( !*(_QWORD *)(v2 + 136) || v5 <= 1 )
      return 0;
  }
  else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 19640) && !CComposition::IsPowerSaverEnabled(g_pComposition) )
      return 0;
    v4 = (CDDisplaySwapChain *)(*((_QWORD *)this + 6) + 24LL);
    v5 = 0;
  }
  else
  {
    v4 = (CDDisplaySwapChain *)(*((_QWORD *)this + 6) + 24LL);
    v5 = 0;
  }
  if ( !CDDisplaySwapChain::SetVBlankDuration(v4, v5, 0LL) )
    return 0;
  *((_BYTE *)this + 33360) = 1;
  return 1;
}
