/*
 * XREFs of ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18035AAC4
 * Callers:
 *     wistd::__function::__func__lambda_cbfe54d5ecbd66e4649f9f6009d53b91__void___cdecl(void)_::operator() @ 0x18034AF00 (wistd--__function--__func__lambda_cbfe54d5ecbd66e4649f9f6009d53b91__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$swap@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$0A@@std@@YAXAEAUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@0@Z @ 0x18022A4FC (--$swap@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$0A@@std@@YAXAEAUIUINavigati.c)
 *     ??$?0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@34@@Z@?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@PEAVGamingOverlayExperienceManager@@P84@EAAXUIInspectable@123@AEBUUINavigationController@Input@Gaming@23@@Z@Z @ 0x18022C480 (--$-0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavi.c)
 *     ??1?$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x18022D580 (--1-$factory_event_revoker@UIRemoteSystemDataModelStatics@Shell@Internal@Windows@winrt@@$MP8type.c)
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18023E5D8 (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x18023E718 (-RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18023ECB4 (-StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ??1?$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@?$abi@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x1802A8EB0 (--1-$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@W4GameBarFseWarmLaunchKind@@@Z @ 0x18034D73C (-GameBarFseWarmLaunch@GamingOverlayExperienceManager@@AEAA-AUfire_and_forget@winrt@@W4GameBarFse.c)
 *     ?Instance@?$singleton_with_factory@UNexusPolicyManager@@U?$singleton_initialize_factory@UNexusPolicyManager@@@xblib@@@xblib@@SA?AV?$shared_ptr@UNexusPolicyManager@@@std@@XZ @ 0x180351CFC (-Instance@-$singleton_with_factory@UNexusPolicyManager@@U-$singleton_initialize_factory@UNexusPo.c)
 *     ?UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_t@5@AEBU?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@45@@Z @ 0x18035CC34 (-UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_.c)
 *     ?UINavigationControllerRemoved@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revoke_t@5@AEBU?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@45@@Z @ 0x18035CCF0 (-UINavigationControllerRemoved@UINavigationController@Input@Gaming@Windows@winrt@@SA@Uauto_revok.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x18035FEC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprove_ea_18035FEC0.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GamingOverlayExperienceManager::ShellReadyCallback(GamingOverlayExperienceManager *this)
{
  __int64 *v2; // rax
  int started; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rcx
  std::_Ref_count_base *v11; // rax
  std::_Ref_count_base *v12[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-20h] BYREF
  __time64_t Time; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
  {
    v2 = xblib::singleton_with_factory<NexusPolicyManager,xblib::singleton_initialize_factory<NexusPolicyManager>>::Instance((__int64 *)v12);
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 130, v2);
    if ( v12[1] )
      std::_Ref_count_base::_Decref(v12[1]);
    if ( (unsigned int)IsGamingFullScreenExperienceActive() )
      GamingOverlayExperienceManager::GameBarFseWarmLaunch((__int64)this, v13, 0);
  }
  GamingOverlayExperienceManager::RegisterGameBarRegistryChangedEvent(this);
  GamingOverlayExperienceManager::RegisterGameDvrRegistryChangedEvent(this);
  started = GamingOverlayExperienceManager::StartXusbDeviceMonitoring(this);
  if ( started < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1242,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)started);
  if ( !*((_QWORD *)this + 209) )
  {
    v12[0] = (std::_Ref_count_base *)GamingOverlayExperienceManager::OnUINavigationControllerAdded;
    LODWORD(v12[1]) = 0;
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>(
      (__int64)&v14,
      (__int64)this,
      v12);
    v5 = winrt::Windows::Gaming::Input::UINavigationController::UINavigationControllerAdded(&v15, v4, &v14);
    v6 = *(std::_Ref_count_base **)v5;
    *(_QWORD *)v5 = 0LL;
    v12[0] = v6;
    v12[1] = *(std::_Ref_count_base **)(v5 + 8);
    std::swap<winrt::Windows::Gaming::Input::IUINavigationControllerStatics,0>((__int64 *)v12, (__int64 *)this + 209);
    v7 = v12[1];
    v12[1] = *((std::_Ref_count_base **)this + 210);
    *((_QWORD *)this + 210) = v7;
    __1__factory_event_revoker_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt___MP8type___abi_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v12);
    __1__factory_event_revoker_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt___MP8type___abi_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
    if ( v14 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
  }
  if ( !*((_QWORD *)this + 211) )
  {
    v12[0] = (std::_Ref_count_base *)GamingOverlayExperienceManager::OnUINavigationControllerRemoved;
    LODWORD(v12[1]) = 0;
    v15 = *(_OWORD *)v12;
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>(
      (__int64)&v14,
      (__int64)this,
      &v15);
    v9 = winrt::Windows::Gaming::Input::UINavigationController::UINavigationControllerRemoved(v16, v8, &v14);
    v10 = *(std::_Ref_count_base **)v9;
    *(_QWORD *)v9 = 0LL;
    v12[0] = v10;
    v12[1] = *(std::_Ref_count_base **)(v9 + 8);
    std::swap<winrt::Windows::Gaming::Input::IUINavigationControllerStatics,0>((__int64 *)v12, (__int64 *)this + 211);
    v11 = v12[1];
    v12[1] = *((std::_Ref_count_base **)this + 212);
    *((_QWORD *)this + 212) = v11;
    __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v12);
    __1__factory_event_revoker_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt___MP8type___abi_UIRemoteSystemDataModelStatics_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v16);
    if ( v14 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
  }
  Time = 0LL;
  _time64(&Time);
  *((_QWORD *)this + 208) = Time;
}
