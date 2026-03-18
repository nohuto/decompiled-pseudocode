/*
 * XREFs of FindTimer @ 0x1C003DA48
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0005B40 (xxxSystemTimerProc.c)
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0016CC0 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     DecrementCompositedCount @ 0x1C00178B4 (DecrementCompositedCount.c)
 *     zzzInternalDestroyCaret @ 0x1C0062BBC (zzzInternalDestroyCaret.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C0062D2C (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     TrackMouseEvent @ 0x1C0086C14 (TrackMouseEvent.c)
 *     xxxCancelMouseMoveTracking @ 0x1C0098298 (xxxCancelMouseMoveTracking.c)
 *     SetMouseTrails @ 0x1C00D8380 (SetMouseTrails.c)
 *     zzzUpdateCursorImage @ 0x1C00F0570 (zzzUpdateCursorImage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?ResetTooltipTimer@@YAXPEAUtagDESKTOP@@@Z @ 0x1C013CB70 (-ResetTooltipTimer@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C013CBB0 (-TooltipRitHideTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C013CC20 (-TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x1C013CD6C (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C014FE48 (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     HideAutorunCursor @ 0x1C01A8830 (HideAutorunCursor.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B4CF0 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1C01B542C (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     StopFade @ 0x1C01BC550 (StopFade.c)
 *     NtUserKillSystemTimer @ 0x1C01D5650 (NtUserKillSystemTimer.c)
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E9D60 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EBD4C (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     HandleAsyncResizeComplete @ 0x1C01F1978 (HandleAsyncResizeComplete.c)
 *     ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01F5710 (-xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EditionKillAccessibilityTimer @ 0x1C01F5830 (EditionKillAccessibilityTimer.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C02152FC (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C02156C0 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMNCloseHierarchy @ 0x1C0216C60 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C0218340 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02191F0 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     xxxEndScroll @ 0x1C02298C0 (xxxEndScroll.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 *     MNAnimate @ 0x1C0233B54 (MNAnimate.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0244928 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0244AC4 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C0040360 (FreeTimer.c)
 */

__int64 __fastcall FindTimer(__int64 a1, __int64 a2, unsigned __int8 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  __int64 v8; // rax
  _QWORD **v10; // rsi
  _QWORD *v11; // rdi
  unsigned int v12; // ebp
  _QWORD *i; // r14
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx

  v5 = 0LL;
  v8 = a2;
  v10 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(a1)) & 0x3F));
  v11 = 0LL;
  v12 = 0;
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v11 = i - 14;
    if ( *(i - 3) == a1 && v11[12] == v8 )
    {
      v14 = *((unsigned int *)v11 + 12);
      if ( ((a3 ^ *((_BYTE *)v11 + 48)) & 6) == 0 && (v14 & 0x1000) == 0 )
      {
        if ( (v14 & 0x40) != 0 )
          goto LABEL_15;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
        v16 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( v16 == *(_QWORD *)(v11[3] + 424LL) || !a1 && ((*((_BYTE *)v11 + 48) ^ a3) & 4) == 0 )
        {
LABEL_15:
          if ( a4 )
          {
            FreeTimer((struct tagTIMER *)(i - 14));
            v11 = 0LL;
          }
          v12 = 1;
          break;
        }
      }
      v8 = a2;
    }
  }
  if ( a5 )
  {
    if ( v12 == 1 )
      v5 = v11;
    *a5 = v5;
  }
  return v12;
}
