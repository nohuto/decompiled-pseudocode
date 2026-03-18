/*
 * XREFs of PopDiagTraceFxDevicePowerState @ 0x140358A38
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x140356360 (PopFxHandleReportDevicePoweredOn.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x140358230 (PopHandleDevicePowerIrpCompletion.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x140359640 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDevicePowerState(__int64 a1, char a2)
{
  BOOLEAN result; // al
  char v4; // [rsp+40h] [rbp-48h] BYREF
  __int64 v5; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  char *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  v5 = a1;
  result = PopFxAddLogEntry(a1, 0LL, 6LL);
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWER_STATE);
    if ( result )
    {
      UserData.Reserved = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      v4 = a2 - 1;
      v7 = &v4;
      UserData.Size = 8;
      v8 = 1;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWER_STATE, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
