/*
 * XREFs of PopDiagTraceFxComponentWake @ 0x1405D271C
 * Callers:
 *     PoFxSetComponentWake @ 0x1405CE070 (PoFxSetComponentWake.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxComponentWake(__int64 a1, int a2, unsigned __int8 a3)
{
  int v3; // ebx
  BOOLEAN result; // al
  int v5; // [rsp+40h] [rbp+7h] BYREF
  __int64 v6; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  int *v8; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  int *v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]
  int v14; // [rsp+A8h] [rbp+6Fh] BYREF

  v14 = a2;
  v3 = a3;
  v6 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, a2, 11, a3);
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_WAKE);
    if ( result )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      v9 = 4;
      v8 = &v14;
      v12 = 4;
      v11 = &v5;
      v5 = v3;
      UserData.Size = 8;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_WAKE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
