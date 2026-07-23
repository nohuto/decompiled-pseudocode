/*
 * XREFs of PopPowerAggregatorDiagTraceHandleIntent @ 0x1409A2A64
 * Callers:
 *     PopPowerAggregatorRecordIntent @ 0x1409A28B0 (PopPowerAggregatorRecordIntent.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopPowerAggregatorDiagTraceHandleIntent(
        int a1,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        int a6,
        __int64 a7)
{
  _DWORD *v7; // rdi
  __int64 v8; // rsi
  int *v10; // rax
  char v11; // r8
  int v12; // r9d
  int v13; // r10d
  int v14; // r11d
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  int *v26; // [rsp+78h] [rbp-90h]
  __int64 v27; // [rsp+80h] [rbp-88h]
  int *v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  int *v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  _DWORD *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  __int64 *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  int *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  __int64 v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+F8h] [rbp-10h] BYREF
  int *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  int *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  int *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  int *v49; // [rsp+148h] [rbp+40h]
  __int64 v50; // [rsp+150h] [rbp+48h]
  __int64 *v51; // [rsp+158h] [rbp+50h]
  __int64 v52; // [rsp+160h] [rbp+58h]
  _DWORD *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h]
  __int64 v55; // [rsp+178h] [rbp+70h]
  _DWORD v56[2]; // [rsp+180h] [rbp+78h] BYREF
  int *v57; // [rsp+188h] [rbp+80h]
  __int64 v58; // [rsp+190h] [rbp+88h]
  __int64 *v59; // [rsp+198h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+98h]
  int v61; // [rsp+1E8h] [rbp+E0h] BYREF
  int v62; // [rsp+1F0h] [rbp+E8h] BYREF
  int v63; // [rsp+1F8h] [rbp+F0h] BYREF

  v63 = a3;
  v62 = a2;
  v61 = a1;
  v7 = a5;
  v8 = a7;
  UserData.Ptr = (ULONGLONG)&v61;
  v26 = &v62;
  v28 = &v63;
  *(_QWORD *)&UserData.Size = 4LL;
  v30 = &a6;
  v36 = &v23;
  v10 = &v17;
  v38 = &v17;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v32 = a4;
  v33 = 4LL;
  v34 = (__int64)a5;
  v35 = 4LL;
  v23 = 0LL;
  v37 = 8LL;
  v17 = 24;
  v39 = 4LL;
  v40 = a7;
  v41 = 24LL;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v10) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_HANDLE_INTENT);
    if ( (_BYTE)v10 )
      LOBYTE(v10) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POWER_AGGREGATOR_HANDLE_INTENT, 0LL, 9u, &UserData);
  }
  if ( *a4 != *v7 && a6 >= 0 && (unsigned int)dword_140E07680 > 5 )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL);
    if ( (_BYTE)v10 )
    {
      v18 = v61;
      v21 = v12;
      v43 = &v18;
      v19 = v63;
      v45 = &v19;
      v47 = &v20;
      v49 = &v21;
      v51 = &v22;
      v53 = v56;
      v56[0] = v17;
      v57 = &v16;
      v59 = &v24;
      LOBYTE(v16) = v11;
      v44 = 4LL;
      v46 = 4LL;
      v20 = v13;
      v48 = 4LL;
      v50 = 4LL;
      LODWORD(v22) = v14;
      v52 = 4LL;
      v54 = 2LL;
      v55 = v8;
      v56[1] = 0;
      v58 = 1LL;
      v24 = 0x1000000LL;
      v60 = 8LL;
      LOBYTE(v10) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E07680,
                      (unsigned __int8 *)byte_1400501D9,
                      0LL,
                      0LL,
                      0xBu,
                      &v42);
    }
  }
  return (char)v10;
}
