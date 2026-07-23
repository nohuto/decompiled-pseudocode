/*
 * XREFs of KiCustomRecurseRoutine3 @ 0x1406B6520
 * Callers:
 *     KiCustomRecurseRoutine2 @ 0x1406B63A0 (KiCustomRecurseRoutine2.c)
 *     KiCustomAccessRoutine3 @ 0x1406B6540 (KiCustomAccessRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine4 @ 0x1406B68E0 (KiCustomRecurseRoutine4.c)
 */

__int64 __fastcall KiCustomRecurseRoutine3(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine4();
  return *a2;
}
