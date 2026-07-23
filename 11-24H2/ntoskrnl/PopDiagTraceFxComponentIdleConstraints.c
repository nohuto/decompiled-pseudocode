/*
 * XREFs of PopDiagTraceFxComponentIdleConstraints @ 0x1405D2548
 * Callers:
 *     PopPluginRequestComponentIdleConstraints @ 0x1405CFC68 (PopPluginRequestComponentIdleConstraints.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxComponentIdleConstraints(__int64 a1, int a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *v8; // [rsp+58h] [rbp+17h]
  int v9; // [rsp+60h] [rbp+1Fh]
  int v10; // [rsp+64h] [rbp+23h]
  int *v11; // [rsp+68h] [rbp+27h]
  int v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+74h] [rbp+33h]
  __int64 v14; // [rsp+78h] [rbp+37h]
  int v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  __int64 v18; // [rsp+A8h] [rbp+67h] BYREF
  int v19; // [rsp+B0h] [rbp+6Fh] BYREF
  int v20; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v20 = a4;
  v19 = a2;
  v18 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_IDLE_CONSTRAINTS);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = (ULONGLONG)&v18;
      v9 = 4;
      v8 = &v19;
      v11 = &v20;
      v15 = 4 * v20;
      v12 = 4;
      UserData.Size = 8;
      v14 = a3;
      LOBYTE(v4) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_IDLE_CONSTRAINTS, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
