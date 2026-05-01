/*
 * XREFs of ?RefreshTheme@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHXZ @ 0x180605F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x180605928 (-HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJX.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::Windows::Internal::UI::Themes::IThemeCoordinator>::RefreshTheme(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *a1,
        __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  try
  {
    v2 = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicing(a1, a2);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C1,
        (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
        (const char *)(unsigned int)v2,
        v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
