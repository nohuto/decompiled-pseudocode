/*
 * XREFs of _lambda_a4d545b91c9e09961ecfadb7c1e91fee_::operator() @ 0x180427DAC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a4d545b91c9e09961ecfadb7c1e91fee___::Run @ 0x180429C40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_a4d545b91c9e09961ecfadb7_ea_180429C40.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180150E08 (--4-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18017C6C0 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInter_ea_18017C6C0.c)
 *     ?CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801C9310 (-CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrappe.c)
 *     ?CollectOriginalValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801DE778 (-CollectOriginalValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_a4d545b91c9e09961ecfadb7c1e91fee_::operator()(RTL_SRWLOCK **a1)
{
  __int64 *CachedView; // rax
  __int64 v3; // rbx
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+38h] [rbp+10h] BYREF

  wil::AcquireSRWLockExclusive(&v8, *a1 + 61);
  try
  {
    CachedView = UwpWindowEventDispatcher::GetCachedView((__int64)*a1, &v7, (int)a1[2]->Ptr);
    v3 = *wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=((__int64 *)a1[1], CachedView);
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
                           (void *)0x197,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v4);
  }
  return result;
}
