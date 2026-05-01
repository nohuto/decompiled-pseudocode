/*
 * XREFs of ??$find@U?$find_iid_traits@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@@?$interface_list@UISearchAppHost2@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@2345@UISearchAppHost4@2345@UISearchAppHost5@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@12@@Z @ 0x1803B0A34
 * Callers:
 *     ?find_interface@?$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@UISearchAppHost5@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1803C39C0 (-find_interface@-$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UIS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::find<winrt::impl::find_iid_traits<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost2> && v1[1] == 0xE41874A3F517A48FuLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost3> && v1[1] == 0xF0A52AAE22A9ECBCuLL )
  {
    v2 = *a1;
    v3 = *a1 + 32;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::find<winrt::impl::find_iid_traits<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost>>();
}
