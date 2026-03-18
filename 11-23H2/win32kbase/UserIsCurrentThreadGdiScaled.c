/*
 * XREFs of UserIsCurrentThreadGdiScaled @ 0x1C00CBFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 UserIsCurrentThreadGdiScaled()
{
  int CurrentThreadDpiAwarenessContext; // edi
  unsigned int v1; // ebx

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v1 = 1;
  if ( (!W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
     || !*((_QWORD *)PtiCurrentShared() + 57)
     || (*(_BYTE *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0
     || (CurrentThreadDpiAwarenessContext & 0xF) != 0
     || (CurrentThreadDpiAwarenessContext & 0x40000000) == 0)
    && (!W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
     || !*((_QWORD *)PtiCurrentShared() + 57)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0
     || (CurrentThreadDpiAwarenessContext & 0xF) != 0
     || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 0x40) == 0) )
  {
    return 0;
  }
  return v1;
}
