/*
 * XREFs of PopDiagTracePowerRequestChange @ 0x1404650CC
 * Callers:
 *     PopPowerRequestReferenceRelease @ 0x1404649E0 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x140464AF0 (PopPowerRequestReferenceAcquire.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePowerRequestChange(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  __int64 v2; // [rsp+50h] [rbp-19h]
  int v3; // [rsp+58h] [rbp-11h]
  int v4; // [rsp+5Ch] [rbp-Dh]
  __int64 v5; // [rsp+60h] [rbp-9h]
  int v6; // [rsp+68h] [rbp-1h]
  int v7; // [rsp+6Ch] [rbp+3h]
  __int64 v8; // [rsp+70h] [rbp+7h]
  int v9; // [rsp+78h] [rbp+Fh]
  int v10; // [rsp+7Ch] [rbp+13h]
  __int64 v11; // [rsp+80h] [rbp+17h]
  int v12; // [rsp+88h] [rbp+1Fh]
  int v13; // [rsp+8Ch] [rbp+23h]
  __int64 v14; // [rsp+90h] [rbp+27h]
  int v15; // [rsp+98h] [rbp+2Fh]
  int v16; // [rsp+9Ch] [rbp+33h]
  __int64 v17; // [rsp+A0h] [rbp+37h]
  int v18; // [rsp+A8h] [rbp+3Fh]
  int v19; // [rsp+ACh] [rbp+43h]
  __int64 v20; // [rsp+D0h] [rbp+67h] BYREF

  v20 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CHANGE_POWER_REQUEST) )
    {
      UserData.Reserved = 0;
      v4 = 0;
      v7 = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      UserData.Ptr = (ULONGLONG)&v20;
      v2 = v20 + 44;
      v5 = v20 + 40;
      v8 = v20 + 48;
      v11 = v20 + 52;
      v14 = v20 + 56;
      v17 = v20 + 60;
      v3 = 4;
      v6 = 4;
      v9 = 4;
      v12 = 4;
      v15 = 4;
      v18 = 4;
      UserData.Size = 8;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_CHANGE_POWER_REQUEST, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
}
