/*
 * XREFs of HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x140538098
 * Callers:
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

_UNKNOWN **HalpTimerCaptureCloestAuxiliaryQpcPair()
{
  _UNKNOWN **result; // rax
  __int64 v1; // rdi
  unsigned int v2; // ebp
  unsigned __int64 v3; // rsi
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 InternalData; // rax
  __int64 v6; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v1 = 0LL;
  if ( HalpPerformanceCounter && HalpAuxiliaryCounter )
  {
    v2 = 0;
    v3 = -1LL;
    do
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      InternalData = HalpTimerGetInternalData(HalpAuxiliaryCounter);
      guard_dispatch_icall_no_overrides(InternalData, v6);
      result = (_UNKNOWN **)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart);
      if ( v3 <= (unsigned __int64)result )
        result = (_UNKNOWN **)v3;
      v3 = (unsigned __int64)result;
      if ( (unsigned __int64)result <= 1 )
        break;
      ++v2;
    }
    while ( v2 < 0xA );
    if ( !result )
      v3 = 1LL;
    v1 = 2 * v3;
  }
  HalpTimerClosestAuxiliaryQpcPair = v1;
  return result;
}
