/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x1406AA070
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x1406AA090 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x1406AA5B0 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x1406AA130 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}
