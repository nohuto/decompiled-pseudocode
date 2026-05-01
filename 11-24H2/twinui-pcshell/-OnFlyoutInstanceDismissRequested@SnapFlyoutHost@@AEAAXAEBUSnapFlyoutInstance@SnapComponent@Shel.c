/*
 * XREFs of ?OnFlyoutInstanceDismissRequested@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1805B3680
 * Callers:
 *     <none>
 * Callees:
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1800B6CBC (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 */

void __fastcall SnapFlyoutHost::OnFlyoutInstanceDismissRequested(
        SnapFlyoutHost *this,
        const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *a2)
{
  char v2; // [rsp+40h] [rbp+18h] BYREF

  SnapFlyoutHost::HideAsync((__int64)this, (__int64)&v2, 1);
}
