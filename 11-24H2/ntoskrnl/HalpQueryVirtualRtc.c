/*
 * XREFs of HalpQueryVirtualRtc @ 0x140548660
 * Callers:
 *     HalQueryRealTimeClock @ 0x1404196C0 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x140537C80 (HalCalibratePerformanceCounter.c)
 *     HalpSetResumeTime @ 0x1405581B8 (HalpSetResumeTime.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     RtlpTimeToTimeFields @ 0x140419FC0 (RtlpTimeToTimeFields.c)
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
    v9 = qword_140FC164C;
    v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( v4 == qword_140FC1658 )
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
