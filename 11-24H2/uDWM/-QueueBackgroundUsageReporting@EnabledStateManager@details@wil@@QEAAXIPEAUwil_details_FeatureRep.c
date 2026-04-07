/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1800082C4
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007EA0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180073F64 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180074098 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800759E4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVEnabledStateManager@01@@Z @ 0x180099CBC (--$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV-$unique_any_t@V-.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        RTL_SRWLOCK *this,
        int a2,
        struct wil_details_FeatureReportingCache *a3)
{
  wil *v6; // rcx
  _DWORD v7[2]; // [rsp+20h] [rbp-18h] BYREF
  struct wil_details_FeatureReportingCache *v8; // [rsp+28h] [rbp-10h]
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( LODWORD(this->Ptr) && !wil::ProcessShutdownInProgress((wil *)this) )
  {
    AcquireSRWLockExclusive(this + 1);
    v9 = this + 1;
    if ( LODWORD(this->Ptr) )
    {
      if ( !wil::ProcessShutdownInProgress(v6) )
      {
        v7[0] = a2;
        v7[1] = 0;
        v8 = a3;
        wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&this[6], v7, 0x10uLL);
        wil::details::EnsureCoalescedTimer<wil::details::EnabledStateManager>(&this[2], &this[3], this);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
  }
}
