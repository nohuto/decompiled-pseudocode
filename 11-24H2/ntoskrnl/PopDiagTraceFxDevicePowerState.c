/*
 * XREFs of PopDiagTraceFxDevicePowerState @ 0x140483350
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403A65A0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x140497CE0 (PopFxHandleReportDevicePoweredOn.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDevicePowerState(__int64 a1, int a2)
{
  char v2; // bl
  BOOLEAN result; // al
  char v4; // [rsp+40h] [rbp-48h] BYREF
  __int64 v5; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  char *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  v2 = a2;
  v5 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, 0, 6, a2);
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWER_STATE);
    if ( result )
    {
      UserData.Reserved = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      v4 = v2 - 1;
      v7 = &v4;
      UserData.Size = 8;
      v8 = 1;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWER_STATE, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
