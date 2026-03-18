/*
 * XREFs of GetCurrentThreadCompositedDpi @ 0x140026674
 * Callers:
 *     _GetPointerDeviceRects @ 0x1400264A4 (_GetPointerDeviceRects.c)
 *     _GetMouseMovePointsEx @ 0x1401DC5A8 (_GetMouseMovePointsEx.c)
 *     GetScreenRect @ 0x14022729C (GetScreenRect.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x140267394 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     GetHimetricScaleForMonitor @ 0x1402818AC (GetHimetricScaleForMonitor.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 GetCurrentThreadCompositedDpi()
{
  unsigned __int16 v0; // bx

  v0 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8) & 0x1FF;
  if ( v0
    && (!*((_QWORD *)PtiCurrent() + 62)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent() + 62) + 8LL) + 64LL) & 1) == 0) )
  {
    return 0;
  }
  return v0;
}
