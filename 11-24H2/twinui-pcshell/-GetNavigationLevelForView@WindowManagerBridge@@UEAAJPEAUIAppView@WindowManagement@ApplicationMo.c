/*
 * XREFs of ?GetNavigationLevelForView@WindowManagerBridge@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4NavigationLevel@ViewManagerInterop@Shell@56@@Z @ 0x18042F6D0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9932d17d7df1642ff599701ea9ac6cce___ @ 0x18042CBB4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_9932d17d7df1642ff599701ea9ac6cce.c)
 */

__int64 __fastcall WindowManagerBridge::GetNavigationLevelForView(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a2,
        enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v7; // [rsp+48h] [rbp+10h] BYREF
  enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  *(_DWORD *)a3 = 0;
  *(_QWORD *)&v6 = &v7;
  *((_QWORD *)&v6 + 1) = &v8;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_9932d17d7df1642ff599701ea9ac6cce___(
           v4,
           CurrentThreadId,
           &v6);
}
