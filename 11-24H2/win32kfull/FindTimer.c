/*
 * XREFs of FindTimer @ 0x14005FED0
 * Callers:
 *     NtUserKillTimer @ 0x14005F540 (NtUserKillTimer.c)
 *     InternalSetTimer @ 0x14005F804 (InternalSetTimer.c)
 *     xxxCancelMouseMoveTracking @ 0x140067698 (xxxCancelMouseMoveTracking.c)
 *     MNAnimate @ 0x14006F328 (MNAnimate.c)
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1400946B8 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x140095744 (zzzInternalDestroyCaret.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x14009B0B0 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x14009B33C (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1401964AC (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     TrackMouseEvent @ 0x14019C004 (TrackMouseEvent.c)
 *     StopFade @ 0x1401EE440 (StopFade.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     EditionKillAccessibilityTimer @ 0x14021A570 (EditionKillAccessibilityTimer.c)
 *     HandleAsyncResizeComplete @ 0x14022515C (HandleAsyncResizeComplete.c)
 *     SetMouseTrails @ 0x140239574 (SetMouseTrails.c)
 *     xxxSystemTimerProc @ 0x14023EF10 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x14024CA50 (xxxFlashWindow.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x140255A48 (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 *     xxxTrackMouseMove @ 0x140255AC4 (xxxTrackMouseMove.c)
 *     HideAutorunCursor @ 0x1402717B0 (HideAutorunCursor.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     DecrementCompositedCount @ 0x14028559C (DecrementCompositedCount.c)
 *     NtUserKillSystemTimer @ 0x1402999F0 (NtUserKillSystemTimer.c)
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402A6750 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402ADC20 (-xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402BD444 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402BD720 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     _lambda_49ba710cdad7805a04ef9893981131b8_::operator() @ 0x1402D9C6C (_lambda_49ba710cdad7805a04ef9893981131b8_--operator().c)
 *     ?TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402DB780 (-TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402DB820 (-TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxEndScroll @ 0x1402E6AC0 (xxxEndScroll.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1402EBAE0 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402EBC7C (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x14023EC30 (FreeTimer.c)
 */

__int64 __fastcall FindTimer(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rsi
  _QWORD *v7; // rbx
  unsigned int v8; // r15d
  _QWORD **v11; // r12
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v15; // rcx
  __int64 result; // rax

  v5 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v11 = (_QWORD **)(16 * ((((_BYTE)a2 + BYTE1(a1)) & 0x3F) + 3856LL) + W32GetUserSessionState(a1, a2));
  v12 = *v11;
  if ( *v11 != v11 )
  {
    while ( 1 )
    {
      v7 = v12 - 15;
      if ( *(v12 - 2) == a1 && v7[14] == a2 )
      {
        v13 = *((unsigned int *)v7 + 12);
        if ( ((a3 ^ *((_BYTE *)v7 + 48)) & 6) == 0 && (v13 & 0x1000) == 0 )
        {
          if ( (v13 & 0x40) != 0 )
            break;
          CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v13);
          v15 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
            v15 = 0LL;
          if ( v15 == *(_QWORD **)(v7[3] + 464LL) || !a1 && ((*((_BYTE *)v7 + 48) ^ a3) & 4) == 0 )
            break;
        }
      }
      v12 = (_QWORD *)*v12;
      if ( v12 == v11 )
        goto LABEL_18;
    }
    if ( a4 )
    {
      FreeTimer((struct tagTIMER *)(v12 - 15));
      v7 = 0LL;
    }
    v8 = 1;
  }
LABEL_18:
  result = v8;
  if ( a5 )
  {
    if ( v8 == 1 )
      v5 = v7;
    *a5 = v5;
  }
  return result;
}
