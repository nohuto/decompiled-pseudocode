/*
 * XREFs of HalpTimerDetermineValidTimerPairReadLatency @ 0x1405479D0
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x140547C90 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14054C1E0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerDetermineValidTimerPairReadLatency(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 InternalData; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax

  v4 = -1;
  v5 = 25LL;
  do
  {
    v6 = __readcr2();
    __writecr2(v6);
    v7 = __rdtsc();
    v8 = __readcr2();
    __writecr2(v8);
    if ( a1 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      KeQueryPerformanceCounter(0LL);
    }
    else
    {
      InternalData = HalpTimerGetInternalData(a1);
      guard_dispatch_icall_no_overrides(InternalData, v10, v11, v12);
    }
    v13 = __readcr2();
    __writecr2(v13);
    if ( a2 == HalpPerformanceCounter && HalpTimerFrequenciesMeasured )
    {
      KeQueryPerformanceCounter(0LL);
    }
    else
    {
      v14 = HalpTimerGetInternalData(a2);
      guard_dispatch_icall_no_overrides(v14, v15, v16, v17);
    }
    v18 = __readcr2();
    __writecr2(v18);
    v19 = __rdtsc();
    v20 = __readcr2();
    __writecr2(v20);
    v21 = (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - v7;
    if ( v21 >= v4 )
      LODWORD(v21) = v4;
    v4 = v21;
    --v5;
  }
  while ( v5 );
  return (unsigned int)(4 * v21);
}
