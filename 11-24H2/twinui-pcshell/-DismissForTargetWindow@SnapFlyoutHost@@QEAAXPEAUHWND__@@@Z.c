/*
 * XREFs of ?DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z @ 0x1805B2C60
 * Callers:
 *     ?OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z @ 0x1800467F0 (-OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z.c)
 *     ?OnShowWindowPolicy@CShellSnapComponent@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x18059F7C0 (-OnShowWindowPolicy@CShellSnapComponent@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800520EC (-CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801E9D70 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy_ea_1801E9D70.c)
 *     ?InternalShutdownAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801F9D4C (-InternalShutdownAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@AEBV-$unique_any_t@V-$uniqu.c)
 *     ??$SnapFlyout_DismissForTargetWindow@AEB_K@SnapFlyoutTelemetry@@SAXAEB_K@Z @ 0x1805B07AC (--$SnapFlyout_DismissForTargetWindow@AEB_K@SnapFlyoutTelemetry@@SAXAEB_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::DismissForTargetWindow(RTL_SRWLOCK *this, HWND a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v5; // [rsp+28h] [rbp-10h]
  HWND v6; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v7; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  SnapFlyoutTelemetry::SnapFlyout_DismissForTargetWindow<unsigned __int64 const &>((__int64 *)&v6);
  wil::AcquireSRWLockExclusive(&v7, this + 22);
  SnapFlyoutHost::CancelInvokeTimer((__int64)this);
  SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
    (__int64)this,
    &v4);
  if ( v4 && *(HWND *)(*(_QWORD *)(v4 + 8) + 328LL) == a2 )
    SnapFlyoutHost::InternalShutdownAsync((__int64)this, (__int64)&v6, (__int64)&v7);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
}
