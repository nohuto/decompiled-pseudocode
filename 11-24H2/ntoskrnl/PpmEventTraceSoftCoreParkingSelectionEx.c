/*
 * XREFs of PpmEventTraceSoftCoreParkingSelectionEx @ 0x1405DC3F8
 * Callers:
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

BOOLEAN __fastcall PpmEventTraceSoftCoreParkingSelectionEx(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        __int16 a4,
        char a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        char a10,
        char a11)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rsi
  _WORD *v13; // r12
  _WORD *v14; // r13
  BOOLEAN result; // al
  __int64 v16; // r15
  __int64 v17; // rdi
  unsigned int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  char v31; // [rsp+4Ch] [rbp-B4h] BYREF
  _WORD *v32; // [rsp+50h] [rbp-B0h]
  _WORD *v33; // [rsp+58h] [rbp-A8h]
  _DWORD v34[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v35[264]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v36[2]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v37[264]; // [rsp+178h] [rbp+78h] BYREF
  _DWORD v38[2]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v39[264]; // [rsp+288h] [rbp+188h] BYREF
  _BYTE v40[16]; // [rsp+390h] [rbp+290h] BYREF
  _BYTE v41[512]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int16 v42; // [rsp+610h] [rbp+510h] BYREF
  __int16 v43; // [rsp+618h] [rbp+518h] BYREF

  v43 = a4;
  v42 = a3;
  UserData = PpmEventPerfCheckData;
  v13 = a6;
  v14 = a7;
  v32 = a8;
  result = (unsigned __int8)a9;
  v33 = a9;
  v16 = a2;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  if ( PpmEventPerfCheckData )
  {
    memset_0(v37, 0, 0x100uLL);
    memset_0(v39, 0, 0x100uLL);
    result = (unsigned __int8)memset_0(v35, 0, 0x100uLL);
    if ( PpmEtwRegistered )
    {
      result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_SELECTION);
      if ( result )
      {
        v36[1] = 0;
        v17 = *(_QWORD *)(a1 + 1288) + 640 * v16;
        v36[0] = 2097153;
        memset_0(v37, 0, 0x100uLL);
        v38[1] = 0;
        v38[0] = 2097153;
        memset_0(v39, 0, 0x100uLL);
        v34[1] = 0;
        v34[0] = 2097153;
        memset_0(v35, 0, 0x100uLL);
        KeAndAffinityEx2((struct _KAFFINITY_EX *)(a1 + 576), (struct _KAFFINITY_EX *)(v17 + 40), (__int64)v34);
        KeAndAffinityEx2((struct _KAFFINITY_EX *)(a1 + 312), (struct _KAFFINITY_EX *)(v17 + 40), (__int64)v36);
        KeAndAffinityEx2((struct _KAFFINITY_EX *)(a1 + 840), (struct _KAFFINITY_EX *)(v17 + 40), (__int64)v38);
        v31 = v16;
        PpmEventAddAffinityMaskAsSubset(
          0LL,
          (_WORD *)(v17 + 40),
          (__int64)v40,
          (__int64)v41,
          (__int64)UserData,
          &v30,
          &v29,
          &v28);
        PpmEventAddAffinityMaskAsSubset(
          (_WORD *)(v17 + 40),
          v34,
          (__int64)v40,
          (__int64)v41,
          (__int64)UserData,
          &v30,
          &v29,
          &v28);
        PpmEventAddAffinityMaskAsSubset(
          (_WORD *)(v17 + 40),
          v36,
          (__int64)v40,
          (__int64)v41,
          (__int64)UserData,
          &v30,
          &v29,
          &v28);
        PpmEventAddAffinityMaskAsSubset(
          (_WORD *)(v17 + 40),
          v38,
          (__int64)v40,
          (__int64)v41,
          (__int64)UserData,
          &v30,
          &v29,
          &v28);
        v18 = v28;
        v19 = v28;
        UserData[v19].Ptr = (ULONGLONG)&v43;
        *(_QWORD *)&UserData[v19].Size = 2LL;
        v20 = v18 + 1;
        v28 = v18 + 2;
        UserData[v20].Ptr = (ULONGLONG)&a5;
        *(_QWORD *)&UserData[v20].Size = 2LL;
        PpmEventAddAffinityMaskAsSubset(
          (_WORD *)(v17 + 40),
          v13,
          (__int64)v40,
          (__int64)v41,
          (__int64)UserData,
          &v30,
          &v29,
          &v28);
        PpmEventAddAffinityMaskAsSubset(
          (_WORD *)(v17 + 40),
          v14,
          (__int64)v40,
          (__int64)v41,
          (__int64)UserData,
          &v30,
          &v29,
          &v28);
        PpmEventAddAffinityMaskAsSubset(
          (_WORD *)(v17 + 40),
          v32,
          (__int64)v40,
          (__int64)v41,
          (__int64)UserData,
          &v30,
          &v29,
          &v28);
        PpmEventAddAffinityMaskAsSubset(
          (_WORD *)(v17 + 40),
          v33,
          (__int64)v40,
          (__int64)v41,
          (__int64)UserData,
          &v30,
          &v29,
          &v28);
        v21 = v28;
        v22 = v28;
        UserData[v22].Ptr = v17 + 8;
        *(_QWORD *)&UserData[v22].Size = 2LL;
        v23 = v21 + 1;
        UserData[v23].Ptr = (ULONGLONG)&v42;
        *(_QWORD *)&UserData[v23].Size = 2LL;
        v24 = v21 + 2;
        UserData[v24].Ptr = (ULONGLONG)&a10;
        *(_QWORD *)&UserData[v24].Size = 4LL;
        v25 = v21 + 3;
        UserData[v25].Ptr = (ULONGLONG)&a11;
        *(_QWORD *)&UserData[v25].Size = 4LL;
        v26 = v21 + 4;
        UserData[v26].Ptr = (ULONGLONG)&v31;
        *(_QWORD *)&UserData[v26].Size = 1LL;
        v27 = v21 + 5;
        UserData[v27].Ptr = v17 + 6;
        *(_QWORD *)&UserData[v27].Size = 2LL;
        return EtwWriteEx(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_SELECTION, 0LL, 0, 0LL, 0LL, v21 + 6, UserData);
      }
    }
  }
  return result;
}
