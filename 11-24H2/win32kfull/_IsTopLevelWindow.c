/*
 * XREFs of _IsTopLevelWindow @ 0x140049A60
 * Callers:
 *     InitializeMonitorInfo @ 0x1400259E8 (InitializeMonitorInfo.c)
 *     CalcWindowFullScreen @ 0x14002DB70 (CalcWindowFullScreen.c)
 *     FVisCountable @ 0x14002DE20 (FVisCountable.c)
 *     SelectWindowRgn @ 0x140030A9C (SelectWindowRgn.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     ?VisWindow@@YAHPEAUtagWND@@K@Z @ 0x1400320F8 (-VisWindow@@YAHPEAUtagWND@@K@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x140034540 (NtUserUpdateLayeredWindow.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1400453CC (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x140046DB4 (IsTopLevelOrLayeredChildWindow.c)
 *     NtUserIsTopLevelWindow @ 0x140048870 (NtUserIsTopLevelWindow.c)
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1400489D4 (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x140048A8C (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     GetInheritedMonitor @ 0x140048BE0 (GetInheritedMonitor.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x140049F70 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1400883B4 (_anonymous_namespace_--xxxUpdateTray.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14008BA78 (UpdateMonitorForWindowAndChildren.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14008C5F8 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 *     GetNewMonitor @ 0x14008D07C (GetNewMonitor.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x1400943FC (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x140148DBC (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x14014C0EC (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x14014C28C (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxConsoleControl @ 0x14015D510 (xxxConsoleControl.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018A400 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x14018E770 (_anonymous_namespace_--ContactVisualizationWorker.c)
 *     _anonymous_namespace_::GetWindowVisualizationSetting @ 0x14018F1E8 (_anonymous_namespace_--GetWindowVisualizationSetting.c)
 *     ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x140194494 (-IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x14019A800 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x14019E09C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1401AEAE0 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     GetGestureConfigSettings @ 0x1401B290C (GetGestureConfigSettings.c)
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401BFD48 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     NtUserGetWindowDisplayAffinity @ 0x1401C15A0 (NtUserGetWindowDisplayAffinity.c)
 *     GetDisplayAffinity @ 0x1401C1650 (GetDisplayAffinity.c)
 *     ShouldHaveShadow @ 0x1401C6D3C (ShouldHaveShadow.c)
 *     FeedbackGetWindowSetting @ 0x1401C7590 (FeedbackGetWindowSetting.c)
 *     NtUserSetWindowCompositionTransition @ 0x1401DE8F0 (NtUserSetWindowCompositionTransition.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1401DED60 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401E1800 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     NtUserBeginLayoutUpdate @ 0x1401E2570 (NtUserBeginLayoutUpdate.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1401E98D0 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     NtUserSetBrokeredForeground @ 0x140219E00 (NtUserSetBrokeredForeground.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z @ 0x140221B50 (-DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x140227060 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14022BB34 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x140238994 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x140246D90 (NtUserSetWindowCompositionAttribute.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x14024FDE0 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 *     ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x140255500 (-SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x140281704 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x140282294 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     NtUserApplyWindowAction @ 0x140292770 (NtUserApplyWindowAction.c)
 *     NtUserConvertToInterceptWindow @ 0x1402934C0 (NtUserConvertToInterceptWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x140293A90 (NtUserDisableImmersiveOwner.c)
 *     NtUserEnterMoveSizeLoop @ 0x1402948F0 (NtUserEnterMoveSizeLoop.c)
 *     NtUserForceWindowToDpiForTest @ 0x1402954F0 (NtUserForceWindowToDpiForTest.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1402974D0 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserRegisterCloakedNotification @ 0x14029AEB0 (NtUserRegisterCloakedNotification.c)
 *     NtUserSetAdditionalPowerThrottlingProcess @ 0x14029C430 (NtUserSetAdditionalPowerThrottlingProcess.c)
 *     NtUserSetBridgeWindowChild @ 0x14029C7B0 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetShellSpecialWindow @ 0x14029EA00 (NtUserSetShellSpecialWindow.c)
 *     NtUserShellMigrateWindow @ 0x14029FD10 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402A01F0 (NtUserShellSetWindowPos.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1402A1860 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     ?xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z @ 0x1402A9390 (-xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1402AD138 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x1402B4438 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C06AC (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CC61C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CCB4C (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402D7B40 (-xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTopLevelWindow(__int64 a1)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 104);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        return v1 == *(_QWORD *)(v4 + 24);
    }
  }
  return result;
}
