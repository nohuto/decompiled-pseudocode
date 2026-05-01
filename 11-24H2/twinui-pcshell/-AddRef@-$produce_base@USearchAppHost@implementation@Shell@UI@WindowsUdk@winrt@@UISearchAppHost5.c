/*
 * XREFs of ?AddRef@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost5@3456@X@impl@winrt@@UEAAIXZ @ 0x1803B74A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost5,void>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<GamingFallbackWindow,IInspectable>::AddRef((a1 - 48) & -(__int64)(a1 != 0));
}
