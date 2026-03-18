/*
 * XREFs of KiCustomAccessRoutine1 @ 0x1406B5360
 * Callers:
 *     IopTimerDispatch @ 0x140495850 (IopTimerDispatch.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x1406B5340 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomAccessRoutine1(unsigned int *a1)
{
  return KiCustomRecurseRoutine1(((unsigned __int8)a1 & 3u) + 1, a1);
}
