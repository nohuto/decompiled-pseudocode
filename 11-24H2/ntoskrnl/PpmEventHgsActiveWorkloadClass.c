/*
 * XREFs of PpmEventHgsActiveWorkloadClass @ 0x1404E4500
 * Callers:
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x1404E26D8 (PpmPerfRecordMostActiveWorkloadClass.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventHgsActiveWorkloadClassEx @ 0x1405DA510 (PpmEventHgsActiveWorkloadClassEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventHgsActiveWorkloadClass(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  BOOLEAN result; // al
  int v8; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-49h] BYREF
  __int64 v10; // [rsp+60h] [rbp-39h]
  int v11; // [rsp+68h] [rbp-31h]
  int v12; // [rsp+6Ch] [rbp-2Dh]
  __int64 v13; // [rsp+70h] [rbp-29h]
  int v14; // [rsp+78h] [rbp-21h]
  int v15; // [rsp+7Ch] [rbp-1Dh]
  __int64 v16; // [rsp+80h] [rbp-19h]
  int v17; // [rsp+88h] [rbp-11h]
  int v18; // [rsp+8Ch] [rbp-Dh]
  int *v19; // [rsp+90h] [rbp-9h]
  int v20; // [rsp+98h] [rbp-1h]
  int v21; // [rsp+9Ch] [rbp+3h]
  __int64 v22; // [rsp+A0h] [rbp+7h]
  int v23; // [rsp+A8h] [rbp+Fh]
  int v24; // [rsp+ACh] [rbp+13h]
  __int64 v25; // [rsp+B0h] [rbp+17h]
  int v26; // [rsp+B8h] [rbp+1Fh]
  int v27; // [rsp+BCh] [rbp+23h]
  unsigned int *v28; // [rsp+C0h] [rbp+27h]
  int v29; // [rsp+C8h] [rbp+2Fh]
  int v30; // [rsp+CCh] [rbp+33h]
  unsigned int v31; // [rsp+118h] [rbp+7Fh] BYREF

  v31 = a4;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4) )
    return PpmEventHgsActiveWorkloadClassEx(a1, a2, a3, v31);
  result = PpmHeteroWorkloadClasses;
  v8 = PpmHeteroWorkloadClasses;
  if ( PpmEtwRegistered )
  {
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_WPS_HETERO_ACTIVE_WORKLOAD_CLASS_V1);
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
      v13 = a1 + 1270;
      v16 = a1 + 1271;
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
      return EtwWriteEx(PpmEtwHandle, &PPM_ETW_WPS_HETERO_ACTIVE_WORKLOAD_CLASS_V1, 0LL, 0, 0LL, 0LL, 8u, &UserData);
    }
  }
  return result;
}
