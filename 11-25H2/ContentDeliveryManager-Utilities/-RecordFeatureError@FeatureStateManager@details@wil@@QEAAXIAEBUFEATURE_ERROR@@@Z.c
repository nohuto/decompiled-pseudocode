/*
 * XREFs of ?RecordFeatureError@FeatureStateManager@details@wil@@QEAAXIAEBUFEATURE_ERROR@@@Z @ 0x180037338
 * Callers:
 *     ?WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z @ 0x18003CA60 (-WilApiImpl_RecordFeatureError@details@wil@@YAXIPEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     ??$EnsureCoalescedTimer@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVFeatureStateManager@01@@Z @ 0x1800254D4 (--$EnsureCoalescedTimer@VFeatureStateManager@details@wil@@@details@wil@@YAXAEAV-$unique_any_t@V-.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A4E0 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18002F044 (-EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180035CD4 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x1800371B4 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::FeatureStateManager::RecordFeatureError(
        wil::details::FeatureStateManager *this,
        unsigned int a2,
        const struct FEATURE_ERROR *a3)
{
  wil *v6; // rcx
  RTL_SRWLOCK *v7; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_BYTE *)this )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, 0LL);
    if ( wil::details::FeatureStateManager::EnsureStateData((RTL_SRWLOCK *)this)
      && wil::details_abi::FeatureStateData::RecordFeatureError(*((PSRWLOCK *)this + 3), a2, a3)
      && !wil::ProcessShutdownInProgress(v6) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 4);
      v7 = (RTL_SRWLOCK *)((char *)this + 32);
      wil::details::EnsureCoalescedTimer<wil::details::FeatureStateManager>(
        (_QWORD *)this + 6,
        (_BYTE *)this + 65,
        this);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
    }
  }
}
