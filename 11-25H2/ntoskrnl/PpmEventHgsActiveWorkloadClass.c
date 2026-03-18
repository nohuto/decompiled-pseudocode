/*
 * XREFs of PpmEventHgsActiveWorkloadClass @ 0x140483748
 * Callers:
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x1403B0CE4 (PpmPerfRecordMostActiveWorkloadClass.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventHgsActiveWorkloadClass(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  BOOLEAN result; // al
  int v8; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  __int64 v10; // [rsp+68h] [rbp-29h]
  int v11; // [rsp+70h] [rbp-21h]
  int v12; // [rsp+74h] [rbp-1Dh]
  __int64 v13; // [rsp+78h] [rbp-19h]
  int v14; // [rsp+80h] [rbp-11h]
  int v15; // [rsp+84h] [rbp-Dh]
  __int64 v16; // [rsp+88h] [rbp-9h]
  int v17; // [rsp+90h] [rbp-1h]
  int v18; // [rsp+94h] [rbp+3h]
  int *v19; // [rsp+98h] [rbp+7h]
  int v20; // [rsp+A0h] [rbp+Fh]
  int v21; // [rsp+A4h] [rbp+13h]
  __int64 v22; // [rsp+A8h] [rbp+17h]
  int v23; // [rsp+B0h] [rbp+1Fh]
  int v24; // [rsp+B4h] [rbp+23h]
  __int64 v25; // [rsp+B8h] [rbp+27h]
  int v26; // [rsp+C0h] [rbp+2Fh]
  int v27; // [rsp+C4h] [rbp+33h]
  int *v28; // [rsp+C8h] [rbp+37h]
  int v29; // [rsp+D0h] [rbp+3Fh]
  int v30; // [rsp+D4h] [rbp+43h]
  int v31; // [rsp+110h] [rbp+7Fh] BYREF

  v31 = a4;
  result = PpmHeteroWorkloadClasses;
  v8 = PpmHeteroWorkloadClasses;
  if ( PpmEtwRegistered )
  {
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_WPS_HETERO_ACTIVE_WORKLOAD_CLASS);
    if ( result )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      UserData.Ptr = a1 + 4;
      v10 = a1 + 16;
      v13 = a1 + 187;
      v16 = a1 + 188;
      v19 = &v8;
      v23 = 8 * v8;
      v26 = 8 * v8;
      v14 = 1;
      v17 = 1;
      v28 = &v31;
      v11 = 8;
      v20 = 4;
      v29 = 4;
      UserData.Size = 2;
      v22 = a2;
      v25 = a3;
      return EtwWriteEx(PpmEtwHandle, &PPM_ETW_WPS_HETERO_ACTIVE_WORKLOAD_CLASS, 0LL, 0, 0LL, 0LL, 8u, &UserData);
    }
  }
  return result;
}
