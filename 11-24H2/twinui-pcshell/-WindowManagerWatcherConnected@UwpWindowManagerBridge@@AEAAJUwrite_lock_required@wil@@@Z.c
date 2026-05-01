/*
 * XREFs of ?WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x180437240
 * Callers:
 *     ?OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18020CDE0 (-OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@A.c)
 *     ?OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180436AD0 (-OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@Uwp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802378E4 (-WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18023A558 (-WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6c82c5fc4697b74e4e3cb823547de234___ @ 0x180435A0C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_6c82c5fc4697b74e4e3cb823547de234.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e7d50035f9360f60bf115acebf34025c___ @ 0x180436010 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e7d50035f9360f60bf115acebf34025c.c)
 */

__int64 __fastcall UwpWindowManagerBridge::WindowManagerWatcherConnected(__int64 a1, char a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  void *v5; // rdx
  DWORD v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 192) )
  {
    if ( *(_BYTE *)(a1 + 248) )
    {
      *(_BYTE *)(a1 + 264) = 1;
      v13 = a1;
      CurrentThreadId = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e7d50035f9360f60bf115acebf34025c___(
        v4,
        CurrentThreadId,
        &v13);
      wil::details::SetEvent(*(wil::details **)(a1 + 280), v5);
    }
    else
    {
      LOBYTE(v13) = a2;
      *(_QWORD *)&v11[2] = &v13;
      *(_QWORD *)v11 = a1;
      v6 = GetCurrentThreadId();
      v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6c82c5fc4697b74e4e3cb823547de234___(
             v7,
             v6,
             (__int128 *)v11);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F7,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)v8);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3A3,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)v9,
          v11[0]);
      }
      ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewWatcherStarted();
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherConnected();
  return 0LL;
}
