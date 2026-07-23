/*
 * XREFs of PopIrpWatchdog @ 0x1405CA830
 * Callers:
 *     <none>
 * Callees:
 *     PopIrpWatchdogBugcheck @ 0x1405CA848 (PopIrpWatchdogBugcheck.c)
 */

__int64 __fastcall PopIrpWatchdog(__int64 a1, ULONG a2)
{
  return PopIrpWatchdogBugcheck(a2);
}
