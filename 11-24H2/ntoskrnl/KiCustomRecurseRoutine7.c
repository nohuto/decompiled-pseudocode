/*
 * XREFs of KiCustomRecurseRoutine7 @ 0x1406B65E0
 * Callers:
 *     KiCustomRecurseRoutine6 @ 0x1406B6460 (KiCustomRecurseRoutine6.c)
 *     KiCustomAccessRoutine7 @ 0x1406B6600 (KiCustomAccessRoutine7.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x1406B66A0 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomRecurseRoutine7(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine8();
  return *a2;
}
