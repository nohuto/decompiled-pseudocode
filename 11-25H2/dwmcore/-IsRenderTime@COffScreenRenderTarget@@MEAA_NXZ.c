/*
 * XREFs of ?IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ @ 0x1800C4CC0
 * Callers:
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x1800C4C70 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800C5BD8 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_RequestFrameAPI@@@details@wil@@QEAA_NXZ @ 0x18024E1E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_RequestFrameAPI@@@details.c)
 */

char __fastcall COffScreenRenderTarget::IsRenderTime(COffScreenRenderTarget *this)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 39) == -1LL )
    return 1;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  v2 = PerformanceCount.QuadPart - *((_QWORD *)this + 38);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_RequestFrameAPI>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_RequestFrameAPI>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 2729) )
      return 1;
  }
  v3 = *((_QWORD *)this + 39);
  if ( v2 >= v3 )
    return 1;
  ScheduleCompositionPass(1000 * (v3 - v2) / g_qpcFrequency.QuadPart, 1LL);
  return 0;
}
