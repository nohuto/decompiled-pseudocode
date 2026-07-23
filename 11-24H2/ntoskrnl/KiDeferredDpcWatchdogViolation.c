/*
 * XREFs of KiDeferredDpcWatchdogViolation @ 0x1406AC3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall __noreturn KiDeferredDpcWatchdogViolation(__int64 a1)
{
  KxDeferredDpcWatchdogViolation(*(_QWORD *)(a1 + 40));
}
