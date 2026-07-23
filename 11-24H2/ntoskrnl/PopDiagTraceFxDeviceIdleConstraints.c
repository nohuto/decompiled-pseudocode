/*
 * XREFs of PopDiagTraceFxDeviceIdleConstraints @ 0x1405D2810
 * Callers:
 *     PopPluginRequestDeviceIdleConstraints @ 0x1404C1EE0 (PopPluginRequestDeviceIdleConstraints.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceIdleConstraints(__int64 a1, __int64 a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v5; // [rsp+50h] [rbp-30h]
  int v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+5Ch] [rbp-24h]
  __int64 v8; // [rsp+60h] [rbp-20h]
  int v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+6Ch] [rbp-14h]
  __int64 v11; // [rsp+90h] [rbp+10h] BYREF
  int v12; // [rsp+A0h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CONSTRAINTS) )
    {
      UserData.Reserved = 0;
      v7 = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v11;
      v5 = &v12;
      v9 = 4 * v12;
      UserData.Size = 8;
      v6 = 4;
      v8 = a2;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CONSTRAINTS, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
