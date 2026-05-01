/*
 * XREFs of winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_InitCoro$2 @ 0x1802746AC
 * Callers:
 *     ?ShowFlyoutAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@7@XZ @ 0x1802218E4 (-ShowFlyoutAsync@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_ResumeCoro$1 @ 0x180274700 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_180274700.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 161) = a4;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 160) = 0;
  return winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync__ResumeCoro_1(a2);
}
