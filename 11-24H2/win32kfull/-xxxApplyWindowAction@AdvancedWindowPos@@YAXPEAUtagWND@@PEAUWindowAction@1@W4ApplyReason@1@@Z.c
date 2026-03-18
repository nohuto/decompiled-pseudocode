/*
 * XREFs of ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A67A4 (-SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A7510 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A7BD4 (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z @ 0x1402A8B68 (-xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z.c)
 *     ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402C0A80 (-ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C0CD0 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C68BC (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CC61C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CCB4C (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CCFF0 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402D7B40 (-xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D93AC (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x1400688D0 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140088668 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     PWInsertAfter @ 0x14008C888 (PWInsertAfter.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x1400F8754 (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014AC60 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x14014E8D8 (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14014E948 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14014E984 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401A51F8 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401BF74C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1401CE7C8 (LogicalToPhysicalInPlaceRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140203708 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA?AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z @ 0x1402AB5C4 (-PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA-AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z.c)
 *     ?BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z @ 0x1402C2260 (-BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402C2740 (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CD6E0 (-xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@.c)
 *     ?OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z @ 0x1402D1E6C (-OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z.c)
 *     ?LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z @ 0x1402D2E88 (-LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z.c)
 *     ?LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D3128 (-LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@.c)
 *     ?PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D36A8 (-PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 *     ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402D3C64 (-SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNo.c)
 *     ?ShouldCallShellForAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D3F48 (-ShouldCallShellForAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 *     ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D4568 (-TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D4AB0 (-UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?UpdateCheckpointForAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUCHECKPOINT@@AEBUtagRECT@@W4ActionModifier@1@@Z @ 0x1402D50AC (-UpdateCheckpointForAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUCHECKPOINT@@AEBUtagRECT@@W4Acti.c)
 *     ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402D5304 (-xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@P.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D70FC (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D7D40 (-xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402D8B48 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DB288 (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DB324 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxApplyWindowAction(__int64 a1, __int64 a2, int a3)
{
  const struct AdvancedWindowPos::WindowAction *v5; // r8
  char v6; // si
  struct AdvancedWindowPos::WindowAction *v7; // r8
  struct AdvancedWindowPos::WindowAction *v8; // r8
  struct tagWND *v9; // rdx
  struct AdvancedWindowPos::WindowAction *v10; // r8
  int v11; // ecx
  int v12; // edx
  struct AdvancedWindowPos::WindowAction *v13; // r8
  int v14; // ebx
  int v15; // r14d
  int v16; // r12d
  int v17; // ecx
  char v18; // al
  bool v19; // di
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // di
  __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  bool v28; // di
  char v29; // bl
  __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  char v33; // di
  char v34; // bl
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  int v38; // esi
  LONG bottom; // edi
  LONG right; // ebx
  unsigned int WindowState; // eax
  struct CHECKPOINT *IfValid; // rax
  unsigned int *v43; // rdx
  struct tagRECT v44; // xmm0
  __int64 v45; // rax
  unsigned __int64 v46; // xmm6_8
  bool v47; // bl
  bool v48; // di
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  char v52; // di
  char v53; // bl
  __int64 v54; // rax
  char v55; // r14
  char v56; // si
  __int64 v57; // rax
  bool v58; // r12
  int v59; // eax
  LONG v60; // r8d
  LONG v61; // r9d
  char v62; // al
  char v63; // r12
  LONG v64; // esi
  LONG v65; // ebx
  LONG v66; // r14d
  LONG v67; // edi
  const char *StateString; // rax
  int v69; // r10d
  __int64 v70; // r9
  int v71; // r11d
  char v72; // r14
  char v73; // si
  __int64 v74; // rax
  unsigned int v75; // r14d
  CMonitorTopology *v76; // rcx
  char v77; // di
  struct tagRECT *v78; // rbx
  int v79; // eax
  __int64 left; // rdx
  int top; // r8d
  char v82; // di
  char v83; // bl
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
  char v87; // di
  char v88; // bl
  __int64 v89; // rax
  int v90; // r8d
  int v91; // edx
  int v92; // edx
  const struct CMonitorTopology::MonitorData *v93; // rdi
  LONG v94; // eax
  CMonitorTopology *v95; // rcx
  __int64 v96; // rdx
  char v97; // cl
  char v98; // di
  char v99; // bl
  __int64 v100; // rax
  int v101; // r8d
  int v102; // edx
  struct tagRECT *v103; // rax
  char v104; // di
  char v105; // bl
  __int64 v106; // rax
  int v107; // r8d
  int v108; // edx
  struct tagRECT *v109; // rax
  struct tagRECT *v110; // rax
  unsigned int v111; // ebx
  __int64 v112; // rdx
  CHECKPOINT *v113; // rbx
  unsigned int *v114; // rax
  __int64 v115; // rdx
  int v116; // edi
  const struct CMonitorTopology *v117; // rbx
  __int64 **RecalcProperty; // rax
  __int64 v119; // rdx
  int v120; // [rsp+30h] [rbp-D8h]
  __int16 v121; // [rsp+38h] [rbp-D0h]
  __int16 v122; // [rsp+38h] [rbp-D0h]
  int v123; // [rsp+40h] [rbp-C8h]
  __int64 v124; // [rsp+48h] [rbp-C0h]
  __int64 v125; // [rsp+50h] [rbp-B8h]
  __int64 v126; // [rsp+58h] [rbp-B0h]
  __int64 v127; // [rsp+60h] [rbp-A8h]
  __int64 v128; // [rsp+68h] [rbp-A0h]
  __int64 v129; // [rsp+70h] [rbp-98h]
  char v130; // [rsp+88h] [rbp-80h]
  char v131; // [rsp+89h] [rbp-7Fh]
  char v132; // [rsp+8Ah] [rbp-7Eh]
  char v133; // [rsp+8Bh] [rbp-7Dh]
  int v134; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v135; // [rsp+90h] [rbp-78h]
  bool v136; // [rsp+94h] [rbp-74h]
  unsigned int v137; // [rsp+98h] [rbp-70h]
  int v138; // [rsp+9Ch] [rbp-6Ch]
  int v139; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v140; // [rsp+A0h] [rbp-68h]
  struct tagRECT v141; // [rsp+A8h] [rbp-60h] BYREF
  CHECKPOINT *v142; // [rsp+B8h] [rbp-50h]
  _BYTE v143[40]; // [rsp+C0h] [rbp-48h] BYREF
  struct tagRECT v144; // [rsp+E8h] [rbp-20h] BYREF
  struct tagRECT v145; // [rsp+F8h] [rbp-10h] BYREF
  struct tagRECT v146; // [rsp+108h] [rbp+0h] BYREF

  *(_BYTE *)(a2 + 176) = 1;
  AdvancedWindowPos::LogApplyWindowActionStart((const struct tagWND *)a1, (unsigned int *)a2, a3);
  v6 = 0;
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(a2 + 4) & 0x800) != 0 )
  {
    AdvancedWindowPos::PostAsyncWindowAction((AdvancedWindowPos *)a1, (PETHREAD **)a2, v5);
    AdvancedWindowPos::LogApplyWindowActionEnd((const struct tagWND *)a1, 0);
    return;
  }
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v143, (struct tagWND *)a1);
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
    AdvancedWindowPos::xxxSetForegroundForWindowAction((AdvancedWindowPos *)a1, (struct tagWND *)a2, v7);
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_20;
  if ( (*(_DWORD *)(a2 + 4) & 0x400) != 0 )
    AdvancedWindowPos::TransformWindowActionToPhysical((AdvancedWindowPos *)a1, (struct tagWND *)a2, v8);
  if ( AdvancedWindowPos::ShouldCallShellForAction((AdvancedWindowPos *)a1, (struct tagWND *)a2, v8) )
    AdvancedWindowPos::xxxModifyActionForArrangement((AdvancedWindowPos *)a1, (struct tagWND *)a2, v10);
  v11 = *(_DWORD *)(a2 + 4);
  if ( (v11 & 0x2000) != 0 || (*(_DWORD *)(a1 + 384) & 0x10) == 0 )
  {
    if ( (*(_DWORD *)a2 & 0x200) != 0
      && (v11 & 0x10000) == 0
      && !DesktopRecalc::BeginApplyWindowAction((DesktopRecalc *)a1, v9) )
    {
      v12 = 2;
      goto LABEL_256;
    }
    if ( AdvancedWindowPos::HasFullscreenState((AdvancedWindowPos *)a1, v9) )
      AdvancedWindowPos::UpdateActionForFullScreenWindow((AdvancedWindowPos *)a1, (struct tagWND *)a2, v13);
LABEL_20:
    v14 = *(_DWORD *)a2 & 8;
    v15 = 0x1000000;
    v134 = 0x1000000;
    v16 = 0x40000;
    v135 = 0x40000;
    v17 = *(_DWORD *)a2 & 0x10;
    if ( v17 && ((*(_DWORD *)(a2 + 4) & 4) != 0 || v14) )
    {
      v16 = 786432;
      v18 = 1;
      v135 = 786432;
    }
    else
    {
      if ( !v17 )
      {
        v15 = 16777232;
        v16 = 262160;
        v134 = 16777232;
        v135 = 262160;
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
        {
          v6 = 1;
        }
        v19 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
           && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
        if ( v6 || v19 )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
          LOBYTE(v21) = v19;
          LOBYTE(v22) = v6;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v22,
            v21,
            *(_QWORD *)(UserSessionState + 69416),
            5,
            4,
            153,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
        v6 = 0;
      }
      v18 = 0;
    }
    v132 = v18;
    v131 = v18;
    if ( v14 )
    {
      PWInsertAfter(*(_QWORD *)(a2 + 32), (__int64)&WPP_RECORDER_INITIALIZED);
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
      {
        v6 = 1;
      }
      v23 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
         && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
      if ( v6 || v23 )
      {
        v24 = *(_QWORD *)(a2 + 32);
        v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v26) = v23;
        LOBYTE(v27) = v6;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v27,
          v26,
          *(_QWORD *)(v25 + 69416),
          5,
          4,
          154,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          v24);
      }
      if ( (*(_DWORD *)(a2 + 4) & 8) != 0 )
      {
        v15 |= 0x200u;
        v16 |= 0x400000u;
        v134 = v15;
        v135 = v16;
        v28 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v29 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v29 = 0;
        }
        if ( v28 || v29 )
        {
          v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          v121 = 155;
LABEL_62:
          LOBYTE(v32) = v29;
          LOBYTE(v31) = v28;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v31,
            v32,
            *(_QWORD *)(v30 + 69416),
            5,
            4,
            v121,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
      }
    }
    else
    {
      v15 |= 4u;
      v16 |= 0x40u;
      v134 = v15;
      v135 = v16;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v28 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v29 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v29 = 0;
      }
      if ( v28 || v29 )
      {
        v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        v121 = 156;
        goto LABEL_62;
      }
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( *(_BYTE *)(a2 + 8) )
      {
        v134 = v15 | 0x40;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v33 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v34 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v34 = 0;
        }
        if ( v33 || v34 )
        {
          v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          v122 = 157;
LABEL_95:
          LOBYTE(v37) = v34;
          LOBYTE(v36) = v33;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v36,
            v37,
            *(_QWORD *)(v35 + 69416),
            5,
            4,
            v122,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
        }
      }
      else
      {
        v134 = v15 | 0x80;
        v135 = v16 | 0x100000;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v33 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v34 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v34 = 0;
        }
        if ( v33 || v34 )
        {
          v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          v122 = 158;
          goto LABEL_95;
        }
      }
    }
    else
    {
      v135 = v16 | 1;
    }
    v38 = *(_DWORD *)a2 & 4;
    bottom = *(_DWORD *)a2 & 2;
    right = *(_DWORD *)a2 & 0x20;
    v138 = v38;
    v141.bottom = bottom;
    v141.right = right;
    WindowState = AdvancedWindowPos::GetWindowState((const struct tagWND *)a1);
    v140 = WindowState;
    if ( right )
      v137 = *(_DWORD *)(a2 + 40);
    else
      v137 = WindowState;
    IfValid = CHECKPOINT::GetIfValid((struct tagWND *)a1);
    v142 = IfValid;
    if ( IfValid )
      v44 = *(struct tagRECT *)((char *)IfValid + 20);
    else
      v44 = *(struct tagRECT *)(*(_QWORD *)(a1 + 40) + 88LL);
    v45 = *(_QWORD *)(a1 + 40);
    v145 = v44;
    v144 = v44;
    if ( (*(_DWORD *)(v45 + 288) & 0xF) != 2 )
    {
      v145 = v44;
      LogicalToPhysicalInPlaceRect(a1, (__int64)&v144);
      v46 = _mm_srli_si128((__m128i)v44, 8).m128i_u64[0];
      if ( *(_QWORD *)&v44.left != *(_QWORD *)&v144.left || v46 != *(_QWORD *)&v144.right )
      {
        v47 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v43 = &WPP_RECORDER_INITIALIZED;
        v48 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v47 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v50) = v48;
          LOBYTE(v51) = v47;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v51,
            v50,
            *(_QWORD *)(v49 + 69416),
            4,
            4,
            159,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
          v43 = &WPP_RECORDER_INITIALIZED;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v52 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v52 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v53 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v53 = 0;
        }
        if ( v52 || v53 )
        {
          v54 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LODWORD(v124) = v44.left;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v52,
            v53,
            *(_QWORD *)(v54 + 69416),
            5u,
            4u,
            0xA0u,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
            v124,
            v145.top,
            v46,
            v145.bottom,
            v46 - v44.left,
            v145.bottom - v145.top);
          v43 = &WPP_RECORDER_INITIALIZED;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v55 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v55 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v56 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v56 = 0;
        }
        if ( v55 || v56 )
        {
          v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LODWORD(v129) = v144.bottom - v144.top;
          LODWORD(v128) = v144.right - v144.left;
          LODWORD(v127) = v144.bottom;
          LODWORD(v126) = v144.right;
          LODWORD(v125) = v144.top;
          LODWORD(v124) = v144.left;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v55,
            v56,
            *(_QWORD *)(v57 + 69416),
            5u,
            4u,
            0xA1u,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
            v124,
            v125,
            v126,
            v127,
            v128,
            v129);
        }
        right = v141.right;
        bottom = v141.bottom;
      }
      v38 = v138;
    }
    v130 = 0;
    v139 = *(_DWORD *)(a2 + 4) & 0x40;
    v58 = 0;
    v146 = 0LL;
    if ( !right )
    {
      if ( bottom )
      {
        left = *(unsigned int *)(a2 + 12);
        top = *(_DWORD *)(a2 + 16);
        v144.left = *(_DWORD *)(a2 + 12);
        v144.top = top;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v82 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v82 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v83 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v83 = 0;
        }
        if ( v82 || v83 )
        {
          v84 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, left);
          LOBYTE(v85) = v83;
          LOBYTE(v86) = v82;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v86,
            v85,
            *(_QWORD *)(v84 + 69416),
            5,
            4,
            164,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
            v144.left,
            v144.top);
          top = v144.top;
          left = (unsigned int)v144.left;
        }
        v75 = v134;
      }
      else
      {
        left = (unsigned int)_mm_cvtsi128_si32((__m128i)v144);
        v75 = v134 | 2;
        top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v144, 4));
      }
      if ( v38 )
      {
        v144.right = left + *(_DWORD *)(a2 + 20);
        v144.bottom = top + *(_DWORD *)(a2 + 24);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v87 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v87 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v88 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v88 = 0;
        }
        if ( v87 || v88 )
        {
          v89 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, left);
          LOBYTE(v90) = v88;
          LOBYTE(v91) = v87;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v91,
            v90,
            *(_QWORD *)(v89 + 69416),
            5,
            4,
            165,
            (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
            LOBYTE(v144.right) - LOBYTE(v144.left),
            LOBYTE(v144.bottom) - LOBYTE(v144.top));
        }
      }
      else
      {
        v75 |= 1u;
      }
LABEL_166:
      if ( v140 == 2 && !v137 && (*(_DWORD *)(a2 + 4) & 0x10) != 0 )
        *((_DWORD *)v142 + 4) &= 0xFFFFFFF5;
      v76 = *(CMonitorTopology **)(a2 + 168);
      v145 = v144;
      v77 = v130;
      *(_QWORD *)&v141.left = CMonitorTopology::MonitorDataFromRect(v76, &v145, 2, 0x12u);
      if ( v130 && (v137 != 2 || v139) )
      {
        v78 = &v146;
        if ( !v58 )
          goto LABEL_174;
      }
      else
      {
        v78 = 0LL;
      }
      v92 = *(_DWORD *)(a2 + 4);
      if ( ((*(_DWORD *)a2 | v92) & 0x180) == 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) != 2 )
        {
          v93 = 0LL;
          if ( (v92 & 0x200) != 0 )
          {
            v94 = *(_DWORD *)(a2 + 100);
            v95 = *(CMonitorTopology **)(a2 + 168);
            v145.top = *(_DWORD *)(a2 + 104);
            v145.bottom = v145.top;
            v145.left = v94;
            v145.right = v94;
            v93 = CMonitorTopology::MonitorDataFromRect(v95, &v145, 2, 0x12u);
          }
          v144 = *CMonitorTopology::PhysicalToLogicalDPIRect(
                    *(CMonitorTopology **)(a2 + 168),
                    &v145,
                    &v144,
                    *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL),
                    v93);
          if ( v78 )
            *v78 = *CMonitorTopology::PhysicalToLogicalDPIRect(
                      *(CMonitorTopology **)(a2 + 168),
                      &v145,
                      v78,
                      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL),
                      v93);
          v77 = v130;
        }
LABEL_210:
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
        {
          LOBYTE(v96) = v131;
          v97 = v131;
          if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
          {
            if ( !v77 )
            {
              if ( v58 )
              {
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                  || (v104 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                {
                  v104 = 0;
                }
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v105 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                {
                  v105 = 0;
                }
                if ( v104 || v105 )
                {
                  v106 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v96);
                  LOBYTE(v107) = v105;
                  LOBYTE(v108) = v104;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v108,
                    v107,
                    *(_QWORD *)(v106 + 69416),
                    5,
                    4,
                    167,
                    (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
                }
                v109 = WindowMargins::ExtendRect(
                         &v145,
                         (struct tagRECT *)a1,
                         (const struct tagWND *)&v144,
                         (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)&v141.left + 40LL));
                v97 = v131;
                v144 = *v109;
              }
              goto LABEL_239;
            }
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
              || (v98 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
            {
              v98 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v99 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
            {
              v99 = 0;
            }
            if ( v98 || v99 )
            {
              v100 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v96);
              LOBYTE(v101) = v99;
              LOBYTE(v102) = v98;
              WPP_RECORDER_AND_TRACE_SF_(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v102,
                v101,
                *(_QWORD *)(v100 + 69416),
                5,
                4,
                166,
                (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids);
            }
            v103 = WindowMargins::ExtendRect(
                     &v145,
                     (struct tagRECT *)a1,
                     (const struct tagWND *)&v146,
                     (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)&v141.left + 40LL));
            v97 = v131;
            v146 = *v103;
LABEL_238:
            v110 = &v146;
            if ( !v139 )
            {
LABEL_240:
              v111 = v137;
              LOBYTE(v123) = v58;
              LOBYTE(v120) = v97;
              AdvancedWindowPos::xxxUpdatePosAndStateForAction(a1, v140, v137, v75, v135, v120, v110, v123, &v144, a2);
              if ( v137 )
              {
                if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
                  && (*(_DWORD *)(a2 + 4) & 1) != 0
                  && v139 )
                {
                  v146 = *WindowMargins::ExtendRect(
                            &v145,
                            (struct tagRECT *)a1,
                            (const struct tagWND *)&v146,
                            (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)&v141.left + 40LL));
                }
                v113 = v142;
                if ( !v142 )
                  v113 = CHECKPOINT::Get((const struct tagWND *)a1, v112);
                if ( v58 )
                  CHECKPOINT::SetNormalRect(
                    v113,
                    (const struct tagWND *)a1,
                    &v144,
                    *(_WORD *)(*(_QWORD *)&v141.left + 40LL));
                AdvancedWindowPos::UpdateCheckpointForAction(
                  (const struct tagWND *)a1,
                  v113,
                  &v146,
                  *(_DWORD *)(a2 + 4));
                v111 = v137;
              }
              v114 = (unsigned int *)(a2 + 108);
              if ( (*(_DWORD *)a2 & 0x400) == 0 )
                v114 = 0LL;
              AdvancedWindowPos::SendShellNotificationsForAction(
                (const struct tagWND *)a1,
                v111,
                v140,
                v130,
                (CDwmWindowNotifyBatch *)v143,
                v114);
              if ( (*(_DWORD *)a2 & 0x200) != 0 )
              {
                v116 = *(_DWORD *)(a2 + 4);
                v117 = *(const struct CMonitorTopology **)(a2 + 168);
                RecalcProperty = (__int64 **)CRecalcProp::GetRecalcProperty((const struct tagWND *)a1, v115);
                CRecalcProp::EndApplyWindowAction(RecalcProperty, (struct tagWND *)a1, v117, (v116 & 0x10000) != 0);
                if ( (v116 & 0x10000) != 0 )
                  CDwmWindowNotifyBatch::OnRecalcActionApplied(
                    (CDwmWindowNotifyBatch *)v143,
                    *(_DWORD *)(*(_QWORD *)(a2 + 168) + 12LL),
                    1);
              }
              v12 = 3;
              goto LABEL_256;
            }
LABEL_239:
            v110 = 0LL;
            goto LABEL_240;
          }
        }
        else
        {
          v97 = v132;
        }
        if ( !v77 )
          goto LABEL_239;
        goto LABEL_238;
      }
LABEL_174:
      AdvancedWindowPos::xxxAdjustRectsForMonitor((struct tagRECT *)a1, (struct tagWND *)a2, v142, v78, &v144, &v141);
      v135 |= 0x80u;
      v79 = v75 | 0x80000;
      v58 = 1;
      v75 = v75 & 0xFFF7FFFC | 0x80000;
      if ( v139 )
        v75 = v79;
      goto LABEL_210;
    }
    v59 = *(_DWORD *)a2 & 0x40;
    if ( v59 )
      v144 = *(struct tagRECT *)(a2 + 44);
    v58 = v59 != 0;
    v136 = v59 != 0;
    if ( bottom && v38 )
    {
      v60 = *(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 20);
      v43 = (unsigned int *)*(unsigned int *)(a2 + 16);
      v61 = (_DWORD)v43 + *(_DWORD *)(a2 + 24);
      if ( !v137 )
      {
        v144.left = *(_DWORD *)(a2 + 12);
        v58 = 1;
        v144.top = (int)v43;
        v144.right = v60;
        v144.bottom = v61;
        goto LABEL_155;
      }
      v146.left = *(_DWORD *)(a2 + 12);
      v146.top = (int)v43;
      v146.right = v60;
      v146.bottom = v61;
      v130 = 1;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v62 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v62 = 0;
      }
      v43 = &WPP_RECORDER_INITIALIZED;
      v133 = v62;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v63 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v63 = 0;
      }
      if ( v62 || v63 )
      {
        W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        v64 = v146.bottom;
        v65 = v146.right;
        v66 = v146.top;
        v67 = v146.left;
        StateString = AdvancedWindowPos::GetStateString(v137);
        LODWORD(v129) = v69;
        LODWORD(v128) = v64;
        LODWORD(v127) = v65;
        LODWORD(v126) = v66;
        LODWORD(v125) = v67;
        WPP_RECORDER_AND_TRACE_SF_sdddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v133,
          v63,
          v70,
          5u,
          4u,
          0xA2u,
          (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
          StateString,
          v125,
          v126,
          v127,
          v128,
          v129,
          v71);
      }
      v58 = v136;
    }
    if ( !v58 )
    {
LABEL_165:
      v75 = v134;
      goto LABEL_166;
    }
LABEL_155:
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v72 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v72 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v73 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v73 = 0;
    }
    if ( v72 || v73 )
    {
      v74 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
      LODWORD(v129) = v144.bottom - v144.top;
      LODWORD(v128) = v144.right - v144.left;
      LODWORD(v127) = v144.bottom;
      LODWORD(v126) = v144.right;
      LODWORD(v125) = v144.top;
      LODWORD(v124) = v144.left;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v72,
        v73,
        *(_QWORD *)(v74 + 69416),
        5u,
        4u,
        0xA3u,
        (__int64)&WPP_2b81e3d60f0933848e91eb35754e982c_Traceguids,
        v124,
        v125,
        v126,
        v127,
        v128,
        v129);
    }
    goto LABEL_165;
  }
  WindowActions::xxxInterceptApplyWindowAction((WindowActions *)a1, (struct tagWND *)a2, v10);
  v12 = 1;
LABEL_256:
  AdvancedWindowPos::LogApplyWindowActionEnd((const struct tagWND *)a1, v12);
  CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v143, v119);
}
