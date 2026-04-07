/*
 * XREFs of ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x1800095C0
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007EA0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800759E4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(RTL_SRWLOCK *this, void (*a2)(void *))
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  void (__fastcall *v6)(RTL_SRWLOCK *, void (*)(void *), __int64); // rax
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( LODWORD(this->Ptr) )
  {
    v4 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    v7 = v4;
    v5 = this + 5;
    if ( !this[5].Ptr )
    {
      v5->Ptr = 0LL;
      v6 = (void (__fastcall *)(RTL_SRWLOCK *, void (*)(void *), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v6 = (void (__fastcall *)(RTL_SRWLOCK *, void (*)(void *), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v6(v5, a2, -1LL);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  }
}
