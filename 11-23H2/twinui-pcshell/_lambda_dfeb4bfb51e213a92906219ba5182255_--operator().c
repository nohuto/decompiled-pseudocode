/*
 * XREFs of _lambda_dfeb4bfb51e213a92906219ba5182255_::operator() @ 0x18012C358
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_dfeb4bfb51e213a92906219ba5182255__&_::Run @ 0x1801BF720 (wil--details--functor_wrapper_void__lambda_dfeb4bfb51e213a92906219ba5182255__-_--Run.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAXXZ @ 0x18012C5C8 (-revoke@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShell.c)
 *     ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAAXXZ @ 0x18012C638 (-revoke@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@_ea_18012C638.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 */

void __fastcall lambda_dfeb4bfb51e213a92906219ba5182255_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+10h] BYREF

  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAXXZ(*a1 + 408);
  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAAXXZ(*a1 + 424);
  v2 = *a1;
  v6 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(v2 + 400, &v6);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAXXZ(*a1 + 448);
  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAAXXZ(*a1 + 464);
  v3 = *a1;
  v6 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(v3 + 440, &v6);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    v4);
  v5 = *a1;
  v6 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(v5 + 480, &v6);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
}
