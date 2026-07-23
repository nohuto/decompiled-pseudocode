/*
 * XREFs of PopDiagTraceNotifyConsoleUserPresent @ 0x1409A1F30
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x1409A1CB0 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceNotifyConsoleUserPresent(char a1, int a2, char a3, int a4)
{
  _UNKNOWN **v4; // rax
  bool v7; // [rsp+38h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  bool *v9; // [rsp+58h] [rbp+17h]
  int v10; // [rsp+60h] [rbp+1Fh]
  int v11; // [rsp+64h] [rbp+23h]
  int *v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+70h] [rbp+2Fh]
  int v14; // [rsp+74h] [rbp+33h]
  int *v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+80h] [rbp+3Fh]
  int v17; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  char v19; // [rsp+A8h] [rbp+67h] BYREF
  int v20; // [rsp+B0h] [rbp+6Fh] BYREF
  int v21; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v21 = a4;
  v20 = a2;
  v19 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NOTIFY_CONSOLE_USER_PRESENT);
    if ( (_BYTE)v4 )
    {
      UserData.Ptr = (ULONGLONG)&v19;
      UserData.Size = 1;
      v9 = &v7;
      v10 = 1;
      v7 = a3 != 0;
      v12 = &v20;
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v15 = &v21;
      v13 = 4;
      v16 = 4;
      LOBYTE(v4) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_NOTIFY_CONSOLE_USER_PRESENT, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
