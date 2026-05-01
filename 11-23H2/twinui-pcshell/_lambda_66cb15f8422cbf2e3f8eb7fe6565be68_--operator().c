/*
 * XREFs of _lambda_66cb15f8422cbf2e3f8eb7fe6565be68_::operator() @ 0x1801F4C3C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_66cb15f8422cbf2e3f8eb7fe6565be68___::Run @ 0x1801F50A0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_66cb15f8422cbf2e3f8eb7fe_ea_1801F50A0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18009E664 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInter_ea_18009E664.c)
 *     ??4?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009E8A0 (--4-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x18018DCD4 (-CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrappe.c)
 *     ?CollectOriginalValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x18018FD44 (-CollectOriginalValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_66cb15f8422cbf2e3f8eb7fe6565be68_::operator()(RTL_SRWLOCK **a1)
{
  __int64 *CachedView; // rax
  __int64 v3; // rbx
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+38h] [rbp+10h] BYREF

  wil::srwlock::lock_exclusive(*a1 + 61, &v8);
  try
  {
    CachedView = UwpWindowEventDispatcher::GetCachedView((__int64)*a1, &v7, (int)a1[2]->Ptr);
    v3 = *wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::operator=((__int64 *)a1[1], CachedView);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
    if ( v3 )
    {
      UwpWindowEventDispatcher::WindowIdChangedEventHelper::CollectOriginalValues(
        (UwpWindowEventDispatcher::WindowIdChangedEventHelper *)a1[3],
        (struct IUwpWindowWrapperInternal *)a1[1]->Ptr);
      (*(void (__fastcall **)(PVOID, PVOID))(*(_QWORD *)a1[1]->Ptr + 192LL))(a1[1]->Ptr, a1[4]->Ptr);
      UwpWindowEventDispatcher::WindowIdChangedEventHelper::CompareNewValues(
        (UwpWindowEventDispatcher::WindowIdChangedEventHelper *)a1[3],
        (struct IUwpWindowWrapperInternal *)a1[1]->Ptr);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x198,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v4);
  }
  return result;
}
