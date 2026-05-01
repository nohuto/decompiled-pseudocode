/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805E8230
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$2 @ 0x1805E80D4 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_InitCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18028F580 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032D080 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend_awaiter::await_suspend @ 0x1803603C4 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_1803603C4.c)
 *     ??$PinConsentPromptCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z @ 0x1805E04F8 (--$PinConsentPromptCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z.c)
 *     ??$PinConsentPromptRequested@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x1805E0568 (--$PinConsentPromptRequested@PEBG@PinManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@experimental@std@@@Z @ 0x1805E19F8 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1805E19F8.c)
 *     ??$emplace_back@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA?A_T$$QEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@1@@Z @ 0x1805E1FBC (--$emplace_back@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReferen.c)
 *     _lambda_84c775889c05b89f12ed6d0ff428b333_::__lambda_84c775889c05b89f12ed6d0ff428b333_ @ 0x1805E32B8 (_lambda_84c775889c05b89f12ed6d0ff428b333_--__lambda_84c775889c05b89f12ed6d0ff428b333_.c)
 *     wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___ @ 0x1805E3428 (wil--details--lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___--_lambda_call__lambda_84c7.c)
 *     ??1?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@QEAA@XZ @ 0x1805E3504 (--1-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReference@_N@Foundati.c)
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type::_promise_type @ 0x1805E3A4C (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOperation_win_ea_1805E3A4C.c)
 *     ?GetBoolean@?$consume_Windows_Foundation_IPropertyValue@U?$IReference@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805E5D24 (-GetBoolean@-$consume_Windows_Foundation_IPropertyValue@U-$IReference@_N@Foundation@Windows@winr.c)
 *     _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x1805E7258 (_anonymous_namespace_--PinConsentPromptManager--IsPromptOutstandingForPinOperation.c)
 *     ?PinConsentPromptShown@PinManagerTelemetry@@SAXXZ @ 0x1805E7A68 (-PinConsentPromptShown@PinManagerTelemetry@@SAXXZ.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1805EC734 (-await_resume@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@winrt@@@Fou.c)
 *     ?RequestNotificationPinConsentAsync@@YA?AU?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@Z @ 0x1805F0774 (-RequestNotificationPinConsentAsync@@YA-AU-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
void __fastcall anonymous_namespace_::PinConsentPromptManager::RequestPinConsent__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r14
  __int64 *v3; // rcx
  __int64 *v4; // r12
  __int64 v5; // r15
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // r9
  _QWORD *v14; // r8
  const struct winrt::impl::slim_source_location *v15; // rax
  char Boolean; // al
  __int64 v17; // rdx
  std::_Ref_count_base *v18; // rcx
  int v19; // [rsp+20h] [rbp-D8h]
  _BYTE pExceptionObject[24]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v21; // [rsp+88h] [rbp-70h]
  __int64 v22; // [rsp+90h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  LOWORD(v19) = *(_WORD *)(a1 + 8);
  switch ( (__int16)v19 )
  {
    case -1:
    case 1:
    case 3:
      goto LABEL_17;
    case 2:
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 24),
        *(_QWORD **)(a1 + 297));
      *(_QWORD *)(a1 + 16) = *(_QWORD *)PinRequestContext::RequestorBestAvailableAppId(*v3, (_OWORD *)(a1 + 40));
      PinManagerTelemetry::PinConsentPromptRequested<unsigned short const *>((const WCHAR **)(a1 + 16));
      if ( *(_QWORD *)(a1 + 32) )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)(a1 + 32));
      v4 = (__int64 *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 64) = 0LL;
      v5 = *(_QWORD *)(a1 + 289);
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 64), (RTL_SRWLOCK *)(v5 + 16));
      v6 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
             (_QWORD *)(a1 + 72),
             (_QWORD *)(a1 + 297));
      if ( anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation(v5, v7, v6) )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1DC,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          (const char *)0x8000000ELL,
          v19);
      v8 = (__int64 *)RequestNotificationPinConsentAsync(a1 + 88, *(_QWORD *)(a1 + 313));
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 56), v8);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 88));
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 96),
        (_QWORD *)(a1 + 297));
      v21 = *v4;
      *(_QWORD *)(a1 + 112) = v21;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 112));
      std::vector<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>::emplace_back<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>(
        (__int64 *)(v5 + 24),
        (_QWORD *)(a1 + 96));
      std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::~pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>(a1 + 96);
      PinManagerTelemetry::PinConsentPromptShown(v9);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 64));
      *(_OWORD *)(a1 + 120) = 0LL;
      *(_OWORD *)(a1 + 136) = 0LL;
      *(_QWORD *)(a1 + 152) = 0LL;
      v10 = *(_QWORD *)(v5 + 8);
      v11 = 0LL;
      v12 = 0LL;
      if ( v10 )
      {
        v11 = *(_QWORD *)v5;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
        v12 = v10;
      }
      *(_QWORD *)(a1 + 160) = v11;
      *(_QWORD *)(a1 + 168) = v12;
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 176),
        (_QWORD *)(a1 + 297));
      *(_QWORD *)(a1 + 120) = *v13;
      *(_QWORD *)(a1 + 128) = *(_QWORD *)(a1 + 168);
      *v13 = 0LL;
      *(_QWORD *)(a1 + 168) = 0LL;
      *(_QWORD *)(a1 + 136) = *v14;
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(a1 + 184);
      *v14 = 0LL;
      *(_QWORD *)(a1 + 184) = 0LL;
      *(_BYTE *)(a1 + 152) = 1;
      lambda_84c775889c05b89f12ed6d0ff428b333_::__lambda_84c775889c05b89f12ed6d0ff428b333_((__int64)v13);
      *(_QWORD *)(a1 + 272) = a1 - 112;
      if ( *(_DWORD *)(a1 - 112 + 96) == 2 )
      {
        v15 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 248);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v15);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *(_QWORD *)(a1 + 192) = 0LL;
      *(_QWORD *)(a1 + 200) = v4;
      *(_QWORD *)(a1 + 208) = 0LL;
      *(_BYTE *)(a1 + 216) = 1;
      *v2 = 4;
      if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type>(
                              (__int64 *)(a1 + 192),
                              a1) )
        return;
      goto LABEL_13;
    case 4:
LABEL_13:
      winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>::await_resume(
        a1 + 192,
        a1 + 224);
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 192));
      if ( *(_QWORD *)(a1 + 224) )
        Boolean = winrt::impl::consume_Windows_Foundation_IPropertyValue<winrt::Windows::Foundation::IReference<bool>>::GetBoolean((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 224));
      else
        Boolean = 0;
      *(_BYTE *)(a1 + 232) = Boolean;
      v22 = *(_QWORD *)(a1 + 224);
      *(_BYTE *)(a1 + 233) = v22 != 0;
      PinManagerTelemetry::PinConsentPromptCompleted<bool,bool>((char *)(a1 + 233), (char *)(a1 + 232));
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(
        (__int64 *)(*(_QWORD *)(a1 + 272) + 104LL),
        (__int64 *)(a1 + 224));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 224));
      wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___(a1 + 120);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
      *(_QWORD *)(a1 + 272) = a1 - 112;
      *(_QWORD *)(a1 + 240) = a1 - 112;
      *v2 = 0;
      if ( !winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 240),
              v17) )
        goto LABEL_17;
      return;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 192));
      wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___(a1 + 120);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 56));
LABEL_17:
      *(_QWORD *)(a1 + 272) = a1 - 112;
      std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type::_promise_type((__int64 *)(a1 - 112));
      v18 = *(std::_Ref_count_base **)(a1 + 305);
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x1C0);
      break;
    default:
      __debugbreak();
      break;
  }
}
