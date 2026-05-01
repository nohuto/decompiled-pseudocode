/*
 * XREFs of ??$find@U?$find_iid_traits@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805F1874
 * Callers:
 *     ??$find@U?$find_iid_traits@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805F18CC (--$find@U-$find_iid_traits@UMeetAndChatManager@implementation@Shell@Internal@Window_ea_1805F18CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
    return (*a1 + 40LL) & -(__int64)(*a1 != 0LL);
  if ( *v1 == winrt::impl::guid_v<IImmersiveWindowMessageNotification> && v1[1] == 0xF08E2D60D77179B1uLL )
    return *a1;
  return 0LL;
}
