/*
 * XREFs of HalCalibratePerformanceCounter @ 0x140537C80
 * Callers:
 *     HalpTscFallback @ 0x140546DD0 (HalpTscFallback.c)
 *     KiCalibrateTimeAdjustment @ 0x140B6BCD0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140314930 (HalpTimerScaleCounter.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403BC024 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpSetVirtualRtc @ 0x140419DE0 (HalpSetVirtualRtc.c)
 *     HalpTimerResetProfileAdjustment @ 0x1405477F0 (HalpTimerResetProfileAdjustment.c)
 *     HalpQueryVirtualRtc @ 0x140548660 (HalpQueryVirtualRtc.c)
 */

__int64 __fastcall HalCalibratePerformanceCounter(volatile signed __int32 *a1, unsigned __int64 a2)
{
  unsigned int Number; // r11d
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rdx
  char v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // r11
  __int64 result; // rax
  char v12; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER v13; // [rsp+50h] [rbp+18h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v3 = a2;
  v4 = HalpPerformanceCounter;
  v13.QuadPart = 0LL;
  v12 = 0;
  v6 = (__int64 *)(HalpPerformanceCounter + 192);
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    v3 = HalpTimerScaleCounter(a2, 0x989680uLL, *v6);
  if ( v4 != HalpOriginalPerformanceCounter )
  {
    v7 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v7 = 10000000LL;
    v3 = HalpTimerScaleCounter(v3, v7, *v6);
  }
  if ( !Number )
  {
    v8 = HalpQueryVirtualRtc(&v13, &v12);
    HalpTimerCalibratePerformanceCounter(v4, v3);
    if ( HalpAlwaysOnCounter )
    {
      v9 = HalpTimerScaleCounter(v3, *v6, *(_QWORD *)(HalpAlwaysOnCounter + 192));
      HalpTimerCalibratePerformanceCounter(v10, v9);
    }
    if ( v8 && v12 )
      HalpSetVirtualRtc(&v13);
  }
  HalpTimerResetProfileAdjustment();
  _InterlockedDecrement(a1);
  do
  {
    _mm_pause();
    result = *(unsigned int *)a1;
  }
  while ( (int)result > 0 );
  return result;
}
