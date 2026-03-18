/*
 * XREFs of GetMonitorRect @ 0x140045308
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140010DA0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1401285E8 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpi @ 0x1400458A8 (GetMonitorRectForDpi.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GetMonitorRect(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
  {
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v4);
    v8 = 0LL;
    v9 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
    if ( !*(_QWORD *)(v9 + 496) )
      goto LABEL_10;
    v10 = (__int64 *)W32GetCurrentThreadNonPaged(v7);
    if ( v10 )
      v8 = *v10;
    if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v8 + 496) + 8LL) + 64LL) & 1) == 0 )
LABEL_10:
      CurrentThreadDpiAwarenessContext = 18;
  }
  GetMonitorRectForDpi(a1, a2, (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF);
  return a1;
}
