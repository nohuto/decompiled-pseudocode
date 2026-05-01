/*
 * XREFs of ?StartTrackingProcess@?$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@@impl@winrt@@UEAAHI@Z @ 0x1806608A0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartTrackingProcess@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x1806608CC (-StartTrackingProcess@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTracker>::StartTrackingProcess(
        __int64 a1,
        unsigned int a2)
{
  winrt::Windows::Internal::Shell::implementation::ProcessTracker::StartTrackingProcess(
    (winrt::Windows::Internal::Shell::implementation::ProcessTracker *)((a1 - 16) & -(__int64)(a1 != 0)),
    a2);
  return 0LL;
}
