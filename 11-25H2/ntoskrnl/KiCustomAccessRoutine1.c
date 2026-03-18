/*
 * XREFs of KiCustomAccessRoutine1 @ 0x1406AA090
 * Callers:
 *     IopTimerDispatch @ 0x1404963F0 (IopTimerDispatch.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x1406AA070 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomAccessRoutine1(unsigned int *a1)
{
  return KiCustomRecurseRoutine1(((unsigned __int8)a1 & 3u) + 1, a1);
}
