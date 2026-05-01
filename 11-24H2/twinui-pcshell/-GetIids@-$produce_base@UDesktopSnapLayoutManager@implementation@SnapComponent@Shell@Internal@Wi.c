/*
 * XREFs of ?GetIids@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManager@34567@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805B9060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManager,void>::GetIids(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r9

  v1 = (a1 - 40) & -(__int64)(a1 != 0);
  v2 = *(_QWORD *)(v1 + 24);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(v1 + 24));
  else
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingGetIids(v1);
}
