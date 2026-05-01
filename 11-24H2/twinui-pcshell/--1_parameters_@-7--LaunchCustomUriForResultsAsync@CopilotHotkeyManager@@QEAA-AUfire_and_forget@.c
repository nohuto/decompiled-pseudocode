/*
 * XREFs of ??1_parameters_@?7??LaunchCustomUriForResultsAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@ULauncherOptions@System@Windows@4@@Z@QEAA@XZ @ 0x180621DBC
 * Callers:
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1 @ 0x180632B20 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1.c)
 *     _CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_InitCoro$2_::_1_::dtor$1 @ 0x180700EA7 (_CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_InitCoro$2_--_1_--dtor$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall `CopilotHotkeyManager::LaunchCustomUriForResultsAsync'::`8'::_parameters_::~_parameters_(__int64 a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 40));
  std::wstring::_Tidy_deallocate((void **)(a1 + 8));
}
