/*
 * XREFs of HalpTimerResetProfileAdjustment @ 0x1405477F0
 * Callers:
 *     HalCalibratePerformanceCounter @ 0x140537C80 (HalCalibratePerformanceCounter.c)
 *     HalpTimerNotifyProcessorFreeze @ 0x140538DC0 (HalpTimerNotifyProcessorFreeze.c)
 *     HalProcessorIdle @ 0x1406A6AA0 (HalProcessorIdle.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
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
