/*
 * XREFs of ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70
 * Callers:
 *     NtUserSetScrollInfo @ 0x140033670 (NtUserSetScrollInfo.c)
 *     NtUserCalcMenuBar @ 0x1400337C0 (NtUserCalcMenuBar.c)
 *     NtUserGetUpdateRect @ 0x140033A00 (NtUserGetUpdateRect.c)
 *     NtUserUpdateLayeredWindow @ 0x140034540 (NtUserUpdateLayeredWindow.c)
 *     NtUserEndPaint @ 0x140034A40 (NtUserEndPaint.c)
 *     NtUserBeginPaint @ 0x140034B50 (NtUserBeginPaint.c)
 *     NtUserGetWindowMinimizeRect @ 0x14003C870 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140047AFC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     NtUserSetWindowPlacement @ 0x1400861F0 (NtUserSetWindowPlacement.c)
 *     NtUserTranslateAccelerator @ 0x14009CCF0 (NtUserTranslateAccelerator.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     NtUserChangeWindowMessageFilterEx @ 0x1401998D0 (NtUserChangeWindowMessageFilterEx.c)
 *     NtUserGetScrollBarInfo @ 0x1401AC9D0 (NtUserGetScrollBarInfo.c)
 *     NtUserGetMenuBarInfo @ 0x1401B0300 (NtUserGetMenuBarInfo.c)
 *     NtUserTrackPopupMenuEx @ 0x1401B1250 (NtUserTrackPopupMenuEx.c)
 *     NtUserGetComboBoxInfo @ 0x1401C3780 (NtUserGetComboBoxInfo.c)
 *     NtUserInitThreadCoreMessagingIocp2 @ 0x1401C5FD0 (NtUserInitThreadCoreMessagingIocp2.c)
 *     NtUserFlashWindowEx @ 0x1401F4230 (NtUserFlashWindowEx.c)
 *     NtUserGetGestureConfig @ 0x140242510 (NtUserGetGestureConfig.c)
 *     NtUserGetTitleBarInfo @ 0x140242EA0 (NtUserGetTitleBarInfo.c)
 *     NtUserSetGestureConfig @ 0x140246270 (NtUserSetGestureConfig.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserApplyWindowAction @ 0x140292770 (NtUserApplyWindowAction.c)
 *     NtUserDrawCaption @ 0x140293FD0 (NtUserDrawCaption.c)
 *     NtUserInjectGesture @ 0x140298D20 (NtUserInjectGesture.c)
 *     NtUserPaintMonitor @ 0x14029A240 (NtUserPaintMonitor.c)
 *     NtUserScrollWindowEx @ 0x14029C180 (NtUserScrollWindowEx.c)
 *     NtUserSetClassLongPtr @ 0x14029CC20 (NtUserSetClassLongPtr.c)
 *     NtUserSetInternalWindowPos @ 0x14029DC10 (NtUserSetInternalWindowPos.c)
 *     NtUserSetWindowShowState @ 0x14029F460 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1402A1AB0 (NtUserUpdateWindowTrackingInfo.c)
 *     xxxCsEvent @ 0x1402DBB18 (xxxCsEvent.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  *a1 = *(_QWORD *)(a2 + 456);
  *(_QWORD *)(a2 + 456) = a1;
  a1[1] = a3;
  HMLockObject(a3);
  return a1;
}
