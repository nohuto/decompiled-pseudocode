/*
 * XREFs of ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x180430E98
 * Callers:
 *     ?OnAppViewEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18042F8F0 (-OnAppViewEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@Ap.c)
 *     ?OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18042FB80 (-OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@Appl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802378E4 (-WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18023A558 (-WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_245d2a2be388f7a941ea2187d291aeff___ @ 0x18042C3F8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_245d2a2be388f7a941ea2187d291aeff.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_84d0801e285d04801e5fe1360cfb4c37___ @ 0x18042C768 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_84d0801e285d04801e5fe1360cfb4c37.c)
 */

__int64 __fastcall WindowManagerBridge::WindowManagerWatcherConnected(WindowManagerBridge *this)
{
  bool v2; // zf
  DWORD v3; // eax
  __int64 v4; // rcx
  void *v5; // rdx
  DWORD CurrentThreadId; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowManagerBridge *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 200) )
  {
    v2 = *((_BYTE *)this + 64) == 0;
    v13 = this;
    if ( v2 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_245d2a2be388f7a941ea2187d291aeff___(
             v7,
             CurrentThreadId,
             &v13);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x153,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v8);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2A6,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)v9,
          v11);
      }
      ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewWatcherStarted();
    }
    else
    {
      *((_BYTE *)this + 256) = 1;
      v3 = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_84d0801e285d04801e5fe1360cfb4c37___(v4, v3, &v13);
      wil::details::SetEvent(*((wil::details **)this + 33), v5);
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherConnected();
  return 0LL;
}
