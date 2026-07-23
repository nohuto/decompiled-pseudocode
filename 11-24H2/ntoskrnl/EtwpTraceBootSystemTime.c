/*
 * XREFs of EtwpTraceBootSystemTime @ 0x140C3FB14
 * Callers:
 *     EtwpTraceSystemInitialization @ 0x140C3FD6C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char EtwpTraceBootSystemTime()
{
  _UNKNOWN **v0; // rax
  char v2; // [rsp+48h] [rbp-C0h] BYREF
  char v3; // [rsp+49h] [rbp-BFh] BYREF
  char v4; // [rsp+4Ah] [rbp-BEh] BYREF
  int v5; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v6; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v11; // [rsp+88h] [rbp-80h]
  __int64 v12; // [rsp+90h] [rbp-78h]
  __int64 *v13; // [rsp+98h] [rbp-70h]
  __int64 v14; // [rsp+A0h] [rbp-68h]
  int *v15; // [rsp+A8h] [rbp-60h]
  __int64 v16; // [rsp+B0h] [rbp-58h]
  int *v17; // [rsp+B8h] [rbp-50h]
  __int64 v18; // [rsp+C0h] [rbp-48h]
  int *v19; // [rsp+C8h] [rbp-40h]
  __int64 v20; // [rsp+D0h] [rbp-38h]
  int *v21; // [rsp+D8h] [rbp-30h]
  __int64 v22; // [rsp+E0h] [rbp-28h]
  int *v23; // [rsp+E8h] [rbp-20h]
  __int64 v24; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v26; // [rsp+118h] [rbp+10h]
  __int64 v27; // [rsp+120h] [rbp+18h]
  __int64 *v28; // [rsp+128h] [rbp+20h]
  __int64 v29; // [rsp+130h] [rbp+28h]
  __int64 *v30; // [rsp+138h] [rbp+30h]
  __int64 v31; // [rsp+140h] [rbp+38h]
  int *v32; // [rsp+148h] [rbp+40h]
  __int64 v33; // [rsp+150h] [rbp+48h]
  char *v34; // [rsp+158h] [rbp+50h]
  __int64 v35; // [rsp+160h] [rbp+58h]
  char *v36; // [rsp+168h] [rbp+60h]
  __int64 v37; // [rsp+170h] [rbp+68h]
  char *v38; // [rsp+178h] [rbp+70h]
  __int64 v39; // [rsp+180h] [rbp+78h]
  __int64 *v40; // [rsp+188h] [rbp+80h]
  __int64 v41; // [rsp+190h] [rbp+88h]
  _UNKNOWN *retaddr; // [rsp+1B0h] [rbp+A8h] BYREF

  v0 = &retaddr;
  if ( (unsigned int)dword_140E09198 > 5 )
  {
    LOBYTE(v0) = tlgKeywordOn((__int64)&dword_140E09198, 0x200000000000LL);
    if ( (_BYTE)v0 )
    {
      v7 = KeBootTimeInfo;
      v27 = 8LL;
      v26 = &v7;
      v8 = qword_140FC70F8;
      v28 = &v8;
      v9 = qword_140FC7100;
      v30 = &v9;
      v5 = dword_140FC7108;
      v32 = &v5;
      v2 = ExpRealTimeIsUniversal;
      v34 = &v2;
      v3 = dword_140FC7110;
      v36 = &v3;
      v4 = dword_140FC7114;
      v38 = &v4;
      LODWORD(v6) = dword_140FC7118;
      v40 = &v6;
      v29 = 8LL;
      v31 = 8LL;
      v33 = 4LL;
      v35 = 1LL;
      v37 = 1LL;
      v39 = 1LL;
      v41 = 4LL;
      LOBYTE(v0) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140E09198,
                     (unsigned __int8 *)byte_140053998,
                     0LL,
                     0LL,
                     0xAu,
                     &v25);
    }
  }
  if ( EtwKernelProvRegHandle )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = (ULONGLONG)&KeBootTimeInfo;
    v12 = 8LL;
    v11 = &qword_140FC70F8;
    v14 = 8LL;
    v13 = &qword_140FC7100;
    v16 = 4LL;
    v15 = &dword_140FC7108;
    v17 = &ExpRealTimeIsUniversal;
    v19 = &dword_140FC7110;
    v21 = &dword_140FC7114;
    v23 = &dword_140FC7118;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 4LL;
    v24 = 4LL;
    LOBYTE(v0) = EtwWriteEx(EtwKernelProvRegHandle, &KernelBootSystemTime, 0LL, 0, 0LL, 0LL, 8u, &UserData);
  }
  return (char)v0;
}
