/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805E8DE0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$2 @ 0x1805E8C80 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_InitCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?IsSystemProvided@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CA780 (-IsSystemProvided@-$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802229A8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUG.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$cancellable_awaiter@U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@winrt@@QEAA@XZ @ 0x18032D080 (--1-$cancellable_awaiter@U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@winrt@@$00@imp.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180335A4C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180335A4C.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@V?$shared_ptr@VPinOperationContext@@@std@@_N@experimental@std@@@experimental@std@@@Z @ 0x1805E19F8 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_1805E19F8.c)
 *     ??1PinConsentPromptContent@@QEAA@XZ @ 0x1805E36A8 (--1PinConsentPromptContent@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetPinRequestPromptContent @ 0x1805E6520 (_anonymous_namespace_--GetPinRequestPromptContent.c)
 *     ?HandlePinRejected@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1805E6B10 (-HandlePinRejected@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?HandlePinRequested@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x1805E6D34 (-HandlePinRequested@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent @ 0x1805E867C (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x1805EC734 (-await_resume@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@winrt@@@Fou.c)
 *     ?get@?$weak_ref@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1805ECACC (-get@-$weak_ref@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?get_weak@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@QEAA?AU?$weak_ref@UPinManager@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1805ECBAC (-get_weak@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinMana.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r12
  __int64 v3; // rsi
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r10
  __int64 *v8; // rax
  const struct winrt::impl::slim_source_location *v9; // rax
  __int64 *v10; // r14
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  std::_Ref_count_base *v15; // rcx
  _BYTE pExceptionObject[24]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v17; // [rsp+60h] [rbp-68h]
  __int64 v18; // [rsp+68h] [rbp-60h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_23;
    case 2:
      v3 = *(_QWORD *)(a1 + 321);
      *(_QWORD *)(a1 + 304) = a1 + 9;
      v4 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
             (_QWORD *)(a1 + 16),
             (_QWORD *)(a1 + 329));
      PinHistory::HandlePinRequested(v3 + 128, (_QWORD **)v4);
      v5 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
             (_QWORD *)(a1 + 32),
             (_QWORD *)(a1 + 329));
      anonymous_namespace_::GetPinRequestPromptContent(a1 + 48, (_QWORD **)v5);
      winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::get_weak(
        v3,
        a1 + 160);
      v6 = std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
             (_QWORD *)(a1 + 168),
             (_QWORD *)(a1 + 329));
      v8 = anonymous_namespace_::PinConsentPromptManager::RequestPinConsent(v7, (__int64 *)(a1 + 184), v6, a1 + 48);
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v9 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 280);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v9);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *(_QWORD *)(a1 + 192) = 0LL;
      *(_QWORD *)(a1 + 200) = v8;
      *(_QWORD *)(a1 + 208) = 0LL;
      *(_BYTE *)(a1 + 216) = 1;
      *v2 = 4;
      if ( (unsigned __int8)winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,std::shared_ptr<PinOperationContext>,bool>::promise_type>(
                              (__int64 *)(a1 + 192),
                              a1) )
        return;
      goto LABEL_9;
    case 4:
LABEL_9:
      winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>::await_resume(
        a1 + 192,
        a1 + 224);
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 192));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 184));
      v10 = (__int64 *)(a1 + 160);
      winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::PinManager>::get(a1 + 160, a1 + 232);
      if ( !*(_QWORD *)(a1 + 232) )
        goto LABEL_18;
      v18 = *(_QWORD *)(a1 + 224);
      if ( v18
        && winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::IsSystemProvided((__int64 *)(a1 + 224)) )
      {
        *(_QWORD *)(a1 + 304) = a1 + 9;
        v11 = (std::_Ref_count_base *)std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
                                        (_QWORD *)(a1 + 240),
                                        (_QWORD *)(a1 + 329))[1];
        if ( v11 )
          std::_Ref_count_base::_Decref(v11);
        *(_BYTE *)(a1 - 8) = 1;
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 232));
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 224));
        v17 = *v10;
        if ( v17 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 160));
      }
      else
      {
        v12 = (std::_Ref_count_base *)std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
                                        (_QWORD *)(a1 + 256),
                                        (_QWORD *)(*(_QWORD *)(a1 + 304) + 320LL));
        PinHistory::HandlePinRejected(v13 + 128, v12);
LABEL_18:
        if ( *(_QWORD *)(a1 + 232) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 232));
        *(_BYTE *)(a1 - 8) = 0;
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 224));
        v17 = *v10;
        if ( v17 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 160));
      }
      PinConsentPromptContent::~PinConsentPromptContent((void **)(a1 + 48));
      *(_QWORD *)(a1 + 272) = a1 - 112;
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 272),
              v14) )
      {
LABEL_23:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
        v15 = *(std::_Ref_count_base **)(a1 + 337);
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x1E0);
      }
      return;
    case 5:
      winrt::cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>::~cancellable_awaiter<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>>((winrt::cancellable_promise **)(a1 + 192));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 184));
      v17 = *(_QWORD *)(a1 + 160);
      if ( v17 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 160));
      PinConsentPromptContent::~PinConsentPromptContent((void **)(a1 + 48));
      goto LABEL_23;
    default:
      __debugbreak();
      return;
  }
}
