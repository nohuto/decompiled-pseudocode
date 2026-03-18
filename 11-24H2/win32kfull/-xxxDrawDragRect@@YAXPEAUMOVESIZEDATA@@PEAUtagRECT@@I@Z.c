/*
 * XREFs of ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x140211824
 * Callers:
 *     xxxReleaseCapture @ 0x140089E6C (xxxReleaseCapture.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1402278F8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewRect@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x140267874 (-SetPreviewRect@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1402AAEF0 (xxxCancelTrackingForThread.c)
 * Callees:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140211840 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 */

void __fastcall xxxDrawDragRect(struct MOVESIZEDATA *a1, struct tagRECT *a2, unsigned int a3)
{
  xxxDrawDragRectEx(a1, 0LL, a3, (struct tagRECT *)((char *)a1 + 24));
}
