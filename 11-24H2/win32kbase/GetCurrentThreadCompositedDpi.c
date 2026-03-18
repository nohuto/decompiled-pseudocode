/*
 * XREFs of GetCurrentThreadCompositedDpi @ 0x140045288
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 *     CreateMonitorRegion @ 0x1400461D8 (CreateMonitorRegion.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpi(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int16 v2; // bx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax

  v2 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1) >> 8) & 0x1FF;
  if ( v2 )
  {
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v1);
    v5 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
    if ( !*(_QWORD *)(v5 + 496) )
      return 0;
    v6 = (_QWORD *)W32GetCurrentThreadNonPaged(v4);
    v7 = v6 ? *v6 : 0LL;
    if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v7 + 496) + 8LL) + 64LL) & 1) == 0 )
      return 0;
  }
  return v2;
}
