/*
 * XREFs of PpmEventTraceHeteroResponse @ 0x1404176DC
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140416940 (PpmCheckComputeMultiClassHeteroResponse.c)
 *     PpmCheckComputeHeteroResponse @ 0x1404E3AD0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char PpmEventTraceHeteroResponse(__int64 a1, __int64 a2, _QWORD *a3, ...)
{
  _UNKNOWN **v3; // rax
  __int64 v7; // r8
  char v8; // al
  unsigned int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r9
  _BYTE *v13; // rdx
  char v14; // cl
  char v16; // [rsp+48h] [rbp-C0h] BYREF
  char v17; // [rsp+49h] [rbp-BFh] BYREF
  char v18; // [rsp+4Ah] [rbp-BEh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h]
  __int64 v21; // [rsp+70h] [rbp-98h]
  char *v22; // [rsp+78h] [rbp-90h]
  __int64 v23; // [rsp+80h] [rbp-88h]
  __int64 v24; // [rsp+88h] [rbp-80h]
  int v25; // [rsp+90h] [rbp-78h]
  int v26; // [rsp+94h] [rbp-74h]
  _QWORD *v27; // [rsp+98h] [rbp-70h]
  int v28; // [rsp+A0h] [rbp-68h]
  int v29; // [rsp+A4h] [rbp-64h]
  va_list v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  __int64 v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  char *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  va_list v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  char *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  va_list v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF
  unsigned __int64 v43; // [rsp+150h] [rbp+48h] BYREF
  va_list va; // [rsp+150h] [rbp+48h]
  __int64 v45; // [rsp+158h] [rbp+50h] BYREF
  va_list va1; // [rsp+158h] [rbp+50h]
  va_list va2; // [rsp+160h] [rbp+58h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v43 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v45 = va_arg(va2, _QWORD);
  v3 = &retaddr;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HETERO_RESPONSE_V0);
    if ( (_BYTE)v3 )
    {
      v7 = *(unsigned __int8 *)(a1 + 10);
      v8 = *(_BYTE *)(a1 + 1188);
      v17 = *(_BYTE *)(a1 + 10);
      v18 = v8;
      if ( v43 > 1 && (_BYTE)v7 )
      {
        v10 = a3;
        v11 = v7;
        do
        {
          *v10++ /= v43;
          --v11;
        }
        while ( v11 );
      }
      v9 = *(unsigned __int8 *)(a1 + 12);
      v16 = 0;
      if ( v9 > 1 )
      {
        v12 = v9 - 1;
        v13 = (_BYTE *)(*(_QWORD *)(a1 + 1288) + 646LL);
        v14 = 0;
        do
        {
          v14 += *v13;
          v13 += 640;
          v16 = v14;
          --v12;
        }
        while ( v12 );
      }
      if ( PpmHeteroHgsParkingEnabled )
        v16 = *(_BYTE *)(*(_QWORD *)(a1 + 1288) + 646LL);
      UserData.Ptr = a1 + 4;
      *(_QWORD *)&UserData.Size = 2LL;
      v20 = a1 + 16;
      v21 = 8LL;
      v22 = &v17;
      v25 = 4 * v7;
      v28 = 8 * v7;
      v23 = 1LL;
      va_copy(v30, va);
      v32 = a1 + 1186;
      v34 = &v18;
      va_copy(v36, va1);
      v38 = &v16;
      va_copy(v40, va2);
      v24 = a2;
      v26 = 0;
      v27 = a3;
      v29 = 0;
      v31 = 8LL;
      v33 = 1LL;
      v35 = 1LL;
      v37 = 1LL;
      v39 = 1LL;
      v41 = 4LL;
      LOBYTE(v3) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_HETERO_RESPONSE_V0, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
    }
  }
  return (char)v3;
}
