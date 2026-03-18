/*
 * XREFs of KiCustomRecurseRoutine9 @ 0x1406AA4F0
 * Callers:
 *     KiCustomRecurseRoutine8 @ 0x1406AA430 (KiCustomRecurseRoutine8.c)
 *     KiCustomAccessRoutine9 @ 0x1406AA510 (KiCustomAccessRoutine9.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1406AA5B0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomRecurseRoutine9(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine0();
  return *a2;
}
