/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x1406AA1F0
 * Callers:
 *     KiCustomAccessRoutine6 @ 0x1406AA210 (KiCustomAccessRoutine6.c)
 *     KiCustomRecurseRoutine5 @ 0x1406AA730 (KiCustomRecurseRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x1406AA370 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
