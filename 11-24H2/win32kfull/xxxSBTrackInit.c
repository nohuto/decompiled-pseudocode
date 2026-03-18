/*
 * XREFs of xxxSBTrackInit @ 0x1402E6E60
 * Callers:
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1402E6618 (xxxDoScrollMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddq @ 0x140227524 (WPP_RECORDER_AND_TRACE_SF_ddq.c)
 *     CalcSBStuff @ 0x140258028 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1402585DC (GetWndSBDisableFlags.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetScrollbarTypeString @ 0x140292720 (GetScrollbarTypeString.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1402E0BA8 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1402E0D34 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E0EC8 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E1AD0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E2314 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     GetScrollRequestCodeString @ 0x1402E33E4 (GetScrollRequestCodeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddddddd @ 0x1402E35D8 (WPP_RECORDER_AND_TRACE_SF_ddddddddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddds @ 0x1402E418C (WPP_RECORDER_AND_TRACE_SF_qddds.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddds @ 0x1402E63EC (WPP_RECORDER_AND_TRACE_SF_sdddds.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall xxxSBTrackInit(struct tagWND *a1, int a2, int a3, unsigned int a4)
{
  int v4; // ebx
  __int64 *v6; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  char v10; // di
  char v11; // r12
  char v12; // r13
  __int64 v13; // rcx
  const char *v14; // r14
  __int64 v15; // rbx
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r12
  bool v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 *v27; // rcx
  char *v28; // rax
  char *v29; // r13
  __int64 v30; // rcx
  int v31; // edx
  int v32; // ecx
  unsigned __int64 v33; // r12
  _BOOL8 v34; // rdx
  __int64 v35; // rdx
  _BYTE *v36; // rbx
  char v37; // r15
  __int64 v38; // rbx
  __int64 v39; // rax
  int v40; // eax
  __int128 *v41; // rdx
  __int128 *v42; // rcx
  unsigned __int64 v43; // rax
  int v44; // r8d
  __int64 v45; // rcx
  __int64 v46; // rdx
  char v47; // al
  __int64 v48; // rax
  char v49; // r12
  char v50; // r15
  __int64 v51; // rax
  int v52; // edx
  int v53; // r8d
  char v54; // r15
  __int64 v55; // rbx
  __int64 v56; // r9
  _DWORD *v57; // rcx
  int v58; // eax
  char v59; // r12
  char v60; // r15
  __int64 v61; // rax
  int v62; // edx
  int v63; // r8d
  char v64; // r15
  __int64 v65; // rbx
  __int64 v66; // r9
  _DWORD *v67; // rcx
  char v68; // r12
  char v69; // r15
  __int64 v70; // rax
  int v71; // edx
  int v72; // r8d
  char v73; // r12
  char v74; // r15
  __int64 v75; // rax
  int v76; // edx
  int v77; // r8d
  char v78; // r12
  char v79; // r15
  __int64 v80; // rax
  int v81; // edx
  int v82; // r8d
  int v83; // eax
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  struct tagTHREADINFO *v87; // rax
  char v88; // al
  unsigned int *v89; // rcx
  const char *ScrollbarTypeString; // rdi
  int v91; // esi
  int v92; // r14d
  int v93; // r15d
  int v94; // r12d
  const char *ScrollRequestCodeString; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  struct tagTHREADINFO *v99; // rax
  struct tagWND *v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rcx
  char v105; // r15
  __int64 v106; // rbx
  __int64 v107; // r9
  int v108; // [rsp+20h] [rbp-100h]
  int v109; // [rsp+28h] [rbp-F8h]
  int v110; // [rsp+30h] [rbp-F0h]
  int v111; // [rsp+38h] [rbp-E8h]
  __int64 v112; // [rsp+40h] [rbp-E0h]
  __int64 v113; // [rsp+48h] [rbp-D8h]
  char v114; // [rsp+A0h] [rbp-80h]
  char v115; // [rsp+A0h] [rbp-80h]
  int v117; // [rsp+A4h] [rbp-7Ch]
  char v118; // [rsp+A8h] [rbp-78h]
  char v119; // [rsp+A8h] [rbp-78h]
  __int64 v120; // [rsp+B0h] [rbp-70h]
  char WndSBDisableFlags; // [rsp+B8h] [rbp-68h]
  _QWORD v123[2]; // [rsp+C0h] [rbp-60h] BYREF
  _QWORD v124[2]; // [rsp+D0h] [rbp-50h] BYREF
  struct tagWND *v125; // [rsp+E0h] [rbp-40h]
  _QWORD v126[2]; // [rsp+F0h] [rbp-30h] BYREF
  __int128 v127; // [rsp+100h] [rbp-20h] BYREF
  _BYTE v128[64]; // [rsp+110h] [rbp-10h] BYREF

  v4 = a3;
  v125 = a1;
  v6 = (__int64 *)a1;
  memset_0(v128, 0, sizeof(v128));
  v127 = 0LL;
  v8 = *(_QWORD *)&WPP_GLOBAL_Control;
  v9 = 0LL;
  v10 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v11 = 0;
  }
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v13 = a4;
    if ( a4 )
    {
      v13 = a4 - 1;
      if ( a4 == 1 )
      {
        v14 = "SCROLL_DIRECT";
      }
      else if ( a4 == 2 )
      {
        v14 = "SCROLL_MENU";
      }
      else
      {
        v14 = "UNKNOWN";
      }
    }
    else
    {
      v14 = "SCROLL_NORMAL";
    }
    v15 = *v6;
    UserSessionState = W32GetUserSessionState(v13, 0LL);
    WPP_RECORDER_AND_TRACE_SF_qddds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v12,
      *(_QWORD *)(UserSessionState + 69416),
      v108,
      v109,
      v110,
      v111,
      v15,
      a2,
      SBYTE2(a2),
      a3,
      v14);
    v4 = a3;
  }
  v17 = PtiCurrent(v8, v9);
  v18 = 2374;
  if ( (struct tagTHREADINFO *)v6[2] == v17 )
    v18 = 2376;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, v18);
  v20 = v6[2];
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 528), 0, 0) & 1) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 2383);
    return;
  }
  v21 = *(_QWORD *)(v6[2] + 752);
  if ( v21 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v10 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v23 = *v6;
      v24 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v20);
      LOBYTE(v25) = v22;
      LOBYTE(v26) = v10;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v26,
        v25,
        *(_QWORD *)(v24 + 69416),
        3,
        9,
        53,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v21,
        v23);
    }
    return;
  }
  v27 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v19, v20) + 19856) + 40LL);
  if ( !v27 )
    return;
  v28 = (char *)NSInstrumentation::CTypeIsolation<28672,112>::Allocate(v27);
  v29 = v28;
  if ( !v28 )
    return;
  *(_DWORD *)v28 &= ~1u;
  *((_QWORD *)v28 + 8) = 0LL;
  *((_QWORD *)v28 + 6) = xxxTrackBox;
  *((_QWORD *)v28 + 1) = 0LL;
  v124[0] = v28 + 8;
  *((_QWORD *)v28 + 2) = 0LL;
  *((_QWORD *)v28 + 3) = 0LL;
  v124[1] = v6;
  HMAssignmentLock(v124, 0LL);
  *(_QWORD *)(v6[2] + 752) = v29;
  v30 = v6[5];
  v31 = (unsigned __int16)(HIWORD(a2) - *(_WORD *)(v30 + 92)) << 16;
  if ( (*(_BYTE *)(v30 + 26) & 0x40) != 0 )
    v32 = (unsigned __int16)(*(_WORD *)(v30 + 96) - a2);
  else
    v32 = (unsigned __int16)(a2 - *(_WORD *)(v30 + 88));
  v123[1] = v6;
  v33 = v31 | v32;
  v120 = v33;
  v123[0] = v29 + 24;
  HMAssignmentLock(v123, 0LL);
  v126[1] = 0LL;
  v126[0] = v29 + 16;
  HMAssignmentLock(v126, 0LL);
  *(_DWORD *)v29 ^= (*(_DWORD *)v29 ^ (2 * v4)) & 2;
  WndSBDisableFlags = GetWndSBDisableFlags(v6, v4 & 1);
  v34 = v4 != 6;
  *((_DWORD *)v29 + 22) = v34;
  if ( (struct tagTHREADINFO *)v6[2] == PtiCurrent((unsigned int)(v4 - 6), v34) )
  {
    v36 = v128;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 2445);
    v36 = &unk_140399430;
  }
  v124[0] = v36;
  *((_QWORD *)v29 + 12) = v36;
  if ( (WndSBDisableFlags & 3) == 3 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v10 = 0;
    }
    v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v38 = *v6;
      v39 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v35);
      LODWORD(v113) = SWORD1(v33);
      LODWORD(v112) = (__int16)v33;
      WPP_RECORDER_AND_TRACE_SF_ddq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v10,
        v37,
        *(_QWORD *)(v39 + 69416),
        3u,
        9u,
        0x36u,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v112,
        v113,
        v38);
    }
    *(_QWORD *)(v6[2] + 752) = 0LL;
LABEL_161:
    HMAssignmentUnlock(v29 + 24);
    HMAssignmentUnlock(v29 + 16);
    HMAssignmentUnlock(v29 + 8);
    v104 = (__int64)v29;
LABEL_162:
    UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v104, v103);
    return;
  }
  CalcSBStuff((__int64)v6, (__int64)v36, (*(_DWORD *)v29 >> 1) & 1);
  v40 = *(_DWORD *)v29 & 2;
  v41 = (__int128 *)((char *)&v127 + 4);
  if ( !v40 )
    v41 = &v127;
  v123[0] = v41;
  v42 = &v127;
  if ( v40 )
  {
    v43 = v33 >> 16;
  }
  else
  {
    v42 = (__int128 *)((char *)&v127 + 4);
    LOWORD(v43) = v33;
  }
  v44 = (__int16)v43;
  *(_DWORD *)v42 = *((_DWORD *)v36 + 6);
  *(_DWORD *)v41 = *((_DWORD *)v36 + 4);
  *((_DWORD *)v42 + 2) = *((_DWORD *)v36 + 7);
  *((_DWORD *)v41 + 2) = *((_DWORD *)v36 + 5);
  v117 = (__int16)v43;
  v45 = *(_QWORD *)&WPP_GLOBAL_Control;
  v46 = (__int64)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v47 = 0;
  }
  v114 = v47;
  v118 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v47 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v45) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v48 = W32GetUserSessionState(v45, &WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_ddddddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v114,
      v118,
      *(_QWORD *)(v48 + 69416),
      v108,
      v109,
      v110,
      v111);
    v36 = (_BYTE *)v124[0];
    v46 = (__int64)&WPP_GLOBAL_Control;
    v6 = (__int64 *)v125;
    v44 = v117;
    v10 = 1;
  }
  *((_DWORD *)v29 + 14) = -1;
  if ( v44 >= *((_DWORD *)v36 + 9) )
  {
    if ( v44 >= *((_DWORD *)v36 + 10) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || (v59 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v59 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v60 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v60 = 0;
      }
      if ( v59 || v60 )
      {
        v61 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v62 = v120;
        LOBYTE(v63) = v60;
        LOBYTE(v62) = v59;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v62,
          v63,
          *(_QWORD *)(v61 + 69416),
          5,
          9,
          58,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v120,
          SBYTE2(v120));
        v46 = (__int64)&WPP_GLOBAL_Control;
      }
      if ( (WndSBDisableFlags & 2) == 0 )
      {
        v67 = (_DWORD *)v123[0];
        *((_DWORD *)v29 + 14) = 1;
        *v67 = *((_DWORD *)v36 + 10);
        goto LABEL_135;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v64 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v65 = *v6;
        v66 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control) + 69416);
        LODWORD(v113) = SWORD1(v120);
        LODWORD(v112) = (__int16)v120;
        WPP_RECORDER_AND_TRACE_SF_ddq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v10,
          v64,
          v66,
          3u,
          9u,
          0x3Bu,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v112,
          v113,
          v65);
      }
      goto LABEL_160;
    }
    if ( v44 >= *((_DWORD *)v36 + 13) )
    {
      if ( v44 < *((_DWORD *)v36 + 12) )
        goto LABEL_121;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || (v73 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v73 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v74 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v74 = 0;
      }
      if ( v73 || v74 )
      {
        v75 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v76 = v120;
        LOBYTE(v77) = v74;
        LOBYTE(v76) = v73;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v76,
          v77,
          *(_QWORD *)(v75 + 69416),
          5,
          9,
          63,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v120,
          SBYTE2(v120));
      }
      v57 = (_DWORD *)v123[0];
      *((_DWORD *)v29 + 14) = 3;
      *v57 = *((_DWORD *)v36 + 12);
      v58 = *((_DWORD *)v36 + 10);
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || (v68 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v68 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v69 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v69 = 0;
      }
      if ( v68 || v69 )
      {
        v70 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v71 = v120;
        LOBYTE(v72) = v69;
        LOBYTE(v71) = v68;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v71,
          v72,
          *(_QWORD *)(v70 + 69416),
          5,
          9,
          60,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v120,
          SBYTE2(v120));
      }
      v57 = (_DWORD *)v123[0];
      *((_DWORD *)v29 + 14) = 2;
      *v57 = *((_DWORD *)v36 + 9);
      v58 = *((_DWORD *)v36 + 13);
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || (v49 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v49 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v50 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v50 = 0;
    }
    if ( v49 || v50 )
    {
      v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      v52 = v120;
      LOBYTE(v53) = v50;
      LOBYTE(v52) = v49;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v52,
        v53,
        *(_QWORD *)(v51 + 69416),
        5,
        9,
        56,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v120,
        SBYTE2(v120));
      v46 = (__int64)&WPP_GLOBAL_Control;
    }
    if ( (WndSBDisableFlags & 1) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v54 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v55 = *v6;
        v56 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control) + 69416);
        LODWORD(v113) = SWORD1(v120);
        LODWORD(v112) = (__int16)v120;
        WPP_RECORDER_AND_TRACE_SF_ddq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v10,
          v54,
          v56,
          3u,
          9u,
          0x39u,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v112,
          v113,
          v55);
      }
LABEL_160:
      *(_QWORD *)(v6[2] + 752) = 0LL;
      goto LABEL_161;
    }
    v57 = (_DWORD *)v123[0];
    *((_DWORD *)v29 + 14) = 0;
    v58 = *((_DWORD *)v36 + 9);
  }
  v57[2] = v58;
  while ( 1 )
  {
LABEL_135:
    if ( a4 == 1 )
    {
      if ( *((_DWORD *)v29 + 14) < 2u )
        goto LABEL_141;
    }
    else if ( a4 != 2 )
    {
      goto LABEL_141;
    }
    if ( *((_DWORD *)v29 + 14) == 4 )
      break;
LABEL_121:
    if ( *((_DWORD *)v36 + 10) - *((_DWORD *)v36 + 9) <= *((_DWORD *)v36 + 8) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v105 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v106 = *v6;
        v107 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control) + 69416);
        LODWORD(v113) = SWORD1(v120);
        LODWORD(v112) = (__int16)v120;
        WPP_RECORDER_AND_TRACE_SF_ddq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v10,
          v105,
          v107,
          3u,
          9u,
          0x3Du,
          (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
          v112,
          v113,
          v106);
      }
      goto LABEL_160;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || (v78 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v78 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v79 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v79 = 0;
    }
    if ( v78 || v79 )
    {
      v80 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      v81 = v120;
      LOBYTE(v82) = v79;
      LOBYTE(v81) = v78;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v81,
        v82,
        *(_QWORD *)(v80 + 69416),
        5,
        9,
        62,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v120,
        SBYTE2(v120));
    }
    *((_DWORD *)v29 + 14) = 4;
    CalcTrackDragRect((struct tagSBTRACK *)v29);
    *((_QWORD *)v29 + 6) = xxxTrackThumb;
    v83 = *((_DWORD *)v36 + 13);
    *((_DWORD *)v36 + 11) = v83;
    *((_DWORD *)v29 + 19) = v83;
    v84 = *((_DWORD *)v36 + 3);
    *((_DWORD *)v29 + 20) = v84;
    *((_DWORD *)v29 + 21) = v84;
    *((_DWORD *)v29 + 18) = *((_DWORD *)v36 + 11) - v117;
    v87 = PtiCurrent(v86, v85);
    xxxCapture(v87, (struct tagWND *)v6, 3);
    if ( v29 == *(char **)(v6[2] + 752) )
    {
      v46 = *((_QWORD *)v29 + 3);
      if ( !v46 )
        continue;
      xxxDoScroll(
        *((struct tagDRAWITEMSTRUCT ***)v29 + 2),
        (struct tagTHREADINFO **)v46,
        5u,
        *((_DWORD *)v29 + 20),
        (*(_DWORD *)v29 >> 1) & 1);
      if ( v29 == *(char **)(v6[2] + 752) )
        continue;
    }
    return;
  }
  v46 = (unsigned int)(*((int *)v36 + 8) >> 31);
  *((_DWORD *)v29 + 18) = *((_DWORD *)v36 + 8) / -2;
LABEL_141:
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v88 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v88 = 0;
  }
  v89 = &WPP_RECORDER_INITIALIZED;
  v115 = v88;
  LOBYTE(v89) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  v119 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v88 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ScrollbarTypeString = GetScrollbarTypeString(*((_DWORD *)v29 + 22));
    v91 = *((_DWORD *)v29 + 21);
    v92 = *((_DWORD *)v29 + 20);
    v93 = *((_DWORD *)v29 + 19);
    v94 = *((_DWORD *)v29 + 18);
    ScrollRequestCodeString = GetScrollRequestCodeString(*((_DWORD *)v29 + 14), (*(_DWORD *)v29 >> 1) & 1);
    v98 = W32GetUserSessionState(v97, v96);
    WPP_RECORDER_AND_TRACE_SF_sdddds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v115,
      v119,
      *(_QWORD *)(v98 + 69416),
      v108,
      v109,
      v110,
      v111,
      ScrollRequestCodeString,
      v94,
      v93,
      v92,
      v91,
      (__int64)ScrollbarTypeString);
    v36 = (_BYTE *)v124[0];
  }
  v99 = PtiCurrent((__int64)v89, v46);
  v100 = v125;
  xxxCapture(v99, v125, 3);
  if ( v29 == *(char **)(*((_QWORD *)v100 + 2) + 752LL) )
  {
    if ( *((_DWORD *)v29 + 14) != 4 )
      *((_OWORD *)v29 + 2) = v127;
    xxxSBTrackLoop(v100, v120, (struct tagSBCALC *)v36);
    v101 = *((_QWORD *)v100 + 2);
    v102 = *(_QWORD *)(v101 + 752);
    if ( v102 )
    {
      *(_QWORD *)(v101 + 752) = 0LL;
      HMAssignmentUnlock(v102 + 24);
      HMAssignmentUnlock(v102 + 16);
      HMAssignmentUnlock(v102 + 8);
      v104 = v102;
      goto LABEL_162;
    }
  }
}
