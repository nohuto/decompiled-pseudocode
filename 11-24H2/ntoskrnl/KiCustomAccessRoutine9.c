/*
 * XREFs of KiCustomAccessRoutine9 @ 0x1406B57E0
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x14034A450 (ExpCenturyDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x1406B57C0 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomAccessRoutine9(unsigned int *a1)
{
  return KiCustomRecurseRoutine9(((unsigned __int8)a1 & 3u) + 1, a1);
}
