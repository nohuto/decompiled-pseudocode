/*
 * XREFs of ?Initialize@CSnapAssistControllerBase@@UEAAJAEBUSnapAssistControllerInitParams@@@Z @ 0x1800926D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800923EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ??$com_copy@UIMultitaskingViewTaskScheduler@@AEAV?$ComPtr@UIMultitaskingViewServiceProvider@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@UIMultitaskingViewServiceProvider@@@WRL@Microsoft@@@Z @ 0x180092C4C (--$com_copy@UIMultitaskingViewTaskScheduler@@AEAV-$ComPtr@UIMultitaskingViewServiceProvider@@@WR.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UWindowArrangementEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180092E2C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIWindowManag.c)
 *     ??0GuidedSnapAssistControl@@QEAA@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@PEAUISnapAssistCallback@@@Z @ 0x180092EC8 (--0GuidedSnapAssistControl@@QEAA@AEBV-$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception.c)
 *     ??$_Set_ptr_rep_and_enable_shared@VGuidedSnapAssistControl@@@?$shared_ptr@VGuidedSnapAssistControl@@@std@@AEAAXQEAVGuidedSnapAssistControl@@QEAV_Ref_count_base@1@@Z @ 0x180092FD4 (--$_Set_ptr_rep_and_enable_shared@VGuidedSnapAssistControl@@@-$shared_ptr@VGuidedSnapAssistContr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@VCSnapAssistControllerBase@@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@PEAUIWindowMigrationEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@@01@PEAVCSnapAssistControllerBase@@P83@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIWindowMigrationEventArgs@5678@@Z@Z @ 0x1805A460C (--$Callback@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Inte.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSnapAssistControllerBase::Initialize(
        CSnapAssistControllerBase *this,
        const struct SnapAssistControllerInitParams *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  char v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  _DWORD *v13; // rbx
  char *v14; // r8
  const char *v15; // r9
  std::_Ref_count_base *v16; // rcx
  __int64 result; // rax
  _OWORD *v18; // rax
  _OWORD *v19; // rbx
  int v20; // eax
  unsigned int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // eax
  int v25[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v29; // [rsp+78h] [rbp+10h]

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, *(_QWORD *)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 7, *((_QWORD *)a2 + 1));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 8, *((_QWORD *)a2 + 2));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 9, *((_QWORD *)a2 + 3));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 10, *((_QWORD *)a2 + 4));
  v4 = *((_QWORD *)a2 + 5);
  v5 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 12, *((_QWORD *)a2 + 6));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 13, *((_QWORD *)a2 + 7));
  v6 = *((_QWORD *)a2 + 8);
  if ( *((_QWORD *)this + 14) != v6 )
  {
    v28 = *((_QWORD *)a2 + 8);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
    v28 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 15, *((_QWORD *)a2 + 9));
  v7 = *((_QWORD *)a2 + 11);
  v8 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 14) + 24LL))(
         *((_QWORD *)this + 14),
         ((unsigned __int64)this + 16) & -(__int64)(this != (CSnapAssistControllerBase *)8),
         (char *)this + 296);
  v12 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x155,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v9);
    return v12;
  }
  if ( *((_QWORD *)a2 + 10) )
  {
    *(_QWORD *)v25 = (char *)this - 8;
    *(_QWORD *)&v25[2] = CSnapAssistControllerBase::OnWindowArrangementEvent;
    LODWORD(v26) = 0;
    HIDWORD(v26) = (unsigned __int64)CSnapAssistControllerBase::OnWindowArrangementEvent >> 32;
    v18 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19 = v18;
    if ( v18 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>>(v18);
      v19[1] = *(_OWORD *)v25;
      *((_QWORD *)v19 + 4) = v26;
      *(_QWORD *)v19 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>,_lambda_bc6a996c5f9ff2cfd33224138910e618_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::`vftable';
    }
    else
    {
      v19 = 0LL;
    }
    v29 = v19;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)a2 + 10) + 48LL))(
            *((_QWORD *)a2 + 10),
            v19,
            (char *)this + 248);
    v21 = v20;
    if ( v20 >= 0 )
    {
      *(_QWORD *)v25 = CSnapAssistControllerBase::OnWindowMigrationEvent;
      v25[2] = 0;
      Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs *>,CSnapAssistControllerBase,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::IWindowMigrationEventArgs *>(
        &v28,
        (char *)this - 8,
        v25);
      v22 = *((_QWORD *)a2 + 10);
      v23 = v28;
      v24 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v22 + 112LL))(v22, v28, (char *)this + 256);
      v21 = v24;
      if ( v24 >= 0 )
      {
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v19 )
          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
        goto LABEL_13;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15F,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v24);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v19 )
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15B,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v20);
      if ( v19 )
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return v21;
  }
LABEL_13:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    v10,
    v11);
  try
  {
    wil::com_copy<IMultitaskingViewTaskScheduler,Microsoft::WRL::ComPtr<IMultitaskingViewServiceProvider> &>(
      &v28,
      (char *)this + 48);
    v13 = operator new(0x48uLL);
    v29 = v13;
    v13[2] = 1;
    v13[3] = 1;
    *(_QWORD *)v13 = &std::_Ref_count_obj2<GuidedSnapAssistControl>::`vftable';
    if ( this == (CSnapAssistControllerBase *)8 )
      v14 = 0LL;
    else
      v14 = (char *)this + 8;
    GuidedSnapAssistControl::GuidedSnapAssistControl(v13 + 4, &v28, v14);
    *(_OWORD *)v25 = 0LL;
    std::shared_ptr<GuidedSnapAssistControl>::_Set_ptr_rep_and_enable_shared<GuidedSnapAssistControl>(v25, v13 + 4, v13);
    *((_QWORD *)this + 35) = *(_QWORD *)v25;
    v16 = (std::_Ref_count_base *)*((_QWORD *)this + 36);
    *((_QWORD *)this + 36) = *(_QWORD *)&v25[2];
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v28) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x169,
                     (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                     v15);
    return (unsigned int)v28;
  }
  return result;
}
