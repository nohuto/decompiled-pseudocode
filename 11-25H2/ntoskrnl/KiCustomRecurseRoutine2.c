/*
 * XREFs of KiCustomRecurseRoutine2 @ 0x1406AA130
 * Callers:
 *     KiCustomRecurseRoutine1 @ 0x1406AA070 (KiCustomRecurseRoutine1.c)
 *     KiCustomAccessRoutine2 @ 0x1406AA150 (KiCustomAccessRoutine2.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x1406AA2B0 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomRecurseRoutine2(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine3();
  return *a2;
}
