/*
 * XREFs of ?OnAppViewWatcherStopped@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18042FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_99fecce93f01391543c16575634a6bf3___ @ 0x18042CC90 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_99fecce93f01391543c16575634a6bf3.c)
 *     ?WindowEventDispatcher_OnAppViewWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180430E14 (-WindowEventDispatcher_OnAppViewWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::OnAppViewWatcherStopped(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct IInspectable *a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+48h] [rbp+20h] BYREF

  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewWatcherStopped();
  wil::AcquireSRWLockExclusive(&v8, this + 31);
  v7 = this;
  CurrentThreadId = GetCurrentThreadId();
  LODWORD(this) = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_99fecce93f01391543c16575634a6bf3___(
                    v5,
                    CurrentThreadId,
                    &v7);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
  return (unsigned int)this;
}
