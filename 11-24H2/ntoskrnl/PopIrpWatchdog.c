/*
 * XREFs of PopIrpWatchdog @ 0x1405CD0C0
 * Callers:
 *     <none>
 * Callees:
 *     PopIrpWatchdogBugcheck @ 0x1405CD0D8 (PopIrpWatchdogBugcheck.c)
 */

__int64 __fastcall PopIrpWatchdog(__int64 a1, ULONG a2)
{
  return PopIrpWatchdogBugcheck(a2);
}
