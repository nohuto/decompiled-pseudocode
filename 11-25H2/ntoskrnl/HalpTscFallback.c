/*
 * XREFs of HalpTscFallback @ 0x140546C20
 * Callers:
 *     <none>
 * Callees:
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     RtlSetSystemGlobalData @ 0x140311A40 (RtlSetSystemGlobalData.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalCalibratePerformanceCounter @ 0x140537C90 (HalCalibratePerformanceCounter.c)
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x140544A40 (HalpTimerCalculateMaximumAllowableDrift.c)
 */

__int64 __fastcall HalpTscFallback(ULONG_PTR Argument)
{
  bool v2; // di
  __int64 result; // rax
  signed __int32 v4[8]; // [rsp+0h] [rbp-38h] BYREF
  char Buffer; // [rsp+48h] [rbp+10h] BYREF

  Buffer = 0;
  v2 = HalpDisableInterrupts();
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument, 0xFFFFFFFF) == 1 )
  {
    *(LARGE_INTEGER *)(Argument + 8) = KeQueryPerformanceCounter(0LL);
    if ( !HalpFallbackPerformanceCounter )
      KeBugCheckEx(
        0x5Cu,
        0x1000uLL,
        HalpPerformanceCounter,
        (ULONG_PTR)&HalpRegisteredTimers,
        (unsigned int)HalpRegisteredTimerCount);
    HalpPerformanceCounter = HalpFallbackPerformanceCounter;
    if ( HalpAlwaysOnCounter )
      HalpTimerMaximumAllowableDrift = HalpTimerCalculateMaximumAllowableDrift();
    RtlSetSystemGlobalData(GlobalDataIdQpcShift, &Buffer, 1u);
    _InterlockedDecrement((volatile signed __int32 *)Argument);
  }
  else
  {
    do
      _mm_pause();
    while ( *(_DWORD *)Argument != -1 );
    _InterlockedOr(v4, 0);
  }
  result = HalCalibratePerformanceCounter((volatile signed __int32 *)(Argument + 4), *(_QWORD *)(Argument + 8));
  if ( v2 )
    _enable();
  return result;
}
