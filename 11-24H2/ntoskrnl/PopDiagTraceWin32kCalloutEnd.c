/*
 * XREFs of PopDiagTraceWin32kCalloutEnd @ 0x1409A4B78
 * Callers:
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceWin32kCalloutEnd(int a1, __int64 a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // ecx
  const EVENT_DESCRIPTOR *v6; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  int *v8; // [rsp+40h] [rbp-30h]
  int v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+4Ch] [rbp-24h]
  int *v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]
  __int64 v14; // [rsp+88h] [rbp+18h] BYREF
  int v15; // [rsp+90h] [rbp+20h] BYREF
  int v16; // [rsp+98h] [rbp+28h] BYREF

  if ( a2 )
  {
    v16 = a4;
    v15 = a3;
    v14 = a2;
    v4 = a1 - 3;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
          return;
        v6 = &POP_ETW_EVENT_WIN32_INFO_CALLOUT_END;
      }
      else
      {
        v6 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_WIN32_STATE_CALLOUT_END;
      }
    }
    else
    {
      v6 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_WIN32_EVENT_CALLOUT_END;
    }
    if ( PopDiagHandleRegistered )
    {
      if ( EtwEventEnabled(PopDiagHandle, v6) )
      {
        UserData.Reserved = 0;
        v10 = 0;
        v13 = 0;
        UserData.Ptr = (ULONGLONG)&v14;
        v9 = 4;
        v8 = &v15;
        v12 = 4;
        v11 = &v16;
        UserData.Size = 8;
        EtwWrite(PopDiagHandle, v6, 0LL, 3u, &UserData);
      }
    }
  }
}
