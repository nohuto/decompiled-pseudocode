/*
 * XREFs of KiCustomAccessRoutine3 @ 0x1406B55A0
 * Callers:
 *     PopThermalZoneDpc @ 0x1405D40A0 (PopThermalZoneDpc.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x1406B5580 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomAccessRoutine3(unsigned int *a1)
{
  return KiCustomRecurseRoutine3(((unsigned __int8)a1 & 3u) + 1, a1);
}
