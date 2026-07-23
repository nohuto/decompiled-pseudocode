/*
 * XREFs of PpmEventTraceSoftCoreParkingSelection @ 0x14046C3EC
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1404E5250 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceSoftCoreParkingSelection(
        _QWORD *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9,
        char a10,
        char a11)
{
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int64 *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  __int64 *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  char *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  char *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  char *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  __int64 *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  char *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  __int64 v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  char *v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  char *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  char *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  char *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  __int64 v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  char v55; // [rsp+1B0h] [rbp+B0h] BYREF
  char v56; // [rsp+1B8h] [rbp+B8h] BYREF

  v56 = a4;
  v55 = a3;
  v11 = a2;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_SELECTION_V2) )
    {
      v13 = a1[4];
      v14 = a1[161] + 640 * v11;
      v15 = *(_QWORD *)(v14 + 24);
      a8 &= v15;
      v19 = v15 & v13;
      v16 = v15 & a1[3];
      v23 = v14 + 24;
      v20 = v16;
      v17 = v15 & a1[5];
      v18 = v11;
      v21 = v17;
      UserData.Ptr = (ULONGLONG)a1 + 4;
      v25 = &v19;
      v27 = &v20;
      v29 = &v21;
      v31 = &v56;
      v33 = &a5;
      v35 = &a6;
      v37 = &a7;
      v39 = &a8;
      v41 = &a9;
      v43 = v14 + 8;
      v45 = &v55;
      v47 = &a10;
      v49 = &a11;
      v51 = &v18;
      v53 = v14 + 6;
      *(_QWORD *)&UserData.Size = 2LL;
      v24 = 8LL;
      v26 = 8LL;
      v28 = 8LL;
      v30 = 8LL;
      v32 = 1LL;
      v34 = 1LL;
      v36 = 8LL;
      v38 = 8LL;
      v40 = 8LL;
      v42 = 8LL;
      v44 = 2LL;
      v46 = 1LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 1LL;
      v54 = 2LL;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_SELECTION_V2, 0LL, 0, 0LL, 0LL, 0x11u, &UserData);
    }
  }
}
