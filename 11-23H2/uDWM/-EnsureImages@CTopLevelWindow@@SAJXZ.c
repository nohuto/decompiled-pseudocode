/*
 * XREFs of ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800532CC
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18001ED90 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x18001F940 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180037F44 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800395C0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180039D60 (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800523C4 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180052AB0 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x180053538 (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 CTopLevelWindow::EnsureImages(void)
{
  unsigned int v0; // ebx
  void *Theme; // rdi
  void *v2; // rbp
  void *v3; // r14
  HINSTANCE v4; // rsi
  int NCAreaHelper; // eax
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  volatile signed __int32 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned int iPropId; // [rsp+20h] [rbp-58h]
  CBaseObject *v15; // [rsp+40h] [rbp-38h] BYREF
  MARGINS pMargins; // [rsp+48h] [rbp-30h] BYREF

  v0 = 0;
  if ( dword_1801487A8 )
    return v0;
  Theme = (void *)CDesktopManager::GetTheme(0);
  v2 = (void *)CDesktopManager::GetTheme(1);
  v3 = (void *)CDesktopManager::GetTheme(2);
  v4 = (HINSTANCE)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 70);
  NCAreaHelper = CTopLevelWindow::EnsureWindowFrames();
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 745;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NCAreaHelper, iPropId, 0LL);
    return v0;
  }
  NCAreaHelper = CBitmapSource::Create(v4, Theme, v6, &CTopLevelWindow::s_pbsNonClientAtlas);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 752;
    goto LABEL_21;
  }
  NCAreaHelper = CBitmapSource::Create(v4, v2, v7, &CTopLevelWindow::s_pbsTouchAtlas);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 759;
    goto LABEL_21;
  }
  NCAreaHelper = CBitmapSource::Create(v4, v3, v8, &CTopLevelWindow::s_pbsPenAtlas);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 766;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_18011D950,
                   (int *)&dword_18011E6F8,
                   *(struct CTopLevelWindow::WindowFrame **)CTopLevelWindow::s_rgpwfWindowFrames,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8));
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 813;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_18011D9B0,
                   (int *)&dword_18011DA08,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 16),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 24));
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 857;
    goto LABEL_21;
  }
  CTopLevelWindow::ReadSystemColors();
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_18011D8F0,
                   (int *)&dword_18011E6F8,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 40));
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 898;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::CreateGlyphsFromAtlas(Theme);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 901;
    goto LABEL_21;
  }
  NCAreaHelper = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(Theme, 45, 1u, &pMargins, &v15);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 907;
    goto LABEL_21;
  }
  NCAreaHelper = GetThemeMargins(Theme, 0LL, 45, 0, 3602, 0LL, &pMargins);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 912;
    goto LABEL_21;
  }
  v9 = (volatile signed __int32 *)v15;
  v10 = 6LL;
  v11 = 0LL;
  *((MARGINS *)v15 + 3) = pMargins;
  do
  {
    v12 = *(_QWORD *)(v11 + CTopLevelWindow::s_rgpwfWindowFrames);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 1840) = v9;
      _InterlockedIncrement(v9 + 2);
      *(_DWORD *)(*(_QWORD *)(v11 + CTopLevelWindow::s_rgpwfWindowFrames) + 1864LL) = 0;
      v9 = (volatile signed __int32 *)v15;
    }
    v11 += 8LL;
    --v10;
  }
  while ( v10 );
  CBaseObject::Release((CBaseObject *)v9);
  return v0;
}
