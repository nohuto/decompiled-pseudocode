/*
 * XREFs of IsSmallerThanScreen @ 0x1400F7364
 * Callers:
 *     xxxSetSysMenu @ 0x14006F958 (xxxSetSysMenu.c)
 *     ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x14022ABC8 (-FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     GetMonitorWorkRectForDpi @ 0x1400269FC (GetMonitorWorkRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140026B70 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400F74E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 */

_BOOL8 __fastcall IsSmallerThanScreen(struct tagWND *a1)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v3; // r9
  _DWORD *v4; // r9
  __m128i v6; // [rsp+20h] [rbp-18h] BYREF

  _MonitorFromWindowInternal(a1, 1u, 0);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
  GetMonitorWorkRectForDpi(&v6, v3, (WindowCompositedDpiContext >> 8) & 0x1FF);
  v4 = (_DWORD *)*((_QWORD *)a1 + 5);
  return v4[24] - v4[22] < v6.m128i_i32[2] - v6.m128i_i32[0] || v4[25] - v4[23] < v6.m128i_i32[3] - v6.m128i_i32[1];
}
