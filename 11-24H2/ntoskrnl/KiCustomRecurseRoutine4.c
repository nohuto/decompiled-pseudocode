/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x1406B5940
 * Callers:
 *     KiCustomRecurseRoutine3 @ 0x1406B5580 (KiCustomRecurseRoutine3.c)
 *     KiCustomAccessRoutine4 @ 0x1406B5960 (KiCustomAccessRoutine4.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x1406B5A00 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine5();
  return *a2;
}
