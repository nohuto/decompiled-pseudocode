/*
 * XREFs of HUBPDO_ReportDeviceFailure @ 0x14001A920
 * Callers:
 *     HUBDSM_MarkingUnknownDeviceAsFailed @ 0x140023480 (HUBDSM_MarkingUnknownDeviceAsFailed.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140002474 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBPDO_GetPortPath @ 0x140018EAC (HUBPDO_GetPortPath.c)
 *     McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer @ 0x14001CDD0 (McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ddddddDDD @ 0x14001DA34 (WPP_RECORDER_SF_ddddddDDD.c)
 *     _tlgWriteAgg @ 0x140045AC4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     HUBREG_GetVidPidRevForPort @ 0x140088424 (HUBREG_GetVidPidRevForPort.c)
 */

__int64 __fastcall HUBPDO_ReportDeviceFailure(__int64 *a1)
{
  __int64 v1; // r15
  int v3; // esi
  int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  int v9; // r13d
  int v10; // r12d
  int v11; // ecx
  int v12; // eax
  __int64 v13; // r9
  __int16 v14; // di
  __int16 v15; // r13
  __int16 v16; // r12
  __int64 v17; // rcx
  int VidPidRevForPort; // eax
  int v19; // edx
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  unsigned __int16 v24; // r9
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  __int16 v41; // cx
  const CHAR *v42; // r9
  __int64 v43; // rcx
  int v44; // ecx
  const CHAR *v45; // r9
  __int64 v46; // rcx
  int v47; // ecx
  const CHAR *v48; // r15
  int v49; // edx
  __int64 *v50; // rax
  void *v51; // rdx
  char v52; // al
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // ecx
  int v59; // eax
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  __int16 v64; // cx
  const CHAR *v65; // r9
  __int64 v66; // rcx
  int v67; // ecx
  const CHAR *v68; // r9
  __int64 v69; // rcx
  int v70; // edx
  __int64 v71; // rax
  int v73; // [rsp+28h] [rbp-160h]
  __int64 v74; // [rsp+30h] [rbp-158h]
  _WORD v75[2]; // [rsp+108h] [rbp-80h] BYREF
  int v76; // [rsp+10Ch] [rbp-7Ch] BYREF
  int v77; // [rsp+110h] [rbp-78h] BYREF
  int v78; // [rsp+114h] [rbp-74h] BYREF
  int v79; // [rsp+118h] [rbp-70h] BYREF
  int v80; // [rsp+11Ch] [rbp-6Ch] BYREF
  int v81; // [rsp+120h] [rbp-68h] BYREF
  int v82; // [rsp+124h] [rbp-64h] BYREF
  int v83; // [rsp+128h] [rbp-60h] BYREF
  int v84; // [rsp+12Ch] [rbp-5Ch] BYREF
  int v85; // [rsp+130h] [rbp-58h] BYREF
  __int64 v86; // [rsp+138h] [rbp-50h] BYREF
  __int64 v87; // [rsp+140h] [rbp-48h] BYREF
  char v88[32]; // [rsp+148h] [rbp-40h] BYREF
  __int64 *v89; // [rsp+168h] [rbp-20h]
  __int64 v90; // [rsp+170h] [rbp-18h]
  int *v91; // [rsp+178h] [rbp-10h]
  __int64 v92; // [rsp+180h] [rbp-8h]
  int *v93; // [rsp+188h] [rbp+0h]
  __int64 v94; // [rsp+190h] [rbp+8h]
  int *v95; // [rsp+198h] [rbp+10h]
  __int64 v96; // [rsp+1A0h] [rbp+18h]
  char *v97; // [rsp+1A8h] [rbp+20h]
  int v98; // [rsp+1B0h] [rbp+28h]
  int v99; // [rsp+1B4h] [rbp+2Ch]
  char *v100; // [rsp+1B8h] [rbp+30h]
  int v101; // [rsp+1C0h] [rbp+38h]
  int v102; // [rsp+1C4h] [rbp+3Ch]
  char *v103; // [rsp+1C8h] [rbp+40h]
  int v104; // [rsp+1D0h] [rbp+48h]
  int v105; // [rsp+1D4h] [rbp+4Ch]
  int *v106; // [rsp+1D8h] [rbp+50h]
  __int64 v107; // [rsp+1E0h] [rbp+58h]
  int *v108; // [rsp+1E8h] [rbp+60h]
  __int64 v109; // [rsp+1F0h] [rbp+68h]
  __int16 *v110; // [rsp+1F8h] [rbp+70h]
  __int64 v111; // [rsp+200h] [rbp+78h]
  int *v112; // [rsp+208h] [rbp+80h]
  __int64 v113; // [rsp+210h] [rbp+88h]
  int *v114; // [rsp+218h] [rbp+90h]
  __int64 v115; // [rsp+220h] [rbp+98h]
  int *v116; // [rsp+228h] [rbp+A0h]
  __int64 v117; // [rsp+230h] [rbp+A8h]
  int *v118; // [rsp+238h] [rbp+B0h]
  __int64 v119; // [rsp+240h] [rbp+B8h]
  int *v120; // [rsp+248h] [rbp+C0h]
  __int64 v121; // [rsp+250h] [rbp+C8h]
  _WORD *v122; // [rsp+258h] [rbp+D0h]
  __int64 v123; // [rsp+260h] [rbp+D8h]
  const CHAR *v124; // [rsp+268h] [rbp+E0h]
  int v125; // [rsp+270h] [rbp+E8h]
  int v126; // [rsp+274h] [rbp+ECh]
  const CHAR *v127; // [rsp+278h] [rbp+F0h]
  int v128; // [rsp+280h] [rbp+F8h]
  int v129; // [rsp+284h] [rbp+FCh]
  const CHAR *v130; // [rsp+288h] [rbp+100h]
  int v131; // [rsp+290h] [rbp+108h]
  int v132; // [rsp+294h] [rbp+10Ch]
  __int64 *v133; // [rsp+298h] [rbp+110h]
  __int64 v134; // [rsp+2A0h] [rbp+118h]
  char pszDest[4]; // [rsp+2A8h] [rbp+120h] BYREF
  char v136; // [rsp+2ACh] [rbp+124h]
  char v137[4]; // [rsp+2B0h] [rbp+128h] BYREF
  char v138; // [rsp+2B4h] [rbp+12Ch]
  char v139[4]; // [rsp+2B8h] [rbp+130h] BYREF
  char v140; // [rsp+2BCh] [rbp+134h]
  __int16 v141; // [rsp+2C0h] [rbp+138h] BYREF
  __int16 v142; // [rsp+2C2h] [rbp+13Ah]
  __int16 v143; // [rsp+2C4h] [rbp+13Ch]
  __int16 v144; // [rsp+2C6h] [rbp+13Eh]
  __int16 v145; // [rsp+2C8h] [rbp+140h]
  unsigned __int16 v146; // [rsp+2CAh] [rbp+142h]

  v1 = *a1;
  LOBYTE(v75[0]) = 0;
  v3 = 0x7FFFFFFF;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
  {
    v4 = *(_DWORD *)(v1 + 168);
    v5 = v1 + 186;
    v6 = v1 + 176;
    if ( v4 != 2 )
    {
      v5 = 0LL;
      v6 = 0LL;
    }
    v7 = v1 + 181;
    if ( v4 != 2 )
      v7 = 0LL;
    if ( v4 == 1 )
    {
      v8 = *(_DWORD *)(v1 + 176);
      v9 = *(_DWORD *)(v1 + 192);
      v10 = *(_DWORD *)(v1 + 188);
      v78 = *(unsigned __int16 *)(v1 + 184);
      v11 = *(_DWORD *)(v1 + 180);
      v76 = v8;
      v12 = *(_DWORD *)(v1 + 196);
      v77 = v11;
      v79 = v12;
    }
    else
    {
      v78 = 0;
      LOBYTE(v9) = 0;
      v77 = 0x7FFFFFFF;
      LOBYTE(v10) = 0;
      v76 = 0x7FFFFFFF;
      v79 = 0;
    }
    v13 = a1[1];
    McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer(
      *(unsigned __int8 *)(v13 + 202),
      *(unsigned __int16 *)(v13 + 200),
      (_DWORD)a1 + 1516,
      a1[3],
      *((_DWORD *)a1 + 608),
      *((_WORD *)a1 + 998),
      *((_WORD *)a1 + 999),
      *((_WORD *)a1 + 1000),
      *((_DWORD *)a1 + 43),
      *((_DWORD *)a1 + 390),
      *((_DWORD *)a1 + 391),
      *(_WORD *)(v13 + 200),
      *(_BYTE *)(v13 + 202),
      *(_DWORD *)(v13 + 208),
      *(_WORD *)(v13 + 192),
      *(_WORD *)(v13 + 194),
      *(_DWORD *)(v13 + 12),
      *(_WORD *)(v1 + 48),
      v4,
      v10,
      v9,
      v79,
      v76,
      v77,
      v78,
      v6,
      v7,
      v5,
      *(_WORD *)(v1 + 2472),
      *(_WORD *)(v1 + 2474),
      *(_WORD *)(v1 + 2476));
  }
  v14 = *((_WORD *)a1 + 998);
  v15 = *((_WORD *)a1 + 999);
  v16 = *((_WORD *)a1 + 1000);
  v17 = a1[2];
  LOWORD(v76) = v14;
  LOWORD(v77) = v15;
  LOWORD(v78) = v16;
  HUBPDO_GetPortPath(v17, &v141);
  if ( (*(_DWORD *)(*a1 + 40) & 0x40000) != 0 && (a1[204] & 0x20) != 0 )
  {
    LOBYTE(v75[0]) = 1;
    if ( !v14 && !v15 && !v16 )
    {
      VidPidRevForPort = HUBREG_GetVidPidRevForPort(a1[1], &v76, &v77, &v78);
      if ( VidPidRevForPort >= 0 )
      {
        v14 = v76;
        v15 = v77;
        v16 = v78;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_ddddddDDD(
            *(_QWORD *)(a1[1] + 1432),
            v19,
            (unsigned __int16)v76,
            v146,
            v73,
            v141,
            v142,
            v143,
            v144,
            v145,
            v146,
            v76,
            v77,
            v78);
          v14 = v76;
          v3 = 0x7FFFFFFF;
        }
        *((_WORD *)a1 + 998) = v14;
        *((_WORD *)a1 + 999) = v15;
        *((_WORD *)a1 + 1000) = v16;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v74) = VidPidRevForPort;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 1432),
            2u,
            2u,
            0x8Fu,
            (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
            v74);
        }
        v14 = v76;
        v15 = v77;
        v16 = v78;
      }
    }
  }
  v20 = *a1;
  if ( *(_BYTE *)(*a1 + 240) )
  {
    v27 = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(v20 + 2472));
    if ( v27 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v74) = v27;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x98u,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v74);
    }
    v28 = RtlStringCchPrintfA(v137, 5uLL, "%04X", *(unsigned __int16 *)(*a1 + 2474));
    if ( v28 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v74) = v28;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x99u,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v74);
    }
    v23 = RtlStringCchPrintfA(v139, 5uLL, "%04X", *(unsigned __int16 *)(*a1 + 2476));
    if ( v23 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = 154;
      goto LABEL_56;
    }
  }
  else if ( *(_DWORD *)(v20 + 168) == 1 )
  {
    v25 = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(v20 + 176));
    if ( v25 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v74) = v25;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x91u,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v74);
    }
    v26 = RtlStringCchPrintfA(v137, 5uLL, "%04X", *(unsigned __int16 *)(*a1 + 180));
    if ( v26 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v74) = v26;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x92u,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v74);
    }
    v23 = RtlStringCchPrintfA(v139, 5uLL, "%04X", *(unsigned __int16 *)(*a1 + 184));
    if ( v23 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = 147;
      goto LABEL_56;
    }
  }
  else
  {
    if ( *(_DWORD *)(v20 + 168) == 2 )
    {
      *(_DWORD *)pszDest = *(_DWORD *)(v20 + 176);
      v136 = *(_BYTE *)(v20 + 180);
      *(_DWORD *)v137 = *(_DWORD *)(v20 + 181);
      v138 = *(_BYTE *)(v20 + 185);
      *(_DWORD *)v139 = *(_DWORD *)(v20 + 186);
      v140 = *(_BYTE *)(v20 + 190);
      goto LABEL_57;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v74) = *(_DWORD *)(v20 + 168);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x94u,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v74);
    }
    v21 = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", 0xFFFF);
    if ( v21 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v74) = v21;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x95u,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v74);
    }
    v22 = RtlStringCchPrintfA(v137, 5uLL, "%04X", 0xFFFF);
    if ( v22 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v74) = v22;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x96u,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v74);
    }
    v23 = RtlStringCchPrintfA(v139, 5uLL, "%04X", 0xFFFF);
    if ( v23 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = 151;
LABEL_56:
      LODWORD(v74) = v23;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        v24,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v74);
    }
  }
LABEL_57:
  if ( LOBYTE(v75[0]) )
  {
    if ( (unsigned int)dword_14006C1F8 > 5 )
    {
      if ( (qword_14006C208 & 0x400000000002LL) == 0
        || (v29 = 1, (qword_14006C210 & 0x400000000002LL) != qword_14006C210) )
      {
        v29 = 0;
      }
      if ( v29 )
      {
        v86 = 1LL;
        v90 = 8LL;
        v89 = &v86;
        LOWORD(v78) = v14;
        v91 = &v78;
        v30 = -1LL;
        v92 = 2LL;
        v93 = &v77;
        v95 = &v76;
        v31 = -1LL;
        LOWORD(v77) = v15;
        v94 = 2LL;
        LOWORD(v76) = v16;
        v96 = 2LL;
        do
          ++v31;
        while ( pszDest[v31] );
        v99 = 0;
        v98 = v31 + 1;
        v97 = pszDest;
        v32 = -1LL;
        do
          ++v32;
        while ( v137[v32] );
        v102 = 0;
        v101 = v32 + 1;
        v100 = v137;
        v33 = -1LL;
        do
          ++v33;
        while ( v139[v33] );
        v105 = 0;
        v104 = v33 + 1;
        v79 = *((_DWORD *)a1 + 608);
        v106 = &v79;
        v34 = a1[1];
        v103 = v139;
        v107 = 4LL;
        v35 = *(_DWORD *)(v34 + 208);
        v108 = &v80;
        v110 = &v141;
        v36 = *(_DWORD *)(v1 + 168);
        v80 = v35;
        v109 = 4LL;
        v111 = 12LL;
        if ( v36 == 1 )
          v37 = *(_DWORD *)(v1 + 188);
        else
          v37 = 0;
        v81 = v37;
        v112 = &v81;
        v113 = 4LL;
        if ( v36 == 1 )
          v38 = *(_DWORD *)(v1 + 192);
        else
          v38 = 0;
        v82 = v38;
        v114 = &v82;
        v115 = 4LL;
        if ( v36 == 1 )
          v39 = *(_DWORD *)(v1 + 196);
        else
          v39 = 0;
        v83 = v39;
        v116 = &v83;
        v117 = 4LL;
        if ( v36 == 1 )
          v40 = *(_DWORD *)(v1 + 176);
        else
          v40 = 0x7FFFFFFF;
        v84 = v40;
        v118 = &v84;
        v119 = 4LL;
        if ( v36 == 1 )
          v3 = *(_DWORD *)(v1 + 180);
        v85 = v3;
        v120 = &v85;
        v121 = 4LL;
        if ( v36 == 1 )
          v41 = *(_WORD *)(v1 + 184);
        else
          v41 = 0;
        v75[0] = v41;
        v42 = (const CHAR *)(v1 + 176);
        v123 = 2LL;
        if ( v36 != 2 )
          v42 = 0LL;
        v122 = v75;
        if ( v42 )
        {
          v43 = -1LL;
          do
            ++v43;
          while ( v42[v43] );
          v44 = v43 + 1;
        }
        else
        {
          v42 = File;
          v44 = 1;
        }
        v124 = v42;
        v45 = (const CHAR *)(v1 + 181);
        v125 = v44;
        if ( v36 != 2 )
          v45 = 0LL;
        v126 = 0;
        if ( v45 )
        {
          v46 = -1LL;
          do
            ++v46;
          while ( v45[v46] );
          v47 = v46 + 1;
        }
        else
        {
          v45 = File;
          v47 = 1;
        }
        v48 = (const CHAR *)(v1 + 186);
        v127 = v45;
        v128 = v47;
        v129 = 0;
        if ( v36 != 2 )
          v48 = 0LL;
        if ( v48 )
        {
          do
            ++v30;
          while ( v48[v30] );
          v49 = v30 + 1;
        }
        else
        {
          v48 = File;
          v49 = 1;
        }
        v131 = v49;
        v50 = &v87;
        v51 = &unk_140067A1F;
        v87 = 16779264LL;
LABEL_156:
        v133 = v50;
        v130 = v48;
        v132 = 0;
        v134 = 8LL;
        tlgWriteAgg(v47, (_DWORD)v51, (unsigned int)File, 22, (__int64)v88);
      }
    }
  }
  else if ( (unsigned int)dword_14006C1F8 > 5 )
  {
    if ( (qword_14006C208 & 0x200000000002LL) == 0 || (v52 = 1, (qword_14006C210 & 0x200000000002LL) != qword_14006C210) )
      v52 = 0;
    if ( v52 )
    {
      v87 = 1LL;
      v90 = 8LL;
      v89 = &v87;
      LOWORD(v78) = v14;
      v91 = &v78;
      v53 = -1LL;
      v92 = 2LL;
      v93 = &v77;
      v95 = &v76;
      v54 = -1LL;
      LOWORD(v77) = v15;
      v94 = 2LL;
      LOWORD(v76) = v16;
      v96 = 2LL;
      do
        ++v54;
      while ( pszDest[v54] );
      v99 = 0;
      v98 = v54 + 1;
      v97 = pszDest;
      v55 = -1LL;
      do
        ++v55;
      while ( v137[v55] );
      v102 = 0;
      v101 = v55 + 1;
      v100 = v137;
      v56 = -1LL;
      do
        ++v56;
      while ( v139[v56] );
      v105 = 0;
      v104 = v56 + 1;
      v85 = *((_DWORD *)a1 + 608);
      v106 = &v85;
      v57 = a1[1];
      v103 = v139;
      v107 = 4LL;
      v58 = *(_DWORD *)(v57 + 208);
      v108 = &v84;
      v110 = &v141;
      v59 = *(_DWORD *)(v1 + 168);
      v84 = v58;
      v109 = 4LL;
      v111 = 12LL;
      if ( v59 == 1 )
        v60 = *(_DWORD *)(v1 + 188);
      else
        v60 = 0;
      v83 = v60;
      v112 = &v83;
      v113 = 4LL;
      if ( v59 == 1 )
        v61 = *(_DWORD *)(v1 + 192);
      else
        v61 = 0;
      v82 = v61;
      v114 = &v82;
      v115 = 4LL;
      if ( v59 == 1 )
        v62 = *(_DWORD *)(v1 + 196);
      else
        v62 = 0;
      v81 = v62;
      v116 = &v81;
      v117 = 4LL;
      if ( v59 == 1 )
        v63 = *(_DWORD *)(v1 + 176);
      else
        v63 = 0x7FFFFFFF;
      v80 = v63;
      v118 = &v80;
      v119 = 4LL;
      if ( v59 == 1 )
        v3 = *(_DWORD *)(v1 + 180);
      v79 = v3;
      v120 = &v79;
      v121 = 4LL;
      if ( v59 == 1 )
        v64 = *(_WORD *)(v1 + 184);
      else
        v64 = 0;
      v75[0] = v64;
      v65 = (const CHAR *)(v1 + 176);
      v123 = 2LL;
      if ( v59 != 2 )
        v65 = 0LL;
      v122 = v75;
      if ( v65 )
      {
        v66 = -1LL;
        do
          ++v66;
        while ( v65[v66] );
        v67 = v66 + 1;
      }
      else
      {
        v65 = File;
        v67 = 1;
      }
      v124 = v65;
      v68 = (const CHAR *)(v1 + 181);
      v125 = v67;
      if ( v59 != 2 )
        v68 = 0LL;
      v126 = 0;
      if ( v68 )
      {
        v69 = -1LL;
        do
          ++v69;
        while ( v68[v69] );
        v47 = v69 + 1;
      }
      else
      {
        v68 = File;
        v47 = 1;
      }
      v48 = (const CHAR *)(v1 + 186);
      v127 = v68;
      v128 = v47;
      v129 = 0;
      if ( v59 != 2 )
        v48 = 0LL;
      if ( v48 )
      {
        do
          ++v53;
        while ( v48[v53] );
        v70 = v53 + 1;
      }
      else
      {
        v48 = File;
        v70 = 1;
      }
      v131 = v70;
      v50 = &v86;
      v51 = &unk_1400678C4;
      v86 = 16779264LL;
      goto LABEL_156;
    }
  }
  v71 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1[2]);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 696))(
           WdfDriverGlobals,
           v71,
           1LL);
}
