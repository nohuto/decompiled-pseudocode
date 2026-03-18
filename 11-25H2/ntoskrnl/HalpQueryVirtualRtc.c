/*
 * XREFs of HalpQueryVirtualRtc @ 0x1405484B0
 * Callers:
 *     HalQueryRealTimeClock @ 0x14042D740 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x140537C90 (HalCalibratePerformanceCounter.c)
 *     HalpSetResumeTime @ 0x140557C88 (HalpSetResumeTime.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     RtlpTimeToTimeFields @ 0x14042E040 (RtlpTimeToTimeFields.c)
 */

char __fastcall HalpQueryVirtualRtc(_QWORD *a1, bool *a2)
{
  __int64 v4; // rdi
  LARGE_INTEGER v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v7 = 0LL;
  if ( SystemPowerPhase == 2 )
    return 0;
  while ( 1 )
  {
    v4 = VrtcTime;
    v9 = qword_140FC0C4C;
    v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( v4 == qword_140FC0C58 )
      break;
    _mm_pause();
  }
  RtlpTimeToTimeFields(&v9, &v7);
  if ( (__int16)v7 <= 1601 )
    return 0;
  *a1 = v9 + 10000000 * (v5.QuadPart - v4) / PerformanceFrequency.QuadPart;
  if ( a2 )
    *a2 = HalpVrtcTimeStale == 0;
  return 1;
}
