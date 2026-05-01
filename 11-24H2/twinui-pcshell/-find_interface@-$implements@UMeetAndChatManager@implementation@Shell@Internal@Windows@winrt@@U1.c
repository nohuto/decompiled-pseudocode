/*
 * XREFs of ?find_interface@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801F9580
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UMeetAndChatManager@Shell@Internal@Windows@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@45@UIImmersiveWindowMessageNotification@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805F1928 (--$find@U-$find_iid_traits@UMeetAndChatManager@implementation@Shell@Internal@Window_ea_1805F1928.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 48;
  return winrt::impl::interface_list<winrt::Windows::Internal::Shell::MeetAndChatManager,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>(v3);
}
