/*
 * XREFs of ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     NtUserDeleteMenu @ 0x14006FD90 (NtUserDeleteMenu.c)
 *     xxxSetMenuItemInfo @ 0x14006FFFC (xxxSetMenuItemInfo.c)
 *     NtUserRemoveMenu @ 0x140070AC0 (NtUserRemoveMenu.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x140073DDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1400749F8 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400759F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x14007E01C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     NtUserSetParent @ 0x140088820 (NtUserSetParent.c)
 *     xxxDW_SendDestroyMessages @ 0x14008A4B0 (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x14008A638 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x140095744 (zzzInternalDestroyCaret.c)
 *     zzzLockWindowUpdate2 @ 0x140097CA0 (zzzLockWindowUpdate2.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxIsDragging @ 0x140109A1C (xxxIsDragging.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140183378 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14018DF04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     _ReplyMessage @ 0x1401AB570 (_ReplyMessage.c)
 *     EditionPointerWindowHitTest @ 0x1401B3FF0 (EditionPointerWindowHitTest.c)
 *     NtUserFillWindow @ 0x1401C95B0 (NtUserFillWindow.c)
 *     NtUserSetMenu @ 0x1401F5330 (NtUserSetMenu.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140205E28 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     NtUserMenuItemFromPoint @ 0x14020EC40 (NtUserMenuItemFromPoint.c)
 *     _DwmLockScreenUpdates @ 0x140210F80 (_DwmLockScreenUpdates.c)
 *     NtUserChangeClipboardChain @ 0x140212510 (NtUserChangeClipboardChain.c)
 *     NtUserSetSystemCursor @ 0x140214240 (NtUserSetSystemCursor.c)
 *     NtUserAcquireInteractiveControlBackgroundAccess @ 0x14021DDC0 (NtUserAcquireInteractiveControlBackgroundAccess.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x140222848 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023256C (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140233A48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x140237020 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     TryDetachShellFrame @ 0x140237D24 (TryDetachShellFrame.c)
 *     NtUserSetInteractiveControlFocus @ 0x1402465B0 (NtUserSetInteractiveControlFocus.c)
 *     NtUserSetWindowBand @ 0x140246BB0 (NtUserSetWindowBand.c)
 *     NtUserSetWindowPos @ 0x140247430 (NtUserSetWindowPos.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14024C8C0 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     xxxSnapWindow @ 0x1402641A0 (xxxSnapWindow.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1402716B8 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x14027662C (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x14027A098 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x140280D7C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x140289480 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAAXPEAUtagTIMER@@@Z @ 0x140289930 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAAXPEAUtagTIMER@@@Z.c)
 *     xxxTimersProc_Old @ 0x140289ED0 (xxxTimersProc_Old.c)
 *     NtUserDragObject @ 0x140293D50 (NtUserDragObject.c)
 *     NtUserPaintDesktop @ 0x14029A1B0 (NtUserPaintDesktop.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A7F9C (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     xxxDDETrackWindowDying @ 0x1402B10D4 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1402B1314 (xxxFreeDdeConv.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B24D8 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     xxxDwmStopRedirection @ 0x1402B38D0 (xxxDwmStopRedirection.c)
 *     xxxMNSetTop @ 0x1402BE960 (xxxMNSetTop.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C1474 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C55A8 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1402C82E0 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D6EA4 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D70FC (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D93AC (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x1402DB524 (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 *     xxxDragObject @ 0x1402DF924 (xxxDragObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32HM_LockIntoThread<1>(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 456);
  *a3 = result;
  *(_QWORD *)(a1 + 456) = a3;
  a3[1] = a2;
  if ( a2 )
    return HMLockObject(a2);
  return result;
}
