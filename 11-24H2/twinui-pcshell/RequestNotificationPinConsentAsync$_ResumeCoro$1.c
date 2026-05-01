/*
 * XREFs of RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x1805EFF00
 * Callers:
 *     RequestNotificationPinConsentAsync$_InitCoro$2 @ 0x1805EFDE8 (RequestNotificationPinConsentAsync$_InitCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F2678 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?0W4EventOptions@wil@@@?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@$$QEAW4EventOptions@1@@Z @ 0x180190860 (--$-0W4EventOptions@wil@@@-$shared_any_t@V-$event_t@V-$shared_storage@V-$unique_any_t@V-$event_t.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801910F0 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x18023C320 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     ?CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1802BE6C8 (-CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@par.c)
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x1802CECD4 (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@experimental@std@@@Z @ 0x18032A480 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference@_N@Foundation.c)
 *     ??1signal_awaiter@impl@winrt@@QEAA@XZ @ 0x18032D430 (--1signal_awaiter@impl@winrt@@QEAA@XZ.c)
 *     ?await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ @ 0x180335898 (-await_ready@signal_awaiter@impl@winrt@@QEBA_NXZ.c)
 *     ?await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ @ 0x1803359BC (-await_resume@signal_awaiter@impl@winrt@@QEAA_NXZ.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180335A4C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180335A4C.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAVGamingOverlayExperienceManager@@Uhstring@4@U?$IMap@Uhstring@winrt@@U12@@Collections@234@@experimental@std@@UEAA@XZ @ 0x180348740 (--1promise_type@-$coroutine_traits@U-$IAsyncOperation@UValueSet@Collections@Foundation@Windows@w.c)
 *     ?make@?$reference_traits@_N@impl@winrt@@SA@_N@Z @ 0x1804AD800 (-make@-$reference_traits@_N@impl@winrt@@SA@_N@Z.c)
 *     ??0ToastNotification@Notifications@UI@Windows@winrt@@QEAA@AEBUXmlDocument@Dom@Xml@Data@34@@Z @ 0x1805859AC (--0ToastNotification@Notifications@UI@Windows@winrt@@QEAA@AEBUXmlDocument@Dom@Xml@Data@34@@Z.c)
 *     winrt::impl::delegate_base_void_::delegate_base_void___lambda_639cdbf1b0b4bc5a158a88668f16cd2e___ @ 0x1805ED238 (winrt--impl--delegate_base_void_--delegate_base_void___lambda_639cdbf1b0b4bc5a158a88668f16cd2e__.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___ @ 0x1805ED2D4 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--ToastNotificati.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___ @ 0x1805ED330 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--To_ea_1805ED330.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_d81cebd908bc953c0c32f92e43af8435___ @ 0x1805ED38C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--To_ea_1805ED38C.c)
 *     ??$PinConsentNotificationCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z @ 0x1805ED4BC (--$PinConsentNotificationCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z.c)
 *     ??$make_shared@V?$optional@_N@std@@$$V@std@@YA?AV?$shared_ptr@V?$optional@_N@std@@@0@XZ @ 0x1805EDA10 (--$make_shared@V-$optional@_N@std@@$$V@std@@YA-AV-$shared_ptr@V-$optional@_N@std@@@0@XZ.c)
 *     _lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_ @ 0x1805EDB20 (_lambda_639cdbf1b0b4bc5a158a88668f16cd2e_--__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_.c)
 *     ??1?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x1805EDB78 (--1-$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@-$abi@UIToastNot.c)
 *     ??1?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x1805EDBD4 (--1-$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@-$a_ea_1805EDBD4.c)
 *     ??1?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x1805EDC30 (--1-$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@-$a_ea_1805EDC30.c)
 *     ??1?$tuple@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@V123@@std@@QEAA@XZ @ 0x1805EDCB4 (--1-$tuple@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@V123@@std@@.c)
 *     std::tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______::_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_______ @ 0x1805EDCDC (std--tuple_std--filesystem--path_wil--unique_any_t_wil--details--unique_storage_wil--details--ha.c)
 *     wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle___ @ 0x1805EDD10 (wil--details--unique_storage_wil--details--handle_invalid_resource_policy_void_(__cdecl_)(void__.c)
 *     wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void_(__cdecl_)(void__)_&_anonymous_namespace_::DeleteAndCloseFileHandle_____::operator_ @ 0x1805EDD5C (wil--unique_any_t_wil--details--unique_storage_wil--details--handle_invalid_resourc_ea_1805EDD5C.c)
 *     ?Activated@?$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UToastNotification@Notifications@UI@Windows@winrt@@UIInspectable@Foundation@45@@Foundation@Windows@3@@Z @ 0x1805EE040 (-Activated@-$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notificatio.c)
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1805EE268 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 *     ?Dismissed@?$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UToastNotification@Notifications@UI@Windows@winrt@@UToastDismissedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1805EF200 (-Dismissed@-$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notificatio.c)
 *     ?Failed@?$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UToastNotification@Notifications@UI@Windows@winrt@@UToastFailedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1805EF278 (-Failed@-$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@.c)
 *     _anonymous_namespace_::GetLogoFileFromContent @ 0x1805EF340 (_anonymous_namespace_--GetLogoFileFromContent.c)
 *     _anonymous_namespace_::GetPromptText @ 0x1805EF3EC (_anonymous_namespace_--GetPromptText.c)
 *     ?PinConsentNotificationShowing@PinManagerTelemetry@@SAXXZ @ 0x1805EFC0C (-PinConsentNotificationShowing@PinManagerTelemetry@@SAXXZ.c)
 *     ?callback@?$cancellation_token@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@@impl@winrt@@QEBAX$$QEAU?$delegate@$$V@3@@Z @ 0x1805F0918 (-callback@-$cancellation_token@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IReference.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=21 #try_helpers=1
void __fastcall RequestNotificationPinConsentAsync__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r13
  __int64 v3; // rdx
  const unsigned __int16 *v4; // rbx
  __int64 v5; // r8
  __int64 **v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  const struct winrt::impl::slim_source_location *v17; // rax
  char v18; // cl
  char v19; // dl
  void (__fastcall **v20)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  _BYTE pExceptionObject[24]; // [rsp+90h] [rbp-158h] BYREF
  __int64 *v25; // [rsp+A8h] [rbp-140h]
  __int64 v26; // [rsp+B0h] [rbp-138h]
  char *v27; // [rsp+B8h] [rbp-130h]
  std::_Ref_count_base *v28; // [rsp+C0h] [rbp-128h]
  const unsigned __int16 *v29; // [rsp+C8h] [rbp-120h]
  unsigned __int64 v30; // [rsp+E0h] [rbp-108h]
  const unsigned __int16 *v31; // [rsp+E8h] [rbp-100h]
  const unsigned __int16 *v32; // [rsp+100h] [rbp-E8h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_42;
    case 2:
      anonymous_namespace_::GetPromptText((_QWORD *)(a1 + 16), *(_QWORD **)(a1 + 641));
      v3 = *(_QWORD *)(a1 + 641) + (*(_BYTE *)(*(_QWORD *)(a1 + 641) + 104LL) != 0 ? 88LL : 32LL);
      v4 = (const unsigned __int16 *)(a1 + 64);
      *(_OWORD *)(a1 + 64) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
      *(_QWORD *)(a1 + 88) = 7LL;
      *(_WORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 96) = -1LL;
      if ( *(_BYTE *)(v3 + 16) )
      {
        anonymous_namespace_::GetLogoFileFromContent(a1 + 104, v3);
        std::wstring::operator=((char *)(a1 + 64), (char *)(a1 + 112), v5);
        wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_____::operator_(
          (void **)(a1 + 96),
          (void **)(a1 + 104));
        std::tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_______::_tuple_std::filesystem::path_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle_______(a1 + 104);
      }
      v30 = *(_QWORD *)(a1 + 88);
      if ( v30 > 7 )
      {
        v4 = *(const unsigned __int16 **)v4;
        v29 = v4;
      }
      v31 = *(const unsigned __int16 **)(a1 + 16);
      v32 = *(const unsigned __int16 **)(a1 + 40);
      anonymous_namespace_::CreateConsentToastXmlDocument((struct IUnknown *)(a1 + 144), v32, v31, v4);
      winrt::Windows::UI::Notifications::ToastNotification::ToastNotification(
        (winrt::Windows::UI::Notifications::ToastNotification *)(a1 + 152),
        (const struct winrt::Windows::Data::Xml::Dom::XmlDocument *)(a1 + 144));
      *(_OWORD *)(a1 + 160) = 0LL;
      std::make_shared<std::optional<bool>,>(a1 + 160);
      v6 = (__int64 **)(a1 + 176);
      *(_OWORD *)(a1 + 176) = 0LL;
      *(_DWORD *)(a1 + 192) = 1;
      ____0W4EventOptions_wil_____shared_any_t_V__event_t_V__shared_storage_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___details_wil__Uerr_exception_policy_3__wil___wil__QEAA___QEAW4EventOptions_1__Z(
        (_QWORD *)(a1 + 176),
        (unsigned int *)(a1 + 192));
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 208),
        (_QWORD *)(a1 + 160));
      *(_QWORD *)(a1 + 224) = 0LL;
      *(_QWORD *)(a1 + 232) = 0LL;
      v26 = *(_QWORD *)(a1 + 184);
      if ( v26 )
      {
        v26 = *(_QWORD *)(a1 + 184);
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
      }
      v25 = *v6;
      *(_QWORD *)(a1 + 224) = v25;
      v26 = *(_QWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 232) = v26;
      winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_d81cebd908bc953c0c32f92e43af8435___(
        a1 + 200,
        v7);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotification<winrt::Windows::UI::Notifications::IToastNotification>::Activated(
        (__int64 **)(a1 + 152),
        (_QWORD *)(a1 + 240),
        v8,
        (__int64 *)(a1 + 200));
      if ( *(_QWORD *)(a1 + 200) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 200));
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 264),
        (_QWORD *)(a1 + 160));
      *(_QWORD *)(a1 + 280) = 0LL;
      *(_QWORD *)(a1 + 288) = 0LL;
      v26 = *(_QWORD *)(a1 + 184);
      if ( v26 )
      {
        v26 = *(_QWORD *)(a1 + 184);
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
      }
      v25 = *v6;
      *(_QWORD *)(a1 + 280) = v25;
      v26 = *(_QWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 288) = v26;
      winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___(
        a1 + 256,
        v9);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotification<winrt::Windows::UI::Notifications::IToastNotification>::Dismissed(
        (__int64 **)(a1 + 152),
        (_QWORD *)(a1 + 296),
        v10,
        (__int64 *)(a1 + 256));
      if ( *(_QWORD *)(a1 + 256) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 256));
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(a1 + 320),
        (_QWORD *)(a1 + 160));
      *(_QWORD *)(a1 + 336) = 0LL;
      *(_QWORD *)(a1 + 344) = 0LL;
      v26 = *(_QWORD *)(a1 + 184);
      if ( v26 )
      {
        v26 = *(_QWORD *)(a1 + 184);
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
      }
      v25 = *v6;
      *(_QWORD *)(a1 + 336) = v25;
      v26 = *(_QWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 344) = v26;
      winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___(
        a1 + 312,
        v11);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotification<winrt::Windows::UI::Notifications::IToastNotification>::Failed(
        (__int64 **)(a1 + 152),
        (_QWORD *)(a1 + 352),
        v12,
        (__int64 *)(a1 + 312));
      if ( *(_QWORD *)(a1 + 312) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 312));
      winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 368), L"Windows.SystemToast.PinConsent");
      winrt::Windows::UI::Notifications::ToastNotificationManager::CreateToastNotifier(
        (const struct winrt::param::hstring *)(a1 + 400),
        (__int64 *)(a1 + 368));
      winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
        (__int64 *)(a1 + 400),
        (__int64 *)(a1 + 152));
      *(_QWORD *)(a1 + 528) = a1 - 112;
      *(_QWORD *)(a1 + 408) = a1 - 112;
      *(_QWORD *)(a1 + 424) = *(_QWORD *)(a1 + 400);
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 424));
      *(_QWORD *)(a1 + 432) = *(_QWORD *)(a1 + 152);
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(a1 + 432));
      *(_QWORD *)(a1 + 544) = a1 + 424;
      v13 = *(_QWORD *)(a1 + 424);
      *(_QWORD *)(a1 + 424) = 0LL;
      *(_QWORD *)(a1 + 552) = v13;
      v14 = *(_QWORD *)(a1 + 432);
      *(_QWORD *)(a1 + 432) = 0LL;
      *(_QWORD *)(a1 + 560) = v14;
      winrt::impl::delegate_base_void_::delegate_base_void___lambda_639cdbf1b0b4bc5a158a88668f16cd2e___(
        (_QWORD *)(a1 + 416),
        (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 552));
      lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 424));
      winrt::impl::cancellation_token<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>::callback(
        a1 + 408,
        a1 + 416);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 416));
      PinManagerTelemetry::PinConsentNotificationShowing(v15);
      v25 = *v6;
      if ( v25 )
      {
        v25 = *v6;
        v16 = *v25;
      }
      else
      {
        v16 = 0LL;
      }
      *(_QWORD *)(a1 + 440) = 0LL;
      *(_QWORD *)(a1 + 448) = 0LL;
      *(_QWORD *)(a1 + 456) = 0LL;
      *(_QWORD *)(a1 + 464) = v16;
      *(_DWORD *)(a1 + 472) = 0;
      *(_QWORD *)(a1 + 480) = 0LL;
      *(_DWORD *)(a1 + 488) = 0;
      if ( *(_DWORD *)(a1 - 16) == 2 )
      {
        v17 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 568);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v17);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      if ( winrt::impl::signal_awaiter::await_ready((HANDLE *)(a1 + 440)) )
        goto LABEL_28;
      *v2 = 6;
      winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type>(
        (__int64 *)(a1 + 440),
        a1);
      return;
    case 6:
LABEL_28:
      winrt::impl::signal_awaiter::await_resume((winrt::impl::signal_awaiter *)(a1 + 440));
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 440));
      v27 = *(char **)(a1 + 160);
      if ( v27[1] )
      {
        v27 = *(char **)(a1 + 160);
        v18 = *v27;
      }
      else
      {
        v18 = 0;
      }
      *(_BYTE *)(a1 + 496) = v18;
      v27 = *(char **)(a1 + 160);
      *(_BYTE *)(a1 + 497) = v27[1];
      PinManagerTelemetry::PinConsentNotificationCompleted<bool,bool>((char *)(a1 + 497), (char *)(a1 + 496));
      v27 = *(char **)(a1 + 160);
      if ( v27[1] )
      {
        v27 = *(char **)(a1 + 160);
        v19 = *(_BYTE *)std::optional<bool>::value((__int64)v27);
      }
      else
      {
        v19 = 0;
      }
      v20 = *winrt::impl::reference_traits<bool>::make(
               (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))(a1 + 592),
               v19);
      if ( v20 )
      {
        *(_QWORD *)(a1 + 600) = 0LL;
        *(_DWORD *)(a1 + 608) = 0;
        *(_QWORD *)(a1 + 616) = 0LL;
        *(_QWORD *)(a1 + 624) = 0LL;
        v22 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))*v20)(
                v20,
                &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<bool>>,
                a1 + 600);
        winrt::check_hresult((int *)(a1 + 632), v22, a1 + 608);
        v21 = *(_QWORD *)(a1 + 600);
      }
      else
      {
        v21 = 0LL;
      }
      *(_QWORD *)(a1 + 504) = v21;
      if ( *(_QWORD *)(a1 + 592) )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 592));
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(
        (__int64 *)(*(_QWORD *)(a1 + 528) + 104LL),
        (__int64 *)(a1 + 504));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 504));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 400));
      __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 352));
      __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 296));
      __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 240));
      std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(a1 + 176);
      v28 = *(std::_Ref_count_base **)(a1 + 168);
      if ( v28 )
      {
        v28 = *(std::_Ref_count_base **)(a1 + 168);
        std::_Ref_count_base::_Decref(v28);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 152));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 144));
      wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___((void **)(a1 + 96));
      std::wstring::_Tidy_deallocate((void **)(a1 + 64));
      std::tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::~tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(a1 + 16);
      *(_QWORD *)(a1 + 512) = a1 - 112;
      *v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              (__int64 *)(a1 + 512),
              v23) )
        goto LABEL_42;
      return;
    case 7:
      winrt::impl::signal_awaiter::~signal_awaiter((winrt::cancellable_promise **)(a1 + 440));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 400));
      __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 352));
      __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 296));
      __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BGA_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 240));
      std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(a1 + 176);
      v28 = *(std::_Ref_count_base **)(a1 + 168);
      if ( v28 )
      {
        v28 = *(std::_Ref_count_base **)(a1 + 168);
        std::_Ref_count_base::_Decref(v28);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 152));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 144));
      wil::details::unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___::_unique_storage_wil::details::handle_invalid_resource_policy_void____cdecl___void______anonymous_namespace_::DeleteAndCloseFileHandle___((void **)(a1 + 96));
      std::wstring::_Tidy_deallocate((void **)(a1 + 64));
      std::tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::~tuple<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(a1 + 16);
LABEL_42:
      std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,GamingOverlayExperienceManager *,winrt::hstring,winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>>::promise_type::~promise_type((__int64 *)(a1 - 112));
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x300);
      break;
    default:
      __debugbreak();
      break;
  }
}
