/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal_::_55_::_parameters_::__parameters_ @ 0x18034759C
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_InitCoro$2_::_1_::dtor$1 @ 0x1806E2CB9 (_GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_InitCoro$2_--_1_--dtor$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal_::_55_::_parameters_::__parameters_(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 8));
}
