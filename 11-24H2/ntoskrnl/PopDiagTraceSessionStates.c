/*
 * XREFs of PopDiagTraceSessionStates @ 0x1409BA66C
 * Callers:
 *     PopSessionConnectedV2 @ 0x14075F844 (PopSessionConnectedV2.c)
 *     PopSessionDisconnected @ 0x1409BA5E8 (PopSessionDisconnected.c)
 *     PopSetSessionDisplayStatus @ 0x1409BA88C (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1409BC5C8 (PopSetSessionUserStatus.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopSessionConnected @ 0x140ACB088 (PopSessionConnected.c)
 *     PopSessionWinlogonNotification @ 0x140ACB1FC (PopSessionWinlogonNotification.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
