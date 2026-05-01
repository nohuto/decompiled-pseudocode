/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_InitCoro$2 @ 0x18061A3FC
 * Callers:
 *     ?InitializeAsync@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@PEAUIServiceProvider@@@Z @ 0x18061A830 (-InitializeAsync@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18061A460 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  *(_QWORD *)(a2 + 129) = a5;
  *(_QWORD *)(a2 + 137) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 128) = 0;
  return winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync__ResumeCoro_1(a2);
}
