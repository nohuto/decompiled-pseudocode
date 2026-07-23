/*
 * XREFs of KxDeferredDpcWatchdogViolation @ 0x1406AC3E0
 * Callers:
 *     KiDeferredDpcWatchdogViolation @ 0x1406AC3C0 (KiDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KiInvokeDeferredDpcWatchdogViolation @ 0x1405C3B50 (KiInvokeDeferredDpcWatchdogViolation.c)
 */

void __noreturn KxDeferredDpcWatchdogViolation()
{
  KiInvokeDeferredDpcWatchdogViolation();
}
