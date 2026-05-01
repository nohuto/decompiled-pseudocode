/*
 * XREFs of _anonymous_namespace_::GetLogoTileTheme @ 0x1805E6490
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805EB0BC (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     ?Current@SystemVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ @ 0x180117264 (-Current@SystemVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ.c)
 */

__int64 __fastcall anonymous_namespace_::GetLogoTileTheme(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  v1 = winrt::WindowsUdk::UI::Themes::SystemVisualTheme::Current(a1);
  if ( !v1 )
    return 3LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 4LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 1LL;
  if ( v3 == 1 )
    return 2LL;
  return 0LL;
}
