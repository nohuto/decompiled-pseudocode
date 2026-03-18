/*
 * XREFs of HalpTimerResetProfileAdjustment @ 0x140547640
 * Callers:
 *     HalCalibratePerformanceCounter @ 0x140537C90 (HalCalibratePerformanceCounter.c)
 *     HalpTimerNotifyProcessorFreeze @ 0x140538DD0 (HalpTimerNotifyProcessorFreeze.c)
 *     HalProcessorIdle @ 0x14069A870 (HalProcessorIdle.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
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
