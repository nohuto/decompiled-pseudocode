/*
 * XREFs of KiCustomAccessRoutine8 @ 0x1406AA450
 * Callers:
 *     ExpTimeZoneDpcRoutine @ 0x140647840 (ExpTimeZoneDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x1406AA430 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomAccessRoutine8(unsigned int *a1)
{
  return KiCustomRecurseRoutine8(((unsigned __int8)a1 & 3u) + 1, a1);
}
