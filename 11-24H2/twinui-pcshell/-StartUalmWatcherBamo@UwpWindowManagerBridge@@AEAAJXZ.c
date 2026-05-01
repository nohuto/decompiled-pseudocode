/*
 * XREFs of ?StartUalmWatcherBamo@UwpWindowManagerBridge@@AEAAJXZ @ 0x1804371E4
 * Callers:
 *     ?WindowManagerWatcherConnectedBamo@UwpWindowManagerBridge@@AEAAJXZ @ 0x1802BF9D8 (-WindowManagerWatcherConnectedBamo@UwpWindowManagerBridge@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802378E4 (-WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_759e1e24362ba58b3b85b34b47726433___ @ 0x180435BC4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_759e1e24362ba58b3b85b34b47726433.c)
 */

__int64 __fastcall UwpWindowManagerBridge::StartUalmWatcherBamo(UwpWindowManagerBridge *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UwpWindowManagerBridge *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_759e1e24362ba58b3b85b34b47726433___(
         v2,
         CurrentThreadId,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewWatcherStarted();
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E5,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
