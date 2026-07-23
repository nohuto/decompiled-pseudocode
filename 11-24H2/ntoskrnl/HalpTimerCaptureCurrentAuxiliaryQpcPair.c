/*
 * XREFs of HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x14047E064
 * Callers:
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x14047DEF0 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x140538150 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

LARGE_INTEGER __fastcall HalpTimerCaptureCurrentAuxiliaryQpcPair(LARGE_INTEGER *a1, __int64 *a2, LARGE_INTEGER *a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER v5; // r15
  unsigned int v6; // ebp
  LARGE_INTEGER v7; // rbx
  LARGE_INTEGER PerformanceCounter; // rsi
  __int64 InternalData; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  LARGE_INTEGER result; // rax

  v3 = 0LL;
  v5.QuadPart = 0LL;
  v6 = 0;
  v7.QuadPart = -1LL;
  while ( v6 < 0xA )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    InternalData = HalpTimerGetInternalData(HalpAuxiliaryCounter);
    v12 = guard_dispatch_icall_no_overrides(InternalData, v11);
    result = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart);
    if ( result.QuadPart <= (unsigned __int64)HalpTimerClosestAuxiliaryQpcPair )
      goto LABEL_4;
    if ( v7.QuadPart > (unsigned __int64)result.QuadPart )
    {
      v3 = v12;
      v5 = PerformanceCounter;
    }
    ++v6;
    if ( v7.QuadPart <= (unsigned __int64)result.QuadPart )
      result = v7;
    v7 = result;
  }
  result = v7;
  v12 = v3;
  PerformanceCounter = v5;
LABEL_4:
  *a1 = PerformanceCounter;
  *a2 = v12;
  *a3 = result;
  return result;
}
