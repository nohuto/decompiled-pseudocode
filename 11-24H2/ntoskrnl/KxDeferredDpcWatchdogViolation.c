/*
 * XREFs of KxDeferredDpcWatchdogViolation @ 0x1406AB440
 * Callers:
 *     KiDeferredDpcWatchdogViolation @ 0x1406AB420 (KiDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KiInvokeDeferredDpcWatchdogViolation @ 0x1405C6420 (KiInvokeDeferredDpcWatchdogViolation.c)
 */

void __noreturn KxDeferredDpcWatchdogViolation()
{
  KiInvokeDeferredDpcWatchdogViolation();
}
