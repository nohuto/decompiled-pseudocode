/*
 * XREFs of PopDiagTraceSmartSuspendPrediction @ 0x140756168
 * Callers:
 *     PopSmartSuspendMakePredictions @ 0x140ABAB98 (PopSmartSuspendMakePredictions.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopSystemTimeToLocalTime @ 0x1404B1D9C (PopSystemTimeToLocalTime.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

unsigned __int8 PopDiagTraceSmartSuspendPrediction()
{
  unsigned __int8 result; // al
  char *v1; // r10
  char *v2; // r11
  char v3; // [rsp+30h] [rbp-D0h] BYREF
  char v4; // [rsp+31h] [rbp-CFh] BYREF
  char v5; // [rsp+32h] [rbp-CEh] BYREF
  char v6; // [rsp+33h] [rbp-CDh] BYREF
  char v7; // [rsp+34h] [rbp-CCh] BYREF
  char v8; // [rsp+35h] [rbp-CBh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+88h] [rbp-78h] BYREF
  __int64 v22; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  int *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  int *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  int *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  char *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  char *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  int *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  __int64 *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  __int64 *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  char *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  char *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  int *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  __int64 *v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  __int64 *v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  char *v53; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h]
  __int64 *v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]
  __int64 *v57; // [rsp+1C0h] [rbp+C0h]
  __int64 v58; // [rsp+1C8h] [rbp+C8h]
  char *v59; // [rsp+1D0h] [rbp+D0h]
  __int64 v60; // [rsp+1D8h] [rbp+D8h]
  __int64 *v61; // [rsp+1E0h] [rbp+E0h]
  __int64 v62; // [rsp+1E8h] [rbp+E8h]
  __int64 *v63; // [rsp+1F0h] [rbp+F0h]
  __int64 v64; // [rsp+1F8h] [rbp+F8h]
  __int64 *v65; // [rsp+200h] [rbp+100h]
  __int64 v66; // [rsp+208h] [rbp+108h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
  PopSystemTimeToLocalTime();
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
      v26 = 8LL;
      v25 = &v14;
      v9 = *((_DWORD *)v1 + 18);
      v27 = &v9;
      v10 = *((_DWORD *)v1 + 17);
      v29 = &v10;
      v11 = *((_DWORD *)v1 + 1);
      v31 = &v11;
      v3 = *v1;
      v33 = &v3;
      v4 = v1[1];
      v35 = &v4;
      v12 = *((_DWORD *)v1 + 2);
      v37 = &v12;
      v39 = &v15;
      v41 = &v16;
      v5 = v1[2];
      v43 = &v5;
      v6 = v1[3];
      v45 = &v6;
      v13 = *((_DWORD *)v1 + 3);
      v47 = &v13;
      v49 = &v17;
      v51 = &v18;
      v7 = *v2;
      v53 = &v7;
      v55 = &v19;
      v57 = &v20;
      v8 = v2[2];
      v59 = &v8;
      v61 = &v21;
      v63 = &v22;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 1LL;
      v36 = 1LL;
      v38 = 4LL;
      v40 = 8LL;
      v42 = 8LL;
      v44 = 1LL;
      v46 = 1LL;
      v48 = 4LL;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 1LL;
      v56 = 8LL;
      v58 = 8LL;
      v60 = 1LL;
      v62 = 8LL;
      v64 = 8LL;
      v65 = &v23;
      v23 = 0x2000000LL;
      v66 = 8LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07680,
               (unsigned __int8 *)&word_14004BA2E,
               0LL,
               0LL,
               0x17u,
               &v24);
    }
  }
  return result;
}
