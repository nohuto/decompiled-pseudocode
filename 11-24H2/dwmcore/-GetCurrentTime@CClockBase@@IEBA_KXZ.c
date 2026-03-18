/*
 * XREFs of ?GetCurrentTime@CClockBase@@IEBA_KXZ @ 0x180242EE4
 * Callers:
 *     ?UpdateTiming@CDefaultClock@@UEAA_KXZ @ 0x180242D50 (-UpdateTiming@CDefaultClock@@UEAA_KXZ.c)
 *     ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x180242DA0 (-UpdateTiming@CMonitorClock@@UEAA_KXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

LARGE_INTEGER __fastcall CClockBase::GetCurrentTime(CClockBase *this)
{
  void *retaddr; // [rsp+28h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  if ( PerformanceCount.QuadPart < CClockBase::s_prevClockSetTime )
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
