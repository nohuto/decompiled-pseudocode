/*
 * XREFs of HalpSetVirtualRtc @ 0x140419DE0
 * Callers:
 *     HalQueryRealTimeClock @ 0x1404196C0 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x140537C80 (HalCalibratePerformanceCounter.c)
 *     HalpSetResumeTime @ 0x1405581B8 (HalpSetResumeTime.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     RtlpTimeToTimeFields @ 0x140419FC0 (RtlpTimeToTimeFields.c)
 */

char __fastcall HalpSetVirtualRtc(LARGE_INTEGER *a1)
{
  LARGE_INTEGER SystemTimePrecise; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( SystemPowerPhase == 2 )
    return 0;
  if ( a1 )
  {
    SystemTimePrecise = *a1;
    v6 = *a1;
  }
  else
  {
    if ( SystemPowerPhase )
      return 0;
    SystemTimePrecise = RtlGetSystemTimePrecise();
    v6 = SystemTimePrecise;
  }
  RtlpTimeToTimeFields(&v6, &v5);
  if ( (__int16)v5 <= 1601 )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  dword_140FC1660 = PerformanceCounter.HighPart;
  qword_140FC1658 = PerformanceCounter.QuadPart;
  dword_140FC1654 = v6.HighPart;
  qword_140FC164C = SystemTimePrecise.QuadPart;
  dword_140FC1648 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
