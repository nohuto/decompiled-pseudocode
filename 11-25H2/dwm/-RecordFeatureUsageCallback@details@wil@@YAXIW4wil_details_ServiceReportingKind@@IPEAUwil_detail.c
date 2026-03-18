/*
 * XREFs of ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x14000D8B4
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x14000DD28 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x140004840 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140007094 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x14000BAA8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x14000C014 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ??$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@AEA_NPEAVEnabledStateManager@01@@Z @ 0x14000CAF4 (--$EnsureCoalescedTimer@VEnabledStateManager@details@wil@@@details@wil@@YAXAEAV-$unique_any_t@V-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140011010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::RecordFeatureUsageCallback(wil *a1, __int64 a2, __int64 a3, char *a4, RTL_SRWLOCK *a5)
{
  unsigned int v6; // edi
  unsigned int *v7; // rbx
  __int64 v8; // r8
  void (__fastcall *v9)(__int64 *, void (__fastcall *)(void *), __int64); // rax
  char *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (unsigned int)a1;
  if ( g_wil_details_RecordSRUMFeatureUsage && (!(_DWORD)a2 || (unsigned int)(a2 - 100) <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a1, a2, 1LL);
  v7 = (unsigned int *)a5;
  if ( LODWORD(a5->Ptr) && wil::details::g_enabledStateManager && !wil::ProcessShutdownInProgress(a1) )
  {
    AcquireSRWLockExclusive(&stru_1400192A0);
    a5 = &stru_1400192A0;
    v10[0] = (char *)v6;
    v10[1] = a4;
    wil::details_abi::heap_buffer::push_back((void **)&unk_1400192C8, v10, 0x10uLL);
    wil::details::EnsureCoalescedTimer<wil::details::EnabledStateManager>(
      &qword_1400192A8,
      byte_1400192B0,
      &wil::details::g_enabledStateManager);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&a5);
  }
  v8 = v7[1];
  if ( (_DWORD)v8 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)v6, v7[2], v8);
  if ( !v7[4] && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&stru_1400192A0);
    a5 = &stru_1400192A0;
    if ( !qword_1400192C0 )
    {
      qword_1400192C0 = 0LL;
      v9 = (void (__fastcall *)(__int64 *, void (__fastcall *)(void *), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v9 = (void (__fastcall *)(__int64 *, void (__fastcall *)(void *), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v9(&qword_1400192C0, _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_, -1LL);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&a5);
  }
}
