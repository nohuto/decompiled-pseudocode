/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x180251610
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$2 @ 0x180251498 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_InitCoro$2.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D2458 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1800D2458.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180248A54 (-await_ready@-$notify_awaiter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manage.c)
 *     ?RequestNotificationPinConsentAsync@@YA?AU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@Z @ 0x1802540C8 (-RequestNotificationPinConsentAsync@@YA-AU-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ?weak_from_this@?$enable_shared_from_this@VCAppThumbnailWindow@@@std@@QEAA?AV?$weak_ptr@VCAppThumbnailWindow@@@2@XZ @ 0x18055D1B0 (-weak_from_this@-$enable_shared_from_this@VCAppThumbnailWindow@@@std@@QEAA-AV-$weak_ptr@VCAppThu.c)
 *     ??$PinConsentPromptCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z @ 0x18069A744 (--$PinConsentPromptCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z.c)
 *     ??$PinConsentPromptRequested@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x18069A7BC (--$PinConsentPromptRequested@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@experimental@std@@@Z @ 0x18069BFFC (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_18069BFFC.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::await_transform_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____&_ @ 0x18069C008 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18069C008.c)
 *     ??$emplace_back@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA?A_T$$QEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@1@@Z @ 0x18069C7F0 (--$emplace_back@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReferen.c)
 *     ??$make_pair@AEAV?$shared_ptr@VPinOperationContext@@@std@@AEAU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@YA?AU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@AEAV?$shared_ptr@VPinOperationContext@@@0@AEAU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@Z @ 0x18069D008 (--$make_pair@AEAV-$shared_ptr@VPinOperationContext@@@std@@AEAU-$IAsyncOperation@U-$IReference@_N.c)
 *     wil::scope_exit__lambda_84c775889c05b89f12ed6d0ff428b333___ @ 0x18069D598 (wil--scope_exit__lambda_84c775889c05b89f12ed6d0ff428b333___.c)
 *     _lambda_84c775889c05b89f12ed6d0ff428b333_::_lambda_84c775889c05b89f12ed6d0ff428b333_ @ 0x18069DB44 (_lambda_84c775889c05b89f12ed6d0ff428b333_--_lambda_84c775889c05b89f12ed6d0ff428b333_.c)
 *     _lambda_84c775889c05b89f12ed6d0ff428b333_::__lambda_84c775889c05b89f12ed6d0ff428b333_ @ 0x18069E3F0 (_lambda_84c775889c05b89f12ed6d0ff428b333_--__lambda_84c775889c05b89f12ed6d0ff428b333_.c)
 *     __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::__parameters_ @ 0x18069E424 (__anonymous_namespace_--PinConsentPromptManager--RequestPinConsent_--_4_--_parameters_--__parame.c)
 *     wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___ @ 0x18069E660 (wil--details--lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___--_lambda_call__lambda_84c7.c)
 *     ??1?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@XZ @ 0x18069E71C (--1-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type::_promise_type @ 0x18069EE20 (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOperation_win_ea_18069EE20.c)
 *     ?GetBoolean@?$consume_Windows_Foundation_IPropertyValue@U?$IReference@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806A16B8 (-GetBoolean@-$consume_Windows_Foundation_IPropertyValue@U-$IReference@_N@Foundation@Windows@winr.c)
 *     _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x1806A3C60 (_anonymous_namespace_--PinConsentPromptManager--IsPromptOutstandingForPinOperation.c)
 *     ?PinConsentPromptShown@PinManagerTelemetry@@SAXXZ @ 0x1806A4114 (-PinConsentPromptShown@PinManagerTelemetry@@SAXXZ.c)
 *     ?RequestContext@PinOperationContext@@QEBA?AV?$shared_ptr@VPinRequestContext@@@std@@XZ @ 0x1806A4EFC (-RequestContext@PinOperationContext@@QEBA-AV-$shared_ptr@VPinRequestContext@@@std@@XZ.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54A4 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?await_resume@?$notify_awaiter@AEAU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1806A93DC (-await_resume@-$notify_awaiter@AEAU-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@winrt@@.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend_awaiter::await_suspend @ 0x1806A9520 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1806A9520.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend @ 0x1806A9828 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1806A9828.c)
 *     ?return_value@promise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@QEAAX$$QEAU?$IReference@_N@Foundation@Windows@winrt@@@Z @ 0x1806AA174 (-return_value@promise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation@Win.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
void __fastcall anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r14
  _QWORD *v3; // rax
  RTL_SRWLOCK *v4; // r13
  _QWORD *v5; // rax
  __int64 v6; // rdx
  winrt::Windows::Foundation::IUnknown *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // rbx
  char Boolean; // al
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-A8h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  LOWORD(v15) = *(_WORD *)(a1 + 8);
  switch ( (__int16)v15 )
  {
    case -1:
    case 1:
    case 3:
      goto LABEL_15;
    case 2:
      v3 = (_QWORD *)PinOperationContext::RequestContext(*(_QWORD *)(a1 + 313), a1 + 24);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)PinRequestContext::RequestorBestAvailableAppId(*v3, a1 + 40);
      PinManagerTelemetry::PinConsentPromptRequested<unsigned short const *>();
      if ( *(_QWORD *)(a1 + 32) )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)(a1 + 32));
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 64) = 0LL;
      v4 = *(RTL_SRWLOCK **)(a1 + 305);
      wil::srwlock::lock_exclusive(v4 + 2, (RTL_SRWLOCK **)(a1 + 64));
      v5 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
             (_QWORD *)(a1 + 72),
             (_QWORD *)(a1 + 313));
      if ( (unsigned __int8)anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation(
                              v4,
                              v6,
                              v5) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1C0,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          (const char *)0x8000000ELL,
          v15);
      v7 = (winrt::Windows::Foundation::IUnknown *)RequestNotificationPinConsentAsync(a1 + 88, *(_QWORD *)(a1 + 329));
      winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 56), v7);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 88));
      v8 = std::make_pair<std::shared_ptr<PinOperationContext> &,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>> &>(
             a1 + 96,
             a1 + 313,
             a1 + 56);
      std::vector<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>::emplace_back<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>(
        &v4[3],
        v8);
      std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::~pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>(a1 + 96);
      PinManagerTelemetry::PinConsentPromptShown();
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 64));
      *(_OWORD *)(a1 + 120) = 0LL;
      *(_OWORD *)(a1 + 136) = 0LL;
      *(_QWORD *)(a1 + 152) = 0LL;
      v9 = std::enable_shared_from_this<CAppThumbnailWindow>::weak_from_this(v4, a1 + 192);
      v10 = lambda_84c775889c05b89f12ed6d0ff428b333_::_lambda_84c775889c05b89f12ed6d0ff428b333_(a1 + 160, v9, a1 + 313);
      wil::scope_exit__lambda_84c775889c05b89f12ed6d0ff428b333___(a1 + 120, v10);
      lambda_84c775889c05b89f12ed6d0ff428b333_::__lambda_84c775889c05b89f12ed6d0ff428b333_(v11);
      if ( *(_QWORD *)(a1 + 200) )
        std::_Ref_count_base::_Decwref(*(std::_Ref_count_base **)(a1 + 200));
      *(_QWORD *)(a1 + 288) = a1 - 112;
      v12 = winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::await_transform_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool______(
              a1 - 112,
              a1 + 208,
              a1 + 56);
      *(_QWORD *)(a1 + 272) = v12;
      if ( winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::await_ready() )
        goto LABEL_11;
      *v2 = 4;
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type>(
        v12,
        a1);
      return;
    case 4:
LABEL_11:
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>> &>::await_resume(
        *(_QWORD *)(a1 + 272),
        a1 + 240);
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 208);
      if ( *(_QWORD *)(a1 + 240) )
        Boolean = winrt::impl::consume_Windows_Foundation_IPropertyValue<winrt::Windows::Foundation::IReference<bool>>::GetBoolean(a1 + 240);
      else
        Boolean = 0;
      *(_BYTE *)(a1 + 248) = Boolean;
      *(_BYTE *)(a1 + 249) = *(_QWORD *)(a1 + 240) != 0LL;
      PinManagerTelemetry::PinConsentPromptCompleted<bool,bool>();
      std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type::return_value(
        *(_QWORD *)(a1 + 288),
        a1 + 240);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 240));
      wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___(a1 + 120);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 56));
      *(_QWORD *)(a1 + 288) = a1 - 112;
      v14 = winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend(
              a1 - 112,
              a1 + 264);
      *(_QWORD *)(a1 + 256) = v14;
      *v2 = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend_awaiter::await_suspend(v14) )
        goto LABEL_15;
      return;
    case 5:
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 208);
      wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___(a1 + 120);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 56));
LABEL_15:
      *(_QWORD *)(a1 + 288) = a1 - 112;
      std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type::_promise_type(a1 - 112);
      _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::__parameters_(a1 + 305);
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112));
      break;
    default:
      __debugbreak();
      break;
  }
}
