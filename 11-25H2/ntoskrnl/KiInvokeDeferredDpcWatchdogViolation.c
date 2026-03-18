/*
 * XREFs of KiInvokeDeferredDpcWatchdogViolation @ 0x1405C2080
 * Callers:
 *     KxDeferredDpcWatchdogViolation @ 0x1406A0170 (KxDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __noreturn KiInvokeDeferredDpcWatchdogViolation()
{
  KeBugCheckEx(
    0x133u,
    0LL,
    (unsigned int)KiSavedDpcTimeCount,
    (unsigned int)KiSavedDpcTimeLimitTicks,
    (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
}
