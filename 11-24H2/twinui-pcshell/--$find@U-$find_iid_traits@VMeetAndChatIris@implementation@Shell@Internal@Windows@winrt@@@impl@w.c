/*
 * XREFs of ??$find@U?$find_iid_traits@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x18059BA10
 * Callers:
 *     ?find_interface@?$implements@VSnapLayoutProvider@@UIInspectable@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805A3E30 (-find_interface@-$implements@VSnapLayoutProvider@@UIInspectable@@@winrt@@UEBAPEAXAEBUguid@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
    return *a1;
  else
    return 0LL;
}
