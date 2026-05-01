/*
 * XREFs of ??$find@U?$find_iid_traits@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UMeetAndChatManager@Shell@Internal@Windows@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@45@UIImmersiveWindowMessageNotification@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805F1928
 * Callers:
 *     ?find_interface@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801F9580 (-find_interface@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::MeetAndChatManager,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IMeetAndChatManager>
    && v1[1] == 0xFF13E5D0F872BF86uLL )
  {
    v2 = *a1;
    v3 = *a1 + 8;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IObjectWithSite> && v1[1] == 0x52733D00AA0029A2LL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>(a1);
}
