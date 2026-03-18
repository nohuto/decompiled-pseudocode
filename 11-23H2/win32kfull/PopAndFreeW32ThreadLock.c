/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C00AD580
 * Callers:
 *     xxxSendMinRectMessages @ 0x1C000E178 (xxxSendMinRectMessages.c)
 *     xxxCloseClipboard @ 0x1C0011310 (xxxCloseClipboard.c)
 *     xxxTrackMouseMove @ 0x1C0024474 (xxxTrackMouseMove.c)
 *     xxxQueryInformationThread @ 0x1C0027854 (xxxQueryInformationThread.c)
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0030E84 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0031520 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxDoPaint @ 0x1C00619B8 (xxxDoPaint.c)
 *     xxxCheckFullScreen @ 0x1C00621AC (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C0062640 (xxxAddFullScreen.c)
 *     xxxSetShellWindow @ 0x1C007264C (xxxSetShellWindow.c)
 *     xxxCancelTracking @ 0x1C0078EB0 (xxxCancelTracking.c)
 *     CleanupW32ThreadLocks @ 0x1C00828F0 (CleanupW32ThreadLocks.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1C0090BA8 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     NtUserSwitchDesktop @ 0x1C0091DC0 (NtUserSwitchDesktop.c)
 *     xxxWaitForInputIdle @ 0x1C0096660 (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C00968CC (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxEmptyClipboard @ 0x1C009AC2C (xxxEmptyClipboard.c)
 *     RemoteDisableScreen @ 0x1C00A13E8 (RemoteDisableScreen.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A1D48 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A53AC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00A57E8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00AC0AC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSendMessageBSM @ 0x1C00AF630 (xxxSendMessageBSM.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C00E3750 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 *     xxxRemoveFullScreen @ 0x1C00F4314 (xxxRemoveFullScreen.c)
 *     xxxReceiveMessage @ 0x1C0126ED0 (xxxReceiveMessage.c)
 *     RemoteRedrawScreen @ 0x1C0131D40 (RemoteRedrawScreen.c)
 *     ?xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z @ 0x1C013CE38 (-xxxTooltipCreateCallback@@YAXPEAUHWND__@@H@Z.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01AD7BC (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01B224C (xxxGetDeviceChangeInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B5470 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01B655C (TryDetachShellFrame.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01B7354 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01B7734 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01B7CB4 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     NtUserGetClipboardData @ 0x1C01CFAA0 (NtUserGetClipboardData.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EBD4C (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxDeferredDesktopRotation @ 0x1C01F55B0 (xxxDeferredDesktopRotation.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01FC3A8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxChangeClipboardChain @ 0x1C01FD448 (xxxChangeClipboardChain.c)
 *     xxxSetClipboardViewer @ 0x1C01FD714 (xxxSetClipboardViewer.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C021F054 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     xxxHardErrorControl @ 0x1C02234A4 (xxxHardErrorControl.c)
 *     xxxSnapWindow @ 0x1C0227938 (xxxSnapWindow.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  result = *(_QWORD *)a1;
  *(_QWORD *)(v2 + 16) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}
