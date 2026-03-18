/*
 * XREFs of GetThreadDesktopWindow @ 0x1C00E9600
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008AF0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxWindowFromPoint @ 0x1C0062EB8 (xxxWindowFromPoint.c)
 *     NtUserSelectPalette @ 0x1C00763A0 (NtUserSelectPalette.c)
 *     NtUserBuildHwndList @ 0x1C00B1800 (NtUserBuildHwndList.c)
 *     GetLastTopMostWindow @ 0x1C00EA300 (GetLastTopMostWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SelectPalette @ 0x1C0130E10 (_SelectPalette.c)
 *     RemoteRedrawRectangle @ 0x1C01F51F8 (RemoteRedrawRectangle.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C020FB38 (fnHkINLPCBTCREATESTRUCT.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0214838 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021E33C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C0224180 (xxxDrawAnimatedRects.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetThreadDesktopWindow(struct tagTHREADINFO *a1)
{
  __int64 v1; // rbx
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx

  v1 = 0LL;
  v2 = a1;
  if ( a1 || (v2 = PtiCurrentShared()) != 0LL )
  {
    v3 = *((_QWORD *)v2 + 58);
    if ( v3 )
      return *(_QWORD *)(v3 + 24);
  }
  return v1;
}
