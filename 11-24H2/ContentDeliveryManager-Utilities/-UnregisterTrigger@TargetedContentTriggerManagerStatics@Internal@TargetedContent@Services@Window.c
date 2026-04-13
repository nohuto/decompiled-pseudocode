/*
 * XREFs of ?UnregisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@E@Z @ 0x18007F430
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A4B0 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004AF0C (--0-$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18004AF68 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x18007C3DC (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x18007F630 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x180089E3C (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTrigger(
        __int64 a1,
        __int64 a2,
        HSTRING a3,
        char a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  unsigned int i; // edi
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64 *); // rbx
  int v12; // eax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  __int64 v19; // [rsp+30h] [rbp-29h] BYREF
  RTL_SRWLOCK *v20; // [rsp+38h] [rbp-21h] BYREF
  __int64 v21; // [rsp+48h] [rbp-11h] BYREF
  std::_Ref_count_base *v22; // [rsp+50h] [rbp-9h]
  __int64 v23; // [rsp+58h] [rbp-1h] BYREF
  std::_Ref_count_base *v24; // [rsp+60h] [rbp+7h]
  __int64 v25; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+78h] [rbp+1Fh] BYREF
  _QWORD v27[3]; // [rsp+88h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  unsigned int v29; // [rsp+C8h] [rbp+6Fh] BYREF

  AcquireSRWLockExclusive(&stru_18017B360);
  v20 = &stru_18017B360;
  v29 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v29);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Windows::Services::TargetedContent::Internal::GetCorrelationVector((char *)&v23, a3);
    v9 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
           &v25,
           &v23);
    CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(&v21, v9);
    for ( i = 0; i < v29; ++i )
    {
      v19 = 0LL;
      v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
      v12 = v11(a2, i, &v19);
      v8 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x128,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
        if ( v22 )
          std::_Ref_count_base::_Decref(v22);
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
        goto LABEL_23;
      }
      v13 = std::shared_ptr<CreativeFramework::RuleSetHandlers::IRuleSetHandler>::shared_ptr<CreativeFramework::RuleSetHandlers::IRuleSetHandler>(
              &v26,
              &v21);
      v14 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
              v27,
              &v23);
      LOBYTE(v15) = a4;
      v17 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTriggerInternal(
              v16,
              v19,
              v14,
              v15,
              v13);
      v8 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x129,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v17);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
        if ( v22 )
          std::_Ref_count_base::_Decref(v22);
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
        goto LABEL_23;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( v24 )
      std::_Ref_count_base::_Decref(v24);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
  }
LABEL_23:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v20);
  return v8;
}
