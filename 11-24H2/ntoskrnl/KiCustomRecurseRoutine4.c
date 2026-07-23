/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x1406B68E0
 * Callers:
 *     KiCustomRecurseRoutine3 @ 0x1406B6520 (KiCustomRecurseRoutine3.c)
 *     KiCustomAccessRoutine4 @ 0x1406B6900 (KiCustomAccessRoutine4.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x1406B69A0 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine5();
  return *a2;
}
