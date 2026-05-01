/*
 * XREFs of ?Unregister@?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@QEAAXXZ @ 0x1806C073C
 * Callers:
 *     ?Unregister@?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x18016BD0C (-Unregister@-$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShel.c)
 *     ?Unregister@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x18029AD38 (-Unregister@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VAppli.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800C75C8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?reset@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180169ED0 (-reset@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ @ 0x1802CEC6C (--1-$unique_ptr@VSmartCookie@@U-$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@VSmartCookie@@@std@@$0A@@?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1806BF75C (--$-4U-$default_delete@VSmartCookie@@@std@@$0A@@-$unique_ptr@VSmartCookie@@U-$default_delete@VSm.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewEventHelpers::details::EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>::Unregister(
        __int64 a1)
{
  SmartCookie *v3; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v4; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  wil::AcquireSRWLockExclusive(&v4, (RTL_SRWLOCK *)(a1 + 56));
  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::reset((__int64 *)(a1 + 64));
  std::unique_ptr<SmartCookie>::operator=<std::default_delete<SmartCookie>,0>((__int64 *)&v3, (__int64 *)(a1 + 48));
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
  SmartCookie::Unregister(v3);
  return std::unique_ptr<SmartCookie>::~unique_ptr<SmartCookie>(&v3);
}
