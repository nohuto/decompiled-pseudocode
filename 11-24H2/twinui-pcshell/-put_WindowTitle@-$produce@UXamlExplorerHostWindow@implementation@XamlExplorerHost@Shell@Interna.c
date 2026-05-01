/*
 * XREFs of ?put_WindowTitle@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x1802174A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::put_WindowTitle(
        __int64 a1,
        __int64 a2)
{
  const WCHAR *v3; // rdx
  __int64 v4; // rcx

  if ( a2 )
    v3 = *(const WCHAR **)(a2 + 16);
  else
    v3 = &pvData;
  v4 = a1 + 32;
  if ( !a1 )
    v4 = 40LL;
  SetWindowTextW(*(HWND *)v4, v3);
  return 0LL;
}
