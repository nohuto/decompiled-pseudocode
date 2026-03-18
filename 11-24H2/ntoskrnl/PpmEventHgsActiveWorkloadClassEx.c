/*
 * XREFs of PpmEventHgsActiveWorkloadClassEx @ 0x1405DD690
 * Callers:
 *     PpmEventHgsActiveWorkloadClass @ 0x1404ECDC0 (PpmEventHgsActiveWorkloadClass.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DD440 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PpmEventHgsActiveWorkloadClassEx(__int64 a1, ULONGLONG a2, ULONGLONG a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-35h] BYREF
  _BYTE v19[4]; // [rsp+48h] [rbp-31h] BYREF
  int v20; // [rsp+4Ch] [rbp-2Dh] BYREF
  _DWORD v21[4]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v22[64]; // [rsp+60h] [rbp-19h] BYREF
  int v23; // [rsp+F8h] [rbp+7Fh] BYREF

  v23 = a4;
  UserData = PpmEventPerfCheckData;
  v21[0] = 0;
  v20 = 0;
  v18 = 0;
  if ( PpmEventPerfCheckData )
  {
    v17 = PpmHeteroWorkloadClasses;
    if ( PpmEtwRegistered )
    {
      if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_WPS_HETERO_ACTIVE_WORKLOAD_CLASS) )
      {
        PpmEventAddAffinityMaskAsSubset(
          0LL,
          (_WORD *)(a1 + 48),
          (__int64)v19,
          (__int64)v22,
          (__int64)UserData,
          v21,
          &v20,
          &v18);
        v8 = v18;
        v9 = v18;
        UserData[v9].Ptr = a1 + 1262;
        *(_QWORD *)&UserData[v9].Size = 1LL;
        v10 = v8 + 1;
        UserData[v10].Ptr = a1 + 1263;
        *(_QWORD *)&UserData[v10].Size = 1LL;
        v11 = v8 + 2;
        UserData[v11].Ptr = (ULONGLONG)&v17;
        *(_QWORD *)&UserData[v11].Size = 4LL;
        v12 = v17;
        v13 = v8 + 3;
        UserData[v13].Ptr = a2;
        UserData[v13].Size = 8 * v12;
        UserData[v13].Reserved = 0;
        v14 = v17;
        v15 = v8 + 4;
        UserData[v15].Ptr = a3;
        UserData[v15].Size = 8 * v14;
        UserData[v15].Reserved = 0;
        v16 = v8 + 5;
        UserData[v16].Ptr = (ULONGLONG)&v23;
        *(_QWORD *)&UserData[v16].Size = 4LL;
        EtwWriteEx(PpmEtwHandle, &PPM_ETW_WPS_HETERO_ACTIVE_WORKLOAD_CLASS, 0LL, 0, 0LL, 0LL, v8 + 6, UserData);
      }
    }
  }
}
