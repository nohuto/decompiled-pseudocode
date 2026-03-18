/*
 * XREFs of HalpSetVirtualRtc @ 0x140425F30
 * Callers:
 *     HalQueryRealTimeClock @ 0x140425810 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x14053A440 (HalCalibratePerformanceCounter.c)
 *     HalpSetResumeTime @ 0x14055A588 (HalpSetResumeTime.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14034EB80 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     RtlpTimeToTimeFields @ 0x140426110 (RtlpTimeToTimeFields.c)
 */

char __fastcall HalpSetVirtualRtc(__int64 *a1)
{
  __int64 SystemTimePrecise; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

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
  dword_140FC1400 = PerformanceCounter.HighPart;
  qword_140FC13F8 = PerformanceCounter.QuadPart;
  dword_140FC13F4 = HIDWORD(v6);
  qword_140FC13EC = SystemTimePrecise;
  dword_140FC13E8 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
