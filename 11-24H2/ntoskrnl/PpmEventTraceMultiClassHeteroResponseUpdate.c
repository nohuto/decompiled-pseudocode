/*
 * XREFs of PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404E49EC
 * Callers:
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x140416434 (PpmHeteroComputeMultiClassUnparkCount.c)
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140416940 (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmCheckComputeMultiClassHeteroResponseEx @ 0x1405DD1F4 (PpmCheckComputeMultiClassHeteroResponseEx.c)
 *     PpmHeteroComputeMultiClassUnparkCountEx @ 0x1405DD850 (PpmHeteroComputeMultiClassUnparkCountEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdateEx @ 0x1405DC2F4 (PpmEventTraceMultiClassHeteroResponseUpdateEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventTraceMultiClassHeteroResponseUpdate(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  BOOLEAN result; // al
  char v7; // [rsp+40h] [rbp-29h] BYREF
  char v8; // [rsp+48h] [rbp-21h] BYREF
  BOOLEAN v9; // [rsp+49h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  char *v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  BOOLEAN *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  _BYTE *v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]
  __int64 *v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  v7 = a1;
  v10 = a3;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4) )
  {
    LOBYTE(v5) = v7;
    return PpmEventTraceMultiClassHeteroResponseUpdateEx(v5, a2, v10);
  }
  else
  {
    v8 = *a2;
    result = a2[6];
    v9 = result;
    if ( PpmEtwRegistered )
    {
      result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE_UPDATE_V0);
      if ( result )
      {
        UserData.Reserved = 0;
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v23 = 0;
        UserData.Ptr = (ULONGLONG)&v7;
        v12 = &v8;
        v15 = &v9;
        v18 = a2 + 16;
        UserData.Size = 1;
        v13 = 1;
        v16 = 1;
        v21 = &v10;
        v19 = 8;
        v22 = 8;
        return EtwWriteEx(PpmEtwHandle, &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE_UPDATE_V0, 0LL, 0, 0LL, 0LL, 5u, &UserData);
      }
    }
  }
  return result;
}
