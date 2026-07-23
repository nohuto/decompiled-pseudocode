/*
 * XREFs of PpmEventTraceHeteroDistributeUtilityEx @ 0x1405DBA94
 * Callers:
 *     PpmEventTraceHeteroDistributeUtility @ 0x1405D7014 (PpmEventTraceHeteroDistributeUtility.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceHeteroDistributeUtilityEx(__int64 a1, char a2, char a3)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v5; // r8d
  struct _EVENT_DATA_DESCRIPTOR *v6; // rax
  struct _EVENT_DATA_DESCRIPTOR *v7; // rcx
  unsigned int v8; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v9[4]; // [rsp+44h] [rbp-15h] BYREF
  int v10; // [rsp+48h] [rbp-11h] BYREF
  GUID v11; // [rsp+4Ch] [rbp-Dh] BYREF
  char v12; // [rsp+C8h] [rbp+6Fh] BYREF
  char v13; // [rsp+D0h] [rbp+77h] BYREF

  v13 = a3;
  v12 = a2;
  v11.Data1 = 0;
  v10 = 0;
  v8 = 0;
  UserData = PpmEventPerfCheckData;
  if ( PpmEventPerfCheckData && PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_DISTRIBUTE_UTILITY) )
    {
      PpmEventAddAffinityMaskAsSubset(
        0LL,
        (_WORD *)(a1 + 48),
        (__int64)v9,
        (__int64)&v11.Data2,
        (__int64)UserData,
        &v11,
        &v10,
        &v8);
      v5 = v8;
      v6 = &UserData[v8];
      v6->Reserved = 0;
      v6->Ptr = (ULONGLONG)&v12;
      v6->Size = 1;
      v7 = &UserData[v5 + 1];
      v7->Reserved = 0;
      v7->Ptr = (ULONGLONG)&v13;
      v7->Size = 1;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_HETERO_DISTRIBUTE_UTILITY, 0LL, 0, 0LL, 0LL, v5 + 2, UserData);
    }
  }
}
