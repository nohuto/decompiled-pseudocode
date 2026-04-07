/*
 * XREFs of ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800CA440
 * Callers:
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800B6440 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 * Callees:
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180006C2C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x18000C560 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000D3F8 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x18000F8A8 (-GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180015024 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 */

__int64 __fastcall CPressTapVisual::Initialize(struct tagSIZE *this)
{
  int v2; // eax
  unsigned int v3; // esi
  void *Theme; // rax
  struct CBitmapSource **v5; // r9
  int BitmapFromAtlas; // eax
  int MinimumContactWidth; // eax
  struct CVisual **v8; // r15
  int v9; // eax
  struct CVisual **v10; // r14
  int v11; // eax

  v2 = CTouchVisual::Initialize((CTouchVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x22u, 0LL);
  }
  else
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v5);
    v3 = BitmapFromAtlas;
    if ( BitmapFromAtlas < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x25u, 0LL);
    }
    else
    {
      this[43].cy = 0;
      this[44].cx = 0;
      this[45] = 0LL;
      this[41].cy = 1067030938;
      this[42].cx = 1072064102;
      this[42].cy = 1065353216;
      this[43].cx = 1067869798;
      this[44].cy = 150;
      this[40].cx = 1050253722;
      this[40].cy = 1059760811;
      this[41].cx = 1051372203;
      LOBYTE(this[30].cx) = 0;
      MinimumContactWidth = CContactManager::GetMinimumContactWidth(0LL);
      v8 = (struct CVisual **)&this[38];
      this[37].cy = MinimumContactWidth;
      this[36].cy = MinimumContactWidth;
      this[37].cx = MinimumContactWidth;
      this[36].cx = MinimumContactWidth;
      v9 = CImage::Create((struct CImage **)&this[38]);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x43u, 0LL);
      }
      else
      {
        v10 = (struct CVisual **)&this[39];
        v11 = CImage::Create((struct CImage **)&this[39]);
        v3 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x44u, 0LL);
        }
        else
        {
          CContainerVisual::AddChild((CContainerVisual *)this, *v8);
          CContainerVisual::AddChild((CContainerVisual *)this, *v10);
          CVisual::SetSize(*v8, this + 36);
          CVisual::SetSize(*v10, this + 37);
        }
      }
    }
  }
  return v3;
}
