/*
 * XREFs of ?WindowManagerWatcherConnectedBamo@UwpWindowManagerBridge@@AEAAJXZ @ 0x1802BF9D8
 * Callers:
 *     ?OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18020CDE0 (-OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@A.c)
 *     ?OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180436AD0 (-OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@Uwp.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18023A558 (-WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_4db7e16b27d144662c4cfda4f02bbfea___ @ 0x180435854 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_4db7e16b27d144662c4cfda4f02bbfea.c)
 *     ?StartUalmWatcherBamo@UwpWindowManagerBridge@@AEAAJXZ @ 0x1804371E4 (-StartUalmWatcherBamo@UwpWindowManagerBridge@@AEAAJXZ.c)
 */

__int64 __fastcall UwpWindowManagerBridge::WindowManagerWatcherConnectedBamo(UwpWindowManagerBridge *this)
{
  RTL_SRWLOCK *v1; // rdi
  char v3; // si
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  void *v6; // rdx
  int started; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UwpWindowManagerBridge *v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)((char *)this + 256);
  v3 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this + 32);
  if ( *((_BYTE *)this + 192) )
  {
    if ( *((_BYTE *)this + 248) )
    {
      *((_BYTE *)this + 264) = 1;
      v11 = this;
      CurrentThreadId = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_4db7e16b27d144662c4cfda4f02bbfea___(
        v5,
        CurrentThreadId,
        &v11);
      wil::details::SetEvent(*((wil::details **)this + 35), v6);
    }
    else
    {
      v3 = 1;
    }
  }
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  if ( v3 )
  {
    started = UwpWindowManagerBridge::StartUalmWatcherBamo(this);
    if ( started < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x38A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)started,
        v9);
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherConnected();
  return 0LL;
}
