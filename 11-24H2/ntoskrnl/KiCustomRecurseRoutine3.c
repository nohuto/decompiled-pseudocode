/*
 * XREFs of KiCustomRecurseRoutine3 @ 0x1406B5580
 * Callers:
 *     KiCustomRecurseRoutine2 @ 0x1406B5400 (KiCustomRecurseRoutine2.c)
 *     KiCustomAccessRoutine3 @ 0x1406B55A0 (KiCustomAccessRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x1406B5940 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomRecurseRoutine3(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine4();
  return *a2;
}
