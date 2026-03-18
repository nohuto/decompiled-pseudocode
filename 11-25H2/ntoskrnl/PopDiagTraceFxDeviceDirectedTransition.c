/*
 * XREFs of PopDiagTraceFxDeviceDirectedTransition @ 0x14044FEE0
 * Callers:
 *     PopFxHandleDirectedPowerTransition @ 0x14044FCFC (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x140359640 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDeviceDirectedTransition(__int64 a1, unsigned __int8 a2)
{
  int v2; // ebx
  BOOLEAN result; // al
  int v4; // [rsp+40h] [rbp-48h] BYREF
  __int64 v5; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  v2 = a2;
  v5 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, 0, 25, a2);
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_START);
    if ( result )
    {
      UserData.Reserved = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      v4 = v2;
      v7 = &v4;
      UserData.Size = 8;
      v8 = 4;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_START, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
