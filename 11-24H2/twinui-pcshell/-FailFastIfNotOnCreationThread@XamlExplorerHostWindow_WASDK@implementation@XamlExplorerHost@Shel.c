/*
 * XREFs of ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1804551CC
 * Callers:
 *     ??1XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180454F9C (--1XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UE.c)
 *     ?InsertAfter@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAJ_K@Z @ 0x180455240 (-InsertAfter@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows.c)
 *     ?Position@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AURect@Foundation@67@XZ @ 0x180455418 (-Position@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@wi.c)
 *     ?TryActivate@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHXZ @ 0x180455500 (-TryActivate@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Inter.c)
 *     ?XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@67@XZ @ 0x18045558C (-XamlContent@XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows.c)
 *     ?get_IsActive@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x1804556F0 (-get_IsActive@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Inte.c)
 *     ?get_IsCloaked@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180455750 (-get_IsCloaked@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Int.c)
 *     ?get_IsVisible@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180455800 (-get_IsVisible@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Int.c)
 *     ?put_IsCloaked@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAH_N@Z @ 0x180455940 (-put_IsCloaked@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Int.c)
 *     ?put_IsVisible@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAH_N@Z @ 0x1804559E0 (-put_IsVisible@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Int.c)
 *     ?put_Position@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180455A40 (-put_Position@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Inte.c)
 *     ?put_XamlContent@?$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow_WASDK@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x180455B20 (-put_XamlContent@-$produce@UXamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@I.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK::FailFastIfNotOnCreationThread(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow_WASDK *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 18) != GetCurrentThreadId() )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x160,
      (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow_WASDK.cpp",
      v1);
}
