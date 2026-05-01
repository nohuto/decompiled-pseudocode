/*
 * XREFs of ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x180242D8C
 * Callers:
 *     ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1802439A0 (-ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@U.c)
 *     _lambda_e40398d42ff5cb66d230c2cd21ebd5c8_::operator() @ 0x1803B6BF8 (_lambda_e40398d42ff5cb66d230c2cd21ebd5c8_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x18014B430 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x180187508 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801AAAB0 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ?IsSystemProvided@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CA780 (-IsSystemProvided@-$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@.c)
 *     ??1UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1801ECC6C (--1UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@X.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18020B8F4 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag__ea_18020B8F4.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18022F2EC (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag__ea_18022F2EC.c)
 *     ?RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180246308 (-RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@1@XZ @ 0x18028BF04 (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291D80 (--1-$test_data_control@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ?StartActivity@UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAAX_NPEBG@Z @ 0x1802A02F8 (-StartActivity@UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelem.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473_____lambda_89f63c8738b1ad17b99f8ae3b3dcb473___ @ 0x1803AEDD8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_89f63c8738b1a.c)
 *     _lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::__lambda_89f63c8738b1ad17b99f8ae3b3dcb473_ @ 0x1803B528C (_lambda_89f63c8738b1ad17b99f8ae3b3dcb473_--__lambda_89f63c8738b1ad17b99f8ae3b3dcb473_.c)
 *     ?UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803C12EC (-UnregisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ @ 0x1803C1BE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall UndockedSearchAppExperienceManager::Activate(
        UndockedSearchAppExperienceManager *this,
        const struct winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs *a2,
        char a3)
{
  unsigned __int16 *v6; // rax
  char v7; // bl
  __int64 (__fastcall ***v8)(_QWORD, __int64 *, __int64 **); // rcx
  unsigned int v9; // eax
  char IsSystemProvided; // di
  const unsigned __int16 *v11; // rbx
  __int64 *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // edi
  __int64 *v15; // rax
  __int64 v16; // rbx
  volatile signed __int32 *v17; // rcx
  int v18; // edi
  __int64 *v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  void *v23; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+58h] [rbp-A8h]
  _QWORD v25[42]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, __int64 *, __int64 **); // [rsp+1D0h] [rbp+D0h] BYREF
  char v28; // [rsp+1D8h] [rbp+D8h]
  __int64 v29; // [rsp+1E0h] [rbp+E0h]
  UndockedSearchAppExperienceManager *v30; // [rsp+1E8h] [rbp+E8h]
  _QWORD v31[42]; // [rsp+1F0h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+378h] [rbp+278h]

  (*(void (__fastcall **)(_QWORD, volatile signed __int32 **))(**((_QWORD **)this + 11) + 8LL))(
    *((_QWORD *)this + 11),
    &v21);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53852258>::GetImpl'::`2'::impl) )
  {
    v6 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)&v21);
    std::wstring::wstring((char **)&v23, v6);
    *((_BYTE *)this + 915) = std::wstring::find((char *)&v23, L"CortanaUIFullTrustApp", 0LL) != -1;
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 832) )
    {
      v7 = *((_BYTE *)this + 915);
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator->(
                              (char *)this + 832,
                              &v19)
               + 340LL) = v7;
      tip2::test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(&v19);
    }
    if ( !*((_QWORD *)this + 7) && !winrt::operator==((__int64 *)this + 25, (__int64 *)&v21) )
    {
      UndockedSearchAppExperienceManager::UnregisterViewEventDispatcherHandler(this);
      UndockedSearchAppExperienceManager::RegisterViewEventDispatcherHandler(this);
    }
    std::wstring::_Tidy_deallocate(&v23);
  }
  v8 = *(__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 **))a2;
  if ( *(_QWORD *)a2 )
  {
    v19 = 0LL;
    LODWORD(v23) = 0;
    v24 = 0LL;
    v9 = (**v8)(
           v8,
           &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>,
           &v19);
    winrt::check_hresult(&v20, v9, &v23);
    v20 = v19;
  }
  else
  {
    v20 = 0LL;
  }
  IsSystemProvided = winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::IsSystemProvided((__int64 *)&v20);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
  v11 = winrt::hstring::c_str((winrt::hstring *)&v21);
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v31);
  v31[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::StartActivity(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)v31,
    IsSystemProvided,
    v11);
  v22 = 0LL;
  LODWORD(v23) = 0;
  v24 = 0LL;
  v19 = &v22;
  v12 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v19);
  v13 = Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>((__int64)this, v12);
  winrt::check_hresult(&v20, v13, &v23);
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v25,
    (__int64)v31);
  v25[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  winrt::hstring::hstring((winrt::hstring *)v26, (const struct winrt::hstring *)&v21);
  v26[8] = IsSystemProvided;
  v27 = *(__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 **))a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v27);
  v28 = a3;
  v29 = v22;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  v30 = this;
  v14 = *((_DWORD *)this + 40);
  v15 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_89f63c8738b1ad17b99f8ae3b3dcb473_____lambda_89f63c8738b1ad17b99f8ae3b3dcb473___(
                     &v19,
                     v25);
  v16 = *v15;
  *v15 = 0LL;
  v17 = (volatile signed __int32 *)v19;
  if ( v19 )
  {
    v19 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v17);
  }
  v18 = SHTaskPoolQueueTask(0LL, 2LL, v14);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::__lambda_89f63c8738b1ad17b99f8ae3b3dcb473_((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)v25);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC5C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v18,
      v16);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v22);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)v31);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
}
