/*
 * XREFs of ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14003F454
 * Callers:
 *     NtUserRedrawWindow @ 0x14003F320 (NtUserRedrawWindow.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140047AFC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserCreateWindowEx @ 0x14004AF20 (NtUserCreateWindowEx.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     NtUserGetMenuItemRect @ 0x1401B1410 (NtUserGetMenuItemRect.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserDrawCaptionTemp @ 0x1402940D0 (NtUserDrawCaptionTemp.c)
 *     NtUserPaintMonitor @ 0x14029A240 (NtUserPaintMonitor.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  *a1 = *(_QWORD *)(a2 + 456);
  *(_QWORD *)(a2 + 456) = a1;
  a1[1] = a3;
  if ( a3 )
    HMLockObject(a3);
  return a1;
}
