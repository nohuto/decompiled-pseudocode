/*
 * XREFs of ?get_IsCloaked@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180454400
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800C656C (-FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Inte.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::get_IsCloaked(
        unsigned __int64 a1,
        bool *a2)
{
  HWND *v3; // rbx
  HRESULT WindowAttribute; // eax
  __int64 result; // rax
  int pvAttribute; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (HWND *)((a1 - 8) & ((unsigned __int128)-(__int128)a1 >> 64));
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::FailFastIfNotOnCreationThread((winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *)v3);
  pvAttribute = 0;
  WindowAttribute = DwmGetWindowAttribute(v3[5], 0xEu, &pvAttribute, 4u);
  try
  {
    if ( WindowAttribute < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x112,
        (int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlExplorerHostIslandWindow.cpp",
        (const char *)(unsigned int)WindowAttribute,
        pvAttribute);
    *a2 = pvAttribute != 0;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&pvAttribute);
  }
  return result;
}
