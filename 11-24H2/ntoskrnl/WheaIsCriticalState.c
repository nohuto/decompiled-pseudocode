/*
 * XREFs of WheaIsCriticalState @ 0x140478110
 * Callers:
 *     WheaReportHwError @ 0x14042E300 (WheaReportHwError.c)
 *     WheapGenerateETWEvents @ 0x1404780BC (WheapGenerateETWEvents.c)
 *     WheaLogInternalEvent @ 0x14065E070 (WheaLogInternalEvent.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 */

bool WheaIsCriticalState()
{
  return KeGetEffectiveIrql() >= 2u && WheapCriticalStateRefCount > 0;
}
