/*
 * XREFs of ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EF350
 * Callers:
 *     xxxSysCommand @ 0x1C00857C4 (xxxSysCommand.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006E7C (IsAdaptiveQueueDetachExempted.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x1C000C65C (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     xxxCapture @ 0x1C00117EC (xxxCapture.c)
 *     xxxInternalGetMessage @ 0x1C002B4E0 (xxxInternalGetMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002F37C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C005AE1C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C005DEC0 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x1C005DEF8 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x1C0060344 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     bSetDevDragWidth @ 0x1C0088950 (bSetDevDragWidth.c)
 *     GetProcessDpiServerInfo @ 0x1C00899EC (GetProcessDpiServerInfo.c)
 *     xxxTranslateMessage @ 0x1C008B26C (xxxTranslateMessage.c)
 *     bSetDevDragRect @ 0x1C00910D0 (bSetDevDragRect.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C009C780 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B4B3C (IsToplevelWindowDesktopComposed.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C0116644 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     xxxDispatchMessage @ 0x1C01185F4 (xxxDispatchMessage.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     xxxCallMsgFilter @ 0x1C01517DE (xxxCallMsgFilter.c)
 *     ChangeComposableCursor @ 0x1C01A87C0 (ChangeComposableCursor.c)
 *     SlowAppThreadInShellFrame @ 0x1C01B629C (SlowAppThreadInShellFrame.c)
 *     TryDetachShellFrame @ 0x1C01B655C (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01B6B50 (xxxWaitMessageEx.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01E8700 (-AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C01E8B90 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     ?EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x1C01E8BD8 (-EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z.c)
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01E8CAC (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C01E9C1C (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x1C01EA3B8 (-StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C01EBD30 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ECFA8 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EE188 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01F023C (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01F1140 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C021C740 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?SnapFurtherFromEdge@WindowArrangement@@YA_NXZ @ 0x1C022D680 (-SnapFurtherFromEdge@WindowArrangement@@YA_NXZ.c)
 *     ?CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z @ 0x1C0239A0C (-CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x1C0239AD0 (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x1C023A660 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x1C023A750 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x1C023A8F8 (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     DwmAsyncNotifyIsInMoveSizeChange @ 0x1C026C91C (DwmAsyncNotifyIsInMoveSizeChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMoveSize(struct tagWND *a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct MOVESIZEDATA *MoveSizeData; // rax
  __int64 v13; // rsi
  int v14; // edx
  int v15; // r8d
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // ax
  int v18; // ecx
  int v19; // ebx
  __int64 v20; // rdx
  bool v21; // bl
  struct tagWND *v22; // rdx
  int v23; // ecx
  char v24; // dl
  char v25; // r8
  char v26; // dl
  char v27; // r8
  WindowArrangement *v28; // rcx
  char v29; // dl
  const char *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  void *v33; // rax
  int WindowState; // eax
  const char *StateString; // rax
  int v36; // eax
  const char *v37; // r15
  char v38; // dl
  _DWORD *v39; // rax
  struct tagWND *v40; // rdx
  char v41; // dl
  char v42; // r8
  unsigned int v43; // r8d
  __int64 v44; // rdx
  __int64 v45; // rcx
  void *v46; // rax
  __int64 v47; // rcx
  __int64 ProcessDpiServerInfo; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  tagQ *v54; // rcx
  bool v55; // al
  int v56; // edx
  int v57; // r8d
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  struct tagTHREADINFO *v66; // rax
  char v67; // dl
  char v68; // r8
  int v69; // edx
  int v70; // r8d
  unsigned __int16 v71; // bx
  int v72; // r14d
  char v73; // dl
  char v74; // r8
  __int64 v75; // [rsp+40h] [rbp-69h]
  __int64 v76; // [rsp+48h] [rbp-61h]
  __int64 v77; // [rsp+50h] [rbp-59h]
  int v78; // [rsp+80h] [rbp-29h]
  __int128 v79; // [rsp+88h] [rbp-21h] BYREF
  __int64 v80; // [rsp+98h] [rbp-11h]
  unsigned int v81[4]; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 v82[2]; // [rsp+B0h] [rbp+7h]
  __int128 v83; // [rsp+C0h] [rbp+17h]
  struct MOVESIZEDATA *v84; // [rsp+110h] [rbp+67h] BYREF
  int v85; // [rsp+118h] [rbp+6Fh]
  int v86; // [rsp+128h] [rbp+7Fh] BYREF

  v85 = a2;
  *(_OWORD *)v81 = 0LL;
  *(_OWORD *)v82 = 0LL;
  v78 = 0;
  v80 = 0LL;
  v6 = *((_QWORD *)a1 + 2);
  v83 = 0LL;
  v86 = 0;
  v79 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v6 + 432) == v7 && !*(_QWORD *)(gptiCurrent + 672LL) )
  {
    v8 = *(_QWORD *)(v7 + 120);
    if ( v8 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF) == 0x2A2
        || (v8 = *(_QWORD *)(v8 + 104)) != 0 && (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF) == 0x2A2 )
      {
        *(_QWORD *)&v79 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v79;
        *((_QWORD *)&v79 + 1) = v8;
        HMLockObject(v8);
        xxxSendMessage(v8);
        ThreadUnlock1(v10, v9, v11);
      }
    }
    MoveSizeData = MOVESIZEDATA::CreateMoveSizeData(a1);
    v13 = (__int64)MoveSizeData;
    if ( MoveSizeData )
    {
      *((_DWORD *)MoveSizeData + 50) &= 0xFFFC7FFF;
      *(_QWORD *)((char *)MoveSizeData + 268) = *(_QWORD *)(gptiCurrent + 776LL);
      AdjustProcessPriorityForDrag(MoveSizeData);
      xxxInitializeMoveSizeData(a1, (struct MOVESIZEDATA *)v13, a2, a3);
      if ( (*(_DWORD *)(v13 + 200) & 2) != 0 )
      {
        LODWORD(v84) = 1;
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v14) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v15) = 0;
        }
        if ( (_BYTE)v14 || (_BYTE)v15 )
        {
          v17 = 91;
LABEL_52:
          WPP_RECORDER_AND_TRACE_SF_(
            v16->AttachedDevice,
            v14,
            v15,
            (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
            5,
            1,
            v17,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
        }
      }
      else
      {
        v18 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL);
        if ( (v18 & 0x800000) != 0 )
        {
          LODWORD(v84) = 4;
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v14) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v15) = 0;
          }
          if ( (_BYTE)v14 || (_BYTE)v15 )
          {
            v17 = 92;
            goto LABEL_52;
          }
        }
        else if ( (v18 & 0x1000000) != 0 )
        {
          LODWORD(v84) = 8;
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v14) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v15) = 0;
          }
          if ( (_BYTE)v14 || (_BYTE)v15 )
          {
            v17 = 93;
            goto LABEL_52;
          }
        }
        else
        {
          LODWORD(v84) = 2;
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v14) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v15) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v15) = 0;
          }
          if ( (_BYTE)v14 || (_BYTE)v15 )
          {
            v17 = 94;
            goto LABEL_52;
          }
        }
      }
      if ( (*(_DWORD *)(v13 + 200) & 0x20) != 0 )
        gdwPUDFlags |= 0x10000000u;
      else
        gdwPUDFlags &= ~0x10000000u;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), 2);
      v19 = *(_DWORD *)(v13 + 176);
      v20 = 2LL;
      if ( v19 != 9 )
        v20 = 0LL;
      NotifyShell::DragSizeInfo(*(_QWORD *)(v13 + 16), v20, (unsigned int)v84);
      if ( v19 != 9 )
        xxxQueryShellForSizeCooperation((struct MOVESIZEDATA *)v13);
      v21 = 0;
      if ( gpqForeground )
      {
        v22 = *(struct tagWND **)(gpqForeground + 120LL);
        if ( v22 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
          {
            v23 = 33;
            if ( *((_QWORD *)v22 + 2) == gptiCurrent )
              v22 = a1;
            else
              v23 = 49;
            xxxWindowEvent(0x80000004, v22, 0, 2u, v23);
          }
        }
      }
      xxxWindowEvent(0xAu, a1, 0, 0, 0);
      xxxWindowEvent(0x19u, a1, 0, v85, 0);
      xxxDrawDragRect((struct MOVESIZEDATA *)v13, 0LL, 0);
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x10u;
      v82[1] = (*(unsigned __int16 *)(v13 + 264) << 16) | *(unsigned __int16 *)(v13 + 260);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v24 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v24 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v25 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v25 = 0;
      }
      if ( v24 || v25 )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v24,
          v25,
          95LL,
          5u,
          1u,
          0x5Fu,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          *(_QWORD *)a1);
      xxxSendMessage((ULONG_PTR)a1);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v26 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v26 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v27 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v27 = 0;
      }
      if ( v26 || v27 )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v27,
          96LL,
          5u,
          1u,
          0x60u,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          *(_QWORD *)a1);
      xxxCapture(gptiCurrent, a1, 6);
      if ( (*(_DWORD *)(v13 + 200) & 0xC00) != 0 && !WindowArrangement::SnapFurtherFromEdge(v28) )
        v21 = 1;
      v29 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = "Enabled";
        if ( !v21 )
          v30 = "Disabled";
        WPP_RECORDER_AND_TRACE_SF_s(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v29,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          1u,
          0x61u,
          (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
          v30);
      }
      CCursorClip::EnableSpeedBump(gpCursorClip, v21);
      zzzShowCursor(1);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        EnableDwmSwCursorMoveSize(&v86);
        *(_DWORD *)(v13 + 200) ^= (*(_DWORD *)(v13 + 200) ^ (v86 << 25)) & 0x2000000;
      }
      v33 = (void *)ReferenceDwmApiPort(v32, v31);
      DwmAsyncNotifyIsInMoveSizeChange(v33, v85);
      WindowState = AdvancedWindowPos::GetWindowState(a1);
      StateString = AdvancedWindowPos::GetStateString(WindowState);
      InputTraceLogging::MoveSize::StartLoop(a1, StateString);
      if ( (*(_DWORD *)(v13 + 200) & 8) != 0 )
      {
LABEL_105:
        v36 = AdvancedWindowPos::GetWindowState(a1);
        v37 = AdvancedWindowPos::GetStateString(v36);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v38 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v38 = 0;
        }
        if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v39 = (_DWORD *)*((_QWORD *)a1 + 5);
          v86 = 104;
          LODWORD(v77) = v39[23];
          LODWORD(v76) = v39[22];
          WPP_RECORDER_AND_TRACE_SF_sdddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v38,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gFullLog,
            4u,
            1u,
            0x68u,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
            v37,
            v76,
            v77,
            v39[24],
            v39[25],
            v39[24] - v76,
            v39[25] - v77);
        }
        InputTraceLogging::MoveSize::EndLoop(a1, v37);
        CCursorClip::EnableSpeedBump(gpCursorClip, 0);
        if ( gpqForeground )
        {
          v40 = *(struct tagWND **)(gpqForeground + 120LL);
          if ( v40 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
              xxxWindowEvent(0x80000005, v40, 0, 2u, 33);
          }
        }
        xxxWindowEvent(0xBu, a1, 0, 0, 0);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v41 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v41 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (v42 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          v42 = 0;
        }
        if ( v41 || v42 )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v41,
            v42,
            105LL,
            5u,
            1u,
            0x69u,
            (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
            *(_QWORD *)a1);
        xxxSendMessage((ULONG_PTR)a1);
        ReportMoveSizeCompletionToShell(v13, (unsigned int)v84, v43);
        if ( (*(_DWORD *)(v13 + 200) & 0x2000000) != 0 )
          ChangeComposableCursor(0LL);
        *(_DWORD *)(v13 + 200) &= ~0x2000000u;
        v46 = (void *)ReferenceDwmApiPort(v45, v44);
        DwmAsyncNotifyIsInMoveSizeChange(v46, v85);
        DWM_ARRANGEMENT_DATA::SetShrinkWidth((DWM_ARRANGEMENT_DATA *)(v13 + 344), 0, (const struct MOVESIZEDATA *)v13);
        DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm(
          (DWM_ARRANGEMENT_DATA *)(v13 + 344),
          (const struct MOVESIZEDATA *)v13);
        DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter(
          (DWM_ARRANGEMENT_DATA *)(v13 + 344),
          0LL,
          (const struct MOVESIZEDATA *)v13);
        *(_DWORD *)(v13 + 200) &= ~0x80000u;
        AdjustProcessPriorityForDrag((struct MOVESIZEDATA *)v13);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
        {
          ProcessDpiServerInfo = GetProcessDpiServerInfo(v47);
          bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
        }
        bSetDevDragRect(*(Gre::Base **)(gpDispInfo + 40LL), 0LL, 0LL, 0);
        *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
        if ( (*(_DWORD *)(v13 + 200) & 0x20) != 0 )
        {
          if ( *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
          {
            GreDeleteObject(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type);
            *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0LL;
            LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
          }
        }
        gdwPUDFlags &= ~0x10000000u;
        MOVESIZEDATA::FreeMoveSizeData(&v84);
        zzzShowCursor(0);
        return;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) != a1 )
            goto LABEL_187;
          if ( (unsigned int)xxxInternalGetMessage(v81, 0LL, 0, 0, 1, 0) )
            break;
          if ( (*(_DWORD *)(v13 + 200) & 8) != 0 )
            goto LABEL_187;
          if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) == 0
            || (unsigned int)IsAdaptiveQueueDetachExempted(gptiCurrent) )
          {
            if ( !(unsigned int)xxxWaitMessageEx(0x3CFFu, 0, 0LL) )
              goto LABEL_187;
          }
          else
          {
            v54 = *(tagQ **)(gptiCurrent + 432LL);
            v86 = 0;
            v55 = tagQ::AreMultipleThreadsAttached(v54);
            if ( (unsigned int)xxxWaitMessageEx(0x3C07u, v55 ? 200 : 5000, (enum SLEEP_STATUS *)&v86) || v86 )
            {
              if ( v86 )
              {
                if ( tagQ::AreMultipleThreadsAttached(*(tagQ **)(gptiCurrent + 432LL)) )
                {
                  v63 = *((_QWORD *)PtiCurrentShared(v59, v58, v60, v61) + 58);
                  if ( !*(_QWORD *)(v63 + 48)
                    && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v63, v62, v64, v65) + 58) + 56LL) )
                  {
                    v66 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                    if ( v66 )
                      TryDetachShellFrame(gptiCurrent, (__int64)v66, v86 == 2, 1);
                  }
                }
              }
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v56) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v56) = 0;
              }
              if ( (_BYTE)v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v57) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v56,
                  v57,
                  (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
                  3,
                  1,
                  100,
                  (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
              }
LABEL_187:
              EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext((struct MOVESIZEDATA *)v13);
              if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) != a1 )
              {
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                  || (LOBYTE(v69) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                {
                  LOBYTE(v69) = 0;
                }
                if ( (_BYTE)v69 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v70) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v69,
                    v70,
                    (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
                    4,
                    1,
                    101,
                    (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
                }
                xxxMS_TrackMove((ULONG_PTR)a1, 256, 0x1BuLL, 1LL, (MOVESIZEDATA *)v13);
                goto LABEL_105;
              }
              if ( (*(_DWORD *)(v13 + 200) & 8) != 0 )
              {
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                  || (LOBYTE(v69) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                {
                  LOBYTE(v69) = 0;
                }
                if ( (_BYTE)v69 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v70) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v69,
                    v70,
                    (unsigned int)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
                    4,
                    1,
                    102,
                    (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids);
                }
                *(_DWORD *)(v13 + 200) &= ~8u;
                goto LABEL_105;
              }
              if ( v81[2] == 35 )
                xxxCallHook(2LL, 0LL, 0LL, 5LL);
              if ( (*(_DWORD *)(v13 + 200) & 1) != 0
                && !(unsigned int)xxxTrackInitSize((ULONG_PTR)a1, v81[2], v82[0], v82[1], (struct MOVESIZEDATA *)v13) )
              {
                goto LABEL_105;
              }
              v71 = *(_DWORD *)(v13 + 168) + WORD2(v83);
              v72 = *(_DWORD *)(v13 + 172) + DWORD2(v83);
              if ( (*(_DWORD *)(v13 + 200) & 1) == 0 )
              {
                v73 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  || (v74 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
                {
                  v74 = 0;
                }
                if ( v73 || v74 )
                {
                  LODWORD(v76) = *(_DWORD *)(v13 + 172);
                  LODWORD(v75) = *(_DWORD *)(v13 + 168);
                  WPP_RECORDER_AND_TRACE_SF_dd(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    v73,
                    v74,
                    (__int64)gFullLog,
                    5u,
                    1u,
                    0x67u,
                    (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
                    v75,
                    v76);
                }
                xxxMS_TrackMove((ULONG_PTR)a1, v81[2], v82[0], v71 | ((unsigned __int16)v72 << 16), (MOVESIZEDATA *)v13);
              }
              if ( (*(_DWORD *)(v13 + 200) & 8) != 0 )
                goto LABEL_105;
            }
          }
        }
        if ( v81[2] - 256 <= 9 || v81[2] == 35 || v81[2] - 512 <= 0xE )
        {
          *(_QWORD *)(v13 + 268) = *(_QWORD *)(gptiCurrent + 776LL);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v67 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v67 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (v68 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            v68 = 0;
          }
          if ( v67 || v68 )
          {
            LODWORD(v77) = *(_DWORD *)(v13 + 272);
            LODWORD(v76) = *(_DWORD *)(v13 + 268);
            LODWORD(v75) = v81[2];
            WPP_RECORDER_AND_TRACE_SF_Ddd(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v67,
              v68,
              98LL,
              5u,
              1u,
              0x62u,
              (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
              v75,
              v76,
              v77);
          }
          if ( !v78 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) & 0x1800000) != 0 )
            {
              v78 = 2;
              *(_DWORD *)(v13 + 200) ^= (*(_DWORD *)(v13 + 200) ^ (*(_DWORD *)(v13 + 200) + 0x8000)) & 0x38000;
            }
            else
            {
              v78 = 1;
            }
          }
          goto LABEL_187;
        }
        if ( !(unsigned int)xxxCallMsgFilter((__int64)v81, (unsigned int)(v85 != 9) + 3, v49, v50) )
        {
          xxxTranslateMessage((__int64)v81, 0);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v51) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v51) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v52) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v52) = 0;
          }
          if ( (_BYTE)v51 || (_BYTE)v52 )
          {
            LODWORD(v75) = v81[2];
            WPP_RECORDER_AND_TRACE_SF_D(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v51,
              v52,
              (__int64)gFullLog,
              5u,
              1u,
              0x63u,
              (__int64)&WPP_4ca377e5e46c35452bc0f5425c96fcc9_Traceguids,
              v75);
          }
          *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000u;
          xxxDispatchMessage((__int64 *)v81, v51, v52, v53);
          *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
        }
      }
    }
  }
}
