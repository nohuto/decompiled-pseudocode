/*
 * XREFs of PpmEventTraceCoreParkingSelectionEx @ 0x1405DB6A0
 * Callers:
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventTraceCoreParkingSelectionEx(
        _WORD *a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        _WORD *a11,
        __int64 a12,
        _WORD *a13,
        _WORD *a14,
        _WORD *a15)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  _WORD *v17; // rsi
  _WORD *v18; // r14
  _WORD *v19; // r15
  _WORD *v20; // r12
  _WORD *v21; // r13
  BOOLEAN result; // al
  ULONG v23; // r8d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  ULONG UserDataCount; // [rsp+48h] [rbp-C0h] BYREF
  int v30; // [rsp+4Ch] [rbp-BCh] BYREF
  GUID v31; // [rsp+50h] [rbp-B8h] BYREF
  _WORD *v32; // [rsp+60h] [rbp-A8h]
  _WORD *v33; // [rsp+68h] [rbp-A0h]
  _WORD *v34; // [rsp+70h] [rbp-98h]
  _BYTE v35[32]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v36[640]; // [rsp+98h] [rbp-70h] BYREF
  int v37; // [rsp+380h] [rbp+278h] BYREF
  int v38; // [rsp+388h] [rbp+280h] BYREF
  int v39; // [rsp+390h] [rbp+288h] BYREF

  v39 = a4;
  v38 = a3;
  v37 = a2;
  UserData = PpmEventPerfCheckData;
  v17 = a7;
  v18 = a8;
  v19 = a9;
  v20 = a10;
  v21 = a11;
  *(_QWORD *)v31.Data4 = a12;
  v32 = a13;
  v33 = a14;
  v34 = a15;
  result = 0;
  v31.Data1 = 0;
  v30 = 0;
  UserDataCount = 0;
  if ( PpmEventPerfCheckData && PpmEtwRegistered )
  {
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COREPARKING_SELECTION);
    if ( result )
    {
      PpmEventAddAffinityMaskAsSubset(
        0LL,
        a1,
        (__int64)v35,
        (__int64)v36,
        (__int64)UserData,
        &v31,
        &v30,
        &UserDataCount);
      v23 = UserDataCount;
      v24 = UserDataCount;
      UserData[v24].Ptr = (ULONGLONG)&v37;
      *(_QWORD *)&UserData[v24].Size = 4LL;
      v25 = v23 + 1;
      UserData[v25].Ptr = (ULONGLONG)&v38;
      *(_QWORD *)&UserData[v25].Size = 4LL;
      v26 = v23 + 2;
      UserData[v26].Ptr = (ULONGLONG)&v39;
      *(_QWORD *)&UserData[v26].Size = 4LL;
      v27 = v23 + 3;
      UserData[v27].Ptr = (ULONGLONG)&a5;
      *(_QWORD *)&UserData[v27].Size = 4LL;
      v28 = v23 + 4;
      UserDataCount = v23 + 5;
      UserData[v28].Ptr = (ULONGLONG)&a6;
      *(_QWORD *)&UserData[v28].Size = 4LL;
      PpmEventAddAffinityMaskAsSubset(
        a1,
        v17,
        (__int64)v35,
        (__int64)v36,
        (__int64)UserData,
        &v31,
        &v30,
        &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        v18,
        (__int64)v35,
        (__int64)v36,
        (__int64)UserData,
        &v31,
        &v30,
        &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        v19,
        (__int64)v35,
        (__int64)v36,
        (__int64)UserData,
        &v31,
        &v30,
        &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        v20,
        (__int64)v35,
        (__int64)v36,
        (__int64)UserData,
        &v31,
        &v30,
        &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        v21,
        (__int64)v35,
        (__int64)v36,
        (__int64)UserData,
        &v31,
        &v30,
        &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        *(_WORD **)v31.Data4,
        (__int64)v35,
        (__int64)v36,
        (__int64)UserData,
        &v31,
        &v30,
        &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        v32,
        (__int64)v35,
        (__int64)v36,
        (__int64)UserData,
        &v31,
        &v30,
        &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        v33,
        (__int64)v35,
        (__int64)v36,
        (__int64)UserData,
        &v31,
        &v30,
        &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        v34,
        (__int64)v35,
        (__int64)v36,
        (__int64)UserData,
        &v31,
        &v30,
        &UserDataCount);
      return EtwWriteEx(PpmEtwHandle, &PPM_ETW_COREPARKING_SELECTION, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
    }
  }
  return result;
}
