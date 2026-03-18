/*
 * XREFs of KiInvokeDeferredDpcWatchdogViolation @ 0x1405C6420
 * Callers:
 *     KxDeferredDpcWatchdogViolation @ 0x1406AB440 (KxDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
