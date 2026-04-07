/*
 * XREFs of ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x1800252FC
 * Callers:
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000D3F8 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180025354 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180015024 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 */

struct CBitmapSource *__fastcall CTopLevelWindow::GetAtlasImageFromTheme(void *a1)
{
  __int64 Theme; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx

  if ( a1 == *((void **)CDesktopManager::s_pDesktopManagerInstance + 70) )
    return CTopLevelWindow::s_pbsNonClientAtlas;
  if ( a1 == *((void **)CDesktopManager::s_pDesktopManagerInstance + 137) )
    return CTopLevelWindow::s_pbsTouchAtlas;
  Theme = CDesktopManager::GetTheme(2);
  v3 = 0LL;
  if ( v4 == Theme )
    return CTopLevelWindow::s_pbsPenAtlas;
  return (struct CBitmapSource *)v3;
}
