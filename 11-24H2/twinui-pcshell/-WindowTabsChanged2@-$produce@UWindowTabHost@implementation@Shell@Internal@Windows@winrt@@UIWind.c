/*
 * XREFs of ?WindowTabsChanged2@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x1801CF1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_token@6@@Z @ 0x1801CF1D4 (-WindowTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUevent_tok.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::WindowTabsChanged2(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabsChanged(
    (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((a1 - 32) & -(__int64)(a1 != 0)),
    (const struct winrt::event_token *)&v3);
  return 0LL;
}
