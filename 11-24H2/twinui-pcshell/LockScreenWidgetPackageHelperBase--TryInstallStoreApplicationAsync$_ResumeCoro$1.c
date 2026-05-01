/*
 * XREFs of LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D9270
 * Callers:
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_InitCoro$2 @ 0x1805D90E8 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_InitCoro$2.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x18004CBA0 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?FailureReason@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051D18 (-FailureReason@-$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndC.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@_N@impl@winrt@@QEBA@XZ @ 0x180054CAC (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@_N@Foundation@Window.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x1800BD578 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C577C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?create@?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x18019108C (-create@-$event_t@V-$shared_storage@V-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_pol.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801910F0 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801953E8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@_N@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x1802229A8 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUG.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180288C5C (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028BA2C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180295BCC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18031C2C0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUGamingPostureController@implementation@Posture@GamingExperiences@Internal@34@UUri@234@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180335A4C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180335A4C.c)
 *     ??$?0V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@QEAA@V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@Z @ 0x1805C24B0 (--$-0V_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@@-$TypedEventHandler@UAppInstallItem@InstallCon.c)
 *     ??$?0V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@winrt@@QEAA@V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@Z @ 0x1805C2520 (--$-0V_lambda_c63df5938b5e32cbd3483994e088b3e3_@@@-$TypedEventHandler@UAppInstallItem@InstallCon.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@I@Z @ 0x1805C9C88 (--$wait_for_completed@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBU-$I.c)
 *     ??0_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBV?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@AEBV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@@Z @ 0x1805C9D28 (--0_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_@@QEAA@AEBV-$tip_test@V-$merged_data@U_tip_SettingsS.c)
 *     ??0_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@QEAVLockScreenWidgetPackageHelperBase@@AEBV?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBV?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@AEBV?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@@Z @ 0x1805C9D98 (--0_lambda_c63df5938b5e32cbd3483994e088b3e3_@@QEAA@QEAVLockScreenWidgetPackageHelperBase@@AEBV-$.c)
 *     ??0AppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x1805CAA9C (--0AppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ.c)
 *     ??1_parameters_@?BC@??TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA?AUIAsyncAction@Foundation@Windows@winrt@@Uhstring@6@0UPackageVersion@ApplicationModel@56@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@2@Z@QEAA@XZ @ 0x1805CAE34 (--1_parameters_@-BC@--TryInstallStoreApplicationAsync@LockScreenWidgetPackageHelperBase@@IEAA-AU.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CAF08 (--1-$com_ptr_t@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_return.c)
 *     ??1?$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x1805CAF68 (--1-$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@.c)
 *     ??1?$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BII@AA@impl@winrt@@QEAA@XZ @ 0x1805CAFC4 (--1-$event_revoker@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@W_ea_1805CAFC4.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805CB314 (--1-$test_data_control@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@1@XZ @ 0x1805CB788 (--C-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAA-.c)
 *     ?Completed@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@3@@Z @ 0x1805CDF4C (-Completed@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIApp.c)
 *     ?CompletedInstallToastNotificationMode@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBW4AppInstallationToastNotificationMode@InstallControl@Preview@Store@ApplicationModel@Windows@3@@Z @ 0x1805CE098 (-CompletedInstallToastNotificationMode@-$consume_Windows_ApplicationModel_Store_Preview_InstallC.c)
 *     ?GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA?AUPackageVersion@ApplicationModel@Windows@winrt@@AEBUhstring@5@@Z @ 0x1805D2600 (-GetInstalledPackageVersion@LockScreenWidgetPackageHelperBase@@IEAA-AUPackageVersion@Application.c)
 *     ?GetIsAppAllowedToInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1805D27D0 (-GetIsAppAllowedToInstallAsync@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_I.c)
 *     ?IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4038 (-IsAutomaticInstallAllowedByPolicy@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4084 (-IsCTAUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4344 (-IsInCTARegion@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4494 (-IsInternetUpdateAllowed@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D45D8 (-IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersion@ApplicationModel@Windows@3@@Z @ 0x1805D46C4 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NAEBUhstring@winrt@@AEBUPackageVersi.c)
 *     ?IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x1805D4C88 (-IsPowerSupplyAdequateForInstall@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 *     ?StartAppInstallAsync@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0_N1@Z @ 0x1805D74F8 (-StartAppInstallAsync@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstal.c)
 *     ?StatusChanged@?$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@UIAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIInspectable@Foundation@67@@Foundation@Windows@3@@Z @ 0x1805D8040 (-StatusChanged@-$consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem@U.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ @ 0x1805DB278 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55740385@@@details@wil@@QEAA_NXZ.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1805DB790 (-close@-$test_data_control@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805DBC3C (-ensure_data@-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@t.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@34@@impl@winrt@@QEBA@XZ @ 0x1805DCAB4 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UAppInstallItem@InstallCont.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16 #try_helpers=2
void __fastcall LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__ResumeCoro_1(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  void **v4; // rdx
  void **v5; // rdx
  void *v6; // r8
  __int64 v7; // rcx
  const struct winrt::impl::slim_source_location *v8; // rax
  _QWORD *IsAppAllowedToInstallAsync; // r14
  _DWORD *v10; // rbx
  unsigned int v11; // eax
  enum AsyncStatus v12; // edx
  char v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *started; // rax
  int v17; // r15d
  _lambda_c63df5938b5e32cbd3483994e088b3e3_ *v18; // rax
  char v19; // r8
  _lambda_9f5c7493512f30cd4ebf6dfda1287bbc_ *v20; // rax
  char v21; // r8
  wil **v22; // rax
  wil *v23; // rcx
  void **v24; // rcx
  _QWORD *v25; // rbx
  unsigned int v26; // eax
  enum AsyncStatus v27; // edx
  char Results; // al
  _BYTE *v29; // rbx
  LockScreenWidgetPackageHelperBase *v30; // rcx
  LockScreenWidgetPackageHelperBase *v31; // rcx
  LockScreenWidgetPackageHelperBase *v32; // rcx
  LockScreenWidgetPackageHelperBase *v33; // rcx
  LockScreenWidgetPackageHelperBase *v34; // rcx
  LockScreenWidgetPackageHelperBase *v35; // rcx
  __int64 v36; // rbx
  void (__fastcall ***v37)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int16 v41; // [rsp+30h] [rbp-128h]
  _BYTE pExceptionObject[232]; // [rsp+70h] [rbp-E8h] BYREF

  v41 = *(_WORD *)(a1 + 8);
  if ( (unsigned __int16)(v41 + 1) > 6u )
  {
LABEL_38:
    __debugbreak();
  }
  else
  {
    switch ( v41 )
    {
      case -1:
      case 1:
      case 3:
        goto LABEL_36;
      case 0:
        goto LABEL_38;
      case 2:
        *(_DWORD *)(a1 + 512) = 0;
        *(_QWORD *)(a1 + 16) = 0LL;
        v2 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::ensure_data(a1 + 16);
        tip2::details::shared_data<1,0,0>::start(*v2 + 8LL, (_OWORD *)(a1 + 520));
        tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
          a1 + 16,
          (__int64 *)(a1 + 24));
        *(_QWORD *)(a1 + 608) = a1 + 25;
        v3 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(v3 + 308) = *(_QWORD *)(a1 + 665);
        winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)(a1 + 649), (_QWORD *)(a1 + 536));
        std::wstring::assign((void **)(v3 + 320), *v4, *(_QWORD *)(a1 + 544));
        *(_QWORD *)(a1 + 624) = a1 + 17;
        winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)(a1 + 657), (_QWORD *)(a1 + 552));
        std::wstring::assign((void **)(v3 + 352), *v5, *(_QWORD *)(a1 + 560));
        tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(a1 + 24);
        *(_QWORD *)(a1 + 592) = a1 - 112;
        *(_BYTE *)(a1 + 32) = 0;
        v7 = *(unsigned int *)(a1 - 112 + 96);
        if ( (_DWORD)v7 == 2 )
        {
          v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 568);
          winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v8);
          throw (winrt::hresult_canceled *)pExceptionObject;
        }
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v7, (void (*)(void *, void *))a1, v6);
        return;
      case 4:
        if ( LockScreenWidgetPackageHelperBase::IsPackageInstalled(
               (LockScreenWidgetPackageHelperBase *)a1,
               (const struct winrt::hstring *)(*(_QWORD *)(a1 + 624) + 640LL),
               (const struct winrt::Windows::ApplicationModel::PackageVersion *)(*(_QWORD *)(a1 + 608) + 640LL)) )
        {
          tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
            a1 + 16,
            (__int64 *)(a1 + 488));
          v36 = *(_QWORD *)(a1 + 488);
          *(_DWORD *)(v36 + 296) = 6;
          *(_BYTE *)(v36 + 272) = 1;
          *(_QWORD *)(a1 + 624) = a1 + 17;
          *(_QWORD *)(v36 + 300) = *LockScreenWidgetPackageHelperBase::GetInstalledPackageVersion(
                                      v37,
                                      (_QWORD *)(a1 + 496),
                                      (__int64 *)(a1 + 657));
          *(_DWORD *)(v36 + 288) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(a1 + 488);
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)(a1 + 488));
          goto LABEL_33;
        }
        winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager::AppInstallManager((struct IUnknown *)(a1 + 40));
        if ( (***(unsigned __int8 (__fastcall ****)(_QWORD))(a1 + 641))(*(_QWORD *)(a1 + 641)) )
        {
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 649);
          IsAppAllowedToInstallAsync = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::GetIsAppAllowedToInstallAsync(
                                         (__int64 **)(a1 + 40),
                                         (_QWORD *)(a1 + 80),
                                         (__int64 *)(a1 + 48));
          v10 = (_DWORD *)(a1 + 512);
          *(_DWORD *)(a1 + 512) = 1;
          v11 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))IsAppAllowedToInstallAsync);
          if ( !v11 )
            v11 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(IsAppAllowedToInstallAsync);
          winrt::impl::check_status_canceled((winrt::impl *)v11, v12);
          if ( winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(IsAppAllowedToInstallAsync) )
          {
            v13 = 1;
            goto LABEL_15;
          }
        }
        else
        {
          v10 = (_DWORD *)(a1 + 512);
        }
        v13 = 0;
LABEL_15:
        if ( (*v10 & 1) != 0 )
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 80));
        v14 = a1 + 16;
        if ( v13 )
        {
          tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
            v14,
            (__int64 *)(a1 + 88));
          v15 = *(_QWORD *)(a1 + 88);
          *(_WORD *)(v15 + 385) = 257;
          *(_BYTE *)(v15 + 384) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(a1 + 88);
          *(_QWORD *)(a1 + 96) = 0LL;
          *(_QWORD *)(a1 + 104) = 0LL;
          _create___event_t_V__shared_storage_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
            a1 + 96,
            1);
          *(_QWORD *)(a1 + 112) = 0LL;
          *(_QWORD *)(a1 + 144) = *(_QWORD *)(a1 + 649);
          started = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::StartAppInstallAsync(
                      (__int64 *)(a1 + 40),
                      (_QWORD *)(a1 + 176),
                      (__int64 *)(a1 + 144),
                      (_QWORD *)(a1 + 112));
          winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::get(
            started,
            a1 + 184);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 176));
          v17 = winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallResult>::FailureReason((__int64 *)(a1 + 184));
          *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
                         a1 + 16,
                         (__int64 *)(a1 + 192))
                    + 292) = v17;
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)(a1 + 192));
          *(_DWORD *)(a1 + 200) = 3;
          winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem5<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>::CompletedInstallToastNotificationMode(
            (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 184),
            (unsigned int *)(a1 + 200));
          v18 = (_lambda_c63df5938b5e32cbd3483994e088b3e3_ *)_lambda_c63df5938b5e32cbd3483994e088b3e3_::_lambda_c63df5938b5e32cbd3483994e088b3e3_(
                                                               (_QWORD *)(a1 + 216),
                                                               *(_QWORD *)(a1 + 641),
                                                               a1 + 16,
                                                               (_QWORD *)(a1 + 96),
                                                               a1 + 673);
          winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>(
            (_QWORD *)(a1 + 208),
            v18);
          winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::Completed(
            (void (__fastcall ****)(_QWORD, const wchar_t *, __int64 *))(a1 + 184),
            (__int64 *)(a1 + 312),
            v19,
            (_QWORD *)(a1 + 208));
          if ( *(_QWORD *)(a1 + 208) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 208));
          v20 = (_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_ *)_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_::_lambda_9f5c7493512f30cd4ebf6dfda1287bbc_(
                                                               a1 + 336,
                                                               a1 + 16,
                                                               (_QWORD *)(a1 + 96),
                                                               a1 + 737);
          winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem,winrt::Windows::Foundation::IInspectable>(
            (_QWORD *)(a1 + 328),
            v20);
          winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>::StatusChanged(
            (void (__fastcall ****)(_QWORD, const wchar_t *, __int64 *))(a1 + 184),
            (__int64 *)(a1 + 424),
            v21,
            (_QWORD *)(a1 + 328));
          if ( *(_QWORD *)(a1 + 328) )
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 328));
          v22 = *(wil ***)(a1 + 96);
          if ( v22 )
            v23 = *v22;
          else
            v23 = 0LL;
          wil::handle_wait(v23, (void *)0xFFFFFFFFLL);
          __1__event_revoker_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___MP8type___abi_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BII_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 424));
          __1__event_revoker_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt___MP8type___abi_UIAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BHI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 312));
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 184));
          std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(a1 + 96);
          v24 = (void **)(a1 + 88);
        }
        else
        {
          tip2::tip_test<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::operator->(
            v14,
            (__int64 *)(a1 + 440));
          *(_QWORD *)(a1 + 448) = *(_QWORD *)(a1 + 649);
          v25 = winrt::impl::consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<winrt::Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>::GetIsAppAllowedToInstallAsync(
                  (__int64 **)(a1 + 40),
                  (_QWORD *)(a1 + 480),
                  (__int64 *)(a1 + 448));
          v26 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<bool>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))v25);
          if ( !v26 )
            v26 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<bool>>(v25);
          winrt::impl::check_status_canceled((winrt::impl *)v26, v27);
          Results = winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<bool>,bool>::GetResults(v25);
          v29 = *(_BYTE **)(a1 + 440);
          v29[384] = Results;
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 480));
          v29[385] = LockScreenWidgetPackageHelperBase::IsPowerSupplyAdequateForInstall(v30);
          v29[386] = LockScreenWidgetPackageHelperBase::IsNetworkAvailableAndNotConstrained(v31);
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55740385>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55740385>::GetImpl'::`2'::impl) )
          {
            v29[273] = LockScreenWidgetPackageHelperBase::IsAutomaticInstallAllowedByPolicy(v32);
            v29[387] = LockScreenWidgetPackageHelperBase::IsInternetUpdateAllowed(v33);
            v29[388] = LockScreenWidgetPackageHelperBase::IsInCTARegion(v34);
            v29[389] = LockScreenWidgetPackageHelperBase::IsCTAUpdateAllowed(v35);
          }
          tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::close(a1 + 440);
          v24 = (void **)(a1 + 440);
        }
        tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>(v24);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
LABEL_33:
        v38 = *(_QWORD *)(a1 + 16);
        if ( v38 )
          tip2::details::shared_data<1,0,0>::complete_without_lock(v38 + 8);
        tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)(a1 + 24));
        wil::com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>((void **)(a1 + 16));
        *(_QWORD *)(a1 + 504) = *(_QWORD *)(a1 + 592);
        *(_WORD *)(a1 + 8) = 0;
        if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,winrt::Windows::Foundation::Uri>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
                (__int64 *)(a1 + 504),
                v39) )
        {
LABEL_36:
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *,bool,GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity,bool>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
          `LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync'::`18'::_parameters_::~_parameters_(
            a1 + 641,
            v40);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x3A0);
        }
        break;
      case 5:
        tip2::test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>::~test_data_control<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>>((void **)(a1 + 24));
        wil::com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>,wil::err_returncode_policy>((void **)(a1 + 16));
        goto LABEL_36;
    }
  }
}
