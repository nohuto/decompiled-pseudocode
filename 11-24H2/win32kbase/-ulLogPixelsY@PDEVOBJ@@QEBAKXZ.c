/*
 * XREFs of ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x140129460
 * Callers:
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x140140CFC (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140045170 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsY(PDEVOBJ *this)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)this);
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xF) - 1 > 1 )
    return (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  else
    return *(unsigned int *)(*(_QWORD *)this + 2164LL);
}
