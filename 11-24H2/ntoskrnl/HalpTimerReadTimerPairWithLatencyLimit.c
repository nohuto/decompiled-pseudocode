/*
 * XREFs of HalpTimerReadTimerPairWithLatencyLimit @ 0x1405460B8
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x140545550 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140549AA0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  LARGE_INTEGER v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
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
      PerformanceCounter.QuadPart = guard_dispatch_icall_no_overrides(InternalData, v14);
    }
    *a4 = PerformanceCounter;
    v15 = __readcr2();
    __writecr2(v15);
    if ( a3 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      v16 = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      v17 = HalpTimerGetInternalData(a3);
      v16.QuadPart = guard_dispatch_icall_no_overrides(v17, v18);
    }
    *a5 = v16;
    v19 = __readcr2();
    __writecr2(v19);
    v20 = __rdtsc();
    v21 = __readcr2();
    __writecr2(v21);
    result = (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v10;
  }
  while ( result > v7 );
  return result;
}
