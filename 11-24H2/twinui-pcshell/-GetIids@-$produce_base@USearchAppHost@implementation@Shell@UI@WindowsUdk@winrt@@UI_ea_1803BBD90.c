/*
 * XREFs of ?GetIids@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost4@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1803BBD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,void>::GetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  return winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::GetIids(
           (a1 - 40) & -(__int64)(a1 != 0),
           a2,
           a3);
}
