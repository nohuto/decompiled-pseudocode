/*
 * XREFs of KiCustomAccessRoutine4 @ 0x1406B6900
 * Callers:
 *     CmpEnableLazyFlushDpcRoutine @ 0x140666670 (CmpEnableLazyFlushDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x1406B68E0 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomAccessRoutine4(unsigned int *a1)
{
  return KiCustomRecurseRoutine4(((unsigned __int8)a1 & 3u) + 1, a1);
}
