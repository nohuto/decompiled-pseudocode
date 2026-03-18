/*
 * XREFs of PopBatteryAlarmPowerSettingCallback @ 0x14074CE30
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryUpdateAlarms @ 0x1409B7D30 (PopBatteryUpdateAlarms.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopBatteryAlarmPowerSettingCallback(
        LPCGUID SettingGuid,
        PVOID Value,
        ULONG ValueLength,
        PVOID Context)
{
  unsigned int v4; // ebx
  unsigned int updated; // ebx

  v4 = (unsigned int)Context;
  PopAcquirePolicyLock(SettingGuid, Value);
  updated = PopBatteryUpdateAlarms(0LL, v4);
  PopReleasePolicyLock();
  return updated;
}
