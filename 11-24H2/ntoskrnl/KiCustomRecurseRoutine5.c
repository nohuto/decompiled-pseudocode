/*
 * XREFs of KiCustomRecurseRoutine5 @ 0x1406B69A0
 * Callers:
 *     KiCustomRecurseRoutine4 @ 0x1406B68E0 (KiCustomRecurseRoutine4.c)
 *     KiCustomAccessRoutine5 @ 0x1406B69C0 (KiCustomAccessRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x1406B6460 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomRecurseRoutine5(int a1, unsigned int *a2)
{
  int v2; // ecx

  v2 = a1 - 1;
  if ( v2 )
    KiCustomRecurseRoutine6(v2, a2);
  return *a2;
}
