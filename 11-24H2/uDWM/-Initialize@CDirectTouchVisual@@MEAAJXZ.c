/*
 * XREFs of ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x18000C390
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800125FC (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 * Callees:
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180006C2C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x18000C560 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000D3F8 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180015024 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::Initialize(struct tagSIZE *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *Theme; // rax
  struct CBitmapSource **v5; // r9
  int v6; // eax
  int BitmapFromAtlas; // eax
  struct CVisual **v9; // rsi
  int v10; // eax
  bool v11; // r8
  int v12; // eax

  v2 = CTouchVisual::Initialize((CTouchVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x25u, 0LL);
    return v3;
  }
  Theme = (void *)CDesktopManager::GetTheme(1LL);
  v5 = (struct CBitmapSource **)&this[47];
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20) + 324LL) )
  {
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 7, 0LL, v5);
    v3 = BitmapFromAtlas;
    if ( BitmapFromAtlas < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapFromAtlas, 0x2Bu, 0LL);
      return v3;
    }
  }
  else
  {
    v6 = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v5);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2Fu, 0LL);
      return v3;
    }
  }
  v9 = (struct CVisual **)&this[46];
  this[35] = *(struct tagSIZE *)(*(_QWORD *)&this[47] + 24LL);
  LOBYTE(this[45].cx) = 0;
  this[38].cx = 0;
  this[38].cy = 1065353216;
  this[39].cx = 1065353216;
  this[39].cy = 1068708659;
  this[40].cx = 1067030938;
  this[37].cy = 1033476506;
  this[40].cy = 1028443341;
  this[36].cx = 1040522936;
  this[36].cy = 1061481551;
  this[37].cx = 1047285445;
  v10 = CImage::Create((struct CImage **)&this[46]);
  v3 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x43u, 0LL);
  }
  else
  {
    v12 = CContainerVisual::AddChild((CContainerVisual *)this, *v9, v11);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x44u, 0LL);
    }
    else
    {
      CVisual::SetSize(*v9, this + 35);
      this[42] = 0LL;
      this[43] = 0LL;
      this[44] = 0LL;
      LOBYTE(this[30].cx) = 0;
    }
  }
  return v3;
}
