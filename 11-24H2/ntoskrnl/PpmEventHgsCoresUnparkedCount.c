/*
 * XREFs of PpmEventHgsCoresUnparkedCount @ 0x1404E4750
 * Callers:
 *     PpmParkCalculateUnparkCount @ 0x140417A80 (PpmParkCalculateUnparkCount.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventHgsCoresUnparkedCountEx @ 0x1405DA8F8 (PpmEventHgsCoresUnparkedCountEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventHgsCoresUnparkedCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v7; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 v9; // [rsp+60h] [rbp-9h]
  int v10; // [rsp+68h] [rbp-1h]
  int v11; // [rsp+6Ch] [rbp+3h]
  __int64 v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  __int64 v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  __int64 v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]
  unsigned int *v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  IsEnabledDeviceUsageNoInline = Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4);
  if ( IsEnabledDeviceUsageNoInline )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = PpmEventHgsCoresUnparkedCountEx(a1);
  }
  else if ( PpmEtwRegistered )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_PARKING_SELECTION_COUNT_V1);
    if ( (_BYTE)IsEnabledDeviceUsageNoInline )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v13 = 1;
      v7 = ((unsigned int)PpmHeteroHgsContainmentState >> 3) & 1;
      UserData.Ptr = a1 + 4;
      v9 = a1 + 16;
      v12 = a1 + 1268;
      v15 = a1 + 1264;
      v18 = a1 + 1266;
      v21 = &v7;
      v16 = 1;
      v19 = 1;
      UserData.Size = 2;
      v10 = 8;
      v22 = 4;
      LOBYTE(IsEnabledDeviceUsageNoInline) = EtwWriteEx(
                                               PpmEtwHandle,
                                               &PPM_ETW_HETERO_PARKING_SELECTION_COUNT_V1,
                                               0LL,
                                               0,
                                               0LL,
                                               0LL,
                                               6u,
                                               &UserData);
    }
  }
  return IsEnabledDeviceUsageNoInline;
}
