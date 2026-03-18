/*
 * XREFs of ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C00D8C10
 * Callers:
 *     GetMonitorWorkRect @ 0x1C00D8B88 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00D8BCC (GetMonitorRect.c)
 *     GetMonitorMenuRect @ 0x1C024B3C4 (GetMonitorMenuRect.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpiContext(__int64 a1)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
    && (!*((_QWORD *)PtiCurrentShared() + 57)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0) )
  {
    return 18;
  }
  return CurrentThreadDpiAwarenessContext;
}
