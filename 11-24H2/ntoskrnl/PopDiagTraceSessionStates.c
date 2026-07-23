/*
 * XREFs of PopDiagTraceSessionStates @ 0x1409A0CBC
 * Callers:
 *     PopSessionConnectedV2 @ 0x14075E7E4 (PopSessionConnectedV2.c)
 *     PopSessionDisconnected @ 0x1409A0C38 (PopSessionDisconnected.c)
 *     PopSetSessionDisplayStatus @ 0x1409A0EDC (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1409A2C18 (PopSetSessionUserStatus.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopSessionConnected @ 0x140AC8C44 (PopSessionConnected.c)
 *     PopSessionWinlogonNotification @ 0x140AC8DB8 (PopSessionWinlogonNotification.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSessionStates(PCEVENT_DESCRIPTOR EventDescriptor, int a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  int v8; // [rsp+78h] [rbp+10h] BYREF
  int v9; // [rsp+80h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
    {
      UserData.Reserved = 0;
      v7 = 0;
      UserData.Ptr = (ULONGLONG)&v8;
      UserData.Size = 4;
      v5 = &v9;
      v6 = 4;
      EtwWrite(PopDiagHandle, EventDescriptor, 0LL, 2u, &UserData);
    }
  }
}
