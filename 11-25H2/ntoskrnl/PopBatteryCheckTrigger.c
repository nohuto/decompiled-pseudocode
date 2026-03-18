/*
 * XREFs of PopBatteryCheckTrigger @ 0x140A5E3D8
 * Callers:
 *     PopRecalculateCBTriggerLevels @ 0x140A74B3C (PopRecalculateCBTriggerLevels.c)
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopBatteryCheckTriggerAllBatteries @ 0x140A5E410 (PopBatteryCheckTriggerAllBatteries.c)
 */

bool __fastcall PopBatteryCheckTrigger(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( qword_140F0AB14 )
    return (unsigned __int8)PopBatteryCheckTriggerAllBatteries(a1, 0LL) != 0;
  return v1;
}
