/*
 * XREFs of PnpPowerStateTransitionWatchdogCallback @ 0x1405A5430
 * Callers:
 *     <none>
 * Callees:
 *     PnpBugcheckPowerTimeout @ 0x1405A59E4 (PnpBugcheckPowerTimeout.c)
 */

void __fastcall __noreturn PnpPowerStateTransitionWatchdogCallback(ULONG_PTR a1)
{
  PnpBugcheckPowerTimeout(a1);
}
