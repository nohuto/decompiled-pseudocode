/*
 * XREFs of ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C
 * Callers:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x140034330 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14018DF04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x140237D24 (TryDetachShellFrame.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x140280D7C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x140289480 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     xxxTimersProc_Old @ 0x140289ED0 (xxxTimersProc_Old.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     xxxDDETrackWindowDying @ 0x1402B10D4 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1402B1314 (xxxFreeDdeConv.c)
 *     xxxMNSetTop @ 0x1402BE960 (xxxMNSetTop.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C55A8 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     xxxDragObject @ 0x1402DF924 (xxxDragObject.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(_QWORD *BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *CurrentThreadNonPaged; // rax
  ULONG_PTR v4; // rcx
  __int64 result; // rax

  CurrentThreadNonPaged = (ULONG_PTR *)W32GetCurrentThreadNonPaged(BugCheckParameter3, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  result = Win32HM_UnlockFromThread<1>(v4, (ULONG_PTR)BugCheckParameter3);
  BugCheckParameter3[1] = 0LL;
  *BugCheckParameter3 = -1LL;
  return result;
}
