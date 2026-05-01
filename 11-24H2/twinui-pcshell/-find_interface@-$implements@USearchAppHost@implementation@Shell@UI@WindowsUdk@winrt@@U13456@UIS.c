/*
 * XREFs of ?find_interface@?$implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppHost2@3456@UISearchAppHost3@3456@UISearchAppHost4@3456@UISearchAppHost5@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1803C39C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@@?$interface_list@UISearchAppHost2@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@2345@UISearchAppHost4@2345@UISearchAppHost5@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@12@@Z @ 0x1803B0A34 (--$find@U-$find_iid_traits@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@.c)
 */

__int64 __fastcall winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // zf
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2 == winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost>;
  v5[0] = a1;
  v5[1] = (__int64)a2;
  if ( v2 && a2[1] == 0x78C31502010C9B4LL )
    return (a1 + 16) & -(__int64)(a1 != 0);
  else
    return winrt::impl::interface_list<winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::find<winrt::impl::find_iid_traits<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost>>(v5);
}
