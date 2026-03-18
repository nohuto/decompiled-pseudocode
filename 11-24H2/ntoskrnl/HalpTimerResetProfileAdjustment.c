/*
 * XREFs of HalpTimerResetProfileAdjustment @ 0x140549F30
 * Callers:
 *     HalCalibratePerformanceCounter @ 0x14053A440 (HalCalibratePerformanceCounter.c)
 *     HalpTimerNotifyProcessorFreeze @ 0x14053B580 (HalpTimerNotifyProcessorFreeze.c)
 *     HalProcessorIdle @ 0x1406A5AA0 (HalProcessorIdle.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 */

bool HalpTimerResetProfileAdjustment()
{
  bool result; // al

  result = HalpDisableInterrupts();
  if ( HalpProfileData )
    *(_DWORD *)(296LL * KeGetPcr()->Prcb.Number + HalpProfileData + 20) = 0;
  if ( result )
    _enable();
  return result;
}
