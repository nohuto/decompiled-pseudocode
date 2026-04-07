/*
 * XREFs of ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x18003A080
 * Callers:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800395C0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180039D60 (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18005296C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180037F44 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 */

struct CBitmapSource *__fastcall CTopLevelWindow::GetAtlasImageFromTheme(void *a1)
{
  __int64 Theme; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx

  if ( a1 == *((void **)CDesktopManager::s_pDesktopManagerInstance + 69) )
    return CTopLevelWindow::s_pbsNonClientAtlas;
  Theme = CDesktopManager::GetTheme(1);
  if ( v3 == Theme )
    return CTopLevelWindow::s_pbsTouchAtlas;
  v4 = CDesktopManager::GetTheme(2);
  v5 = 0LL;
  if ( v6 == v4 )
    return CTopLevelWindow::s_pbsPenAtlas;
  return (struct CBitmapSource *)v5;
}
