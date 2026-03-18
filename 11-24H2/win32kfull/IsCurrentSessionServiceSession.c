/*
 * XREFs of IsCurrentSessionServiceSession @ 0x1400A4078
 * Callers:
 *     ReadCursorSuppressionConfig @ 0x140134838 (ReadCursorSuppressionConfig.c)
 *     SetTimerCoalescingTolerance @ 0x1401A5D30 (SetTimerCoalescingTolerance.c)
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140233A48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??0CForegroundLaunch@@QEAA@XZ @ 0x140240370 (--0CForegroundLaunch@@QEAA@XZ.c)
 *     xxxDesktopThread @ 0x1402864A0 (xxxDesktopThread.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884 (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x14028F3A0 (EditionAllowProcessLaunchForegroundPolicy.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 */

_BOOL8 IsCurrentSessionServiceSession()
{
  int CurrentWin32kSessionId; // ebx

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  return CurrentWin32kSessionId == (unsigned int)RtlGetCurrentServiceSessionId();
}
