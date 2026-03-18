/*
 * XREFs of ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28
 * Callers:
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C5D00 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1402C7288 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014A0D8 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014ACFC (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014C21C (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14014E948 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14014E984 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401D3670 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140203708 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z @ 0x140206730 (-GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x140251FB8 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140269B3C (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z @ 0x14026C524 (-IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402CF954 (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1402D2B94 (_anonymous_namespace_--GetArrangedOptions.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DB324 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall AdvancedWindowPos::xxxRestoreToPosAndState(
        WindowActions *a1,
        __int64 a2,
        unsigned int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        int a6,
        int *a7)
{
  struct tagRECT *v7; // r14
  WindowActions *v8; // r15
  __int64 v9; // rdi
  const struct CMonitorTopology::MonitorData *CurrentMonitorDataFromId; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  const struct tagWND *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagRECT v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagTHREADINFO *v22; // rax
  char v24; // r12
  char v25; // al
  char v26; // bl
  _DWORD *v27; // rax
  int v28; // esi
  int v29; // r15d
  int v30; // edi
  int v31; // r14d
  const char *StateString; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 UserSessionState; // rax
  __int64 v36; // rcx
  struct tagRECT *v37; // rax
  struct tagRECT *v38; // rax
  char v39; // r8
  struct tagRECT v40; // xmm6
  unsigned __int16 v41; // bx
  __int64 *v42; // rax
  char v43; // al
  char v44; // al
  LONG bottom; // edi
  LONG top; // r14d
  LONG right; // ebx
  LONG left; // esi
  __int64 v49; // rax
  char v50; // di
  bool v51; // si
  const char *v52; // rbx
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  int ArrangedOptions; // eax
  struct tagRECT *v57; // rax
  char v58; // r14
  struct tagRECT *v59; // rax
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 Prop; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  char v65; // al
  LONG v66; // edi
  LONG v67; // r14d
  LONG v68; // ebx
  LONG v69; // esi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  CHECKPOINT *v74; // rax
  bool v75; // di
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx
  struct tagRECT v79; // xmm6
  __int64 v80; // rcx
  int WindowState; // esi
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v82; // r8
  char v83; // di
  const char *v84; // rax
  int v85; // r8d
  int v86; // edx
  int v87; // r9d
  int *v88; // rbx
  char v89; // r13
  _DWORD *v90; // rax
  int v91; // esi
  int v92; // r15d
  int v93; // edi
  int v94; // r14d
  int v95; // eax
  const char *v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // [rsp+40h] [rbp-C0h]
  __int64 v101; // [rsp+48h] [rbp-B8h]
  __int64 v102; // [rsp+50h] [rbp-B0h]
  __int64 v103; // [rsp+58h] [rbp-A8h]
  __int64 v104; // [rsp+60h] [rbp-A0h]
  __int64 v105; // [rsp+68h] [rbp-98h]
  __int64 v106; // [rsp+70h] [rbp-90h]
  char v107; // [rsp+80h] [rbp-80h]
  char v108; // [rsp+80h] [rbp-80h]
  char v109; // [rsp+81h] [rbp-7Fh]
  char v110; // [rsp+81h] [rbp-7Fh]
  char v111; // [rsp+81h] [rbp-7Fh]
  char v112; // [rsp+82h] [rbp-7Eh]
  char v113; // [rsp+82h] [rbp-7Eh]
  unsigned int v114; // [rsp+88h] [rbp-78h] BYREF
  struct tagRECT *v115; // [rsp+90h] [rbp-70h]
  int *v116; // [rsp+98h] [rbp-68h]
  __int64 v117; // [rsp+A0h] [rbp-60h]
  struct tagRECT v118; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v119; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v121; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v122; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v123; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v124; // [rsp+108h] [rbp+8h]
  int v125; // [rsp+10Ch] [rbp+Ch]
  struct tagRECT v126; // [rsp+110h] [rbp+10h]
  int v127; // [rsp+120h] [rbp+20h]

  v7 = a5;
  v8 = a1;
  v9 = a2;
  *(_QWORD *)&v118.left = a1;
  v121.m128i_i64[0] = a2;
  v114 = a3;
  v115 = a5;
  v116 = a7;
  CurrentMonitorDataFromId = CMonitorTopology::GetCurrentMonitorDataFromId(
                               (const struct CMonitorTopology::MonitorId *)(a2 + 48),
                               0);
  v12 = ValidateHmonitor(*(_QWORD *)CurrentMonitorDataFromId);
  v117 = v12;
  v15 = PtiCurrent(v14, v13);
  Win32HM_LockIntoThread<1>((__int64)v15, v12, (__int64 *)BugCheckParameter3);
  if ( WindowActions::IsInterceptWindow(v8, v16) )
  {
    v19 = *a4;
    v121 = *(__m128i *)a5;
    v118 = v19;
    WindowActions::xxxInterceptRestoreToPosAndState(v18, v12, v9, v114, &v118, &v121, a6, a7);
    v22 = PtiCurrent(v21, v20);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v22, BugCheckParameter3);
    return 1;
  }
  v24 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v26 = 0;
    v25 = 0;
  }
  else
  {
    v25 = 1;
    v26 = 0;
  }
  v107 = v25;
  v109 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v27 = *(_DWORD **)(v12 + 40);
    v28 = v27[14];
    v29 = v27[12];
    v30 = v27[13];
    v31 = v27[11];
    StateString = AdvancedWindowPos::GetStateString(v114);
    UserSessionState = W32GetUserSessionState(v34, v33);
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v107,
      v109,
      *(_QWORD *)(UserSessionState + 69416),
      4u,
      4u,
      0x2Eu,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      StateString,
      v31,
      v29,
      v30,
      v28,
      v30 - v31,
      v28 - v29);
    v8 = *(WindowActions **)&v118.left;
    v26 = 0;
    v9 = v121.m128i_i64[0];
    v12 = v117;
    v7 = v115;
  }
  v36 = v114;
  if ( !v114 )
  {
    v37 = (struct tagRECT *)anonymous_namespace_::xxxNormalizeRect((__int64)&v119, v8, (__int64)a4, v12, v9, 1);
    v36 = 0LL;
    *a4 = *v37;
  }
  if ( (((_DWORD)v36 - 1) & 0xFFFFFFFD) == 0 )
  {
    v38 = (struct tagRECT *)anonymous_namespace_::xxxNormalizeRect((__int64)&v119, v8, (__int64)v7, v12, v9, 1);
    v36 = v114;
    *v7 = *v38;
  }
  v39 = 0;
  if ( (_DWORD)v36 == 3 )
  {
    v40 = *a4;
    v41 = *(_WORD *)(v9 + 40);
    v121 = 0LL;
    v42 = (__int64 *)CMonitorTopology::MonitorData::LogicalWorkArea((CMonitorTopology::MonitorData *)v9, &v122, v8);
    v119 = v40;
    v43 = CallShell::xxxMigrateWindowHandler(
            (struct tagRECT *)v8,
            0,
            v42,
            (__int64 *)(v9 + 24),
            v41,
            (struct tagWND *)&v119,
            v12,
            &v121,
            &v114,
            v116);
    v26 = 0;
    if ( !v43 )
    {
      ArrangedOptions = anonymous_namespace_::GetArrangedOptions(
                          (struct tagWND *)a4,
                          v8,
                          (CMonitorTopology::MonitorData *)v9);
      v57 = (struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                                (__int64)&v122,
                                v8,
                                (__int64)a4,
                                v12,
                                v9,
                                ArrangedOptions | 1u);
      v39 = 0;
      *a4 = *v57;
      goto LABEL_36;
    }
    v36 = v114;
    if ( v114 != 3 )
    {
      v17 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v50 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v50 = 0;
      }
      v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v50 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v52 = "maximized";
        if ( v114 != 1 )
          v52 = "restored";
        v53 = W32GetUserSessionState(v114, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v54) = v51;
        LOBYTE(v55) = v50;
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v55,
          v54,
          *(_QWORD *)(v53 + 69416),
          4,
          4,
          48,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          (__int64)v52);
        v36 = v114;
        v26 = 0;
      }
      a6 |= 0x10u;
      v39 = 0;
      *a4 = *v7;
      goto LABEL_37;
    }
    v39 = 1;
    *a4 = (struct tagRECT)v121;
    v17 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v44 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v44 = 0;
    }
    v110 = v44;
    LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v112 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v44 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      bottom = a4->bottom;
      top = a4->top;
      right = a4->right;
      left = a4->left;
      v49 = W32GetUserSessionState(v36, v17);
      LODWORD(v105) = bottom - top;
      LODWORD(v104) = right - left;
      LODWORD(v103) = bottom;
      LODWORD(v102) = right;
      LODWORD(v101) = top;
      LODWORD(v100) = left;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v110,
        v112,
        *(_QWORD *)(v49 + 69416),
        4u,
        4u,
        0x2Fu,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      v39 = 1;
      v26 = 0;
LABEL_36:
      v36 = v114;
    }
  }
LABEL_37:
  v108 = 1;
  v58 = 1;
  if ( (_DWORD)v36 == 3 )
  {
    if ( !v39 )
    {
      v59 = WindowMargins::ReduceRect(
              (WindowMargins *)&v122,
              (struct tagRECT *)v8,
              (const struct tagWND *)a4,
              (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v117 + 40) + 60LL));
      v60 = *((_QWORD *)v8 + 5);
      *a4 = *v59;
      LogicalToPhysicalDPIRect(a4, a4, *(unsigned int *)(v60 + 288), 0LL);
    }
    v61 = W32GetUserSessionState(v36, v17);
    Prop = GetProp((__int64)v8, *(unsigned __int16 *)(v61 + 41398), 1u);
    if ( Prop )
      *(_DWORD *)(Prop + 16) &= 0xFFFFFFF5;
    v64 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v65 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v65 = 0;
    }
    v111 = v65;
    v113 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v65 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v66 = a4->bottom;
      v67 = a4->top;
      v68 = a4->right;
      v69 = a4->left;
      LOBYTE(v64) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v70 = W32GetUserSessionState(v64, v63);
      LODWORD(v105) = v66 - v67;
      LODWORD(v104) = v68 - v69;
      LODWORD(v103) = v66;
      LODWORD(v102) = v68;
      LODWORD(v101) = v67;
      LODWORD(v100) = v69;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v111,
        v113,
        *(_QWORD *)(v70 + 69416),
        4u,
        4u,
        0x31u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105);
      v26 = 0;
      v58 = 1;
    }
    if ( (unsigned __int8)WindowArrangement::xxxSetSnapArrangementPos(v8, a4, 2LL, (unsigned int)*v116) )
    {
      v73 = W32GetUserSessionState(v72, v71);
      v74 = (CHECKPOINT *)GetProp((__int64)v8, *(unsigned __int16 *)(v73 + 41398), 1u);
      if ( v74 )
        CHECKPOINT::SetNormalRect(v74, v8, v115, 0);
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u )
      {
        v26 = 1;
      }
      v75 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v76 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v71);
        LOBYTE(v77) = v75;
        LOBYTE(v78) = v26;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v78,
          v77,
          *(_QWORD *)(v76 + 69416),
          2,
          7,
          50,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      v58 = 0;
      v108 = 0;
    }
  }
  else
  {
    if ( (_DWORD)v36 == 1 )
      a4 = v115;
    v79 = *a4;
    WindowState = AdvancedWindowPos::GetWindowState(v8);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (v80 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v80 & 8) == 0)
      || (v83 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v83 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
      && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v26 = 1;
    }
    if ( v83 || v26 )
    {
      W32GetUserSessionState(v80, *(_QWORD *)&WPP_GLOBAL_Control);
      v84 = AdvancedWindowPos::GetStateString(WindowState);
      LOBYTE(v85) = v26;
      LOBYTE(v86) = v83;
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v86,
        v85,
        v87,
        5,
        4,
        51,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        (__int64)v84);
    }
    v88 = v116;
    v124 = v114;
    v125 = a6;
    v127 = *v116;
    v123 = 0LL;
    v126 = v79;
    AdvancedWindowPos::xxxApplyWindowPos(v8, (struct tagWND *)&v123, v82);
    if ( WindowState == 3 )
      NotifyShell::ArrangementCompleted(v8, (unsigned int)*v88, 2LL);
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v89 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v89 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v24 = 0;
  }
  if ( v89 || v24 )
  {
    v90 = (_DWORD *)*((_QWORD *)v8 + 5);
    v91 = v90[25];
    v92 = v90[23];
    v93 = v90[24];
    v94 = v90[22];
    v95 = AdvancedWindowPos::GetWindowState(*(const struct tagWND **)&v118.left);
    v96 = AdvancedWindowPos::GetStateString(v95);
    v99 = W32GetUserSessionState(v98, v97);
    LODWORD(v106) = v91 - v92;
    LODWORD(v105) = v93 - v94;
    LODWORD(v104) = v91;
    LODWORD(v103) = v93;
    LODWORD(v102) = v92;
    LODWORD(v101) = v94;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v89,
      v24,
      *(_QWORD *)(v99 + 69416),
      5u,
      4u,
      0x34u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v96,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
    v58 = v108;
  }
  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(BugCheckParameter3, v71);
  return v58;
}
