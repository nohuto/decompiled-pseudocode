/*
 * XREFs of xxxInternalGetMessage @ 0x1C002B4E0
 * Callers:
 *     xxxSetCsrssThreadDesktop @ 0x1C002A7B0 (xxxSetCsrssThreadDesktop.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C002AB20 (xxxRestoreCsrssThreadDesktop.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C002B3A0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BA07C (xxxDCETrackCaptionButton.c)
 *     xxxOldNextWindow @ 0x1C01CA428 (xxxOldNextWindow.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01EE0D0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EF350 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMNRemoveMessage@@YAHII@Z @ 0x1C0213310 (-xxxMNRemoveMessage@@YAHII@Z.c)
 *     xxxMNLoop @ 0x1C0213DFC (xxxMNLoop.c)
 *     xxxMNDoubleClick @ 0x1C02170FC (xxxMNDoubleClick.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022907C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxTrackCaptionButton @ 0x1C022BE68 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C022EFB8 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C022F688 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C0238C64 (xxxHelpLoop.c)
 * Callees:
 *     ClientGetMessageMPH @ 0x1C000359C (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 */

__int64 __fastcall xxxInternalGetMessage(_OWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) > 0 )
    return ClientGetMessageMPH(a1, a2, a3, a4, a5, a6);
  else
    return xxxRealInternalGetMessage((_DWORD)a1, a2, a3, a4, a5, a6);
}
