/*
 * XREFs of PpmEventParkNodePreferenceEx @ 0x1405DAF00
 * Callers:
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventParkNodePreferenceEx(_WORD *a1, __int16 a2, _WORD *a3, _WORD *a4, _WORD *a5, _WORD *a6)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  _WORD *v10; // r15
  _WORD *v11; // r12
  struct _EVENT_DATA_DESCRIPTOR *v12; // rax
  ULONG UserDataCount; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  GUID v15; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v16[320]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v17; // [rsp+1F8h] [rbp+F8h] BYREF

  v17 = a2;
  v15.Data1 = 0;
  v14 = 0;
  UserDataCount = 0;
  UserData = PpmEventPerfCheckData;
  v10 = a5;
  v11 = a6;
  if ( PpmEventPerfCheckData && PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_PARKING_PREFERENCE) )
    {
      PpmEventAddAffinityMaskAsSubset(
        0LL,
        a1,
        (__int64)v15.Data4,
        (__int64)v16,
        (__int64)UserData,
        &v15,
        &v14,
        &UserDataCount);
      v12 = &UserData[UserDataCount++];
      v12->Reserved = 0;
      v12->Ptr = (ULONGLONG)&v17;
      v12->Size = 2;
      PpmEventAddAffinityMaskAsSubset(
        a1,
        a3,
        (__int64)v15.Data4,
        (__int64)v16,
        (__int64)UserData,
        &v15,
        &v14,
        &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        a4,
        (__int64)v15.Data4,
        (__int64)v16,
        (__int64)UserData,
        &v15,
        &v14,
        &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        v10,
        (__int64)v15.Data4,
        (__int64)v16,
        (__int64)UserData,
        &v15,
        &v14,
        &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        v11,
        (__int64)v15.Data4,
        (__int64)v16,
        (__int64)UserData,
        &v15,
        &v14,
        &UserDataCount);
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PLATFORM_PARKING_PREFERENCE, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
    }
  }
}
