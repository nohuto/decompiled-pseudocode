/*
 * XREFs of PopDiagTraceUsermodeThermalEvent @ 0x140A9C474
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140A9C104 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceUsermodeThermalEvent(__int64 a1)
{
  int v2; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-9h] BYREF
  __int64 v4; // [rsp+40h] [rbp+7h]
  int v5; // [rsp+48h] [rbp+Fh]
  int v6; // [rsp+4Ch] [rbp+13h]
  __int64 v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  __int64 v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  __int64 v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_EVENT) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v4 = a1 + 14;
      v2 = *(unsigned __int16 *)(a1 + 12);
      UserData.Ptr = a1 + 12;
      v5 = 2 * v2;
      v8 = 4;
      v10 = a1 + 4;
      v13 = a1 + 8;
      v11 = 4;
      v14 = 4;
      UserData.Size = 2;
      v7 = a1;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_THERMAL_EVENT, 0LL, 5u, &UserData);
    }
  }
}
