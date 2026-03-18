/*
 * XREFs of ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80
 * Callers:
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A8928 (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 * Callees:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxCallMsgFilter @ 0x1400655D0 (xxxCallMsgFilter.c)
 *     xxxTranslateMessage @ 0x14006742C (xxxTranslateMessage.c)
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x140092F08 (-zzzShowCursor@@YAH_N@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ClientGetMessageMPH @ 0x140107C90 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x140110890 (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     bSetDevDragWidth @ 0x1401121C4 (bSetDevDragWidth.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x14014861C (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14014E948 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x14014E984 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?IsInsideMPH@@YAHXZ @ 0x140153DA0 (-IsInsideMPH@@YAHXZ.c)
 *     SlowAppThreadInShellFrame @ 0x140155EA4 (SlowAppThreadInShellFrame.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1401565AC (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1401565F8 (IsAdaptiveQueueDetachExempted.c)
 *     xxxWaitMessageEx @ 0x14016DD60 (xxxWaitMessageEx.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14018716C (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x140187278 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x140187EB4 (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x140189B00 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1401D933C (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     DwmAsyncNotifyIsInMoveSizeChange @ 0x14020353C (DwmAsyncNotifyIsInMoveSizeChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x140203708 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x1402127A4 (-EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z.c)
 *     ?StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x14021BB90 (-StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z.c)
 *     ?SnapFurtherFromEdge@WindowArrangement@@YA_NXZ @ 0x14021F210 (-SnapFurtherFromEdge@WindowArrangement@@YA_NXZ.c)
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x140220B14 (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1402278F8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     TryDetachShellFrame @ 0x140237D24 (TryDetachShellFrame.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x140248F40 (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x140248F60 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z @ 0x140255F20 (-CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x140274D28 (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A52F8 (-AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1402A6618 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A67A4 (-SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A9828 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     GetDpiServerInfoForCurrentProcess @ 0x1402F1860 (GetDpiServerInfoForCurrentProcess.c)
 */

void __fastcall xxxMoveSize(struct tagWND *a1, __int64 a2, int a3)
{
  unsigned int v4; // esi
  struct tagWND *v5; // r12
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  struct MOVESIZEDATA *MoveSizeData; // rax
  struct MOVESIZEDATA *v13; // r15
  __int64 v14; // rcx
  char v15; // di
  __int64 v16; // rdx
  char v17; // bl
  __int64 UserSessionState; // rax
  int v19; // edx
  int v20; // r8d
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct tagWND *v41; // rdx
  __int64 v42; // rdx
  char v43; // si
  char v44; // di
  __int64 v45; // rbx
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  __int64 v49; // rdx
  bool v50; // si
  char v51; // di
  __int64 v52; // rbx
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  __int64 v56; // rdx
  WindowArrangement *v57; // rcx
  char v58; // al
  __int64 v59; // rdx
  bool v60; // si
  __int64 v61; // rcx
  char v62; // bl
  bool v63; // di
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  __int64 v67; // r9
  const char *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rbx
  void *v73; // rax
  int v74; // edi
  int WindowState; // eax
  const char *StateString; // rax
  unsigned int *v77; // rdx
  __int64 v78; // rcx
  char v79; // bl
  int v80; // eax
  __int64 v82; // r8
  __int64 v83; // rdx
  char v84; // di
  __int64 v85; // rax
  int v86; // r8d
  int v87; // edx
  tagQ *v88; // rcx
  bool v89; // al
  int v90; // eax
  struct tagTHREADINFO *v91; // rax
  char v92; // r14
  char v93; // si
  unsigned int v94; // edi
  int v95; // ebx
  __int64 v96; // rax
  int v97; // r8d
  int v98; // edx
  int v99; // eax
  bool v100; // di
  __int64 v101; // rax
  int v102; // r8d
  int v103; // edx
  __int64 v104; // rdx
  __int64 v105; // rdx
  char v106; // di
  __int64 v107; // rax
  int v108; // r8d
  int v109; // edx
  int v110; // esi
  unsigned __int16 v111; // r12
  int v112; // r14d
  unsigned __int16 v113; // r13
  char v114; // di
  char v115; // bl
  __int64 v116; // rax
  int v117; // r8d
  int v118; // edx
  int v119; // eax
  bool v120; // di
  __int64 v121; // rax
  int v122; // r8d
  int v123; // edx
  bool v124; // di
  __int64 v125; // rax
  int v126; // r8d
  int v127; // edx
  int v128; // eax
  __int64 v129; // rcx
  __int64 v130; // r8
  const char *v131; // r13
  char v132; // r15
  char v133; // r12
  _DWORD *v134; // rax
  int v135; // edi
  int v136; // r14d
  int v137; // ebx
  int v138; // esi
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rdx
  struct tagTHREADINFO *v151; // r14
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rdx
  char v155; // si
  char v156; // di
  __int64 v157; // rbx
  __int64 v158; // rax
  int v159; // r8d
  int v160; // edx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v165; // rdx
  struct MOVESIZEDATA *v166; // rdi
  struct MOVESIZEDATA *v167; // rsi
  __int64 v168; // rbx
  __int64 v169; // rdx
  __int64 v170; // rcx
  void *v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  int v174; // ebx
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rax
  __int64 v187; // rdx
  struct MOVESIZEDATA *v188; // [rsp+28h] [rbp-A9h]
  __int16 v189; // [rsp+38h] [rbp-99h]
  __int64 v190; // [rsp+50h] [rbp-81h]
  __int64 v191; // [rsp+58h] [rbp-79h]
  struct MOVESIZEDATA *v192; // [rsp+88h] [rbp-49h] BYREF
  unsigned int v193; // [rsp+90h] [rbp-41h] BYREF
  int v194; // [rsp+94h] [rbp-3Dh]
  __int64 v195; // [rsp+98h] [rbp-39h] BYREF
  int v196; // [rsp+A0h] [rbp-31h] BYREF
  struct tagTHREADINFO *v197; // [rsp+A8h] [rbp-29h]
  unsigned int v198[4]; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v199[2]; // [rsp+C0h] [rbp-11h]
  __int128 v200; // [rsp+D0h] [rbp-1h]
  struct MOVESIZEDATA *v201; // [rsp+E0h] [rbp+Fh]
  ULONG_PTR BugCheckParameter3[8]; // [rsp+E8h] [rbp+17h] BYREF
  int v204; // [rsp+140h] [rbp+6Fh]
  int v205; // [rsp+150h] [rbp+7Fh]

  v204 = a2;
  *(_OWORD *)v198 = 0LL;
  v4 = a2;
  v5 = a1;
  *(_OWORD *)v199 = 0LL;
  v200 = 0LL;
  v6 = PtiCurrent((__int64)a1, a2);
  v7 = *((_QWORD *)v5 + 2);
  v8 = (__int64)v6;
  v197 = v6;
  v194 = 0;
  v9 = *((_QWORD *)v6 + 59);
  v196 = 0;
  if ( *(_QWORD *)(v7 + 472) != v9 || *((_QWORD *)v6 + 89) )
    return;
  v10 = *(_QWORD *)(v9 + 120);
  if ( v10 )
  {
    if ( (*(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x2FFF) == 0x2A2
      || (v10 = *(_QWORD *)(v10 + 104)) != 0 && (*(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x2FFF) == 0x2A2 )
    {
      Win32HM_LockIntoThread<0>((__int64)v6, v10, BugCheckParameter3);
      xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v10, 335LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v11);
    }
  }
  MoveSizeData = MOVESIZEDATA::CreateMoveSizeData(v5);
  v201 = MoveSizeData;
  v13 = MoveSizeData;
  v192 = MoveSizeData;
  if ( !MoveSizeData )
    return;
  *((_DWORD *)MoveSizeData + 50) &= 0xFFFFC7FF;
  *(_QWORD *)((char *)MoveSizeData + 260) = *(_QWORD *)(v8 + 808);
  AdjustProcessPriorityForDrag(MoveSizeData);
  xxxInitializeMoveSizeData(v5, v13, v4, a3);
  if ( (*((_DWORD *)v13 + 50) & 2) != 0 )
  {
    v205 = 1;
    v14 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
    {
      v16 = 0LL;
      v15 = 0;
    }
    else
    {
      v15 = 1;
      v16 = 0LL;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v17 = 0;
    }
    if ( v15 || v17 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      v189 = 98;
LABEL_56:
      LOBYTE(v20) = v17;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v20,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        1,
        v189,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    }
  }
  else
  {
    v21 = *(_DWORD *)(*(_QWORD *)(v8 + 472) + 436LL);
    if ( (v21 & 0x800000) != 0 )
    {
      v205 = 4;
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
      {
        v16 = 0LL;
        v15 = 0;
      }
      else
      {
        v15 = 1;
        v16 = 0LL;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v17 = 0;
      }
      if ( v15 || v17 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        v189 = 99;
        goto LABEL_56;
      }
    }
    else if ( (v21 & 0x1000000) != 0 )
    {
      v205 = 8;
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
      {
        v16 = 0LL;
        v15 = 0;
      }
      else
      {
        v15 = 1;
        v16 = 0LL;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v17 = 0;
      }
      if ( v15 || v17 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        v189 = 100;
        goto LABEL_56;
      }
    }
    else
    {
      v205 = 2;
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
      {
        v16 = 0LL;
        v15 = 0;
      }
      else
      {
        v15 = 1;
        v16 = 0LL;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v17 = 0;
      }
      if ( v15 || v17 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        v189 = 101;
        goto LABEL_56;
      }
    }
  }
  if ( (*((_DWORD *)v13 + 50) & 0x20) != 0 )
  {
    v22 = W32GetUserSessionState(v14, v16);
    *(_DWORD *)(v22 + 67056) |= 0x10000000u;
  }
  else
  {
    v25 = W32GetUserSessionState(v14, v16);
    *(_DWORD *)(v25 + 67056) &= ~0x10000000u;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 30LL) & 4) == 0 )
  {
    v26 = W32GetUserSessionState(v24, v23);
    bSetDevDragWidth(*(_QWORD *)(*(_QWORD *)(v26 + 57008) + 48LL), 2);
  }
  v27 = *((_DWORD *)v13 + 44);
  v28 = 2LL;
  if ( v27 != 9 )
    v28 = 0LL;
  NotifyShell::DragSizeInfo(*((_QWORD **)v13 + 2), v28, v205);
  if ( v27 != 9 )
    xxxQueryShellForSizeCooperation(v13);
  if ( *(_QWORD *)(W32GetUserSessionState(v30, v29) + 18944) )
  {
    v34 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 18944);
    if ( *(_QWORD *)(v34 + 120) )
    {
      v36 = *(_QWORD *)(W32GetUserSessionState(v34, v33) + 18944);
      if ( v36 == *(_QWORD *)(v8 + 472) )
      {
        v38 = 33;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v36, v35) + 18944) + 120LL) + 16LL) != v8 )
          v38 = 49;
        v40 = *(_QWORD *)(W32GetUserSessionState(49LL, v37) + 18944);
        if ( *(_QWORD *)(*(_QWORD *)(v40 + 120) + 16LL) == v8 )
          v41 = v5;
        else
          v41 = *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v40, v39) + 18944) + 120LL);
        xxxWindowEvent(0x80000004, v41, 0, 2u, v38);
      }
    }
  }
  xxxWindowEvent(0xAu, v5, 0, 0, 0);
  xxxWindowEvent(0x19u, v5, 0, v204, 0);
  xxxDrawDragRectEx(v13, 0LL, 0, (struct tagRECT *)((char *)v13 + 24));
  _InterlockedOr((volatile signed __int32 *)(v8 + 528), 0x10u);
  v199[1] = (*((unsigned __int16 *)v192 + 128) << 16) | *((unsigned __int16 *)v192 + 126);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v43 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v43 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v44 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v44 = 0;
  }
  if ( v43 || v44 )
  {
    v45 = *(_QWORD *)v5;
    v46 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v42);
    LOBYTE(v47) = v44;
    LOBYTE(v48) = v43;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v48,
      v47,
      *(_QWORD *)(v46 + 69416),
      5,
      1,
      102,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      v45);
  }
  xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v5, 561LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  v50 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v51 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v51 = 0;
  }
  if ( v50 || v51 )
  {
    v52 = *(_QWORD *)v5;
    v53 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v49);
    LOBYTE(v54) = v51;
    LOBYTE(v55) = v50;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v55,
      v54,
      *(_QWORD *)(v53 + 69416),
      5,
      1,
      103,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      v52);
  }
  xxxCapture((struct tagTHREADINFO *)v8, v5, 6);
  if ( (*((_DWORD *)v13 + 50) & 0x300) != 0 )
  {
    v58 = WindowArrangement::SnapFurtherFromEdge(v57, v56);
    v59 = 0LL;
    if ( !v58 )
    {
      v60 = 1;
      goto LABEL_101;
    }
  }
  else
  {
    v59 = 0LL;
  }
  v60 = 0;
LABEL_101:
  v61 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v62 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v62 = 0;
  }
  v63 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v62 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v64 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v65) = v63;
    LOBYTE(v66) = v62;
    v67 = *(_QWORD *)(v64 + 69416);
    v68 = "Enabled";
    if ( !v60 )
      v68 = "Disabled";
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v66,
      v65,
      v67,
      4,
      1,
      104,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      (__int64)v68);
  }
  v69 = W32GetUserSessionState(v61, v59);
  CCursorClip::EnableSpeedBump(*(CCursorClip **)(v69 + 36296), v60);
  zzzShowCursor(1);
  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)v5) )
  {
    EnableDwmSwCursorMoveSize(&v196, v70);
    v71 = *((_DWORD *)v13 + 50) & 0xFFEFFFFF | ((v196 & 1) << 20);
    *((_DWORD *)v13 + 50) = v71;
  }
  v72 = *(_QWORD *)v5;
  v73 = (void *)ReferenceDwmApiPort(v71, v70);
  v74 = v204;
  DwmAsyncNotifyIsInMoveSizeChange(v73, v72, v205, 1, v204);
  WindowState = AdvancedWindowPos::GetWindowState(v5);
  StateString = AdvancedWindowPos::GetStateString(WindowState);
  InputTraceLogging::MoveSize::StartLoop(v5, StateString);
  if ( (*((_DWORD *)v13 + 50) & 8) != 0 )
    goto LABEL_217;
  while ( 2 )
  {
    v79 = 0;
    if ( *(struct tagWND **)(*(_QWORD *)(v8 + 472) + 112LL) != v5 )
      goto LABEL_167;
    while ( 1 )
    {
      LOBYTE(v80) = IsInsideMPH(v78, (__int64)v77);
      LODWORD(v188) = 1;
      if ( v80
         ? ClientGetMessageMPH(v198, 0LL, 0, 0, 1, 0)
         : (unsigned int)xxxRealInternalGetMessage((__int64)v198, 0LL, 0, 0, (unsigned __int64)v188, 0) )
      {
        break;
      }
      if ( (*((_DWORD *)v13 + 50) & 8) != 0 )
        goto LABEL_166;
      if ( (*(_DWORD *)(v8 + 1360) & 0x40000) == 0 || (unsigned int)IsAdaptiveQueueDetachExempted(v8, (__int64)v77, v82) )
      {
        if ( !(unsigned int)xxxWaitMessageEx(15615LL, 0LL, 0LL) )
          goto LABEL_166;
      }
      else
      {
        v88 = *(tagQ **)(v8 + 472);
        v193 = 0;
        v89 = tagQ::AreMultipleThreadsAttached(v88);
        v90 = xxxWaitMessageEx(15367LL, v89 ? 200 : 5000, (enum SLEEP_STATUS *)&v193);
        v78 = v193;
        if ( !v90 && !v193 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u )
          {
            v79 = 1;
          }
          v100 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v79 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v101 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v77);
            LOBYTE(v102) = v100;
            LOBYTE(v103) = v79;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v103,
              v102,
              *(_QWORD *)(v101 + 69416),
              3,
              1,
              107,
              (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
          }
LABEL_166:
          v79 = 0;
          goto LABEL_167;
        }
        if ( v193 )
        {
          if ( tagQ::AreMultipleThreadsAttached(*(tagQ **)(v8 + 472)) )
          {
            v91 = SlowAppThreadInShellFrame((struct tagTHREADINFO *)v8, 0LL, 0LL, 1);
            if ( v91 )
              TryDetachShellFrame(v8, (__int64)v91, v193 == 2, 1);
          }
        }
      }
LABEL_143:
      if ( *(struct tagWND **)(*(_QWORD *)(v8 + 472) + 112LL) != v5 )
        goto LABEL_166;
    }
    if ( v198[2] - 512 > 0xE && v198[2] != 35 && v198[2] - 256 > 9 )
    {
      if ( !(unsigned int)xxxCallMsgFilter((__int64)v198, (unsigned int)(v74 != 9) + 3) )
      {
        xxxTranslateMessage((__int64)v198, 0LL);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v84 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v84 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v79 = 1;
        }
        if ( v84 || v79 )
        {
          v85 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v83);
          LOBYTE(v86) = v79;
          LOBYTE(v87) = v84;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v87,
            v86,
            *(_QWORD *)(v85 + 69416),
            5,
            1,
            106,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
            v198[2]);
        }
        _InterlockedOr((volatile signed __int32 *)(v8 + 528), 0x8000u);
        xxxDispatchMessage((struct tagMSG *)v198, v83);
        _InterlockedAnd((volatile signed __int32 *)(v8 + 528), 0xFFFF7FFF);
        v74 = v204;
        v79 = 0;
      }
      goto LABEL_143;
    }
    v77 = (unsigned int *)((char *)v13 + 260);
    *(_QWORD *)((char *)v13 + 260) = *(_QWORD *)(v8 + 808);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v92 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v92 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v93 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v93 = 0;
    }
    if ( v92 || v93 )
    {
      v94 = *v77;
      v95 = *((_DWORD *)v192 + 66);
      v96 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v77);
      LOBYTE(v97) = v93;
      LOBYTE(v98) = v92;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v98,
        v97,
        *(_QWORD *)(v96 + 69416),
        5,
        1,
        105,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v198[2],
        v94,
        v95);
      v79 = 0;
    }
    if ( !v194 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v8 + 472) + 436LL) & 0x1800000) != 0 )
      {
        v99 = *((_DWORD *)v13 + 50);
        v194 = 2;
        *((_DWORD *)v13 + 50) = v99 ^ ((unsigned __int16)v99 ^ (unsigned __int16)(v99 + 2048)) & 0x3800;
      }
      else
      {
        v194 = 1;
      }
    }
LABEL_167:
    EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext(v192, (__int64)v77);
    if ( *(struct tagWND **)(*(_QWORD *)(v8 + 472) + 112LL) == v5 )
    {
      if ( (*((_DWORD *)v13 + 50) & 8) == 0 )
      {
        v105 = v198[2];
        if ( v198[2] == 35 )
        {
          xxxCallHook(2LL, 0LL, 0LL, v198[2] - 30);
          v105 = v198[2];
        }
        if ( (*((_DWORD *)v13 + 50) & 1) != 0
          && !(unsigned int)xxxTrackInitSize((struct tagTHREADINFO **)v5, v105, v199[0], v199[1], v192) )
        {
          break;
        }
        v195 = 0LL;
        if ( (unsigned int)Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline() )
          PhysicalToLogicalDPIPoint(
            &v195,
            (char *)v13 + 260,
            *(unsigned int *)(*((_QWORD *)v5 + 5) + 288LL),
            (char *)v192 + 216);
        else
          v195 = *(_QWORD *)((char *)&v200 + 4);
        v78 = *(_QWORD *)&WPP_GLOBAL_Control;
        v77 = &WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v106 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v106 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v79 = 1;
        }
        if ( v106 || v79 )
        {
          v107 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
          LOBYTE(v108) = v79;
          LOBYTE(v109) = v106;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v109,
            v108,
            *(_QWORD *)(v107 + 69416),
            5,
            1,
            110,
            (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
            v195,
            SBYTE4(v195));
          v77 = &WPP_GLOBAL_Control;
        }
        v110 = *((_DWORD *)v192 + 42);
        v111 = v110 + v195;
        v112 = *((_DWORD *)v192 + 43);
        v113 = v112 + WORD2(v195);
        if ( (*((_DWORD *)v13 + 50) & 1) != 0 )
        {
          v5 = a1;
        }
        else
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
            || (v114 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v114 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v115 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v115 = 0;
          }
          if ( v114 || v115 )
          {
            v116 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
            LOBYTE(v117) = v115;
            LOBYTE(v118) = v114;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v118,
              v117,
              *(_QWORD *)(v116 + 69416),
              5,
              1,
              111,
              (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
              v110,
              v112);
          }
          v119 = v111;
          v5 = a1;
          xxxMS_TrackMove((__int64)a1, v198[2], v199[0], v119 | (v113 << 16), v192);
        }
        v8 = (__int64)v197;
        v74 = v204;
        if ( (*((_DWORD *)v13 + 50) & 8) != 0 )
          break;
        continue;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      {
        v79 = 1;
      }
      v120 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v79 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v121 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v104);
        LOBYTE(v122) = v120;
        LOBYTE(v123) = v79;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v123,
          v122,
          *(_QWORD *)(v121 + 69416),
          4,
          1,
          109,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
      }
      *((_DWORD *)v13 + 50) &= ~8u;
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      {
        v79 = 1;
      }
      v124 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v79 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v125 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v104);
        LOBYTE(v126) = v124;
        LOBYTE(v127) = v79;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v127,
          v126,
          *(_QWORD *)(v125 + 69416),
          4,
          1,
          108,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
      }
      xxxMS_TrackMove((__int64)v5, 256LL, 27LL, 1u, v192);
    }
    break;
  }
LABEL_217:
  v128 = AdvancedWindowPos::GetWindowState(v5);
  v131 = AdvancedWindowPos::GetStateString(v128);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v129 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v129 & 1) == 0)
    || (v132 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v132 = 0;
  }
  v133 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v132 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v134 = (_DWORD *)*((_QWORD *)a1 + 5);
    v135 = v134[25];
    v136 = v134[23];
    v137 = v134[24];
    v138 = v134[22];
    v139 = W32GetUserSessionState(v129, *(_QWORD *)&WPP_GLOBAL_Control);
    LODWORD(v191) = v136;
    LODWORD(v190) = v138;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v132,
      v133,
      *(_QWORD *)(v139 + 69416),
      4u,
      1u,
      0x70u,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      v131,
      v190,
      v191,
      v137,
      v135,
      v137 - v138,
      v135 - v136);
  }
  InputTraceLogging::MoveSize::EndLoop(a1, v131, v130);
  v142 = W32GetUserSessionState(v141, v140);
  CCursorClip::EnableSpeedBump(*(CCursorClip **)(v142 + 36296), 0);
  if ( *(_QWORD *)(W32GetUserSessionState(v144, v143) + 18944)
    && (v148 = *(_QWORD *)(W32GetUserSessionState(v146, v145) + 18944), *(_QWORD *)(v148 + 120)) )
  {
    v149 = W32GetUserSessionState(v148, v147);
    v151 = v197;
    v152 = *(_QWORD *)(v149 + 18944);
    if ( v152 == *((_QWORD *)v197 + 59) )
    {
      v153 = W32GetUserSessionState(v152, v150);
      xxxWindowEvent(0x80000005, *(struct tagWND **)(*(_QWORD *)(v153 + 18944) + 120LL), 0, 2u, 33);
    }
  }
  else
  {
    v151 = v197;
  }
  xxxWindowEvent(0xBu, a1, 0, 0, 0);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v155 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v155 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v156 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v156 = 0;
  }
  if ( v155 || v156 )
  {
    v157 = *(_QWORD *)a1;
    v158 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v154);
    LOBYTE(v159) = v156;
    LOBYTE(v160) = v155;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v160,
      v159,
      *(_QWORD *)(v158 + 69416),
      5,
      1,
      113,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      v157);
  }
  xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 562LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  IsEnabledDeviceUsageNoInline = Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(
                                   v162,
                                   v161,
                                   v163);
  v166 = v201;
  if ( IsEnabledDeviceUsageNoInline )
  {
    v167 = v192;
    if ( (*((_DWORD *)v201 + 50) & 0x1000000) == 0 )
      SendShellNotificationsOnHardExit(v192);
  }
  else if ( (*(_DWORD *)(*((_QWORD *)v201 + 2) + 384LL) & 0x10) != 0 && (*((_DWORD *)v201 + 50) & 0x1000000) != 0 )
  {
    v167 = v192;
  }
  else
  {
    v167 = v192;
    ReportMoveSizeCompletionToShell(v192);
  }
  DisableDwmSwCursorMoveSize((*((_DWORD *)v166 + 50) >> 20) & 1, v165);
  *((_DWORD *)v166 + 50) &= ~0x100000u;
  v168 = *(_QWORD *)a1;
  v171 = (void *)ReferenceDwmApiPort(v170, v169);
  DwmAsyncNotifyIsInMoveSizeChange(v171, v168, v205, 0, v204);
  DWM_ARRANGEMENT_DATA::SetShrinkWidth((struct MOVESIZEDATA *)((char *)v167 + 400), 0LL, v167);
  DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((struct MOVESIZEDATA *)((char *)v167 + 400), v167);
  DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter((struct MOVESIZEDATA *)((char *)v167 + 400), 0LL, v167);
  *((_DWORD *)v166 + 50) &= ~0x8000u;
  AdjustProcessPriorityForDrag(v167);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
  {
    v174 = *(_DWORD *)(GetDpiServerInfoForCurrentProcess() + 4);
    v177 = W32GetUserSessionState(v176, v175);
    bSetDevDragWidth(*(_QWORD *)(*(_QWORD *)(v177 + 57008) + 48LL), v174 + 3);
  }
  v178 = W32GetUserSessionState(v173, v172);
  bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v178 + 57008) + 48LL), 0LL, 0LL, 0);
  _InterlockedAnd((volatile signed __int32 *)v151 + 132, 0xFFFFFFEF);
  if ( (*((_DWORD *)v166 + 50) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v180, v179) + 43112) )
    {
      v181 = W32GetUserSessionState(v180, v179);
      GreDeleteObject(*(_QWORD *)(v181 + 43112));
      *(_QWORD *)(W32GetUserSessionState(v183, v182) + 43112) = 0LL;
      *(_DWORD *)(W32GetUserSessionState(v185, v184) + 43308) = 0;
    }
  }
  v186 = W32GetUserSessionState(v180, v179);
  *(_DWORD *)(v186 + 67056) &= ~0x10000000u;
  MOVESIZEDATA::FreeMoveSizeData(&v192, v187);
  zzzShowCursor(0);
}
