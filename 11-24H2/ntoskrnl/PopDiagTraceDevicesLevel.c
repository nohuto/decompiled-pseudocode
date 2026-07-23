/*
 * XREFs of PopDiagTraceDevicesLevel @ 0x140B6736C
 * Callers:
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDevicesLevel(int a1, int a2, char a3, char a4)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  char *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  int v11; // [rsp+70h] [rbp+8h] BYREF
  char v12; // [rsp+80h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a1;
  if ( a2 )
  {
    v4 = (__int64 *)&POP_ETW_EVENT_DEVICESWAKELEVEL_END;
    v5 = POP_ETW_EVENT_DEVICESWAKELEVEL;
  }
  else
  {
    v4 = POP_ETW_EVENT_DEVICESSUSPENDLEVEL_END;
    v5 = POP_ETW_EVENT_DEVICESSUSPENDLEVEL;
  }
  if ( !a4 )
    v5 = v4;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, (PCEVENT_DESCRIPTOR)v5);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v11;
      UserData.Size = 4;
      v8 = &v12;
      v9 = 1;
      LOBYTE(v4) = EtwWrite(PopDiagHandle, (PCEVENT_DESCRIPTOR)v5, 0LL, 2u, &UserData);
    }
  }
  return (char)v4;
}
