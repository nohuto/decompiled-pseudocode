/*
 * XREFs of KxDeferredDpcWatchdogViolation @ 0x1406A0170
 * Callers:
 *     KiDeferredDpcWatchdogViolation @ 0x1406A0150 (KiDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KiInvokeDeferredDpcWatchdogViolation @ 0x1405C2080 (KiInvokeDeferredDpcWatchdogViolation.c)
 */

void __noreturn KxDeferredDpcWatchdogViolation()
{
  KiInvokeDeferredDpcWatchdogViolation();
}
