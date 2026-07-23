/*
 * XREFs of PopChangeCapability @ 0x140A61C60
 * Callers:
 *     PopThermalZoneAdd @ 0x140752BE0 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x140752D30 (PopThermalZoneRemove.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140758E64 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryAdd @ 0x140759340 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x140759700 (PopBatteryRemove.c)
 *     PdcPoReportButton @ 0x14075C1A0 (PdcPoReportButton.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x140A61C7C (PopResetCurrentPolicies.c)
 */

__int64 __fastcall PopChangeCapability(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 != (_BYTE)a2 )
  {
    *a1 = a2;
    return PopResetCurrentPolicies(a1, a2);
  }
  return result;
}
