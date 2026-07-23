/*
 * XREFs of KiCustomRecurseRoutine8 @ 0x1406B66A0
 * Callers:
 *     KiCustomRecurseRoutine7 @ 0x1406B65E0 (KiCustomRecurseRoutine7.c)
 *     KiCustomAccessRoutine8 @ 0x1406B66C0 (KiCustomAccessRoutine8.c)
 * Callees:
 *     KiCustomRecurseRoutine9 @ 0x1406B6760 (KiCustomRecurseRoutine9.c)
 */

__int64 __fastcall KiCustomRecurseRoutine8(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine9();
  return *a2;
}
