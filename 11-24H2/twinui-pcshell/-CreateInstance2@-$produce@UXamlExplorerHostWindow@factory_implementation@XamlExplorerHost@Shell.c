/*
 * XREFs of ?CreateInstance2@?$produce@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindowFactory@34567@@impl@winrt@@UEAAHIURect@Foundation@Windows@3@IPEAPEAX@Z @ 0x180453DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@AEAI@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@0@Z @ 0x180116954 (--$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Wind_ea_180116954.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowFactory>::CreateInstance2(
        __int64 a1,
        unsigned int a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        unsigned int a4,
        _QWORD *a5)
{
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v9; // [rsp+30h] [rbp-18h] BYREF

  try
  {
    *a5 = 0LL;
    v9 = a4;
    v8 = a2;
    winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,unsigned int &,winrt::Windows::Foundation::Rect const &,unsigned int &>(
      &v7,
      &v8,
      a3,
      &v9);
    v5 = v7;
    v7 = 0LL;
    *a5 = v5;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
