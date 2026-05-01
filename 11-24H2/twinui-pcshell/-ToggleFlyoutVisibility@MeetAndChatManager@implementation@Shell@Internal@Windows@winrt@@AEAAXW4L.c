/*
 * XREFs of ?ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F6F30
 * Callers:
 *     ?OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x18021ADB0 (-OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F3C08 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1805F4850 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F5FBC (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ToggleFlyoutVisibility(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *a1)
{
  RTL_SRWLOCK v2; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v3; // [rsp+28h] [rbp-10h]
  __int64 *v4; // [rsp+50h] [rbp+18h] BYREF

  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView((__int64)a1, &v2);
  if ( (**(unsigned __int8 (__fastcall ***)(PVOID))v2.Ptr)(v2.Ptr) )
  {
    winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::HideMACFlyout(a1, 0LL);
  }
  else
  {
    v4 = 0LL;
    winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout((RTL_SRWLOCK *)a1, &v4, 2u);
  }
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
