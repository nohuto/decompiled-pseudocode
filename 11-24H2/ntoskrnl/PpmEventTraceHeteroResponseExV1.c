/*
 * XREFs of PpmEventTraceHeteroResponseExV1 @ 0x1405DBE40
 * Callers:
 *     PpmCheckComputeHeteroResponseEx @ 0x1405DC8E0 (PpmCheckComputeHeteroResponseEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void PpmEventTraceHeteroResponseExV1(__int64 a1, ULONGLONG a2, _QWORD *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rdi
  unsigned int v7; // edx
  char v8; // al
  _QWORD *v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // r8
  _WORD *v13; // rdx
  __int16 v14; // cx
  unsigned int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v27; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int16 v28; // [rsp+44h] [rbp-55h] BYREF
  __int16 v29; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v30; // [rsp+4Ch] [rbp-4Dh] BYREF
  _BYTE v31[4]; // [rsp+50h] [rbp-49h] BYREF
  int v32; // [rsp+54h] [rbp-45h] BYREF
  int v33; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v34[64]; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v35; // [rsp+F8h] [rbp+5Fh] BYREF
  va_list va; // [rsp+F8h] [rbp+5Fh]
  __int64 v37; // [rsp+100h] [rbp+67h] BYREF
  va_list va1; // [rsp+100h] [rbp+67h]
  __int64 v39; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+108h] [rbp+6Fh]
  __int64 v41; // [rsp+110h] [rbp+77h] BYREF
  va_list va3; // [rsp+110h] [rbp+77h]
  va_list va4; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v35 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v37 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v39 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v41 = va_arg(va4, _QWORD);
  UserData = PpmEventPerfCheckData;
  v33 = 0;
  v32 = 0;
  v30 = 0;
  if ( PpmEventPerfCheckData && PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_RESPONSE) )
  {
    v7 = *(unsigned __int16 *)(a1 + 10);
    v8 = *(_BYTE *)(a1 + 1188);
    v28 = *(_WORD *)(a1 + 10);
    v27 = v8;
    if ( v35 > 1 && (_WORD)v7 )
    {
      v9 = a3;
      v10 = v7;
      do
      {
        *v9++ /= v35;
        --v10;
      }
      while ( v10 );
    }
    v11 = *(unsigned __int8 *)(a1 + 12);
    v29 = 0;
    if ( v11 > 1 )
    {
      v12 = v11 - 1;
      v13 = (_WORD *)(*(_QWORD *)(a1 + 1288) + 646LL);
      v14 = 0;
      do
      {
        v14 += *v13;
        v13 += 320;
        v29 = v14;
        --v12;
      }
      while ( v12 );
    }
    if ( PpmHeteroHgsParkingEnabled )
      v29 = *(_WORD *)(*(_QWORD *)(a1 + 1288) + 646LL);
    PpmEventAddAffinityMaskAsSubset(
      0LL,
      (_WORD *)(a1 + 48),
      (__int64)v31,
      (__int64)v34,
      (__int64)UserData,
      &v33,
      &v32,
      &v30);
    v15 = v30;
    v16 = v30;
    UserData[v16].Ptr = (ULONGLONG)&v28;
    *(_QWORD *)&UserData[v16].Size = 2LL;
    v17 = v15 + 1;
    UserData[v17].Size = 4 * v28;
    UserData[v17].Ptr = a2;
    UserData[v17].Reserved = 0;
    v18 = v15 + 2;
    UserData[v18].Size = 8 * v28;
    UserData[v18].Ptr = (ULONGLONG)a3;
    UserData[v18].Reserved = 0;
    v19 = v15 + 3;
    UserData[v19].Ptr = (ULONGLONG)va;
    *(_QWORD *)&UserData[v19].Size = 8LL;
    v20 = v15 + 4;
    UserData[v20].Ptr = a1 + 1186;
    *(_QWORD *)&UserData[v20].Size = 1LL;
    v21 = v15 + 5;
    UserData[v21].Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData[v21].Size = 1LL;
    v22 = v15 + 6;
    UserData[v22].Ptr = (ULONGLONG)va1;
    *(_QWORD *)&UserData[v22].Size = 2LL;
    v23 = v15 + 7;
    UserData[v23].Ptr = (ULONGLONG)&v29;
    *(_QWORD *)&UserData[v23].Size = 2LL;
    v24 = v15 + 8;
    UserData[v24].Ptr = (ULONGLONG)va2;
    *(_QWORD *)&UserData[v24].Size = 4LL;
    v25 = v15 + 9;
    UserData[v25].Ptr = (ULONGLONG)va3;
    *(_QWORD *)&UserData[v25].Size = 4LL;
    v26 = v15 + 10;
    UserData[v26].Ptr = (ULONGLONG)va4;
    *(_QWORD *)&UserData[v26].Size = 2LL;
    EtwWriteEx(PpmEtwHandle, &PPM_ETW_HETERO_RESPONSE, 0LL, 0, 0LL, 0LL, v15 + 11, UserData);
  }
}
