/*
 * XREFs of ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14002699C
 * Callers:
 *     _GetWindowPlacement @ 0x140025CD8 (_GetWindowPlacement.c)
 *     GetMonitorWorkRect @ 0x1400267BC (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x140026800 (GetMonitorRect.c)
 *     _GetClientRect @ 0x1400750A0 (_GetClientRect.c)
 *     GetMonitorMenuRect @ 0x140098A04 (GetMonitorMenuRect.c)
 *     FindBestPos @ 0x140098F94 (FindBestPos.c)
 *     xxxSendSizeMessage @ 0x14019DCF0 (xxxSendSizeMessage.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1401E7800 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     xxxDesktopPaintCallback @ 0x1401FA6B0 (xxxDesktopPaintCallback.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x140202E58 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x140267394 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 GetCurrentThreadCompositedDpiContext(void)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
    && (!*((_QWORD *)PtiCurrent() + 62)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 64LL) & 1) == 0) )
  {
    return 18;
  }
  return CurrentThreadDpiAwarenessContext;
}
