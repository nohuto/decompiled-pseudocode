/*
 * XREFs of ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18000A684
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18000A10C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18000AA30 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x18000ABEC (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z.c)
 *     ?ReleaseDecoderCopyBuffers@CBitmapSource@@QEAA_NXZ @ 0x18000B428 (-ReleaseDecoderCopyBuffers@CBitmapSource@@QEAA_NXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x18000B530 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18000C56C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x1800238B4 (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180025354 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 CTopLevelWindow::EnsureImages(void)
{
  unsigned int v0; // ebx
  void *v1; // rdi
  void *v2; // rbp
  void *v3; // r14
  HINSTANCE v4; // rsi
  HRESULT NCAreaHelper; // eax
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v10; // eax
  CMILRefCountBase *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int iPropId; // [rsp+20h] [rbp-58h]
  CMILRefCountBase *v16; // [rsp+40h] [rbp-38h] BYREF
  MARGINS pMargins; // [rsp+48h] [rbp-30h] BYREF

  v0 = 0;
  if ( !dword_180126AE0 )
  {
    v1 = (void *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 70);
    v2 = (void *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 137);
    v3 = (void *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 138);
    v4 = (HINSTANCE)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 136);
    NCAreaHelper = CTopLevelWindow::EnsureWindowFrames();
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 770;
      goto LABEL_8;
    }
    NCAreaHelper = CBitmapSource::Create(v4, v1, v6, &CTopLevelWindow::s_pbsNonClientAtlas);
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 777;
      goto LABEL_8;
    }
    NCAreaHelper = CBitmapSource::Create(v4, v2, v7, &CTopLevelWindow::s_pbsTouchAtlas);
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 784;
      goto LABEL_8;
    }
    NCAreaHelper = CBitmapSource::Create(v4, v3, v8, &CTopLevelWindow::s_pbsPenAtlas);
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 791;
      goto LABEL_8;
    }
    CBitmapSource::ReleaseDecoderCopyBuffers(CTopLevelWindow::s_pbsTouchAtlas);
    CBitmapSource::ReleaseDecoderCopyBuffers(CTopLevelWindow::s_pbsPenAtlas);
    NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                     v1,
                     &dword_180105510,
                     &dword_1801063D0,
                     *(struct CTopLevelWindow::WindowFrame **)CTopLevelWindow::s_rgpwfWindowFrames,
                     *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8));
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 843;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NCAreaHelper, iPropId, 0LL);
      return v0;
    }
    NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                     v1,
                     &dword_1801055D0,
                     &dword_180105628,
                     *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 16),
                     *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 24));
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 887;
      goto LABEL_8;
    }
    CTopLevelWindow::ReadSystemColors();
    NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                     v1,
                     &dword_1801063E0,
                     &dword_1801063D0,
                     *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32),
                     *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 40));
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 928;
      goto LABEL_8;
    }
    NCAreaHelper = CTopLevelWindow::CreateGlyphsFromAtlas(v1);
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 931;
      goto LABEL_8;
    }
    v16 = 0LL;
    pMargins = 0LL;
    v10 = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v1, 45, 1u, &pMargins, &v16);
    v0 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x3A9u, 0LL);
      return v0;
    }
    NCAreaHelper = GetThemeMargins(v1, 0LL, 45, 0, 3602, 0LL, &pMargins);
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 942;
      goto LABEL_8;
    }
    v11 = v16;
    v12 = 0LL;
    v13 = 6LL;
    *((MARGINS *)v16 + 3) = pMargins;
    do
    {
      v14 = *(_QWORD *)(v12 + CTopLevelWindow::s_rgpwfWindowFrames);
      if ( v14 )
      {
        *(_QWORD *)(v14 + 1840) = v11;
        CMILRefCountBase::AddRef(v11);
      }
      v12 += 8LL;
      --v13;
    }
    while ( v13 );
    CBaseObject::Release(v11);
  }
  return v0;
}
