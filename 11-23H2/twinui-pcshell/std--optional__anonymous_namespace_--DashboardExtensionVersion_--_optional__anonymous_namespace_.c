/*
 * XREFs of std::optional__anonymous_namespace_::DashboardExtensionVersion_::_optional__anonymous_namespace_::DashboardExtensionVersion_ @ 0x1801B3A48
 * Callers:
 *     _lambda_5ac696817d9ead6e33159563da3f5a7c_::operator() @ 0x1802364C4 (_lambda_5ac696817d9ead6e33159563da3f5a7c_--operator().c)
 *     __lambda_5ac696817d9ead6e33159563da3f5a7c_::operator()_::_1_::dtor$2 @ 0x180236723 (__lambda_5ac696817d9ead6e33159563da3f5a7c_--operator()_--_1_--dtor$2.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1802389D0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1_::_1_::dtor$10 @ 0x180238F0D (_winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboar_ea_180238F0D.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180242E90 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1_::_1_::dtor$14 @ 0x180243983 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAs_ea_180243983.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1802464C0 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTe_ea_1802464C0.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x180246F10 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActiva_ea_180246F10.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibility_::_1_::dtor$4 @ 0x1802C0126 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboard_ea_1802C0126.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionPresent_::_1_::dtor$0 @ 0x1802C065A (_winrt--Windows--Internal--Shell--implementation--DashboardManager--IsDashboardExte_ea_1802C065A.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardExtensionVersionPresent_::_1_::dtor$0 @ 0x180697253 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--IsDashboardExtensionVersionP.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x1801C5F74 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 */

__int64 __fastcall std::optional__anonymous_namespace_::DashboardExtensionVersion_::_optional__anonymous_namespace_::DashboardExtensionVersion_(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 56) )
  {
    std::wstring::_Tidy_deallocate(a1 + 24);
    return std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(a1);
  }
  return result;
}
