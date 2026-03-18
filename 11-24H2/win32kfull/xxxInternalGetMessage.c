/*
 * XREFs of xxxInternalGetMessage @ 0x140107C10
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x140107100 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x140107460 (xxxSetCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140107708 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserGetMessage @ 0x140107980 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x140107A70 (NtUserPeekMessage.c)
 *     xxxIsDragging @ 0x140109A1C (xxxIsDragging.c)
 *     xxxDCETrackCaptionButton @ 0x140109CAC (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x14010B9EC (xxxTrackCaptionButton.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x140268B90 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1402A8A84 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxMNDoubleClick @ 0x1402BDEDC (xxxMNDoubleClick.c)
 *     xxxDragObject @ 0x1402DF924 (xxxDragObject.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E2314 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
 * Callees:
 *     ClientGetMessageMPH @ 0x140107C90 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxInternalGetMessage(__int64 a1, __int64 a2, int a3, int a4, unsigned __int64 a5, int a6)
{
  int v8; // esi
  _QWORD *CurrentThreadNonPaged; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-18h]

  v8 = a2;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
  LODWORD(v12) = a5;
  if ( *(int *)(CurrentThreadNonPaged[61] + 28LL) <= 0 )
    return xxxRealInternalGetMessage(a1, v12, a6);
  else
    return ClientGetMessageMPH(a1, v8, a3, a4, a5, a6);
}
