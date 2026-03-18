/*
 * XREFs of ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x1401E3FA8
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1401E68D8 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMIDEInjectDeviceInput @ 0x140121AFC (RIMIDEInjectDeviceInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDEFillContactUsageValues @ 0x1401E5E2C (RIMIDEFillContactUsageValues.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1401E7F80 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 */

__int64 __fastcall RIMIDEInjectPartialFrameFromPointerInfo(
        struct RawInputManagerDeviceObject *a1,
        struct tagPOINTER_TYPE_INFO *a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  __int64 v5; // r12
  int v7; // edi
  char *v8; // rsi
  __int64 v9; // rbp
  int v10; // r8d
  unsigned __int64 v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // ebx
  bool v14; // r14
  int v15; // edx
  int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // rax
  char *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 v28; // rax
  char v29; // di
  __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  unsigned int v33; // r8d
  unsigned int v34; // r10d
  _DWORD *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  struct tagPOINTER_TYPE_INFO *v38; // r9
  unsigned int v39; // edx
  __int64 v40; // rax
  unsigned int v41; // edx
  __int64 v42; // rcx
  unsigned int v43; // r8d
  __int64 v44; // rcx
  char v45; // di
  int v46; // edx
  int v47; // r8d
  __int64 v48; // r9
  __int64 v49; // rcx
  char v50; // di
  __int64 v51; // rax
  int v52; // edx
  int v53; // r8d
  unsigned int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // edx
  __int64 v58; // rcx
  char v59; // di
  int v60; // edx
  int v61; // r8d
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rcx
  char v65; // di
  __int64 v66; // rax
  int v67; // edx
  int v68; // r8d
  __int64 v69; // rax
  __int64 v70; // rcx
  char v71; // di
  __int64 v72; // rax
  int v73; // edx
  int v74; // r8d
  __int64 v75; // rax
  __int64 v76; // rcx
  char v77; // di
  bool v78; // r13
  __int64 v79; // rax
  int v80; // r8d
  int v81; // edx
  __int64 v82; // rcx
  bool v83; // bp
  int v84; // edx
  int v85; // r8d
  __int64 v86; // r9
  bool v87; // bp
  __int64 UserSessionState; // rax
  int v89; // r8d
  int v90; // edx
  __int16 v92; // [rsp+30h] [rbp-128h]
  __int16 v93; // [rsp+30h] [rbp-128h]
  __int16 v94; // [rsp+30h] [rbp-128h]
  __int16 v95; // [rsp+30h] [rbp-128h]
  char v96; // [rsp+40h] [rbp-118h]
  int v97; // [rsp+50h] [rbp-108h]
  bool v98; // [rsp+54h] [rbp-104h]
  unsigned int v99; // [rsp+58h] [rbp-100h] BYREF
  PVOID Buffer; // [rsp+60h] [rbp-F8h] BYREF
  _OWORD v101[9]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v102; // [rsp+100h] [rbp-58h]
  bool v106; // [rsp+170h] [rbp+18h]
  bool v107; // [rsp+170h] [rbp+18h]
  bool v108; // [rsp+170h] [rbp+18h]
  bool v109; // [rsp+170h] [rbp+18h]
  bool v110; // [rsp+170h] [rbp+18h]

  v5 = a3;
  Buffer = 0LL;
  v99 = 0;
  v7 = 0;
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( a3 )
  {
    if ( a3 <= 0x100 )
      goto LABEL_6;
    v10 = 1686;
  }
  else
  {
    v10 = 1685;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v10);
LABEL_6:
  if ( !(unsigned int)BuildValueDeviceUsages(*(_DWORD *)a2, (struct tagINPUT_INJECTION_VALUE **)&Buffer, &v99) )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(v7) = 1;
    }
    v83 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_157;
    v86 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
    v95 = 50;
    goto LABEL_156;
  }
  v11 = v5 * v99;
  if ( v11 > 0xFFFFFFFF )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(v7) = 1;
    }
    v87 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v89) = v87;
      LOBYTE(v90) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v90,
        v89,
        *(_QWORD *)(UserSessionState + 19392),
        2,
        1,
        37,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
        v5);
    }
    goto LABEL_157;
  }
  v12 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 2 )
  {
    v13 = v99 - 2;
LABEL_10:
    v99 = v13;
    goto LABEL_15;
  }
  if ( v12 == 3 )
  {
    v13 = v99 - 1;
    goto LABEL_10;
  }
  if ( v12 != 5 )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(v7) = 1;
    }
    v83 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_157;
    v86 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
    v95 = 38;
LABEL_156:
    LOBYTE(v85) = v83;
    LOBYTE(v84) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v84,
      v85,
      v86,
      2,
      1,
      v95,
      (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
LABEL_157:
    v7 = -1073741811;
    goto LABEL_158;
  }
  v99 -= 5;
LABEL_15:
  v8 = (char *)Win32AllocPoolZInitImpl(256LL, 12LL * (unsigned int)v11, 0x6A6E6952u);
  if ( !v8 )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(v9) = 1;
    }
    v7 = -1073741801;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v96 = 23;
      v17 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v92 = 39;
LABEL_134:
      LOBYTE(v16) = v14;
      LOBYTE(v15) = v9;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v16,
        v17,
        2,
        1,
        v92,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
        v96);
      goto LABEL_158;
    }
    goto LABEL_158;
  }
  v18 = 0LL;
  v97 = 0;
  if ( a3 )
  {
    while ( v7 >= 0 )
    {
      v19 = (char *)a2 + 152 * v18;
      v20 = *((_OWORD *)v19 + 1);
      v101[0] = *(_OWORD *)v19;
      v21 = *((_OWORD *)v19 + 2);
      v101[1] = v20;
      v22 = *((_OWORD *)v19 + 3);
      v101[2] = v21;
      v23 = *((_OWORD *)v19 + 4);
      v101[3] = v22;
      v24 = *((_OWORD *)v19 + 5);
      v101[4] = v23;
      v25 = *((_OWORD *)v19 + 6);
      v101[5] = v24;
      v26 = *((_OWORD *)v19 + 7);
      v101[6] = v25;
      v27 = *((_OWORD *)v19 + 8);
      v28 = *((_QWORD *)v19 + 18);
      v101[7] = v26;
      v101[8] = v27;
      v102 = v28;
      if ( (unsigned int)RIMIDEFillContactUsageValues(*((_QWORD *)a1 + 66), Buffer, v99, v101) )
      {
        v33 = v99;
        v34 = 0;
        if ( v99 )
        {
          v35 = Buffer;
          do
          {
            if ( (unsigned int)v9 >= (unsigned int)v11 )
              break;
            ++v34;
            v36 = (unsigned int)v9;
            LODWORD(v9) = v9 + 1;
            v37 = 3 * v36;
            *(_QWORD *)&v8[4 * v37] = *(_QWORD *)v35;
            *(_DWORD *)&v8[4 * v37 + 8] = v35[2];
            *(_WORD *)&v8[4 * v37 + 8] = v97 + 1;
            v35[1] = 0;
            v35 += 3;
          }
          while ( v34 < v33 );
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v29 = 0;
        }
        v98 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v30 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v31) = v29;
          LOBYTE(v32) = v98;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v31,
            v32,
            *(_QWORD *)(v30 + 19392),
            2,
            1,
            40,
            (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
        }
        v7 = -1073741811;
      }
      v18 = (unsigned int)(v97 + 1);
      v97 = v18;
      if ( (unsigned int)v18 >= a3 )
      {
        if ( v7 < 0 )
          goto LABEL_158;
        goto LABEL_40;
      }
    }
    goto LABEL_158;
  }
LABEL_40:
  v38 = a2;
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_60;
  v39 = v9 + 1;
  if ( (int)v9 + 1 > (unsigned int)v11 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v45 = 0;
    }
    v106 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v45 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v48 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
    v93 = 41;
  }
  else
  {
    v40 = (unsigned int)v9;
    v9 = v39;
    v41 = v39 + 1;
    v42 = 3 * v40;
    *(_DWORD *)&v8[4 * v42] = 5505037;
    *(_DWORD *)&v8[4 * v42 + 4] = a4;
    *(_WORD *)&v8[4 * v42 + 8] = 0;
    if ( v41 <= (unsigned int)v11 )
    {
      v43 = a5;
      v44 = 3 * v9;
      LODWORD(v11) = v41;
      *(_DWORD *)&v8[4 * v44] = 5636109;
      *(_DWORD *)&v8[4 * v44 + 4] = a5;
      *(_WORD *)&v8[4 * v44 + 8] = 0;
      goto LABEL_61;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v45 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v45 = 0;
    }
    v106 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v45 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v48 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
    v93 = 42;
  }
  LOBYTE(v46) = v45;
  LOBYTE(v47) = v106;
  WPP_RECORDER_AND_TRACE_SF_(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v46,
    v47,
    v48,
    2,
    1,
    v93,
    (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
  v38 = a2;
LABEL_59:
  v7 = -1073741811;
LABEL_60:
  v43 = a5;
LABEL_61:
  if ( *(_DWORD *)v38 == 3 )
  {
    if ( (int)v9 + 1 > (unsigned int)v11 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v50 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v50 = 0;
      }
      v107 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v51 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v52) = v50;
        LOBYTE(v53) = v107;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v52,
          v53,
          *(_QWORD *)(v51 + 19392),
          2,
          1,
          43,
          (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
        v38 = a2;
      }
      v7 = -1073741811;
    }
    else
    {
      LODWORD(v11) = v9 + 1;
      v49 = 3LL * (unsigned int)v9;
      *(_DWORD *)&v8[4 * v49] = 5636109;
      *(_DWORD *)&v8[4 * v49 + 4] = v43;
      *(_WORD *)&v8[4 * v49 + 8] = 0;
    }
  }
  if ( *(_DWORD *)v38 == 5 )
  {
    v54 = v9 + 1;
    if ( (int)v9 + 1 > (unsigned int)v11 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v59 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v59 = 0;
      }
      v108 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v59 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_92;
      v62 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v94 = 44;
    }
    else
    {
      v55 = (unsigned int)v9;
      v9 = v54;
      v56 = 3 * v55;
      *(_DWORD *)&v8[4 * v56] = 5505037;
      *(_DWORD *)&v8[4 * v56 + 4] = a4;
      *(_WORD *)&v8[4 * v56 + 8] = 0;
      if ( v7 < 0 )
      {
LABEL_93:
        if ( (int)v9 + 1 > (unsigned int)v11 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v65 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v65 = 0;
          }
          v109 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v65 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v66 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v67) = v65;
            LOBYTE(v68) = v109;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v67,
              v68,
              *(_QWORD *)(v66 + 19392),
              2,
              1,
              46,
              (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
          }
          v38 = a2;
          v7 = -1073741811;
        }
        else
        {
          v63 = (unsigned int)v9;
          LODWORD(v9) = v9 + 1;
          v64 = 3 * v63;
          *(_DWORD *)&v8[4 * v64] = 65545;
          LODWORD(v63) = (*((_DWORD *)v38 + 5) >> 4) & 1;
          *(_WORD *)&v8[4 * v64 + 8] = 0;
          *(_DWORD *)&v8[4 * v64 + 4] = v63;
        }
        if ( (int)v9 + 1 > (unsigned int)v11 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v71 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v71 = 0;
          }
          v110 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v71 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v72 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v73) = v71;
            LOBYTE(v74) = v110;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v73,
              v74,
              *(_QWORD *)(v72 + 19392),
              2,
              1,
              47,
              (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
          }
          v38 = a2;
          v7 = -1073741811;
        }
        else
        {
          v69 = (unsigned int)v9;
          LODWORD(v9) = v9 + 1;
          v70 = 3 * v69;
          *(_DWORD *)&v8[4 * v70] = 131081;
          LODWORD(v69) = (*((_DWORD *)v38 + 5) >> 5) & 1;
          *(_WORD *)&v8[4 * v70 + 8] = 0;
          *(_DWORD *)&v8[4 * v70 + 4] = v69;
        }
        if ( (int)v9 + 1 > (unsigned int)v11 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v77 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v77 = 0;
          }
          v78 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v77 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v79 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v80) = v78;
            LOBYTE(v81) = v77;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v81,
              v80,
              *(_QWORD *)(v79 + 19392),
              2,
              1,
              48,
              (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
          }
          v7 = -1073741811;
        }
        else
        {
          v75 = (unsigned int)v9;
          LODWORD(v9) = v9 + 1;
          v76 = 3 * v75;
          *(_DWORD *)&v8[4 * v76] = 196617;
          LODWORD(v75) = (*((_DWORD *)v38 + 5) >> 6) & 1;
          *(_WORD *)&v8[4 * v76 + 8] = 0;
          *(_DWORD *)&v8[4 * v76 + 4] = v75;
        }
        LODWORD(v11) = v9;
        goto LABEL_124;
      }
      v57 = v54 + 1;
      if ( v57 <= (unsigned int)v11 )
      {
        v58 = 3 * v9;
        LODWORD(v9) = v57;
        *(_DWORD *)&v8[4 * v58] = 5636109;
        *(_DWORD *)&v8[4 * v58 + 4] = a5;
        *(_WORD *)&v8[4 * v58 + 8] = 0;
        goto LABEL_93;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v59 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v59 = 0;
      }
      v108 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v59 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_92:
        v7 = -1073741811;
        goto LABEL_93;
      }
      v62 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v94 = 45;
    }
    LOBYTE(v60) = v59;
    LOBYTE(v61) = v108;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v60,
      v61,
      v62,
      2,
      1,
      v94,
      (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
    v38 = a2;
    goto LABEL_92;
  }
LABEL_124:
  if ( v7 >= 0 )
  {
    v7 = RIMIDEInjectDeviceInput((__int64)a1, (__int64)v8, v11, 5u);
    if ( v7 < 0 )
    {
      LOBYTE(v9) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                && (v82 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v82 & 1) != 0)
                && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v96 = v7;
        v17 = *(_QWORD *)(W32GetUserSessionState(v82) + 19392);
        v92 = 49;
        goto LABEL_134;
      }
    }
  }
LABEL_158:
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer);
  if ( v8 )
    GreDeleteFastMutex(v8);
  return (unsigned int)v7;
}
