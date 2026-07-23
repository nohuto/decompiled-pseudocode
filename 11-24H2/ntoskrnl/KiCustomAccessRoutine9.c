/*
 * XREFs of KiCustomAccessRoutine9 @ 0x1406B6780
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x1403C16E0 (ExpCenturyDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x1406B6760 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomAccessRoutine9(unsigned int *a1)
{
  return KiCustomRecurseRoutine9(((unsigned __int8)a1 & 3u) + 1, a1);
}
