/*
 * XREFs of PopDiagTraceSystemIdleAction @ 0x140A27B34
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x140A27A7C (PopExecuteSystemIdleAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSystemIdleAction(int a1, unsigned __int8 a2, int a3)
{
  int v3; // ebx
  int v4; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v6; // [rsp+48h] [rbp-28h]
  int v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+54h] [rbp-1Ch]
  int *v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+60h] [rbp-10h]
  int v11; // [rsp+64h] [rbp-Ch]
  int v12; // [rsp+80h] [rbp+10h] BYREF
  int v13; // [rsp+90h] [rbp+20h] BYREF

  v13 = a3;
  v12 = a1;
  v3 = a2;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SIDLE_UPDATE_NOTIFICATION_WORKER) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 4;
      v6 = &v13;
      v9 = &v12;
      v7 = 4;
      v10 = 4;
      v4 = v3;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SIDLE_UPDATE_NOTIFICATION_WORKER, 0LL, 3u, &UserData);
    }
  }
}
