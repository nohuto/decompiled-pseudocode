/*
 * XREFs of PopDiagTraceCsDripsDivergence @ 0x1405D1DFC
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x14075EF20 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceCsDripsDivergence(int a1, __int64 a2, __int64 a3)
{
  BOOLEAN result; // al
  int v4; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int64 *v6; // [rsp+68h] [rbp+17h]
  int v7; // [rsp+70h] [rbp+1Fh]
  int v8; // [rsp+74h] [rbp+23h]
  __int64 *v9; // [rsp+78h] [rbp+27h]
  int v10; // [rsp+80h] [rbp+2Fh]
  int v11; // [rsp+84h] [rbp+33h]
  int *v12; // [rsp+88h] [rbp+37h]
  int v13; // [rsp+90h] [rbp+3Fh]
  int v14; // [rsp+94h] [rbp+43h]
  int v15; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v16; // [rsp+C0h] [rbp+6Fh] BYREF
  __int64 v17; // [rsp+C8h] [rbp+77h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  result = PopDripsSwHwDivergenceThreshold;
  v4 = PopDripsSwHwDivergenceThreshold;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_DIVERGENCE);
    if ( result )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      UserData.Ptr = (ULONGLONG)&v15;
      v6 = &v16;
      v9 = &v17;
      UserData.Size = 4;
      v12 = &v4;
      v7 = 8;
      v10 = 8;
      v13 = 4;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_DIVERGENCE, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return result;
}
