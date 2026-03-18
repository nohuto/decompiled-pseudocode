/*
 * XREFs of HalProcessorIdle @ 0x1406A5AA0
 * Callers:
 *     PoIdle @ 0x140449020 (PoIdle.c)
 *     PpmIdleDefaultExecute @ 0x1404EA4C0 (PpmIdleDefaultExecute.c)
 *     PpmIdleGuestExecute @ 0x1404EE5C0 (PpmIdleGuestExecute.c)
 *     KiWaitForSignal @ 0x1405BA5B0 (KiWaitForSignal.c)
 *     KiExecuteSmtIsolationThread @ 0x1405C2BD0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x140549F30 (HalpTimerResetProfileAdjustment.c)
 */

void __noreturn HalProcessorIdle()
{
  HalpTimerResetProfileAdjustment();
  _enable();
  __halt();
}
