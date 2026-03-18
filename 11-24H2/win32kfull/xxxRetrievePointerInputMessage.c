/*
 * XREFs of xxxRetrievePointerInputMessage @ 0x1401B9D88
 * Callers:
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1401B9B24 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1400A76E8 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x14012E24C (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     CheckPwndFilter @ 0x140140F10 (CheckPwndFilter.c)
 *     IsPointerInputMessageWithState @ 0x1401507E0 (IsPointerInputMessageWithState.c)
 *     INPUTDEST_FROM_PWND @ 0x140159868 (INPUTDEST_FROM_PWND.c)
 *     ?RetrieveMessage@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1401AB924 (-RetrieveMessage@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@.c)
 *     WPP_RECORDER_AND_TRACE_SF_LHH @ 0x14028C014 (WPP_RECORDER_AND_TRACE_SF_LHH.c)
 *     WPP_RECORDER_AND_TRACE_SF_LHHLLLL @ 0x14028C10C (WPP_RECORDER_AND_TRACE_SF_LHHLLLL.c)
 *     WPP_RECORDER_AND_TRACE_SF_lLHH @ 0x14028C3A4 (WPP_RECORDER_AND_TRACE_SF_lLHH.c)
 *     WPP_RECORDER_AND_TRACE_SF_qLHH @ 0x14028C4C0 (WPP_RECORDER_AND_TRACE_SF_qLHH.c)
 */

__int64 __fastcall xxxRetrievePointerInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int *a7,
        struct tagQMSG *a8,
        __int64 *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        int *a13,
        struct tagQMSG **a14)
{
  struct tagQMSG *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  unsigned int v18; // r15d
  bool v19; // cf
  char v20; // r12
  char v21; // si
  char v22; // al
  char v23; // r13
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  const struct CPointerInputFrame *v33; // r13
  int v34; // eax
  __int64 v35; // rdx
  char v36; // di
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  __int64 v40; // rax
  bool v41; // bl
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  HWND v45; // rcx
  __int64 v46; // rax
  char v47; // bl
  __int64 v48; // rax
  int v49; // edx
  int v50; // r8d
  __int64 v51; // rax
  __int64 v52; // rdi
  unsigned int v53; // r13d
  int v54; // eax
  char v55; // bl
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  __int64 v59; // rcx
  char v60; // di
  char v61; // bl
  int v62; // edx
  int v63; // r8d
  __int64 v64; // r9
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  const struct CPointerInputFrame *v69; // rax
  const struct TELEMETRY_POINTER_FRAME_TIMES *v70; // rdi
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // r8
  char v77; // r15
  char v78; // r14
  __int16 v79; // bx
  int v80; // edi
  __int64 v81; // rax
  int v82; // r8d
  int v83; // edx
  __int128 *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  int v93; // eax
  int v94; // [rsp+28h] [rbp-E0h]
  __int64 *v95; // [rsp+30h] [rbp-D8h]
  int v96; // [rsp+38h] [rbp-D0h]
  __int16 v97; // [rsp+38h] [rbp-D0h]
  int v98; // [rsp+40h] [rbp-C8h]
  char v99; // [rsp+48h] [rbp-C0h]
  char v100; // [rsp+50h] [rbp-B8h]
  char v101; // [rsp+58h] [rbp-B0h]
  char v102; // [rsp+60h] [rbp-A8h]
  char v103; // [rsp+88h] [rbp-80h]
  unsigned int v104; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v105; // [rsp+90h] [rbp-78h]
  const struct CPointerInputFrame *v106; // [rsp+98h] [rbp-70h]
  int v107; // [rsp+A0h] [rbp-68h] BYREF
  int v108; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v109; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v110; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v111; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v112; // [rsp+B8h] [rbp-50h]
  HWND v113; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v114; // [rsp+C8h] [rbp-40h]
  __int128 v115; // [rsp+D0h] [rbp-38h]
  __int128 v116; // [rsp+E0h] [rbp-28h]
  __int128 v117; // [rsp+F0h] [rbp-18h]
  __int128 v118; // [rsp+100h] [rbp-8h]
  __int128 v119; // [rsp+110h] [rbp+8h]
  __int128 v120; // [rsp+120h] [rbp+18h]
  __int128 v121; // [rsp+130h] [rbp+28h]
  __int128 v122; // [rsp+148h] [rbp+40h] BYREF
  __int128 v123; // [rsp+158h] [rbp+50h]
  __int128 v124; // [rsp+168h] [rbp+60h]
  __int128 v125; // [rsp+178h] [rbp+70h]
  __int128 v126; // [rsp+188h] [rbp+80h]
  __int128 v127; // [rsp+198h] [rbp+90h]
  __int128 v128; // [rsp+1A8h] [rbp+A0h]
  __int64 v129; // [rsp+208h] [rbp+100h] BYREF
  __int64 v130; // [rsp+210h] [rbp+108h]
  unsigned int v131; // [rsp+218h] [rbp+110h]
  unsigned int v132; // [rsp+220h] [rbp+118h]

  v132 = a4;
  v131 = a3;
  v130 = a2;
  v129 = a1;
  v14 = a8;
  v15 = 0LL;
  v16 = a1;
  v113 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v17 = *((_QWORD *)a8 + 4);
  v18 = *((_DWORD *)a8 + 6);
  v106 = (const struct CPointerInputFrame *)*((_QWORD *)a8 + 5);
  v19 = __CFSHR__(*((_DWORD *)a8 + 25), 6);
  v104 = 0;
  v108 = 0;
  v105 = -v19;
  v107 = 0;
  v110 = 0;
  v109 = 0;
  v20 = v17;
  v21 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
    || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v22 = 0;
  }
  v103 = v22;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v23 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v23 = 0;
  }
  if ( v22 || v23 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v25) = v23;
    LOBYTE(v26) = v103;
    LOWORD(v96) = 10;
    WPP_RECORDER_AND_TRACE_SF_LHH(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v26,
      v25,
      *(_QWORD *)(UserSessionState + 69416));
    v15 = 0LL;
  }
  v27 = *(_QWORD *)(v16 + 1360);
  v28 = 256LL;
  if ( (v27 & 0x100) != 0 )
  {
    *a9 = 0LL;
    *a13 = 0;
    return 2LL;
  }
  if ( a6 )
  {
    v33 = v106;
  }
  else
  {
    *(_QWORD *)(v16 + 1360) = v27 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v18);
    v32 = W32GetUserSessionState(v31, v30);
    v33 = v106;
    v34 = CTouchProcessor::SetPointerFrameTargetWindows(
            *(CTouchProcessor **)(v32 + 3264),
            (struct tagTHREADINFO *)v16,
            (unsigned __int64)v106,
            v18,
            &v107);
    v35 = 0LL;
    if ( !v34 )
    {
      if ( v107 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
          || (v36 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v36 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v21 = 0;
        }
        if ( !v36 && !v21 )
          goto LABEL_37;
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
          || (v36 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v36 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v21 = 0;
        }
        if ( !v36 && !v21 )
          goto LABEL_37;
      }
      v37 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v38) = v21;
      LOBYTE(v39) = v36;
      WPP_RECORDER_AND_TRACE_SF_LHH(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v39,
        v38,
        *(_QWORD *)(v37 + 69416));
LABEL_37:
      EtwTraceEndPointerSetTargetWindows(v18, v35);
      *(_QWORD *)(v16 + 1360) &= ~0x100uLL;
      return (unsigned int)(v107 != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(v18, 0LL);
    v40 = *(_QWORD *)(v16 + 472);
    *(_QWORD *)(v16 + 1360) &= ~0x100uLL;
    if ( *(struct tagQMSG **)(v40 + 88) != v14 )
    {
      v41 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v21 = 0;
      }
      if ( v41 || v21 )
      {
        v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v43) = v21;
        LOBYTE(v44) = v41;
        WPP_RECORDER_AND_TRACE_SF_LHH(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v44,
          v43,
          *(_QWORD *)(v42 + 69416));
      }
      return 4LL;
    }
    v15 = 0LL;
  }
  if ( v18 == 595 )
  {
    v45 = (HWND)*((_QWORD *)v14 + 2);
    v113 = v45;
    v108 = 1;
    v104 = 1;
    v110 = 1;
    v109 = 0;
    v111 = 0LL;
  }
  else
  {
    v46 = W32GetUserSessionState(v28, 0LL);
    if ( !CTouchProcessor::GetPointerMessageInfo(
            *(CTouchProcessor **)(v46 + 3264),
            (unsigned __int64)v33,
            v105,
            &v113,
            &v108,
            (int *)&v104,
            &v110,
            &v109) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
        || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v47 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v21 = 0;
      }
      if ( !v47 && !v21 )
        return 3LL;
LABEL_65:
      v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v15);
LABEL_177:
      LOBYTE(v50) = v21;
      LOBYTE(v49) = v47;
      WPP_RECORDER_AND_TRACE_SF_LHH(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v49,
        v50,
        *(_QWORD *)(v48 + 69416));
      return 3LL;
    }
    v45 = v113;
  }
  LOBYTE(v15) = 1;
  v51 = HMValidateHandleNoSecure((__int64)v45, v15);
  v114 = v51;
  v52 = v51;
  if ( !v51 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
      || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v47 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v21 = 0;
    }
    if ( !v47 && !v21 )
      return 3LL;
    goto LABEL_65;
  }
  if ( !(unsigned int)CheckPwndFilter(v51, v130) )
    return 4LL;
  v53 = v18;
  if ( a5 && v104 != 1 )
  {
    switch ( v18 )
    {
      case 0x245u:
        v53 = 577;
        break;
      case 0x246u:
        v53 = 578;
        break;
      case 0x247u:
        v53 = 579;
        break;
    }
  }
  if ( v131 || v132 != -1 )
  {
    if ( v131 <= v132 )
    {
      if ( v53 < v131 || v53 > v132 )
        return 4LL;
    }
    else
    {
      if ( v53 < v132 || (v54 = 0, v53 > v131) )
        v54 = 1;
      if ( !v54 )
        return 4LL;
    }
  }
  if ( (unsigned int)CheckCrossThreadInput((struct tagTHREADINFO **)v52, a8, a13, a7, a14) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
      || (v55 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v55 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v21 = 0;
    }
    if ( v55 || v21 )
    {
      v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v57) = v21;
      LOBYTE(v58) = v55;
      WPP_RECORDER_AND_TRACE_SF_qLHH(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v58,
        v57,
        *(_QWORD *)(v56 + 69416),
        v94,
        (_DWORD)v95,
        v96,
        v98,
        v52,
        v18,
        v17,
        SBYTE2(v17));
    }
    goto LABEL_108;
  }
  if ( *a13 )
  {
    v59 = *(_QWORD *)(v52 + 16);
    if ( *(_QWORD *)(v59 + 472) != *(_QWORD *)(v16 + 472) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
        || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v47 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v21 = 0;
      }
      if ( !v47 && !v21 )
        return 3LL;
      goto LABEL_176;
    }
    if ( (*(_DWORD *)(v59 + 1360) & 0x8000LL) == 0 )
    {
LABEL_108:
      *a9 = v52;
      return 2LL;
    }
    v60 = v104;
    if ( ((v104 + 2) & 0xFFFFFFFD) == 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
        || (v61 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v61 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v21 = 0;
      }
      if ( !v61 && !v21 )
        return 3LL;
      v102 = BYTE2(v17);
      v101 = v17;
      v64 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL) + 69416);
      v100 = v18;
      v99 = v60;
      v97 = 18;
      goto LABEL_188;
    }
    return 4LL;
  }
  if ( !IsPointerInputMessageWithState(v53) )
  {
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(v16 + 1208), (unsigned __int16)v17);
    if ( ThreadPointerData )
      *((_DWORD *)ThreadPointerData + 12) |= 8u;
    goto LABEL_136;
  }
  v84 = (__int128 *)INPUTDEST_FROM_PWND(&v122, v52);
  v115 = *v84;
  v116 = v84[1];
  v117 = v84[2];
  v118 = v84[3];
  v119 = v84[4];
  v120 = v84[5];
  v121 = v84[6];
  v87 = *(_QWORD *)(W32GetUserSessionState(v86, v85) + 3264);
  v122 = v115;
  v98 = *a7;
  v124 = v117;
  v123 = v116;
  v126 = v119;
  v125 = v118;
  v128 = v121;
  v127 = v120;
  CTouchProcessor::AdjustCaptureOnRetrieval(v87, &v122, v109, v106, v104, v108, v105);
  v90 = *(_QWORD *)(W32GetUserSessionState(v89, v88) + 3264);
  v122 = v115;
  v95 = &v111;
  v123 = v116;
  v94 = v105;
  v124 = v117;
  v125 = v118;
  v126 = v119;
  v127 = v120;
  v128 = v121;
  if ( !(unsigned int)CTouchProcessor::UpdatePointerInfoTarget(v90, v106, &v122, v104) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
      || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v47 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v21 = 0;
    }
    if ( !v47 && !v21 )
      return 3LL;
    goto LABEL_176;
  }
  v105 = v104;
  if ( ((v104 + 2) & 0xFFFFFFFD) == 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
      || (v61 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v61 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v21 = 0;
    }
    if ( !v61 && !v21 )
      return 3LL;
    v102 = BYTE2(v17);
    v101 = v17;
    v64 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL) + 69416);
    v100 = v18;
    v99 = v105;
    v97 = 20;
LABEL_188:
    LOBYTE(v63) = v21;
    LOBYTE(v62) = v61;
    WPP_RECORDER_AND_TRACE_SF_lLHH(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v62,
      v63,
      v64,
      v94,
      (_DWORD)v95,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
    return 3LL;
  }
  v92 = *(_QWORD *)(W32GetUserSessionState(v91, 0LL) + 3264);
  v122 = v115;
  v123 = v116;
  v124 = v117;
  v125 = v118;
  v126 = v119;
  v127 = v120;
  v128 = v121;
  v93 = CTouchProcessor::AddThreadPointerData(v92, v16 + 1208, (unsigned __int16)v17, v110, v106, v53, &v122, 1);
  v66 = 0LL;
  if ( !v93 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
      || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v47 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v21 = 0;
    }
    if ( !v47 && !v21 )
      return 3LL;
LABEL_176:
    v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    goto LABEL_177;
  }
LABEL_136:
  if ( v53 != 595 )
  {
    v68 = W32GetUserSessionState(v67, v66);
    v69 = CTouchProcessor::ReferenceFrameFromPointerMsgId(*(CTouchProcessor **)(v68 + 3264), (unsigned __int64)v106);
    v106 = v69;
    if ( v69 )
    {
      v70 = (const struct CPointerInputFrame *)((char *)v69 + 72);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(LARGE_INTEGER *)((char *)v70 + ((unsigned __int8)isChildPartition() != 0 ? 0x48 : 0) + 56) = PerformanceCounter;
      InputTraceLogging::TelemetryDebug::Pointer::RetrieveMessage(v70);
      v74 = W32GetUserSessionState(v73, v72);
      CTouchProcessor::UnreferenceFrameExternal(*(CTouchProcessor **)(v74 + 3264), v106);
      v16 = v129;
      v52 = v114;
    }
  }
  *a9 = v52;
  *a10 = v53;
  if ( v53 - 577 <= 3 )
    v17 = (unsigned __int16)v17 | (unsigned __int64)((unsigned __int16)v104 << 16);
  *a11 = v17;
  *a12 = (unsigned __int16)v111 | (unsigned __int64)(WORD2(v111) << 16);
  *a13 = 0;
  if ( v18 == 583 )
  {
    v75 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(v52 + 40) + 256LL));
    v76 = *(_QWORD *)(v52 + 40);
    v129 = v75;
    LogicalToPhysicalDPIPoint(v16 + 816, &v111, *(unsigned int *)(v76 + 288), &v129);
  }
  *(_QWORD *)(v16 + 1524) = v112;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
    || (v77 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v77 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v78 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v78 = 0;
  }
  if ( v77 || v78 )
  {
    v79 = *((_WORD *)a8 + 17);
    v80 = *((_DWORD *)a8 + 6);
    v81 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v82) = v78;
    LOBYTE(v83) = v77;
    WPP_RECORDER_AND_TRACE_SF_LHHLLLL(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v83,
      v82,
      *(_QWORD *)(v81 + 69416),
      v94,
      (_DWORD)v95,
      v96,
      v98,
      v80,
      v20,
      v79,
      v111,
      SBYTE4(v111),
      v112,
      SBYTE4(v112));
  }
  return 1LL;
}
