/*
 * XREFs of HalProcessorIdle @ 0x1406A6AA0
 * Callers:
 *     PoIdle @ 0x140441770 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x1404E1440 (PpmIdleDefaultExecute.c)
 *     PpmIdleGuestExecute @ 0x1404E5D50 (PpmIdleGuestExecute.c)
 *     KiWaitForSignal @ 0x1405B7BE0 (KiWaitForSignal.c)
 *     KiExecuteSmtIsolationThread @ 0x1405C01A0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x1405477F0 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
