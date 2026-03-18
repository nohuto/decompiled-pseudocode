/*
 * XREFs of GetPrimaryMonitorRectForWindow @ 0x1C01352F8
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C00326D0 (xxxBroadcastMessageEx.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C021F254 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C00ABC60 (GetMonitorRectForWindow.c)
 */

__int64 __fastcall GetPrimaryMonitorRectForWindow(__int64 a1, const struct tagWND *a2, __int64 a3)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1, a2, a3);
  GetMonitorRectForWindow(a1, *(_QWORD *)(DispInfo + 96), a2);
  return a1;
}
