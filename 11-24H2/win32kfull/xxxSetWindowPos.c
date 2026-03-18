/*
 * XREFs of xxxSetWindowPos @ 0x140076C44
 * Callers:
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     xxxSetScrollBar @ 0x140032F08 (xxxSetScrollBar.c)
 *     NtUserMoveWindow @ 0x140076690 (NtUserMoveWindow.c)
 *     xxxSetWindowPlacement @ 0x140086334 (xxxSetWindowPlacement.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxMetricsRecalc @ 0x140110EAC (xxxMetricsRecalc.c)
 *     xxxUpdateShadowZorder @ 0x14015CEB0 (xxxUpdateShadowZorder.c)
 *     xxxAddShadow @ 0x14015CF84 (xxxAddShadow.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     ?xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z @ 0x1401C3F00 (-xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z.c)
 *     xxxShowScrollBar @ 0x1401C8C38 (xxxShowScrollBar.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1401DED60 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1401E4344 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     xxxSetMenu @ 0x1401F54E0 (xxxSetMenu.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1401FE654 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020890C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     xxxRedrawFrameAndHook @ 0x140217A58 (xxxRedrawFrameAndHook.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x140223790 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1402337EC (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x14023AFEC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserDrawMenuBar @ 0x140241260 (NtUserDrawMenuBar.c)
 *     NtUserRedrawFrame @ 0x140244860 (NtUserRedrawFrame.c)
 *     NtUserSetWindowPos @ 0x140247430 (NtUserSetWindowPos.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14024E024 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxActivateEnabledPopup @ 0x14026BB74 (xxxActivateEnabledPopup.c)
 *     ?xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140277614 (-xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14027A2C0 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x140281684 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 *     NtUserRaiseLowerShellWindow @ 0x14029A540 (NtUserRaiseLowerShellWindow.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A7F9C (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1402AB2DC (xxxSetInternalWindowPos.c)
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C06AC (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C1A28 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1402C8244 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DB524 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1402E0898 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400671BC (-GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x14022F1B8 (xxxSetWindowPosAndBand.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxSetWindowPos(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  bool v8; // di
  int v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  struct tagWND *CompositeAppFrameWindow; // rax
  struct tagWND *v15; // rsi
  int v16; // edi
  __int64 v17; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = !a2 && (unsigned int)CoreWindowProp::IsComponent(a1, 0LL) && (a7 & 0xFFFFFFEF) == 3;
  v9 = a7 | 0x60400;
  if ( !v8 )
    v9 = a7;
  v10 = xxxSetWindowPosAndBand(a1, a5, a6, v9);
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v10 )
    {
      if ( v8 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) == *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18944) )
      {
        CompositeAppFrameWindow = CoreWindowProp::GetCompositeAppFrameWindow(a1, v13);
        v15 = CompositeAppFrameWindow;
        if ( CompositeAppFrameWindow )
        {
          v16 = 394259;
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
            BugCheckParameter3,
            (__int64)CompositeAppFrameWindow);
          if ( (*(_BYTE *)(*((_QWORD *)v15 + 5) + 24LL) & 8) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) == 0 )
            v16 = 2491411;
          xxxSetWindowPosAndBand(v15, 0, 0, v16);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v17);
        }
      }
    }
  }
  return v10;
}
