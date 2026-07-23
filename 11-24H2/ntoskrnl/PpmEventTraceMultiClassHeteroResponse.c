/*
 * XREFs of PpmEventTraceMultiClassHeteroResponse @ 0x1404178DC
 * Callers:
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x140416434 (PpmHeteroComputeMultiClassUnparkCount.c)
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140416940 (PpmCheckComputeMultiClassHeteroResponse.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceMultiClassHeteroResponse(
        char a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  _UNKNOWN **v10; // rax
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 *v17; // [rsp+68h] [rbp-A0h]
  __int64 v18; // [rsp+70h] [rbp-98h]
  unsigned __int64 *v19; // [rsp+78h] [rbp-90h]
  __int64 v20; // [rsp+80h] [rbp-88h]
  int *v21; // [rsp+88h] [rbp-80h]
  __int64 v22; // [rsp+90h] [rbp-78h]
  __int64 v23; // [rsp+98h] [rbp-70h]
  int v24; // [rsp+A0h] [rbp-68h]
  int v25; // [rsp+A4h] [rbp-64h]
  __int64 v26; // [rsp+A8h] [rbp-60h]
  int v27; // [rsp+B0h] [rbp-58h]
  int v28; // [rsp+B4h] [rbp-54h]
  char *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  char *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  char *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  char *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  char *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  char *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  _UNKNOWN *retaddr; // [rsp+140h] [rbp+38h] BYREF
  char v42; // [rsp+148h] [rbp+40h] BYREF

  v10 = &retaddr;
  v42 = a1;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v10) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE_V0);
    if ( (_BYTE)v10 )
    {
      v15 = __popcnt(*a2);
      UserData.Ptr = (ULONGLONG)&v42;
      *(_QWORD *)&UserData.Size = 1LL;
      v17 = a2 + 1;
      v18 = 2LL;
      v21 = &v15;
      v19 = a2;
      v24 = 4 * v15;
      v27 = 4 * v15;
      v29 = &a5;
      v31 = &a6;
      v33 = &a7;
      v35 = &a8;
      v37 = &a9;
      v39 = &a10;
      v20 = 8LL;
      v22 = 4LL;
      v23 = a3;
      v25 = 0;
      v26 = a4;
      v28 = 0;
      v30 = 8LL;
      v32 = 4LL;
      v34 = 1LL;
      v36 = 1LL;
      v38 = 1LL;
      v40 = 8LL;
      LOBYTE(v10) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_MULTI_CLASS_HETERO_RESPONSE_V0, 0LL, 0, 0LL, 0LL, 0xCu, &UserData);
    }
  }
  return (char)v10;
}
