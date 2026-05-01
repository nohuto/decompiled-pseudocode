/*
 * XREFs of ?ShowGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_N@Z @ 0x1805961A4
 * Callers:
 *     ?ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGripperEventHandler@@@Z @ 0x18058D1F0 (-ShowTouchEdgeGripper@TouchEdgeGestureManager@@UEAAJHPEAUIImmersiveMonitor@@PEAUITouchEdgeGrippe.c)
 *     ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18058D2A8 (-StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     TouchEdgeGripperHost::ShowGripperAsync$_InitCoro$2 @ 0x180595F98 (TouchEdgeGripperHost--ShowGripperAsync$_InitCoro$2.c)
 */

_BYTE *TouchEdgeGripperHost::ShowGripperAsync(__int64 a1, _BYTE *a2, int a3, __int64 a4, ...)
{
  void *v7; // rax
  int v9; // [rsp+C8h] [rbp+10h] BYREF
  int v10; // [rsp+D0h] [rbp+18h] BYREF
  va_list va; // [rsp+E0h] [rbp+28h] BYREF

  va_start(va, a4);
  v10 = a3;
  v7 = operator new(0x60uLL);
  v9 = 0;
  TouchEdgeGripperHost::ShowGripperAsync__InitCoro_2(&v9, (__int64)v7, a2, &v10, a4, va, a1);
  return a2;
}
