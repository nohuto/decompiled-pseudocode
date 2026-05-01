/*
 * XREFs of ?perform_delayed_initialization@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXXZ @ 0x180606C80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandlePackageServicingAsync@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x180605940 (-HandlePackageServicingAsync@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@A.c)
 */

void __fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::perform_delayed_initialization(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::HandlePackageServicingAsync((winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *)((char *)this - 32));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x155,
      (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
      (const char *)(unsigned int)v1);
}
