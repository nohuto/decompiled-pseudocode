/*
 * XREFs of HalpTimerReadTimerPairWithLatencyLimit @ 0x140545F08
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x1405453A0 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1405498F0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall HalpTimerReadTimerPairWithLatencyLimit(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        LARGE_INTEGER *a4,
        LARGE_INTEGER *a5)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 InternalData; // rax
  unsigned __int64 v14; // rax
  LARGE_INTEGER v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 result; // rax

  v7 = a1;
  do
  {
    v9 = __readcr2();
    __writecr2(v9);
    v10 = __rdtsc();
    v11 = __readcr2();
    __writecr2(v11);
    if ( a2 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      InternalData = HalpTimerGetInternalData(a2);
      PerformanceCounter.QuadPart = guard_dispatch_icall_no_overrides(InternalData);
    }
    *a4 = PerformanceCounter;
    v14 = __readcr2();
    __writecr2(v14);
    if ( a3 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      v15 = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      v16 = HalpTimerGetInternalData(a3);
      v15.QuadPart = guard_dispatch_icall_no_overrides(v16);
    }
    *a5 = v15;
    v17 = __readcr2();
    __writecr2(v17);
    v18 = __rdtsc();
    v19 = __readcr2();
    __writecr2(v19);
    result = (((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) - v10;
  }
  while ( result > v7 );
  return result;
}
