/*
 * XREFs of ?SetVBlankDuration@RefreshRateInfo@@QEAA_NI_K@Z @ 0x18020F0F8
 * Callers:
 *     ?SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z @ 0x18020EEF0 (-SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z.c)
 *     ?SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z @ 0x18020F060 (-SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@Q.c)
 */

char __fastcall RefreshRateInfo::SetVBlankDuration(RefreshRateInfo *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi

  v4 = a2;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetImpl'::`2'::impl)
    && *((_QWORD *)this + 5) == 0xFFFFFFFFLL )
  {
    return 0;
  }
  if ( (_DWORD)v4 )
  {
    if ( (unsigned int)v4 > 1 )
      a3 = g_qpcFrequency.QuadPart * (unsigned __int64)*((unsigned int *)this + 1) / *(unsigned int *)this / v4;
  }
  else
  {
    a3 = 0LL;
  }
  if ( a3 == *((_QWORD *)this + 4) && (_DWORD)v4 == *((_DWORD *)this + 7) )
    return 0;
  if ( !a3 )
  {
    *((_QWORD *)this + 4) = 0LL;
    *((_DWORD *)this + 7) = 0;
    return 1;
  }
  if ( !*((_QWORD *)this + 1) || a3 < *((_QWORD *)this + 1) || *((_QWORD *)this + 2) && a3 > *((_QWORD *)this + 2) )
    return 0;
  *((_QWORD *)this + 4) = a3;
  *((_DWORD *)this + 7) = v4;
  return 1;
}
