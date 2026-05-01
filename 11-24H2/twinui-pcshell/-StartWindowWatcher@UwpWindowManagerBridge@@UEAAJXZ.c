/*
 * XREFs of ?StartWindowWatcher@UwpWindowManagerBridge@@UEAAJXZ @ 0x1801E8440
 * Callers:
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x180190AEC (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 * Callees:
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18001AAA8 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f991981efcc52a1e7ce38201fb3a674d___ @ 0x1801E8518 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f991981efcc52a1e7ce38201fb3a674d.c)
 *     ?WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1802C0194 (-WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a6da347bd35d077b27888479a1bad3f8___ @ 0x180435D7C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_a6da347bd35d077b27888479a1bad3f8.c)
 */

__int64 __fastcall UwpWindowManagerBridge::StartWindowWatcher(RTL_SRWLOCK *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  DWORD v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK **v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+48h] [rbp+10h] BYREF

  if ( Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled((Windows::Internal::ApplicationModel::WindowManagement *)this) )
  {
    v13 = this;
    CurrentThreadId = GetCurrentThreadId();
    v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f991981efcc52a1e7ce38201fb3a674d___(
           v3,
           CurrentThreadId,
           &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else
  {
    wil::AcquireSRWLockExclusive(&v13, this + 32);
    *(_QWORD *)v10 = this;
    v11 = &v13;
    v7 = GetCurrentThreadId();
    v9 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_a6da347bd35d077b27888479a1bad3f8___(
           v8,
           v7,
           v10);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B0,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
      return v5;
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowWatcherStarted();
  return 0LL;
}
