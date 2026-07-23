/*
 * XREFs of PopDiagTracePowerStateEvent @ 0x1409A262C
 * Callers:
 *     PopTriggerMonitorPowerEvent @ 0x1409A24CC (PopTriggerMonitorPowerEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerStateEvent(int a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v3; // [rsp+40h] [rbp-28h]
  int v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+4Ch] [rbp-1Ch]
  int v6; // [rsp+70h] [rbp+8h] BYREF
  int v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE) )
    {
      UserData.Reserved = 0;
      v5 = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      UserData.Size = 4;
      v3 = &v7;
      v4 = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_STATE, 0LL, 2u, &UserData);
    }
  }
}
