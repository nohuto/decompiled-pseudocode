/*
 * XREFs of PopDiagTraceCsResiliencyStats @ 0x140AB1F28
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140AB8394 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceCsResiliencyStats(int *a1)
{
  int v1; // r9d
  __int64 v2; // r8
  int v3; // r10d
  __int64 v4; // r11
  char v5; // al
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  int v8; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+3Ch] [rbp-C4h] BYREF
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+4Ch] [rbp-B4h] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+88h] [rbp-78h] BYREF
  __int64 v22; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  int *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  int *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  __int64 *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  __int64 *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  int *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  int *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]
  int *v43; // [rsp+150h] [rbp+50h]
  __int64 v44; // [rsp+158h] [rbp+58h]
  int *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  __int64 *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  __int64 *v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  __int64 *v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  __int64 *v53; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h]
  int *v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h]
  __int64 *v57; // [rsp+1C0h] [rbp+C0h]
  __int64 v58; // [rsp+1C8h] [rbp+C8h]
  __int64 *v59; // [rsp+1D0h] [rbp+D0h]
  __int64 v60; // [rsp+1D8h] [rbp+D8h]
  __int64 *v61; // [rsp+1E0h] [rbp+E0h]
  __int64 v62; // [rsp+1E8h] [rbp+E8h]
  int *v63; // [rsp+1F0h] [rbp+F0h]
  __int64 v64; // [rsp+1F8h] [rbp+F8h]
  __int64 *v65; // [rsp+200h] [rbp+100h]
  __int64 v66; // [rsp+208h] [rbp+108h]
  __int64 *v67; // [rsp+210h] [rbp+110h]
  __int64 v68; // [rsp+218h] [rbp+118h]
  __int64 *v69; // [rsp+220h] [rbp+120h]
  __int64 v70; // [rsp+228h] [rbp+128h]
  int *v71; // [rsp+230h] [rbp+130h]
  __int64 v72; // [rsp+238h] [rbp+138h]
  int *v73; // [rsp+240h] [rbp+140h]
  __int64 v74; // [rsp+248h] [rbp+148h]

  v1 = a1[28];
  v2 = 0LL;
  if ( v1 )
    v2 = *((_QWORD *)a1 + 12);
  v3 = a1[36];
  v4 = 0LL;
  if ( v3 )
    v4 = *((_QWORD *)a1 + 16);
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    if ( (qword_140E07690 & 0x400000000000LL) == 0 || (v5 = 1, (qword_140E07698 & 0x400000000000LL) != qword_140E07698) )
      v5 = 0;
    if ( v5 )
    {
      v15 = PopWdiCurrentScenarioInstanceId;
      v29 = &v15;
      v6 = *a1;
      v31 = &v6;
      v7 = a1[8];
      v33 = &v7;
      v16 = *((_QWORD *)a1 + 6);
      v35 = &v16;
      v17 = (unsigned int)a1[10];
      v37 = &v17;
      v8 = a1[14];
      v39 = &v8;
      v9 = a1[15];
      v41 = &v9;
      v10 = a1[16];
      v43 = &v10;
      v11 = a1[17];
      v45 = &v11;
      v18 = *((_QWORD *)a1 + 1);
      v47 = &v18;
      v19 = *((_QWORD *)a1 + 3);
      v49 = &v19;
      v20 = *((_QWORD *)a1 + 2);
      v51 = &v20;
      v21 = *((_QWORD *)a1 + 9);
      v53 = &v21;
      v12 = a1[20];
      v55 = &v12;
      v57 = &v22;
      v23 = *((_QWORD *)a1 + 11);
      v59 = &v23;
      v24 = *((_QWORD *)a1 + 13);
      v30 = 8LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 8LL;
      v38 = 8LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 4LL;
      v22 = v2;
      v58 = 8LL;
      v60 = 8LL;
      v13 = v1;
      v61 = &v24;
      v62 = 8LL;
      v63 = &v13;
      v64 = 4LL;
      v65 = &v25;
      v26 = *((_QWORD *)a1 + 15);
      v67 = &v26;
      v27 = *((_QWORD *)a1 + 17);
      v69 = &v27;
      v71 = &v14;
      v73 = a1 + 38;
      v25 = v4;
      v66 = 8LL;
      v68 = 8LL;
      v70 = 8LL;
      v14 = v3;
      v72 = 4LL;
      v74 = 88LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)&word_140048D4E,
        0LL,
        0LL,
        0x19u,
        &v28);
    }
  }
}
