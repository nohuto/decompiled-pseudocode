/*
 * XREFs of WheaIsCriticalState @ 0x140474710
 * Callers:
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     WheapGenerateETWEvents @ 0x1404746BC (WheapGenerateETWEvents.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 */

bool __fastcall WheaIsCriticalState(__int64 a1, __int64 a2)
{
  return KeGetEffectiveIrql(a1, a2) >= 2u && WheapCriticalStateRefCount > 0;
}
