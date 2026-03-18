/*
 * XREFs of PopChangeCapability @ 0x140A65B60
 * Callers:
 *     PopThermalZoneAdd @ 0x1407487F0 (PopThermalZoneAdd.c)
 *     PopThermalZoneRemove @ 0x140748940 (PopThermalZoneRemove.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x14074E1A4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopBatteryAdd @ 0x14074E680 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x14074E7B0 (PopBatteryRemove.c)
 *     PdcPoReportButton @ 0x140750920 (PdcPoReportButton.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x140A65B7C (PopResetCurrentPolicies.c)
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
