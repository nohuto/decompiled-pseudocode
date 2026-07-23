/*
 * XREFs of HalpSetVirtualRtc @ 0x14042DE60
 * Callers:
 *     HalQueryRealTimeClock @ 0x14042D740 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x140537C90 (HalCalibratePerformanceCounter.c)
 *     HalpSetResumeTime @ 0x140557C88 (HalpSetResumeTime.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14031AAC0 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     RtlpTimeToTimeFields @ 0x14042E040 (RtlpTimeToTimeFields.c)
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
  dword_140FC0C60 = PerformanceCounter.HighPart;
  qword_140FC0C58 = PerformanceCounter.QuadPart;
  dword_140FC0C54 = v6.HighPart;
  qword_140FC0C4C = SystemTimePrecise.QuadPart;
  dword_140FC0C48 = PerformanceCounter.HighPart;
  VrtcTime = PerformanceCounter.QuadPart;
  if ( a1 )
    HalpVrtcTimeStale = 0;
  return 1;
}
