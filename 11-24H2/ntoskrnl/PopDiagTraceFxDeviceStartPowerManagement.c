/*
 * XREFs of PopDiagTraceFxDeviceStartPowerManagement @ 0x1407547C0
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x1404A5D50 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDeviceStartPowerManagement(__int64 a1)
{
  BOOLEAN result; // al
  char v2; // r9
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  v3 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, 0, 3, 0LL);
  if ( PopDiagHandleRegistered != v2 )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_START_POWER_MANAGEMENT);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 8;
      return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_START_POWER_MANAGEMENT, 0LL, 1u, &UserData);
    }
  }
  return result;
}
