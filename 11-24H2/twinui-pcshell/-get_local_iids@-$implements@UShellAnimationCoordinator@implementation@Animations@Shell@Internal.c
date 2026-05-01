/*
 * XREFs of ?get_local_iids@?$implements@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x18069A5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>;
  return a2;
}
