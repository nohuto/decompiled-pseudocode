/*
 * XREFs of HalpTimerReadTimerPairWithLatencyLimit @ 0x1405487F8
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x140547C90 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14054C1E0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  LARGE_INTEGER v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
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
      PerformanceCounter.QuadPart = guard_dispatch_icall_no_overrides(InternalData, v14, v15, v16);
    }
    *a4 = PerformanceCounter;
    v17 = __readcr2();
    __writecr2(v17);
    if ( a3 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      v18 = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      v19 = HalpTimerGetInternalData(a3);
      v18.QuadPart = guard_dispatch_icall_no_overrides(v19, v20, v21, v22);
    }
    *a5 = v18;
    v23 = __readcr2();
    __writecr2(v23);
    v24 = __rdtsc();
    v25 = __readcr2();
    __writecr2(v25);
    result = (((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24) - v10;
  }
  while ( result > v7 );
  return result;
}
