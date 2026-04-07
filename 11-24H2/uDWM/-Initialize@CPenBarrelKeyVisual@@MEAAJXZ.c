/*
 * XREFs of ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x180086150
 * Callers:
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x18000D574 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z.c)
 * Callees:
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180006C2C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x18000C560 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000D3F8 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180015024 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::Initialize(CPenBarrelKeyVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  struct CVisual **v6; // rsi
  CDesktopManager *v7; // rax
  int v8; // eax
  int v9; // eax

  v2 = CTouchVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x30u, 0LL);
  }
  else
  {
    Theme = (void *)CDesktopManager::GetTheme(2);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 1, 0LL, (struct CBitmapSource **)this + 34);
    v3 = BitmapFromAtlas;
    if ( BitmapFromAtlas < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x33u, 0LL);
    }
    else
    {
      v6 = (struct CVisual **)((char *)this + 280);
      v7 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)this + 36) = *(_QWORD *)(*((_QWORD *)this + 34) + 24LL);
      *((_DWORD *)this + 74) = (int)(*((double *)v7 + 52) * 20.0);
      v8 = CImage::Create((struct CImage **)this + 35);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x39u, 0LL);
      }
      else
      {
        v9 = CContainerVisual::AddChild(this, *v6);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x3Au, 0LL);
        else
          CVisual::SetSize(*v6, (const struct tagSIZE *)this + 36);
      }
    }
  }
  return v3;
}
