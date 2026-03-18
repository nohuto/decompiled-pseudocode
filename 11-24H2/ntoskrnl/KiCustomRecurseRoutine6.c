/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x1406B54C0
 * Callers:
 *     KiCustomAccessRoutine6 @ 0x1406B54E0 (KiCustomAccessRoutine6.c)
 *     KiCustomRecurseRoutine5 @ 0x1406B5A00 (KiCustomRecurseRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x1406B5640 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
