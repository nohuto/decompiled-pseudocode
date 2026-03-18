/*
 * XREFs of PopChangeCapability @ 0x140A688B0
 * Callers:
 *     PopThermalZoneAdd @ 0x1407548C0 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x140754A10 (PopThermalZoneRemove.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x14075A774 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryAdd @ 0x14075AC50 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x14075B010 (PopBatteryRemove.c)
 *     PdcPoReportButton @ 0x14075D200 (PdcPoReportButton.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x140A688CC (PopResetCurrentPolicies.c)
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
