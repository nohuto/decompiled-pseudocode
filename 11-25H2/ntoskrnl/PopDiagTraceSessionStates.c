/*
 * XREFs of PopDiagTraceSessionStates @ 0x14096526C
 * Callers:
 *     PopSetSessionUserStatus @ 0x140964818 (PopSetSessionUserStatus.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopSessionWinlogonNotification @ 0x140A22590 (PopSessionWinlogonNotification.c)
 *     PopSessionConnected @ 0x140A227C8 (PopSessionConnected.c)
 *     PopSessionDisconnected @ 0x140A22878 (PopSessionDisconnected.c)
 *     PopSetSessionDisplayStatus @ 0x140A229B4 (PopSetSessionDisplayStatus.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
