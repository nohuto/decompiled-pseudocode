/*
 * XREFs of PpmEventTraceCoreParkingSelection @ 0x1405D528C
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x1404EAC14 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceCoreParkingSelection(
        int a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  _UNKNOWN **v14; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  int *v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A8h]
  int *v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  int *v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  char *v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  char *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  char *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
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
  char *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF
  int v44; // [rsp+158h] [rbp+50h] BYREF
  int v45; // [rsp+160h] [rbp+58h] BYREF
  int v46; // [rsp+168h] [rbp+60h] BYREF
  int v47; // [rsp+170h] [rbp+68h] BYREF

  v14 = &retaddr;
  v47 = a4;
  v46 = a3;
  v45 = a2;
  v44 = a1;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v14) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COREPARKING_SELECTION);
    if ( (_BYTE)v14 )
    {
      UserData.Ptr = (ULONGLONG)&v44;
      *(_QWORD *)&UserData.Size = 4LL;
      v17 = &v45;
      v18 = 4LL;
      v19 = &v46;
      v20 = 4LL;
      v21 = &v47;
      v23 = &a5;
      v25 = &a6;
      v27 = &a7;
      v29 = &a8;
      v31 = &a9;
      v33 = &a10;
      v35 = &a11;
      v37 = &a12;
      v39 = &a13;
      v41 = &a14;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 8LL;
      v30 = 8LL;
      v32 = 8LL;
      v34 = 8LL;
      v36 = 8LL;
      v38 = 8LL;
      v40 = 8LL;
      v42 = 8LL;
      LOBYTE(v14) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_COREPARKING_SELECTION, 0LL, 0, 0LL, 0LL, 0xEu, &UserData);
    }
  }
  return (char)v14;
}
