/*
 * XREFs of ?OnWindowWatcherStopped@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180436C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180430E40 (-WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_420994182feb68798a6ba33cec143f0f___ @ 0x180435778 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_420994182feb68798a6ba33cec143f0f.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnWindowWatcherStopped(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v3; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = this;
  wil::AcquireSRWLockExclusive(&v8, this + 32);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnHandlingWindowWatcherStopped();
  v7 = v3;
  CurrentThreadId = GetCurrentThreadId();
  LODWORD(v3) = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_420994182feb68798a6ba33cec143f0f___(
                  v5,
                  CurrentThreadId,
                  &v7);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
  return (unsigned int)v3;
}
