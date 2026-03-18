/*
 * XREFs of ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848
 * Callers:
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x140222504 (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x140223790 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C1474 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402C2A38 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14014E948 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14014E984 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x14015022C (_anonymous_namespace_--xxxAwpMinMaximizeEx.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x140183E08 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x14019AC0C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401D3670 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140203708 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14021F87C (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402C0178 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x1402CD9E0 (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DB324 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxApplyWindowPos(
        AdvancedWindowPos *this,
        struct tagRECT *a2,
        const struct AdvancedWindowPos::WINDOWPOSANDSTATE *a3)
{
  LONG bottom; // edx
  char v5; // r12
  char v6; // bl
  int v7; // r14d
  int v8; // esi
  char v9; // r8
  AdvancedWindowPos *v10; // r13
  int v11; // r15d
  int v12; // edx
  __int64 v13; // rdx
  char v14; // di
  char v15; // bl
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  char v19; // di
  char v20; // bl
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  char v24; // si
  char v25; // di
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rcx
  char v31; // si
  bool v32; // r14
  const char *StateString; // rax
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  struct tagWND *v41; // r14
  unsigned int v42; // r8d
  char v43; // r13
  _DWORD *v44; // rax
  int v45; // edi
  int v46; // r14d
  int v47; // ebx
  int v48; // esi
  __int64 v49; // rax
  const struct tagRECT *v50; // rsi
  char v51; // di
  char v52; // bl
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  struct tagTHREADINFO *v56; // rax
  __int64 left; // rdx
  struct tagWND *v58; // rax
  char v59; // di
  char v60; // bl
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  __int64 *v64; // rdx
  ULONG_PTR v65; // r9
  AdvancedWindowPos *v66; // rbx
  char v67; // r13
  _DWORD *v68; // rax
  int v69; // esi
  int v70; // r15d
  int v71; // edi
  int v72; // r14d
  int v73; // eax
  const char *v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  int v78; // r15d
  char v79; // di
  struct tagMONITOR *v80; // r8
  char v81; // bl
  __int64 v82; // rax
  int v83; // r8d
  int v84; // edx
  char v85; // di
  char v86; // bl
  __int64 v87; // rax
  int v88; // r8d
  int v89; // edx
  __int64 v90; // rcx
  __int64 v91; // rax
  CHECKPOINT *Prop; // rax
  struct tagMONITOR *v93; // r8
  int v94; // r15d
  int v95; // eax
  char v96; // di
  char v97; // bl
  __int64 v98; // rax
  int v99; // r8d
  int v100; // edx
  char v101; // di
  char v102; // bl
  __int64 v103; // rax
  int v104; // r8d
  int v105; // edx
  const struct tagRECT *v106; // rdx
  char v107; // di
  char v108; // bl
  LONG v109; // r14d
  LONG v110; // r13d
  __int64 v111; // rax
  struct tagMONITOR *v112; // r8
  char v113; // di
  char v114; // bl
  __int64 v115; // rax
  int v116; // r8d
  int v117; // edx
  char v118; // bl
  bool v119; // di
  __int64 v120; // rax
  int v121; // r8d
  int v122; // edx
  char v123; // di
  char v124; // bl
  const char *v125; // rax
  int v126; // r8d
  int v127; // edx
  int v128; // r9d
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rbx
  char v132; // si
  char v133; // di
  __int64 v134; // rax
  int v135; // r8d
  int v136; // edx
  __int64 v137; // rdx
  __int64 v138; // rdx
  __int64 v139; // [rsp+40h] [rbp-C0h]
  __int64 v140; // [rsp+48h] [rbp-B8h]
  __int64 v141; // [rsp+50h] [rbp-B0h]
  __int64 v142; // [rsp+58h] [rbp-A8h]
  __int64 v143; // [rsp+60h] [rbp-A0h]
  __int64 v144; // [rsp+68h] [rbp-98h]
  char v145; // [rsp+80h] [rbp-80h]
  char v146; // [rsp+81h] [rbp-7Fh]
  char v147; // [rsp+82h] [rbp-7Eh]
  unsigned int v148; // [rsp+84h] [rbp-7Ch]
  int v149; // [rsp+84h] [rbp-7Ch]
  char v150; // [rsp+88h] [rbp-78h]
  unsigned __int8 v151; // [rsp+89h] [rbp-77h]
  unsigned int WindowState; // [rsp+8Ch] [rbp-74h]
  int v153; // [rsp+90h] [rbp-70h]
  LONG right; // [rsp+A8h] [rbp-58h]
  int v157; // [rsp+ACh] [rbp-54h]
  int v158; // [rsp+B0h] [rbp-50h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct tagRECT v160; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v161[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v162[3]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v163; // [rsp+100h] [rbp+0h]
  char v164; // [rsp+104h] [rbp+4h]
  __int128 v165; // [rsp+108h] [rbp+8h]

  bottom = a2->bottom;
  v5 = 1;
  v158 = bottom & 0x10;
  v6 = bottom & 1;
  v151 = bottom & 1;
  v153 = bottom & 8;
  v7 = bottom & 2;
  v8 = bottom & 0x20;
  v9 = 0;
  v157 = v7;
  v10 = this;
  if ( (bottom & 4) != 0 || (v145 = 0, (bottom & 8) != 0) )
    v145 = 1;
  if ( (bottom & 0x40) != 0 || (v146 = 1, IsRectEmptyInl(a2 + 1)) )
    v146 = v9;
  if ( (bottom & 0x100) != 0 || (v147 = 1, IsRectEmptyInl(a2 + 1)) )
    v147 = v9;
  right = a2->right;
  if ( right == 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1728LL);
  WindowState = AdvancedWindowPos::GetWindowState(v10);
  v11 = ((a2->bottom & 0x200) << 7) | 0x20;
  v12 = a2->bottom & 0x80;
  if ( !v12 )
    v11 = (a2->bottom & 0x200) << 7;
  v13 = v12 != 0 ? 1048640 : 64;
  v148 = v13;
  if ( v6 )
  {
    v11 |= 0x10u;
    v13 = (unsigned int)v13 | 0x10;
    v148 = v13;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v14 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v15 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v15 = 0;
    }
    if ( v14 || v15 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        4,
        53,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      v13 = v148;
    }
    if ( v7 )
    {
      v11 |= 0x40u;
      v13 = (unsigned int)v13 | 4;
      v148 = v13;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v19 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v20 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v20 = 0;
      }
      if ( v19 || v20 )
      {
        v21 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v23,
          v22,
          *(_QWORD *)(v21 + 69416),
          5,
          4,
          54,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
  }
  if ( v8 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v24 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v24 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v25 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v25 = 0;
    }
    if ( v24 || v25 )
    {
      v26 = *(_QWORD *)v10;
      v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
      LOBYTE(v28) = v25;
      LOBYTE(v29) = v24;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(v27 + 69416),
        5,
        4,
        55,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v26);
    }
    xxxSetForegroundWindowWithOptions(v10, 31LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)v10 + 96) & 0x10) != 0 )
  {
    WindowActions::xxxInterceptApplyWindowPos(v10, (struct tagWND *)a2, 0LL);
    return;
  }
  v30 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v31 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v31 = 0;
  }
  v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    StateString = AdvancedWindowPos::GetStateString(a2->right);
    v34 = *(_QWORD *)v10;
    v35 = (__int64)StateString;
    v38 = W32GetUserSessionState(v37, v36);
    LOBYTE(v39) = v32;
    LOBYTE(v40) = v31;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v40,
      v39,
      *(_QWORD *)(v38 + 69416),
      4,
      4,
      56,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v34,
      v35);
  }
  v41 = 0LL;
  BugCheckParameter3[0] = 0LL;
  if ( v145 )
  {
    if ( v146 )
      v42 = 18;
    else
      v42 = *(_DWORD *)(*((_QWORD *)v10 + 5) + 288LL);
    v41 = (struct tagWND *)MonitorFromRect(&a2[1].left, 2u, v42);
    BugCheckParameter3[0] = (ULONG_PTR)v41;
    v13 = *(_QWORD *)&WPP_GLOBAL_Control;
    v43 = 0;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
    {
      v30 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
      if ( (v30 & 8) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
        v43 = 1;
    }
    v150 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v43 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v44 = (_DWORD *)*((_QWORD *)v41 + 5);
      v45 = v44[10];
      v46 = v44[8];
      v47 = v44[9];
      v48 = v44[7];
      v49 = W32GetUserSessionState(v30, *(_QWORD *)&WPP_GLOBAL_Control);
      LODWORD(v140) = v46;
      LODWORD(v139) = v48;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v43,
        v150,
        *(_QWORD *)(v49 + 69416),
        4u,
        4u,
        0x39u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v139,
        v140,
        v47,
        v45,
        v47 - v48,
        v45 - v46);
      v41 = (struct tagWND *)BugCheckParameter3[0];
    }
    v10 = this;
  }
  v50 = 0LL;
  if ( v153 )
  {
    v50 = a2 + 1;
    v11 |= 8u;
    v30 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v51 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v51 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v52 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v52 = 0;
    }
    if ( v51 || v52 )
    {
      v53 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
      LOBYTE(v54) = v52;
      LOBYTE(v55) = v51;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v55,
        v54,
        *(_QWORD *)(v53 + 69416),
        5,
        4,
        58,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
  }
  v56 = PtiCurrent(v30, v13);
  Win32HM_LockIntoThread<1>((__int64)v56, (__int64)v41, (__int64 *)v161);
  v162[1] = v50;
  v164 = 0;
  left = (unsigned int)a2[2].left;
  v58 = 0LL;
  if ( right == 1 )
    v58 = v41;
  v162[2] = *(_QWORD *)&a2->left;
  v162[0] = v58;
  v163 = left;
  v165 = 0LL;
  if ( right == 2 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
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
      v61 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, left);
      LOBYTE(v62) = v60;
      LOBYTE(v63) = v59;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v63,
        v62,
        *(_QWORD *)(v61 + 69416),
        5,
        4,
        59,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
    }
    if ( v157 )
      v11 |= 0x40u;
    anonymous_namespace_::xxxAwpMinMaximizeEx((__int64)v10, (unsigned int)v151 + 6, v11, (__int64)v162);
    LODWORD(v65) = 0;
  }
  else if ( right == 1 )
  {
    v78 = v11 | 2;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v79 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v79 = 0;
    }
    v80 = (struct tagMONITOR *)&WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v81 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v81 = 0;
    }
    if ( v79 || v81 )
    {
      v82 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v83) = v81;
      LOBYTE(v84) = v79;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v84,
        v83,
        *(_QWORD *)(v82 + 69416),
        5,
        4,
        60,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      v80 = (struct tagMONITOR *)&WPP_RECORDER_INITIALIZED;
    }
    if ( v145 )
    {
      v78 |= 4u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v85 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v85 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v86 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v86 = 0;
      }
      if ( v85 || v86 )
      {
        v87 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        LOBYTE(v88) = v86;
        LOBYTE(v89) = v85;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v89,
          v88,
          *(_QWORD *)(v87 + 69416),
          5,
          4,
          61,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      if ( !v153 )
        AdvancedWindowPos::xxxMigrateCheckpoint((struct tagRECT *)v10, v41, v80);
    }
    anonymous_namespace_::xxxAwpMinMaximizeEx((__int64)v10, 3LL, v78, (__int64)v162);
    LODWORD(v65) = 0;
    if ( v153 )
    {
      v91 = W32GetUserSessionState(v90, v64);
      Prop = (CHECKPOINT *)GetProp((__int64)v10, *(unsigned __int16 *)(v91 + 41398), 1u);
      if ( Prop )
        CHECKPOINT::SetNormalRect(Prop, v10, v50, 0);
      AdvancedWindowPos::xxxMigrateCheckpoint((struct tagRECT *)v10, v41, v93);
      LODWORD(v65) = 0;
    }
  }
  else
  {
    v94 = v11 | 0x80;
    v95 = v148 | 0x80000;
    v149 = v148 | 0x80000;
    if ( v146 )
    {
      v149 = v95 | 0x800000;
      v94 |= 0x200u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v96 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v96 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v97 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v97 = 0;
      }
      if ( v96 || v97 )
      {
        v98 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, left);
        LOBYTE(v99) = v97;
        LOBYTE(v100) = v96;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v100,
          v99,
          *(_QWORD *)(v98 + 69416),
          5,
          4,
          62,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      v95 = v149;
    }
    if ( v147 )
    {
      v149 = v95 | 0x400000;
      v94 |= 0x100u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v101 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v101 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v102 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v102 = 0;
      }
      if ( v101 || v102 )
      {
        v103 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, left);
        LOBYTE(v104) = v102;
        LOBYTE(v105) = v101;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v105,
          v104,
          *(_QWORD *)(v103 + 69416),
          5,
          4,
          63,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
    }
    v106 = a2;
    v160 = a2[1];
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v107 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v107 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v108 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v108 = 0;
    }
    v109 = v160.bottom;
    v110 = v160.right;
    if ( v107 || v108 )
    {
      v111 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LODWORD(v144) = v160.bottom - v160.top;
      LODWORD(v143) = v160.right - v160.left;
      LODWORD(v142) = v160.bottom;
      LODWORD(v141) = v160.right;
      LODWORD(v140) = v160.top;
      LODWORD(v139) = v160.left;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v107,
        v108,
        *(_QWORD *)(v111 + 69416),
        5u,
        4u,
        0x40u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v139,
        v140,
        v141,
        v142,
        v143,
        v144);
      v106 = a2;
    }
    if ( WindowState )
    {
      if ( IsArranged(this) )
      {
        v94 |= 4u;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v113 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v113 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v114 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v114 = 0;
        }
        if ( v113 || v114 )
        {
          v115 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
          LOBYTE(v116) = v114;
          LOBYTE(v117) = v113;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v117,
            v116,
            *(_QWORD *)(v115 + 69416),
            5,
            4,
            65,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
      }
      if ( BugCheckParameter3[0] && !v153 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v118 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v118 = 0;
        }
        v119 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v118 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v120 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
          LOBYTE(v121) = v119;
          LOBYTE(v122) = v118;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v122,
            v121,
            *(_QWORD *)(v120 + 69416),
            4,
            4,
            66,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
        AdvancedWindowPos::xxxMigrateCheckpoint((struct tagRECT *)this, (struct tagWND *)BugCheckParameter3[0], v112);
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v123 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v123 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v124 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v124 = 0;
      }
      if ( v123 || v124 )
      {
        W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        v125 = AdvancedWindowPos::GetStateString(WindowState);
        LOBYTE(v126) = v124;
        LOBYTE(v127) = v123;
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v127,
          v126,
          v128,
          5,
          4,
          67,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          (__int64)v125);
      }
      anonymous_namespace_::xxxAwpMinMaximizeEx((__int64)this, 9LL, v94, (__int64)v162);
      LODWORD(v65) = 0;
      v66 = this;
      goto LABEL_98;
    }
    if ( !IsRectEmptyInl(v106 + 1) )
    {
      BugCheckParameter3[0] = -1LL;
      v129 = *v64;
      BugCheckParameter3[1] = v65;
      if ( v129 )
      {
        LOBYTE(v64) = 1;
        v130 = HMValidateHandleNoSecure(v129, (__int64)v64);
        LOWORD(v65) = 0;
        v131 = v130;
        if ( v130 )
        {
          Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, v130);
          LOWORD(v65) = 0;
        }
      }
      else
      {
        v131 = v65;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v132 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v132 = v65;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v133 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == (_WORD)v65) )
      {
        v133 = v65;
      }
      if ( v132 || v133 )
      {
        v134 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v64);
        LOBYTE(v135) = v133;
        LOBYTE(v136) = v132;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v136,
          v135,
          *(_QWORD *)(v134 + 69416),
          5,
          4,
          68,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
      }
      v137 = v131;
      v66 = this;
      xxxSetWindowPos(
        this,
        v137,
        (unsigned int)v160.left,
        (unsigned int)v160.top,
        v110 - v160.left,
        v109 - v160.top,
        v149);
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v138);
      LODWORD(v65) = 0;
      goto LABEL_98;
    }
  }
  v66 = this;
LABEL_98:
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v5 = v65;
  }
  v67 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v68 = (_DWORD *)*((_QWORD *)v66 + 5);
    v69 = v68[25];
    v70 = v68[23];
    v71 = v68[24];
    v72 = v68[22];
    v73 = AdvancedWindowPos::GetWindowState(v66);
    v74 = AdvancedWindowPos::GetStateString(v73);
    v77 = W32GetUserSessionState(v76, v75);
    LODWORD(v144) = v71 - v72;
    LODWORD(v143) = v69;
    LODWORD(v142) = v71;
    LODWORD(v141) = v70;
    LODWORD(v140) = v72;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v5,
      v67,
      *(_QWORD *)(v77 + 69416),
      4u,
      4u,
      0x45u,
      (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
      v74,
      v140,
      v141,
      v142,
      v143,
      v144,
      v69 - v70);
    LODWORD(v65) = 0;
  }
  if ( v158 != (_DWORD)v65 )
    ShellWindowPos::NotifyPosAndStateApplied(this, WindowState, &a2[1], v163);
  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(v161, (__int64)v64);
}
