/*
 * XREFs of HalpTimerMeasureProcessorsWorker @ 0x140549AA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HalpFindTimer @ 0x140544A60 (HalpFindTimer.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x140545290 (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1405460B8 (HalpTimerReadTimerPairWithLatencyLimit.c)
 */

ULONG_PTR __fastcall HalpTimerMeasureProcessorsWorker(ULONG_PTR Argument)
{
  int v2; // ebx
  bool v3; // r14
  ULONG ActiveProcessorCount; // eax
  KPCR *Pcr; // r15
  ULONG v6; // esi
  ULONG_PTR *Timer; // rbx
  unsigned __int64 v8; // rcx
  unsigned int Latency; // esi
  unsigned __int64 v10; // rax
  __int64 v11; // r11
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-10h] BYREF
  LARGE_INTEGER v16; // [rsp+80h] [rbp+40h] BYREF
  LARGE_INTEGER v17; // [rsp+88h] [rbp+48h] BYREF
  LARGE_INTEGER v18; // [rsp+90h] [rbp+50h] BYREF
  LARGE_INTEGER v19; // [rsp+98h] [rbp+58h] BYREF

  v16.QuadPart = 0LL;
  v18.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v17.QuadPart = 0LL;
  v19.QuadPart = 0LL;
  v2 = *(_DWORD *)(Argument + 16);
  v3 = HalpDisableInterrupts();
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  Pcr = KeGetPcr();
  v6 = ActiveProcessorCount;
  Timer = HalpFindTimer(v2, 0, 0, 0, 1);
  v8 = __readcr2();
  __writecr2(v8);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument, 0xFFFFFFFF) != 1 )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)Argument );
  }
  if ( KeGetCurrentPrcb()->Number )
  {
    while ( *(_DWORD *)(Argument + 4) != KeGetCurrentPrcb()->Number )
      _mm_pause();
    KeQueryPerformanceCounter(&PerformanceFrequency);
    Latency = HalpTimerDetermineValidTimerPairReadLatency((__int64)Timer, HalpPerformanceCounter);
    HalpTimerReadTimerPairWithLatencyLimit(Latency, (__int64)Timer, HalpPerformanceCounter, &v17, &v19);
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 4));
    while ( *(_DWORD *)(Argument + 8) != KeGetCurrentPrcb()->Number )
      _mm_pause();
    HalpTimerReadTimerPairWithLatencyLimit(Latency, (__int64)Timer, HalpPerformanceCounter, &v16, &v18);
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 8));
    do
      _mm_pause();
    while ( !*(_DWORD *)(Argument + 12) );
    v10 = HalpTimerScaleCounter(v18.QuadPart - v19.QuadPart, PerformanceFrequency.QuadPart, 1000000LL);
    v12 = 1000000 * v11 / v10;
    *(_QWORD *)Pcr->HalReserved = 10000 * ((v12 + 5000) / 0x2710);
    v13 = 1000000 * ((v12 + 500000) / 0xF4240);
    Pcr->StallScaleFactor = v13 / 0xF4240;
    KeGetCurrentPrcb()->MHz = v13 / 0xF4240;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 4));
    do
      _mm_pause();
    while ( *(_DWORD *)(Argument + 4) != v6 );
    KeStallExecutionProcessor(0x1E848u);
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 8));
    do
      _mm_pause();
    while ( *(_DWORD *)(Argument + 8) != v6 );
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 12));
  }
  if ( v3 )
    _enable();
  return 0LL;
}
