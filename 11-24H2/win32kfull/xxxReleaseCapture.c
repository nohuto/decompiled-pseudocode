/*
 * XREFs of xxxReleaseCapture @ 0x140089E6C
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E080 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     NtUserReleaseCapture @ 0x140089E30 (NtUserReleaseCapture.c)
 *     xxxIsDragging @ 0x140109A1C (xxxIsDragging.c)
 *     xxxDCETrackCaptionButton @ 0x140109CAC (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x14010B9EC (xxxTrackCaptionButton.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1402278F8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x140252758 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     xxxMNReleaseCapture @ 0x1402688C4 (xxxMNReleaseCapture.c)
 *     xxxDragObject @ 0x1402DF924 (xxxDragObject.c)
 *     xxxEndScroll @ 0x1402E6AC0 (xxxEndScroll.c)
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x140211824 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall xxxReleaseCapture(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  struct tagTHREADINFO *v4; // rbx
  __int64 UserSessionState; // rax
  struct tagRECT *v7; // rdx
  struct MOVESIZEDATA *v8; // rcx

  v2 = PtiCurrent(a1, a2);
  v4 = v2;
  if ( (*(_DWORD *)(*((_QWORD *)v2 + 59) + 436LL) & 0x100000) != 0 )
    return 0LL;
  if ( *((_QWORD *)v2 + 89) && (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 132, 0, 0) & 0x10) != 0 )
  {
    UserSessionState = W32GetUserSessionState(0LL, v3);
    bSetDevDragRect(*(HDEV *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
    v8 = (struct MOVESIZEDATA *)*((_QWORD *)v4 + 89);
    if ( (*((_DWORD *)v8 + 50) & 0x20) == 0 )
      xxxDrawDragRect(v8, v7, 2u);
    _InterlockedAnd((volatile signed __int32 *)v4 + 132, 0xFFFF7FEF);
  }
  xxxCapture(v4, 0LL, 0);
  return 1LL;
}
