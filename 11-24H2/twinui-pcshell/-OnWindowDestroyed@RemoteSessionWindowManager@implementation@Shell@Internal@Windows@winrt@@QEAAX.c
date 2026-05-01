/*
 * XREFs of ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x18065B458
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::WindowId___lambda_e22f66c9943d4383c52f9a8ad3733f3b___::Invoke @ 0x18065AB10 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--WindowId___la.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051D64 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18005346C (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x1800C4940 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CFE14 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180295BA8 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802C4E14 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180359460 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ @ 0x18035FE04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EPDA@@@details@wil@@QEAA_NXZ.c)
 *     ?GetBootToCloudModeType@CloudPCHelpers@@YA?AW4BootModeType@1@XZ @ 0x1806403AC (-GetBootToCloudModeType@CloudPCHelpers@@YA-AW4BootModeType@1@XZ.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x180640918 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18064214C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes@@@details@w.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x1806483FC (--$tip_make_shared_nothrow@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180649940 (--1-$com_ptr_t@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649E54 (--1-$test_data_control@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649F90 (--1-$test_watcher@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18064A440 (--4-$com_ptr_t@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@Uerr_retur.c)
 *     ?GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ @ 0x18064C2C8 (-GetCloudPCMode@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAIXZ.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x18064C3E0 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x18064D648 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 *     ?GetSystemId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBUWindowId@UI@56@@Z @ 0x18064DB50 (-GetSystemId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@A.c)
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x18065033C (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18065050C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@2@XZ @ 0x180654EE4 (-watch_errors@-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@.c)
 *     ??$B2CSystemShuttingDown@PEBG@CloudPCTelemetry@@SAX$$QEAPEBG@Z @ 0x1806562C8 (--$B2CSystemShuttingDown@PEBG@CloudPCTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2AEA_NAEAW4SourceOfDisconnect@0@@Z @ 0x180656418 (--$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 *     ??$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$QEAPEBG$$QEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x180656514 (--$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 *     ??$ProviderWindowRemoved@AEB_KI@CloudPCTelemetry@@SAXAEB_K$$QEAI@Z @ 0x180656774 (--$ProviderWindowRemoved@AEB_KI@CloudPCTelemetry@@SAXAEB_K$$QEAI@Z.c)
 *     ??$W365Crash@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z @ 0x180656800 (--$W365Crash@AEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAY0BAE@G@Z.c)
 *     ??$_Erase@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBUhstring@winrt@@@Z @ 0x180656868 (--$_Erase@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$shared_ptr@URemoteSessionI.c)
 *     ??$_Erase@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@@2@$0A@@std@@@std@@AEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180656910 (--$_Erase@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_traits.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x180656DA4 (--$find@X@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implem.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@1@XZ @ 0x180658EF4 (--C-$tip_test@V-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?at@?$unordered_map@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@@std@@QEAAAEAV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@2@AEBUhstring@winrt@@@Z @ 0x18065CED4 (-at@-$unordered_map@Uhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implementation@Shell.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18066FA7C (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Win_ea_18066FA7C.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x18066FAB0 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4CloudPCState@3456@XZ @ 0x18066FB20 (-State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4CloudPCStat.c)
 *     ?TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4ScreenType@TransitionScreen@CloudDesktop@3456@XZ @ 0x18066FC00 (-TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::OnWindowDestroyed(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::UI::WindowId *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  winrt::hstring *CorrelationId; // rax
  void **v7; // rax
  volatile signed __int32 **v8; // rax
  volatile signed __int32 *v9; // rdx
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **FactoryImplObj; // rax
  char v11; // r14
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rax
  __int64 *v15; // rax
  int v16; // esi
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **v20; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *v21; // rdx
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *v22; // rdx
  PVOID Ptr; // rsi
  void (__fastcall *v24)(PVOID, winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **, volatile signed __int32 **); // r14
  const unsigned __int16 *v25; // r8
  const unsigned __int16 *v26; // r8
  _QWORD *v27; // rax
  PVOID v28; // r14
  void (__fastcall *v29)(PVOID, __int64); // r15
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 **v33; // rax
  __int64 **v34; // rax
  void *v35; // [rsp+38h] [rbp-2F0h] BYREF
  RTL_SRWLOCK *v36; // [rsp+40h] [rbp-2E8h] BYREF
  volatile signed __int32 *v37; // [rsp+48h] [rbp-2E0h] BYREF
  volatile signed __int32 *v38; // [rsp+50h] [rbp-2D8h] BYREF
  int NetworkConnectivityLevel; // [rsp+58h] [rbp-2D0h] BYREF
  void *v40; // [rsp+60h] [rbp-2C8h] BYREF
  const unsigned __int16 *v41; // [rsp+68h] [rbp-2C0h] BYREF
  volatile signed __int32 *v42; // [rsp+70h] [rbp-2B8h] BYREF
  int BootToCloudModeType; // [rsp+78h] [rbp-2B0h] BYREF
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *v44[2]; // [rsp+80h] [rbp-2A8h] BYREF
  _BYTE v45[64]; // [rsp+90h] [rbp-298h] BYREF
  const unsigned __int16 *v46; // [rsp+D0h] [rbp-258h] BYREF
  std::_Ref_count_base *v47; // [rsp+D8h] [rbp-250h]
  WCHAR pvData[264]; // [rsp+F0h] [rbp-238h] BYREF

  if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1
    && GetSystemMetrics(0x2000) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
      1u,
      v4,
      v5);
    CorrelationId = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                      (winrt::hstring *)&v35,
                      &c_bootSystemId);
    v36 = (RTL_SRWLOCK *)winrt::hstring::c_str(CorrelationId);
    CloudPCTelemetry::B2CSystemShuttingDown<unsigned short const *>((const WCHAR **)&v36);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v35);
    return;
  }
  v40 = 0LL;
  v36 = 0LL;
  v7 = (void **)tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,_GUID * &>(
                  &v35,
                  &v36);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::operator=(
    &v40,
    v7);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>(&v35);
  tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::watch_errors(
    &v40,
    (__int64)v45);
  *(_OWORD *)v44 = 0LL;
  winrt::hstring::hstring((winrt::hstring *)&v42, &::pvData);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v36, this + 7);
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetSystemId(&v38, (__int64)a2);
  if ( !(unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() )
  {
    v8 = (volatile signed __int32 **)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                                       (winrt::hstring *)&v35,
                                       (__int64 *)&v38);
    if ( &v42 != v8 )
    {
      v9 = *v8;
      *v8 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach(&v42, (__int64)v9);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v35);
  }
  FactoryImplObj = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v35);
  v11 = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoveWindow(
          *FactoryImplObj,
          a2);
  if ( v35 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v35);
  if ( !v11 )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::operator->(
                  &v40,
                  (__int64 *)&v46)
             + 308) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((void **)&v46);
LABEL_41:
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v38);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v36);
    if ( v44[0] )
    {
      if ( !(unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() )
      {
        if ( !winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(v44[0])
          || (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(v44[0]) != 3 )
        {
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v41, this + 7);
          v33 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                              v44[0],
                              &v46);
          winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
            v33,
            &v36);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v46);
          std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::_Erase<winrt::hstring>(
            &this[9].Ptr,
            (__int64 *)&v36);
          winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v36);
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v41);
        }
        (*(void (__fastcall **)(PVOID, winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **, volatile signed __int32 **))(*(_QWORD *)this[5].Ptr + 32LL))(
          this[5].Ptr,
          v44,
          &v42);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v42);
        if ( v44[1] )
          std::_Ref_count_base::_Decref(v44[1]);
        goto LABEL_52;
      }
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v41, this + 7);
      v34 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                          v44[0],
                          &v46);
      winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
        v34,
        &v36);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v46);
      std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::_Erase<winrt::hstring>(
        &this[9].Ptr,
        (__int64 *)&v36);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v36);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v41);
    }
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)&v40);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v42);
    if ( v44[1] )
      std::_Ref_count_base::_Decref(v44[1]);
    goto LABEL_52;
  }
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem(&v35, &v38);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
    1u,
    v12,
    v13);
  v14 = winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
          (__int64 **)&v35,
          &v37);
  NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(v14);
  CloudPCTelemetry::ProviderWindowRemoved<unsigned __int64 const &,unsigned int>(a2, &NetworkConnectivityLevel);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v37);
  v15 = winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
          (__int64 **)&v35,
          &v37);
  v16 = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v37);
  if ( v16 )
  {
LABEL_39:
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v35);
    goto LABEL_41;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlackScreen_Bugfixes>::GetImpl'::`2'::impl,
    1u,
    v17,
    v18);
  if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
    BYTE1(this[31].Ptr) = 1;
  std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::find<void>(
    &this[9].Ptr,
    &v37,
    (__int64 *)&v38);
  if ( v37 != this[10].Ptr )
  {
    if ( (unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v35) == 3 )
    {
      v19 = (_QWORD *)std::unordered_map<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::at(
                        &this[9],
                        &v38);
      v20 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **)std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
                                                                                            &v46,
                                                                                            v19);
      v21 = *v20;
      *v20 = v44[0];
      v44[0] = v21;
      v22 = v20[1];
      v20[1] = v44[1];
      v44[1] = v22;
      if ( v47 )
        std::_Ref_count_base::_Decref(v47);
      if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
      {
        Ptr = this[5].Ptr;
        v24 = *(void (__fastcall **)(PVOID, winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **, volatile signed __int32 **))(*(_QWORD *)Ptr + 32LL);
        winrt::hstring::hstring((winrt::hstring *)&v37, &::pvData);
        v24(Ptr, v44, &v37);
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v37);
      }
      if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
      {
        CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v25);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::GetImpl'::`2'::impl,
          1u);
        NetworkConnectivityLevel = 0;
        v41 = winrt::hstring::c_str((winrt::hstring *)&v38);
        BootToCloudModeType = CloudPCHelpers::GetBootToCloudModeType();
        LODWORD(v37) = 1;
        CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,unsigned int,unsigned short (&)[260],unsigned short const *,bool,enum CloudPCTelemetryCore::SourceOfDisconnect>(
          (int *)&v37,
          &BootToCloudModeType,
          (__int64)pvData,
          (__int64 *)&v41);
      }
    }
    else
    {
      if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode() == 1 )
      {
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_EPDA>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EPDA>::GetImpl'::`2'::impl) )
        {
          v27 = (_QWORD *)std::unordered_map<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::at(
                            &this[9],
                            &v38);
          std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v46, v27);
          if ( (unsigned int)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State(v46) == 98 )
          {
            *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::operator->(
                          &v40,
                          (__int64 *)&v41)
                     + 309) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_data_control<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((void **)&v41);
            tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)&v40);
            if ( v47 )
              std::_Ref_count_base::_Decref(v47);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v35);
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v38);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v36);
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v42);
            if ( v44[1] )
              std::_Ref_count_base::_Decref(v44[1]);
            goto LABEL_52;
          }
          if ( v47 )
            std::_Ref_count_base::_Decref(v47);
        }
        CloudPCHelpers::GetCorrelationId(pvData, (wchar_t *)L"SystemId_boot", v26);
        CloudPCTelemetryCore::W365Crash<unsigned short (&)[260]>(pvData);
      }
      else
      {
        LODWORD(v37) = 2;
        v41 = winrt::hstring::c_str((winrt::hstring *)&v38);
        v46 = winrt::hstring::c_str((winrt::hstring *)&v42);
        BootToCloudModeType = 0;
        NetworkConnectivityLevel = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCloudPCMode();
        CloudPCTelemetryCore::CPCProviderAppClose<unsigned int,int,unsigned short const *,unsigned short const *,bool &,enum CloudPCTelemetryCore::SourceOfDisconnect &>(
          &NetworkConnectivityLevel,
          &BootToCloudModeType,
          (__int64 *)&v46,
          (__int64 *)&v41);
      }
      v28 = this[5].Ptr;
      v29 = *(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)v28 + 40LL);
      v30 = std::unordered_map<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::at(
              &this[9],
              &v38);
      v29(v28, v30);
    }
    v31 = std::wstring::wstring(&v46, (__int64 *)&v38);
    std::_Hash<std::_Umap_traits<std::wstring,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>>>,0>>::_Erase<std::wstring>(
      v32,
      v31);
    std::wstring::_Tidy_deallocate((void **)&v46);
    goto LABEL_39;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v35);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v38);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v36);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v42);
  if ( v44[1] )
    std::_Ref_count_base::_Decref(v44[1]);
LABEL_52:
  tip2::test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>::~test_watcher<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>>((__int64)v45);
  wil::com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>,wil::err_returncode_policy>(&v40);
}
