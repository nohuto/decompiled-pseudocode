/*
 * XREFs of UserIsCurrentThreadGdiScaled @ 0x140173D70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall UserIsCurrentThreadGdiScaled(__int64 a1)
{
  int CurrentThreadDpiAwarenessContext; // edi
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  v4 = 1;
  if ( !PtiCurrent(v2)
    || !*((_QWORD *)PtiCurrent(v3) + 62)
    || (v3 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v3) + 62) + 8LL), (*(_DWORD *)(v3 + 64) & 1) == 0)
    || (CurrentThreadDpiAwarenessContext & 0x4000000F) != 0x40000000 )
  {
    if ( !PtiCurrent(v3) )
      return 0;
    if ( !*((_QWORD *)PtiCurrent(v5) + 62) )
      return 0;
    v7 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v6) + 62) + 8LL);
    if ( (*(_DWORD *)(v7 + 64) & 1) == 0 || (CurrentThreadDpiAwarenessContext & 0xF) != 0 )
      return 0;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000000) == 0 )
      return 0;
  }
  return v4;
}
