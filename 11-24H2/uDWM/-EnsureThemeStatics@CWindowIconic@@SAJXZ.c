/*
 * XREFs of ?EnsureThemeStatics@CWindowIconic@@SAJXZ @ 0x18000B4A4
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18000A10C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180015024 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180024118 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 CWindowIconic::EnsureThemeStatics(void)
{
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  unsigned int v2; // ebx

  Theme = (void *)CDesktopManager::GetTheme(0LL);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 58,
                                 0x12u,
                                 0LL,
                                 (__int64)&CWindowIconic::s_rgpBitmapPendingImages);
  v2 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapsFromAtlasImageStrip, 0x340u, 0LL);
  return v2;
}
