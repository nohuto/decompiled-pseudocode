/*
 * XREFs of HalProcessorIdle @ 0x14069A870
 * Callers:
 *     PoIdle @ 0x14044B7A0 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x1404E9280 (PpmIdleDefaultExecute.c)
 *     PpmIdleGuestExecute @ 0x1404EB660 (PpmIdleGuestExecute.c)
 *     KiWaitForSignal @ 0x1405B678C (KiWaitForSignal.c)
 *     KiExecuteSmtIsolationThread @ 0x1405BEAF0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x140547640 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
