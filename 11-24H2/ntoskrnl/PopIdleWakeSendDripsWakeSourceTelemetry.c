/*
 * XREFs of PopIdleWakeSendDripsWakeSourceTelemetry @ 0x140A66214
 * Callers:
 *     PopIdleWakeTraceWakeSourceDiagnostic @ 0x140A6614C (PopIdleWakeTraceWakeSourceDiagnostic.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopIdleWakeSendDripsWakeSourceTelemetry(__int64 a1, int *a2, char a3)
{
  unsigned __int16 *v3; // rdi
  int v4; // r14d
  __int64 v7; // rbx
  int v8; // r10d
  char v9; // r8
  unsigned int v10; // edx
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edx
  int v15; // eax
  __int64 v16; // rax
  __int128 *v17; // rax
  __int64 v18; // r9
  int *v19; // rdi
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v22; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  __int128 v32; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 *v33; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  int *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  _DWORD *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  __int64 v41; // [rsp+108h] [rbp+0h]
  _DWORD v42[2]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  __int64 v45; // [rsp+128h] [rbp+20h]
  _DWORD v46[2]; // [rsp+130h] [rbp+28h] BYREF
  _DWORD *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  __int64 v49; // [rsp+148h] [rbp+40h]
  _DWORD v50[2]; // [rsp+150h] [rbp+48h] BYREF
  __int64 *v51; // [rsp+158h] [rbp+50h]
  __int64 v52; // [rsp+160h] [rbp+58h]
  __int64 *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h]
  __int64 *v55; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+180h] [rbp+78h]
  __int64 *v57; // [rsp+188h] [rbp+80h]
  __int64 v58; // [rsp+190h] [rbp+88h]
  int *v59; // [rsp+198h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+98h]
  __int64 v61; // [rsp+1A8h] [rbp+A0h]
  int v62; // [rsp+1B0h] [rbp+A8h]
  int v63; // [rsp+1B4h] [rbp+ACh]
  void *v64; // [rsp+1B8h] [rbp+B0h]
  __int64 v65; // [rsp+1C0h] [rbp+B8h]
  __int64 v66; // [rsp+1C8h] [rbp+C0h]
  __int64 v67; // [rsp+1D0h] [rbp+C8h]
  void *v68; // [rsp+1D8h] [rbp+D0h]
  __int64 v69; // [rsp+1E0h] [rbp+D8h]
  __int64 v70; // [rsp+1E8h] [rbp+E0h]
  __int64 v71; // [rsp+1F0h] [rbp+E8h]
  int *v72; // [rsp+1F8h] [rbp+F0h]
  __int64 v73; // [rsp+200h] [rbp+F8h]
  __int64 *v74; // [rsp+208h] [rbp+100h]
  __int64 v75; // [rsp+210h] [rbp+108h]
  __int64 v76; // [rsp+218h] [rbp+110h]
  __int64 v77; // [rsp+220h] [rbp+118h]
  __int64 v78; // [rsp+228h] [rbp+120h]
  __int64 v79; // [rsp+230h] [rbp+128h]
  __int64 *v80; // [rsp+238h] [rbp+130h]
  __int64 v81; // [rsp+240h] [rbp+138h]
  __int64 v82; // [rsp+248h] [rbp+140h]
  __int64 v83; // [rsp+250h] [rbp+148h]
  __int64 v84; // [rsp+258h] [rbp+150h]
  __int64 v85; // [rsp+260h] [rbp+158h]
  __int64 *v86; // [rsp+268h] [rbp+160h]
  __int64 v87; // [rsp+270h] [rbp+168h]
  __int64 v88; // [rsp+278h] [rbp+170h]
  __int64 v89; // [rsp+280h] [rbp+178h]
  __int64 v90; // [rsp+288h] [rbp+180h]
  __int64 v91; // [rsp+290h] [rbp+188h]
  __int64 *v92; // [rsp+298h] [rbp+190h]
  __int64 v93; // [rsp+2A0h] [rbp+198h]
  __int64 v94; // [rsp+2A8h] [rbp+1A0h]
  __int64 v95; // [rsp+2B0h] [rbp+1A8h]
  __int64 v96; // [rsp+2B8h] [rbp+1B0h]
  __int64 v97; // [rsp+2C0h] [rbp+1B8h]

  v3 = 0LL;
  v33 = 0LL;
  v4 = a3 != 0;
  v7 = (__int64)a2 + (-v4 & 0x178) + 8;
  DestinationString = 0LL;
  v32 = 0LL;
  if ( !*(_DWORD *)v7 )
    return;
  RtlInitUnicodeString(&DestinationString, &word_140AEDAC0);
  v8 = *a2;
  v9 = 1;
  if ( *a2 != 128 )
  {
    v10 = 1;
    *(_QWORD *)&v32 = a2 + 192;
LABEL_4:
    memset64((char *)&v32 + 8 * v10, (unsigned __int64)&DestinationString, 3 - v10);
    v3 = v33;
    goto LABEL_6;
  }
  v10 = a2[196];
  if ( v10 <= 3 )
  {
    if ( !v10 )
      goto LABEL_5;
  }
  else
  {
    v10 = 3;
  }
  v17 = &v32;
  v18 = v10;
  v19 = a2 + 198;
  do
  {
    *(_QWORD *)v17 = v19;
    v19 += 4;
    v17 = (__int128 *)((char *)v17 + 8);
    --v18;
  }
  while ( v18 );
  v3 = v33;
LABEL_5:
  if ( v10 < 3 )
    goto LABEL_4;
LABEL_6:
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    if ( (qword_140E07690 & 0x400000000000LL) == 0 || (qword_140E07698 & 0x400000000000LL) != qword_140E07698 )
      v9 = 0;
    if ( v9 )
    {
      v23 = a1;
      v35 = &v23;
      v37 = &v21;
      v36 = 8LL;
      v21 = v8;
      v38 = 4LL;
      v11 = *(unsigned __int16 *)v32;
      v12 = *(_QWORD *)(v32 + 8);
      v39 = v42;
      v41 = v12;
      v42[0] = v11;
      v40 = 2LL;
      v42[1] = 0;
      v13 = *(_QWORD *)(*((_QWORD *)&v32 + 1) + 8LL);
      v14 = (unsigned __int16)**((_WORD **)&v32 + 1);
      v43 = v46;
      v45 = v13;
      v46[0] = v14;
      v44 = 2LL;
      v46[1] = 0;
      LODWORD(v13) = *v3;
      v49 = *((_QWORD *)v3 + 1);
      LODWORD(v22) = *(_DWORD *)v7;
      v51 = &v22;
      v24 = *(_QWORD *)(v7 + 8);
      v53 = &v24;
      v25 = *(_QWORD *)(v7 + 16);
      v55 = &v25;
      v26 = *(_QWORD *)(v7 + 24);
      v57 = &v26;
      v61 = (__int64)a2 + 850;
      v50[0] = v13;
      v15 = *((unsigned __int16 *)a2 + 424);
      v59 = a2 + 212;
      v47 = v50;
      v48 = 2LL;
      v50[1] = 0;
      v52 = 4LL;
      v64 = &PopIdleWakeIdleAccountingBucketLimitsMs;
      LODWORD(v13) = 10 * v15;
      v54 = 8LL;
      v66 = v7 + 32;
      v68 = &PopIdleWakePeriodAccountingBucketLimitsMs;
      v70 = v7 + 68;
      v72 = &v20;
      v16 = *(_QWORD *)(v7 + 112);
      v56 = 8LL;
      v58 = 8LL;
      v60 = 2LL;
      v62 = v13;
      v63 = 0;
      v65 = 80LL;
      v67 = 36LL;
      v69 = 96LL;
      v71 = 44LL;
      v20 = v4;
      v73 = 4LL;
      v27 = v16;
      v75 = 8LL;
      v74 = &v27;
      v77 = 20LL;
      v76 = v7 + 120;
      v79 = 40LL;
      v78 = v7 + 144;
      v28 = *(_QWORD *)(v7 + 184);
      v80 = &v28;
      v82 = v7 + 192;
      v84 = v7 + 216;
      v29 = *(_QWORD *)(v7 + 256);
      v86 = &v29;
      v88 = v7 + 264;
      v90 = v7 + 288;
      v30 = *(_QWORD *)(v7 + 328);
      v92 = &v30;
      v94 = v7 + 336;
      v96 = v7 + 352;
      v81 = 8LL;
      v83 = 20LL;
      v85 = 40LL;
      v87 = 8LL;
      v89 = 20LL;
      v91 = 40LL;
      v93 = 8LL;
      v95 = 12LL;
      v97 = 24LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)word_14004DB92,
        0LL,
        0LL,
        0x21u,
        &v34);
    }
  }
}
