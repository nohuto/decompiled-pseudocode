/*
 * XREFs of GetThreadDesktopWindow @ 0x140176140
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     GetLastTopMostWindow @ 0x14008D348 (GetLastTopMostWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1400F7A10 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     _SelectPalette @ 0x140186450 (_SelectPalette.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1401A0964 (fnHkINLPCBTCREATESTRUCT.c)
 *     NtUserBuildHwndList @ 0x140240A10 (NtUserBuildHwndList.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     RemoteRedrawRectangle @ 0x1402AD718 (RemoteRedrawRectangle.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C1474 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1402DE074 (xxxDrawAnimatedRects.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GetThreadDesktopWindow(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rax

  v2 = 0LL;
  if ( a1
    || (CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(0LL, a2)) != 0LL
    && (a1 = *CurrentThreadNonPaged) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 504);
    if ( v4 )
      return *(_QWORD *)(v4 + 24);
  }
  return v2;
}
