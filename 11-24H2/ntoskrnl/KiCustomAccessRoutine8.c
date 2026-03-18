/*
 * XREFs of KiCustomAccessRoutine8 @ 0x1406B5720
 * Callers:
 *     ExpTimeZoneDpcRoutine @ 0x140653740 (ExpTimeZoneDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x1406B5700 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomAccessRoutine8(unsigned int *a1)
{
  return KiCustomRecurseRoutine8(((unsigned __int8)a1 & 3u) + 1, a1);
}
