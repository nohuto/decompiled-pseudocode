/*
 * XREFs of PopTransitionTelemetryOsState @ 0x140A80E74
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A2CF10 (PopDiagTraceControlCallback.c)
 *     PopNotifyTelemetryOsState @ 0x140AA6FA4 (PopNotifyTelemetryOsState.c)
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 *     PopDiagInitialize @ 0x140C30FC0 (PopDiagInitialize.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404C3E84 (TelemetryCoverageStringHashInternal.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopMeasureEnergyChange @ 0x140A81364 (PopMeasureEnergyChange.c)
 */

__int64 __fastcall PopTransitionTelemetryOsState(int a1, int a2)
{
  unsigned int v4; // esi
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ecx
  unsigned __int64 v9; // kr00_8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rcx
  unsigned int v14; // r14d
  int v15; // ecx
  char v16; // al
  char **v17; // rcx
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v19; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-BCh]
  int v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h]
  int v26; // [rsp+58h] [rbp-B0h]
  int v27; // [rsp+5Ch] [rbp-ACh]
  int v28; // [rsp+60h] [rbp-A8h] BYREF
  int v29; // [rsp+64h] [rbp-A4h]
  int v30; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v31; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v32; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-94h] BYREF
  int v34; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v36; // [rsp+80h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-80h] BYREF
  __int64 v38; // [rsp+90h] [rbp-78h]
  __m128i v39; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v41; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v46; // [rsp+D8h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+F8h] [rbp-10h] BYREF
  __int16 *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  __int16 *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  __m128i *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  int *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  __int64 *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  unsigned __int64 *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  unsigned __int64 *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  unsigned __int64 *v62; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]
  int *v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  int *v66; // [rsp+1A8h] [rbp+A0h]
  __int64 v67; // [rsp+1B0h] [rbp+A8h]
  int *v68; // [rsp+1B8h] [rbp+B0h]
  __int64 v69; // [rsp+1C0h] [rbp+B8h]
  int *v70; // [rsp+1C8h] [rbp+C0h]
  __int64 v71; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v72; // [rsp+1D8h] [rbp+D0h]
  __int64 v73; // [rsp+1E0h] [rbp+D8h]
  unsigned int *v74; // [rsp+1E8h] [rbp+E0h]
  __int64 v75; // [rsp+1F0h] [rbp+E8h]
  unsigned int *v76; // [rsp+1F8h] [rbp+F0h]
  __int64 v77; // [rsp+200h] [rbp+F8h]
  __int64 *v78; // [rsp+208h] [rbp+100h]
  __int64 v79; // [rsp+210h] [rbp+108h]
  int *v80; // [rsp+218h] [rbp+110h]
  __int64 v81; // [rsp+220h] [rbp+118h]
  int *v82; // [rsp+228h] [rbp+120h]
  __int64 v83; // [rsp+230h] [rbp+128h]
  int *v84; // [rsp+238h] [rbp+130h]
  __int64 v85; // [rsp+240h] [rbp+138h]
  __int64 *v86; // [rsp+248h] [rbp+140h]
  __int64 v87; // [rsp+250h] [rbp+148h]

  LODWORD(v38) = 0;
  v37 = 0LL;
  v4 = 0;
  if ( !dword_140E07680 )
    return v4;
  v6 = 0x800000000000LL;
  if ( (qword_140E07690 & 0x800000000000LL) == 0
    || !byte_140F0A9CC
    || (qword_140E07698 & 0x800000000000LL) != qword_140E07698 )
  {
    return v4;
  }
  v7 = a1 - 2;
  if ( !v7 )
  {
    if ( a2 == 2 )
    {
      if ( (unsigned int)dword_140E0765C >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_14;
      if ( !dword_140E07658 )
        dword_140E07658 = TelemetryCoverageStringHashInternal(off_140E07650, &v18);
      v17 = &off_140E07650;
    }
    else
    {
      if ( (unsigned int)dword_140E07644 >= MEMORY[0xFFFFF7800000037C] )
        goto LABEL_14;
      if ( !dword_140E07640 )
        dword_140E07640 = TelemetryCoverageStringHashInternal(off_140E07638, &v18);
      v17 = &off_140E07638;
    }
    goto LABEL_34;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      switch ( a2 )
      {
        case 3:
          if ( (unsigned int)dword_140E075B4 >= MEMORY[0xFFFFF7800000037C] )
            goto LABEL_14;
          if ( !dword_140E075B0 )
            dword_140E075B0 = TelemetryCoverageStringHashInternal(off_140E075A8, &v18);
          v17 = &off_140E075A8;
          goto LABEL_34;
        case 4:
          if ( (unsigned int)dword_140E0759C >= MEMORY[0xFFFFF7800000037C] )
            goto LABEL_14;
          if ( !dword_140E07598 )
            dword_140E07598 = TelemetryCoverageStringHashInternal(off_140E07590, &v18);
          v17 = &off_140E07590;
          goto LABEL_34;
        case 5:
          if ( (unsigned int)dword_140E07584 >= MEMORY[0xFFFFF7800000037C] )
            goto LABEL_14;
          if ( !dword_140E07580 )
            dword_140E07580 = TelemetryCoverageStringHashInternal(off_140E07578, &v18);
          v17 = &off_140E07578;
          goto LABEL_34;
        case 6:
          if ( (unsigned int)dword_140E0756C >= MEMORY[0xFFFFF7800000037C] )
            goto LABEL_14;
          if ( !dword_140E07568 )
            dword_140E07568 = TelemetryCoverageStringHashInternal(off_140E07560, &v18);
          v17 = &off_140E07560;
          goto LABEL_34;
      }
      if ( a2 == 8 && (unsigned int)dword_140E07674 < MEMORY[0xFFFFF7800000037C] )
      {
        if ( !dword_140E07670 )
          dword_140E07670 = TelemetryCoverageStringHashInternal(off_140E07668, &v18);
        v17 = &off_140E07668;
LABEL_34:
        EtwTelemetryCoverageReport((__int64)v17, v6);
      }
    }
  }
  else
  {
    switch ( a2 )
    {
      case 3:
        if ( (unsigned int)dword_140E0762C < MEMORY[0xFFFFF7800000037C] )
        {
          if ( !dword_140E07628 )
          {
            v6 = (__int64)off_140E07620;
            v15 = -2128831035;
            v16 = *off_140E07620;
            if ( !*off_140E07620 )
              goto LABEL_32;
            do
            {
              ++v6;
              v15 = v16 + 16777619 * v15;
              v16 = *(_BYTE *)v6;
            }
            while ( *(_BYTE *)v6 );
            dword_140E07628 = 1;
            if ( v15 )
LABEL_32:
              dword_140E07628 = v15;
          }
          v17 = &off_140E07620;
          goto LABEL_34;
        }
        break;
      case 4:
        if ( (unsigned int)dword_140E07614 >= MEMORY[0xFFFFF7800000037C] )
          break;
        if ( !dword_140E07610 )
          dword_140E07610 = TelemetryCoverageStringHashInternal(off_140E07608, &v18);
        v17 = &off_140E07608;
        goto LABEL_34;
      case 5:
        if ( (unsigned int)dword_140E075FC >= MEMORY[0xFFFFF7800000037C] )
          break;
        if ( !dword_140E075F8 )
          dword_140E075F8 = TelemetryCoverageStringHashInternal(off_140E075F0, &v18);
        v17 = &off_140E075F0;
        goto LABEL_34;
      case 6:
        if ( (unsigned int)dword_140E075E4 >= MEMORY[0xFFFFF7800000037C] )
          break;
        if ( !dword_140E075E0 )
          dword_140E075E0 = TelemetryCoverageStringHashInternal(off_140E075D8, &v18);
        v17 = &off_140E075D8;
        goto LABEL_34;
      default:
        if ( a2 == 8 && (unsigned int)dword_140E075CC < MEMORY[0xFFFFF7800000037C] )
        {
          if ( !dword_140E075C8 )
            dword_140E075C8 = TelemetryCoverageStringHashInternal(off_140E075C0, &v18);
          v17 = &off_140E075C0;
          goto LABEL_34;
        }
        break;
    }
  }
LABEL_14:
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopTelemetryOsState);
  v4 = dword_140F0A9C8;
  if ( a1 != 5 || dword_140F0A990 == 1 || (unsigned int)(dword_140F0A990 - 4) <= 1 )
  {
    v9 = MEMORY[0xFFFFF78000000008] - qword_140F0A9A8 - MEMORY[0xFFFFF780000003B0];
    v10 = v9 / 0x2710 - qword_140F0A9B8;
    v11 = (MEMORY[0xFFFFF78000000008] - qword_140F0A9A0) / 0x2710uLL;
    qword_140F0A9B8 = v9 / 0x2710;
    v12 = v11 - qword_140F0A9B0;
    qword_140F0A9B0 = v11;
    v13 = v12;
    if ( v10 <= v12 )
      v13 = v10;
    v40 = v13;
    v27 = ++dword_140F0A9C0;
    v25 = dword_140F0A990;
    v26 = dword_140F0A994;
    if ( a1 != 5 )
    {
      ++dword_140F0A9C4;
      dword_140F0A990 = a1;
      dword_140F0A994 = a2;
      if ( a1 == 1 || a1 == 4 )
        ++dword_140F0A9C8;
    }
    v4 = dword_140F0A9C8;
    v29 = dword_140F0A9C4;
    PopReleaseRwLock(&PopTelemetryOsState);
    PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0BE90);
    v39 = (__m128i)xmmword_140F0BEA0;
    v46 = xmmword_140F0BEA0;
    PopReleaseRwLock((signed __int64 *)&xmmword_140F0BE90);
    v23 = 0;
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v39, 8));
    if ( v14 )
      v23 = 100 * HIDWORD(v46) / v14;
    PopMeasureEnergyChange(&v37, &OsStateChangeEnergyCounter);
    v36 = qword_140F0A998;
    if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x800000000000LL) )
    {
      v19 = a1;
      v48 = &v19;
      v50 = &v20;
      v52 = &v39;
      v49 = 2LL;
      v20 = a2;
      v51 = 2LL;
      v39.m128i_i64[0] = v12;
      v53 = 8LL;
      v24 = MEMORY[0xFFFFF780000002C4];
      v54 = &v24;
      v56 = &v36;
      v41 = v40;
      v58 = &v41;
      v60 = &v42;
      v62 = &v43;
      LOWORD(v21) = v25;
      v64 = &v21;
      LOWORD(v22) = v26;
      v66 = &v22;
      v28 = v27;
      v68 = &v28;
      v30 = v29;
      v70 = &v30;
      v72 = &v31;
      v74 = &v32;
      v33 = v23;
      v76 = &v33;
      v44 = v38;
      v78 = &v44;
      v34 = v37;
      v80 = &v34;
      v35 = (unsigned __int8)v46;
      v82 = &v35;
      v55 = 4LL;
      v57 = 8LL;
      v59 = 8LL;
      v42 = v11;
      v61 = 8LL;
      v43 = v9 / 0x2710;
      v63 = 8LL;
      v65 = 2LL;
      v67 = 2LL;
      v69 = 4LL;
      v71 = 4LL;
      v31 = v4;
      v73 = 4LL;
      v32 = v14;
      v75 = 4LL;
      v77 = 4LL;
      v79 = 8LL;
      v81 = 4LL;
      v83 = 4LL;
      v86 = &v45;
      v18 = BYTE3(v46);
      v84 = &v18;
      v85 = 4LL;
      v45 = 0x1000000LL;
      v87 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E07680,
        (unsigned __int8 *)byte_1400494F8,
        0LL,
        0LL,
        0x16u,
        &v47);
    }
  }
  else
  {
    PopReleaseRwLock(&PopTelemetryOsState);
  }
  return v4;
}
