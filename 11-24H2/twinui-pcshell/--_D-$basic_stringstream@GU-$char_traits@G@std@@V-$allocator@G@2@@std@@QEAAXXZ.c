/*
 * XREFs of ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800C5864
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180275210 (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 *     ??_E?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x18031C37C (--_E-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x180411CC8 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     ?GetKeyPathForHwnd@Util@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@Z @ 0x18064C9B0 (-GetKeyPathForHwnd@Util@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_J@Z.c)
 *     __anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion_::_1_::dtor$2 @ 0x1806D0A4B (__anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion_--_1_--dtor$2.c)
 *     _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$7 @ 0x1806E2E5F (_GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1_--_1_--dtor$7.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$9 @ 0x1806E8247 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$9.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::GetInvokeTypeFromContextAndAnimationProperties_::_1_::dtor$4 @ 0x1806FA18A (_winrt--Windows--Internal--Shell--implementation--DashboardManager--GetInvokeTypeFr_ea_1806FA18A.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::GetInvokeTypeFromContextAndAnimationProperties_::_1_::dtor$7 @ 0x1806FA1AE (_winrt--Windows--Internal--Shell--implementation--DashboardManager--GetInvokeTypeFr_ea_1806FA1AE.c)
 *     _Util::GetKeyPathForHwnd_::_1_::dtor$0 @ 0x180701F95 (_Util--GetKeyPathForHwnd_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1800C5894 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbase destructor'(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 152;
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(a1 + 152);
  return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v1);
}
