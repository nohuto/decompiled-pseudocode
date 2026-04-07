/*
 * XREFs of ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18002CD2C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??$?8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@0@$$T@Z @ 0x18000AEF0 (--$-8VCCachedBorderBrush@CWindowBorder@@@std@@YA_NAEBV-$shared_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18002CC00 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18002CF20 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ @ 0x18002CF50 (-GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA-AW4SYSTEMBACKDROP_TYPE@@XZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002EFAC (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z @ 0x180034870 (-Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z.c)
 *     ?UpdateBrush@CSystemBackdropVisual@@QEAAJ_N0000@Z @ 0x180034C44 (-UpdateBrush@CSystemBackdropVisual@@QEAAJ_N0000@Z.c)
 *     ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x180077248 (-EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x180095130 (-ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateSystemBackdropVisual(CWindowBackgroundTreatmentVisual **this)
{
  struct CVisual **v2; // rbx
  int inserted; // esi
  bool IsHighContrastMode; // al
  __int64 v6; // r9
  bool v7; // r8
  int updated; // eax
  unsigned int v9; // ebx
  unsigned int EffectiveSystemBackdropType; // esi
  CBaseObject **v11; // rcx
  __int64 v12; // rdx
  CVisual *v13; // rcx
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+20h] [rbp-28h]
  struct _MARGINS v16; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)(*((_DWORD *)this + 200) - 2) <= 2 )
  {
    EffectiveSystemBackdropType = CTopLevelWindow::GetEffectiveSystemBackdropType(this);
    if ( EffectiveSystemBackdropType == 3 )
      CWindowBackgroundTreatmentVisual::EnableTreatment(this[27]);
    v2 = this + 35;
    if ( std::operator==<CWindowBorder::CCachedBorderBrush>(this + 35) )
    {
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v11);
      inserted = CSystemBackdropVisual::Create(EffectiveSystemBackdropType, this + 35);
      if ( inserted < 0 )
      {
        v12 = 343LL;
        goto LABEL_17;
      }
      inserted = CContainerVisual::InsertChildAfter(this[31], *v2, 0LL);
      if ( inserted < 0 )
      {
        v12 = 346LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)inserted,
          v14);
        return (unsigned int)inserted;
      }
    }
  }
  else
  {
    v2 = this + 35;
    if ( (unsigned __int8)Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(this + 35) )
    {
      inserted = CContainerVisual::RemoveChild(this[31], *v2);
      if ( inserted < 0 )
      {
        v12 = 361LL;
        goto LABEL_17;
      }
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v2);
    }
  }
  if ( !(unsigned __int8)Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(v2) )
    return 0LL;
  if ( *((_DWORD *)this + 200) != 4 )
  {
    v13 = *v2;
    v16 = 0LL;
    CVisual::SetInsetFromParent(v13, &v16);
    goto LABEL_7;
  }
  inserted = CTopLevelWindow::ResizeVisualToTitlebar((CTopLevelWindow *)this, *v2);
  if ( inserted < 0 )
  {
    v12 = 370LL;
    goto LABEL_17;
  }
LABEL_7:
  IsHighContrastMode = CDesktopManager::IsHighContrastMode();
  updated = CSystemBackdropVisual::UpdateBrush(
              *v2,
              (*(_BYTE *)(v6 + 736) & 2) != 0,
              *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 633LL),
              IsHighContrastMode,
              v7,
              (unsigned __int8)~*((_BYTE *)this + 201) >> 7);
  v9 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17F,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)updated,
    v15);
  return v9;
}
