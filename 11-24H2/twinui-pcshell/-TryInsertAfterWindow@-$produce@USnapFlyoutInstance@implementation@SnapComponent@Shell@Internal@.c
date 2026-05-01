/*
 * XREFs of ?TryInsertAfterWindow@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@34567@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x180239C90
 * Callers:
 *     <none>
 * Callees:
 *     ?TryInsertAfterWindow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x180239CC4 (-TryInsertAfterWindow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::TryInsertAfterWindow(
        __int64 a1,
        unsigned __int64 a2,
        _BYTE *a3)
{
  *a3 = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryInsertAfterWindow(
          (winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *)((a1 - 24) & -(__int64)(a1 != 0)),
          a2);
  return 0LL;
}
