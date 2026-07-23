/*
 * XREFs of PopDiagTraceShutdownAction @ 0x1405D2C18
 * Callers:
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshSessionManagerTraceShutdownAction @ 0x140766BB8 (SshSessionManagerTraceShutdownAction.c)
 */

__int64 __fastcall PopDiagTraceShutdownAction(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v7; // [rsp+44h] [rbp-15h] BYREF
  unsigned int v8; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+7h] BYREF
  unsigned int *v10; // [rsp+70h] [rbp+17h]
  int v11; // [rsp+78h] [rbp+1Fh]
  int v12; // [rsp+7Ch] [rbp+23h]
  int *v13; // [rsp+80h] [rbp+27h]
  int v14; // [rsp+88h] [rbp+2Fh]
  int v15; // [rsp+8Ch] [rbp+33h]

  v6 = 0;
  v7 = 0;
  v8 = a2;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SHUTDOWN_ACTION) )
  {
    UserData.Reserved = 0;
    v12 = 0;
    v15 = 0;
    UserData.Ptr = (ULONGLONG)&v6;
    UserData.Size = 4;
    v10 = &v8;
    v11 = 4;
    v13 = (int *)&v7;
    v14 = 4;
    v6 = a1;
    v7 = a3;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_SHUTDOWN_ACTION, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  return SshSessionManagerTraceShutdownAction(a1, v8, a3);
}
