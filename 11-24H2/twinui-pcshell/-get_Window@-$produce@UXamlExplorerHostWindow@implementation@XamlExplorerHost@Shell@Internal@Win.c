/*
 * XREFs of ?get_Window@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEA_K@Z @ 0x1804544F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::get_Window(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 32;
  if ( !a1 )
    v2 = 40LL;
  *a2 = *(_QWORD *)v2;
  return 0LL;
}
