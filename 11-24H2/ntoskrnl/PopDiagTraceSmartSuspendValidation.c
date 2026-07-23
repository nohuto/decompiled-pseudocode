/*
 * XREFs of PopDiagTraceSmartSuspendValidation @ 0x140A8C384
 * Callers:
 *     PopSmartSuspendValidateSinglePrediction @ 0x140A8C254 (PopSmartSuspendValidateSinglePrediction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopSystemTimeToLocalTime @ 0x1404B1D9C (PopSystemTimeToLocalTime.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

unsigned __int8 PopDiagTraceSmartSuspendValidation()
{
  unsigned __int8 result; // al
  char *v1; // r10
  char v2; // [rsp+30h] [rbp-D0h] BYREF
  char v3; // [rsp+31h] [rbp-CFh] BYREF
  char v4; // [rsp+32h] [rbp-CEh] BYREF
  char v5; // [rsp+33h] [rbp-CDh] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  int *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  int *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  char *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  char *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  int *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  __int64 *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  __int64 *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  char *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  char *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  int *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  __int64 *v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]
  __int64 *v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  int *v49; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  int *v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]
  __int64 *v53; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1B8h] [rbp+B8h]
  __int64 *v55; // [rsp+1C0h] [rbp+C0h]
  __int64 v56; // [rsp+1C8h] [rbp+C8h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
  result = (unsigned __int8)PopSystemTimeToLocalTime();
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL);
    if ( result )
    {
      v22 = 8LL;
      v21 = &v13;
      v6 = *((_DWORD *)v1 + 18);
      v23 = &v6;
      v7 = *((_DWORD *)v1 + 17);
      v25 = &v7;
      v8 = *((_DWORD *)v1 + 1);
      v27 = &v8;
      v2 = *v1;
      v29 = &v2;
      v3 = v1[1];
      v31 = &v3;
      v9 = *((_DWORD *)v1 + 2);
      v33 = &v9;
      v35 = &v14;
      v37 = &v15;
      v4 = v1[2];
      v39 = &v4;
      v5 = v1[3];
      v41 = &v5;
      v10 = *((_DWORD *)v1 + 3);
      v43 = &v10;
      v45 = &v16;
      v47 = &v17;
      v11 = *((_DWORD *)v1 + 19);
      v49 = &v11;
      v12 = *((_DWORD *)v1 + 20);
      v51 = &v12;
      v53 = &v18;
      v55 = &v19;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 1LL;
      v32 = 1LL;
      v34 = 4LL;
      v36 = 8LL;
      v38 = 8LL;
      v40 = 1LL;
      v42 = 1LL;
      v44 = 4LL;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 8LL;
      v19 = 0x2000000LL;
      v56 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07680,
               (unsigned __int8 *)&word_14004B8E6,
               0LL,
               0LL,
               0x14u,
               &v20);
    }
  }
  return result;
}
