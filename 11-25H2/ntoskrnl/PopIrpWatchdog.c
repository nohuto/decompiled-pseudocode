/*
 * XREFs of PopIrpWatchdog @ 0x1405C8BB0
 * Callers:
 *     <none>
 * Callees:
 *     PopIrpWatchdogBugcheck @ 0x1405C8BC8 (PopIrpWatchdogBugcheck.c)
 */

__int64 __fastcall PopIrpWatchdog(__int64 a1, ULONG a2)
{
  return PopIrpWatchdogBugcheck(a2);
}
