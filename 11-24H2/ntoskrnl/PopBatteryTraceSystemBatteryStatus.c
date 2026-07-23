/*
 * XREFs of PopBatteryTraceSystemBatteryStatus @ 0x14049319C
 * Callers:
 *     PopBatteryEtwCallback @ 0x140759470 (PopBatteryEtwCallback.c)
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopBatteryTraceSystemBatteryStatus(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+40h] [rbp+7h] BYREF
  int v6; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  char *v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]

  v1 = &BATTERY_EVT_SYSTEM_BATTERY_STATUS_RUNDOWN_V0;
  v2 = &IoTrace_UserInitiatedIo;
  if ( a1 )
    v2 = &BATTERY_EVT_SYSTEM_BATTERY_STATUS_RUNDOWN_V0;
  if ( PopBatteryEtwRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopBatteryEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      if ( BYTE1(xmmword_140F0BEA0) )
      {
        v5 = xmmword_140F0BCC0;
        v3 = 1;
      }
      else
      {
        v5 = 0LL;
        v3 = 0;
      }
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v6 = v3;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v6;
      v8 = &v5;
      v11 = (char *)&v5 + 4;
      v9 = 4;
      v12 = 4;
      LOBYTE(v1) = EtwWriteEx(PopBatteryEtwHandle, v2, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v1;
}
