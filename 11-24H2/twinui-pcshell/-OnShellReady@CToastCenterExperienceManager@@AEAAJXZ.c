/*
 * XREFs of ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801BFE5C
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801F08E8 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?CreateInstance@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinatorFactory@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x18004DEBC (-CreateInstance@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory@UIShellViewCoordinato.c)
 *     ??4?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18004DF40 (--4-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ?get@?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x18004E588 (-get@-$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C0388 (-SubscribeToCriticalNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801C0400 (-SubscribeToNewNotificationWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801C0478 (-RegisterForDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA-AUfire_and_forget.c)
 *     ??$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@?$factory_cache_entry@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIShellViewCoordinatorFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@Z @ 0x18020AB78 (--$call@AEAV_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_@@@-$factory_cache_entry@UShellViewCoordina.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable___lambda_3c3eef79882b33f453ce48f4c33680cf___ @ 0x180292BFC (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ShellVi_ea_180292BFC.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18029F300 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A74A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind.c)
 *     ??$com_weak_query@PEAVCToastCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCToastCenterExperienceManager@@@Z @ 0x1802AA014 (--$com_weak_query@PEAVCToastCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uer.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802C6D78 (-LookupToastQueue@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ReadyToLaunch@ToastCenterTelemetry@@SAXXZ @ 0x1802CDEEC (-ReadyToLaunch@ToastCenterTelemetry@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_c4a594d693bc8f986314a47dadfe11ef___ @ 0x180382BEC (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_180382BEC.c)
 *     ?VisibilityChanged@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIInspectable@Foundation@Windows@5@@Foundation@Windows@3@@Z @ 0x180386F80 (-VisibilityChanged@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Sh.c)
 *     ?revoke_impl@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@AEAAXUIShellViewCoordinator@Shell@UI@WindowsUdk@3@@Z @ 0x1803872AC (-revoke_impl@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8_ea_1803872AC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=34
__int64 __fastcall CToastCenterExperienceManager::OnShellReady(CToastCenterExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, void *, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, HSTRING, _QWORD); // rdi
  HRESULT v8; // eax
  int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v14)(_QWORD, GUID *, char *); // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v23; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 *v29; // rax
  _QWORD *v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 (__fastcall ***v34)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v35; // rcx
  __int64 (__fastcall ***v36)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-59h] BYREF
  __int64 v37; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v38[4]; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v39; // [rsp+4Ch] [rbp-45h] BYREF
  CToastCenterExperienceManager *v40; // [rsp+50h] [rbp-41h] BYREF
  __int64 v41; // [rsp+58h] [rbp-39h] BYREF
  __int64 v42; // [rsp+60h] [rbp-31h] BYREF
  __int64 v43[2]; // [rsp+68h] [rbp-29h] BYREF
  unsigned int *v44; // [rsp+78h] [rbp-19h] BYREF
  __int64 v45; // [rsp+80h] [rbp-11h]
  _QWORD v46[2]; // [rsp+88h] [rbp-9h] BYREF
  _BYTE v47[8]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v48; // [rsp+A0h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+17h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  *((_BYTE *)this + 401) = 1;
  if ( *((_QWORD *)this + 45) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 45) = 0LL;
  }
  ToastCenterTelemetry::ReadyToLaunch();
  v37 = 0LL;
  v2 = *((_QWORD *)this + 76);
  v3 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
  v4 = v3(v2, &unk_180785EE0, &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5, &v37);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x286,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
LABEL_48:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
    return v5;
  }
  v36 = 0LL;
  v6 = v37;
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v37 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
  string = 0LL;
  v8 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ActionCenter", 0x2Du, &hstringHeader, &string);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8, v9, v10);
  v11 = v7(v6, string, &v36);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 650LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_47:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
    goto LABEL_48;
  }
  v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v36;
  v14 = **v36;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 82);
  v11 = v14(v13, &GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861, (char *)this + 656);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = 652LL;
    goto LABEL_9;
  }
  v17 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
          v47,
          this,
          v15,
          v16);
  Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager___Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____lambda_c4a594d693bc8f986314a47dadfe11ef___(
    &v41,
    v17);
  v18 = v41;
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 82) + 64LL))(
          *((_QWORD *)this + 82),
          v41,
          (char *)this + 672);
  v21 = v19;
  if ( v19 >= 0 )
  {
    LOBYTE(v20) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CCW>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_CCW>::GetImpl'::`2'::impl,
      v20);
    v39 = 6;
    v44 = &v39;
    v46[1] = &qword_1808CA628;
    _InterlockedIncrement64(&qword_1808CA628);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory> )
    {
      winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinatorFactory<winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::CreateInstance(
        (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>,
        &v40,
        &v39);
      _InterlockedDecrement64(&qword_1808CA628);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808CA628);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ShellViewCoordinator,winrt::WindowsUdk::UI::Shell::IShellViewCoordinatorFactory>::call<_lambda_c784a7e41fe1a5698e55a9117bd5b7f8_ &>(
        v25,
        &v40,
        &v44);
    }
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 89, (__int64 *)&v40);
    if ( v40 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v40);
    v45 = 0LL;
    v40 = this;
    v26 = (__int64 *)wil::com_weak_query<CToastCenterExperienceManager *>(v46, &v40);
    v27 = *v26;
    *v26 = 0LL;
    v45 = v27;
    if ( v46[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v46[0] + 16LL))(v46[0]);
    hstringHeader.Reserved.Reserved1 = this;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = v27;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::Windows::Foundation::IInspectable___lambda_3c3eef79882b33f453ce48f4c33680cf___(
      &v42,
      &hstringHeader);
    v29 = (__int64 *)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::VisibilityChanged(
                       (char *)this + 712,
                       v43,
                       v28,
                       &v42);
    __4__event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
      (__int64)this + 720,
      v29);
    if ( v43[0] )
    {
      v30 = winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::get(v43, &v48);
      _revoke_impl___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__AEAAXUIShellViewCoordinator_Shell_UI_WindowsUdk_3__Z(
        v43,
        v30);
      if ( v43[0] )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v43);
    }
    if ( v42 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v42);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    v31 = CToastCenterExperienceManager::SubscribeToNewNotificationWnf(this);
    v5 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v31);
      if ( v41 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      goto LABEL_47;
    }
    v32 = CToastCenterExperienceManager::SubscribeToCriticalNotificationWnf(this);
    v5 = v32;
    if ( v32 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v32);
      if ( v41 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      goto LABEL_47;
    }
    v33 = CToastCenterExperienceManager::LookupToastQueue(this);
    v5 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v33);
      if ( v41 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      goto LABEL_47;
    }
    CToastCenterExperienceManager::RegisterForDisplayMonitorInfoChangedAsync(this, v38);
    if ( v41 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    v34 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v36;
    if ( v36 )
    {
      v36 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v34)[2])(v34);
    }
    v35 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x298,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v36;
    if ( v36 )
    {
      v36 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v22)[2])(v22);
    }
    v23 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    return v21;
  }
}
