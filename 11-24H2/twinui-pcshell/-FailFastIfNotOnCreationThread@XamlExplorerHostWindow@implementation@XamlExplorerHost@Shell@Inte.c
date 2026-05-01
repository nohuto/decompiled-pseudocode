/*
 * XREFs of ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800C656C
 * Callers:
 *     ?TryActivate@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1800A3E2C (-TryActivate@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt.c)
 *     ?get_IsVisible@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800C5E20 (-get_IsVisible@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 *     ?put_IsVisible@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAH_N@Z @ 0x1800C5FF0 (-put_IsVisible@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 *     ?XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x1800C60A0 (-XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt.c)
 *     ?put_Position@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x1800C6460 (-put_Position@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ?put_IsCloaked@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAH_N@Z @ 0x1800C64D0 (-put_IsCloaked@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 *     ?InsertAfter@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAJ_K@Z @ 0x1800C66E0 (-InsertAfter@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt.c)
 *     ??1XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800C6D34 (--1XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@67@XZ @ 0x1802A1FF8 (-XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@_ea_1802A1FF8.c)
 *     ?Position@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AURect@Foundation@67@XZ @ 0x180454138 (-Position@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@Q.c)
 *     ?get_IsActive@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x1804543A0 (-get_IsActive@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ?get_IsCloaked@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180454400 (-get_IsCloaked@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::FailFastIfNotOnCreationThread(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 16) != GetCurrentThreadId() )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17C,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
      v1);
}
