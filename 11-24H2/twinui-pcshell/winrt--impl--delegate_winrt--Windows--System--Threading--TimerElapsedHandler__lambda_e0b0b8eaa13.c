/*
 * XREFs of winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e0b0b8eaa13602b9fabc447bd0975459___::Invoke @ 0x1805959F0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800CFA10 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C524C (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x18029321C (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ?DismissGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180595614 (-DismissGripperWindowAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805962F8 (-StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_po.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e0b0b8eaa13602b9fabc447bd0975459___::Invoke(
        __int64 a1)
{
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown v4; // [rsp+40h] [rbp+18h] BYREF
  RTL_SRWLOCK *v5; // [rsp+48h] [rbp+20h] BYREF

  winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), &v4);
  try
  {
    lpVtbl = v4.lpVtbl;
    if ( v4.lpVtbl )
    {
      wil::AcquireSRWLockExclusive(&v5, (RTL_SRWLOCK *)&v4.lpVtbl[9].Release);
      TouchEdgeGripperHost::StopDismissTimer(lpVtbl);
      HIDWORD(lpVtbl[1].QueryInterface) = 0;
      v3 = 0LL;
      winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)&lpVtbl[2], &v3);
      if ( v3 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v3);
      TouchEdgeGripperHost::DismissGripperWindowAsync((__int64)lpVtbl, &v3, 1);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
    }
    winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>(&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
