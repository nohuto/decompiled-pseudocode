/*
 * XREFs of ?Release@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@X@impl@winrt@@UEAAIXZ @ 0x18029F1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension,void>::Release(
        __int64 a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rdx

  v1 = (_QWORD *)((a1 - 48) & -(__int64)(a1 != 0));
  v2 = v1[3];
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(v1[3]);
  else
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingRelease(v1);
}
