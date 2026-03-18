/*
 * XREFs of ?GetCurrentTime@CClockBase@@IEBA_KXZ @ 0x180249D2C
 * Callers:
 *     ?UpdateTiming@CDefaultClock@@UEAA_KXZ @ 0x180249AB0 (-UpdateTiming@CDefaultClock@@UEAA_KXZ.c)
 *     ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x180249B00 (-UpdateTiming@CMonitorClock@@UEAA_KXZ.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowTimeTravel@@@details@wil@@QEAA_NXZ @ 0x180249DB0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowTimeTravel@@@details@wil@@QE.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

LARGE_INTEGER __fastcall CClockBase::GetCurrentTime(CClockBase *this)
{
  void *retaddr; // [rsp+28h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowTimeTravel>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_AllowTimeTravel>::GetImpl'::`2'::impl)
    && PerformanceCount.QuadPart < CClockBase::s_prevClockSetTime )
  {
    if ( 1000 * (CClockBase::s_prevClockSetTime - PerformanceCount.QuadPart) / g_qpcFrequency.QuadPart > CClockBase::s_allowableTimeDriftMs )
      ModuleFailFastForHRESULT(-2003304438, retaddr);
    return (LARGE_INTEGER)CClockBase::s_prevClockSetTime;
  }
  else
  {
    return PerformanceCount;
  }
}
