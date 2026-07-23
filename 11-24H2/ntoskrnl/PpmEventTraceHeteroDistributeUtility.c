/*
 * XREFs of PpmEventTraceHeteroDistributeUtility @ 0x1405D7014
 * Callers:
 *     PpmHeteroDistributeUtility @ 0x1404E3F40 (PpmHeteroDistributeUtility.c)
 *     PpmHeteroDistributeUtilityEx @ 0x1405DDDF4 (PpmHeteroDistributeUtilityEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventTraceHeteroDistributeUtilityEx @ 0x1405DBA94 (PpmEventTraceHeteroDistributeUtilityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceHeteroDistributeUtility(__int64 a1, char a2, char a3)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  __int64 v9; // [rsp+58h] [rbp+17h]
  int v10; // [rsp+60h] [rbp+1Fh]
  int v11; // [rsp+64h] [rbp+23h]
  char *v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+70h] [rbp+2Fh]
  int v14; // [rsp+74h] [rbp+33h]
  char *v15; // [rsp+78h] [rbp+37h]
  int v16; // [rsp+80h] [rbp+3Fh]
  int v17; // [rsp+84h] [rbp+43h]
  char v18; // [rsp+B0h] [rbp+6Fh] BYREF
  char v19; // [rsp+B8h] [rbp+77h] BYREF

  v19 = a3;
  v18 = a2;
  IsEnabledDeviceUsageNoInline = Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    LOBYTE(v6) = v19;
    LOBYTE(v5) = v18;
    LOBYTE(IsEnabledDeviceUsageNoInline) = PpmEventTraceHeteroDistributeUtilityEx(a1, v5, v6);
  }
  else if ( PpmEtwRegistered )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_DISTRIBUTE_UTILITY_V0);
    if ( (_BYTE)IsEnabledDeviceUsageNoInline )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = a1 + 4;
      v13 = 1;
      v9 = a1 + 16;
      v12 = &v18;
      v15 = &v19;
      v16 = 1;
      UserData.Size = 2;
      v10 = 8;
      LOBYTE(IsEnabledDeviceUsageNoInline) = EtwWriteEx(
                                               PpmEtwHandle,
                                               &PPM_ETW_HETERO_DISTRIBUTE_UTILITY_V0,
                                               0LL,
                                               0,
                                               0LL,
                                               0LL,
                                               4u,
                                               &UserData);
    }
  }
  return IsEnabledDeviceUsageNoInline;
}
