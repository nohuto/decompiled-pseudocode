/*
 * XREFs of ?OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180436AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18001AAA8 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?WindowManagerWatcherConnectedBamo@UwpWindowManagerBridge@@AEAAJXZ @ 0x1802BF9D8 (-WindowManagerWatcherConnectedBamo@UwpWindowManagerBridge@@AEAAJXZ.c)
 *     ?WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x180437240 (-WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowEnumerationCompleted(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+48h] [rbp+20h] BYREF

  v4 = (RTL_SRWLOCK *)((char *)this + 256);
  if ( Windows::Internal::ApplicationModel::WindowManagement::IsWindowManagementInProcEnabled(this) )
  {
    wil::AcquireSRWLockExclusive(&v11, v4);
    *((_BYTE *)this + 248) = 1;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
    v5 = UwpWindowManagerBridge::WindowManagerWatcherConnectedBamo(this);
    v6 = v5;
    if ( v5 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x217,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    wil::AcquireSRWLockExclusive(&v11, v4);
    *((_BYTE *)this + 248) = 1;
    LOBYTE(v8) = (_BYTE)v11;
    v9 = UwpWindowManagerBridge::WindowManagerWatcherConnected(this, v8);
    v6 = v9;
    if ( v9 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
  }
  return v6;
}
