/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40
 * Callers:
 *     ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z @ 0x180029060 (-UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x18007A5F4 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180006C2C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180021694 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x180021FCC (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 *     ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x180022088 (-InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z.c)
 *     ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x1800224FC (-Create@CAtlasedImage@@SAJPEAPEAV1@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180022968 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x180023DE8 (-GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z.c)
 *     ?IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x180024024 (-IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180024590 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x1800295D0 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18002B8B0 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z @ 0x18002BF44 (-ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x18002BFF0 (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18002CC00 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?GetFloatCornerRadiusForCurrentStyle@CTopLevelWindow@@AEAAMXZ @ 0x18002CC14 (-GetFloatCornerRadiusForCurrentStyle@CTopLevelWindow@@AEAAMXZ.c)
 *     ?UpdateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x18002CC48 (-UpdateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x18002CC98 (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18002CD2C (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x18002DA1C (-GetShadowStyle@CTopLevelWindow@@AEAA-AW4ShadowStyle@CWindowBorder@@XZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180030618 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x180030D88 (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x180031890 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1800359D4 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x18004073C (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x180055C04 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18006C024 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?GetBorderStyle@CTopLevelWindow@@AEAA?AW4BorderStyle@CWindowBorder@@XZ @ 0x18007765C (-GetBorderStyle@CTopLevelWindow@@AEAA-AW4BorderStyle@CWindowBorder@@XZ.c)
 *     ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x180079258 (-SetHiddenMargins@CAtlasedImage@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18009CA90 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  unsigned int v2; // r14d
  float FloatCornerRadiusForCurrentStyle; // xmm0_4
  unsigned int v4; // ecx
  struct CTopLevelWindow::WindowFrame *v5; // r13
  char v6; // r12
  bool v7; // bp
  unsigned int v8; // ebx
  struct tagSIZE *WindowFramePart; // rdi
  struct CAtlasedImage **v10; // rsi
  CAtlasedRectsVisual **v11; // rcx
  struct CVisual **v12; // rbx
  struct CVisual *v13; // rdx
  int v14; // eax
  int updated; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v22; // r14
  CTopLevelWindow *v23; // rcx
  int RoundedBorderColor; // edi
  unsigned int v25; // ebx
  struct tagRECT *BorderRect; // rax
  __int64 v27; // r8
  int v28; // eax
  unsigned int v29; // ebx
  int v30; // eax
  unsigned int v31; // ebx
  int v32; // eax
  int inserted; // eax
  CContainerVisual *v34; // rcx
  int v35; // eax
  struct CAtlasedImage *v36; // r8
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // rdx
  struct _D3DCOLORVALUE v40; // [rsp+40h] [rbp-68h] BYREF
  struct tagRECT v41; // [rsp+50h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v2;
  if ( *((_BYTE *)this + 832) )
  {
LABEL_7:
    v5 = CTopLevelWindow::ChooseWindowFrame(this, *((_DWORD *)this + 146), 0);
    v6 = (*((_DWORD *)this + 146) & 0x20000) != 0;
    CVisual::SetRTLMirror(*((CVisual **)this + 31), v6);
    CVisual::SetRTLMirror(*((CVisual **)this + 69), v6);
    v7 = v5 && CDesktopManager::IsHighContrastMode();
    *(_QWORD *)&v40.r = 0LL;
    v8 = 0;
    while ( v8 < 0x16 )
    {
      WindowFramePart = 0LL;
      v10 = (struct CAtlasedImage **)((char *)this + 8 * v8 + 304);
      if ( v7 && !CTopLevelWindow::IsShadowNCAreaPart(v8) )
        WindowFramePart = (struct tagSIZE *)CTopLevelWindow::GetWindowFramePart(v5, v8);
      v11 = (CAtlasedRectsVisual **)*v10;
      if ( WindowFramePart )
      {
        if ( !v11 )
        {
          v20 = CAtlasedImage::Create((struct CAtlasedImage **)this + v8 + 38);
          v2 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x949u, 0LL);
            return v2;
          }
          v36 = *(struct CAtlasedImage **)&v40.r;
          *((_DWORD *)*v10 + 30) = v8;
          v37 = CAtlasedRectsVisual::InsertAfterAtlasImage(*((CAtlasedRectsVisual **)this + 33), *v10, v36);
          v2 = v37;
          if ( v37 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0x94Eu, 0LL);
            return v2;
          }
        }
        CAtlasedImage::SetBitmapSource(*v10, (struct CBitmapSource *)WindowFramePart);
        CAtlasedImage::SetSize((struct tagSIZE *)*v10, WindowFramePart + 3);
        ++v8;
        *(_QWORD *)&v40.r = *v10;
      }
      else
      {
        if ( v11 )
        {
          CAtlasedImage::DisconnectFromParent(v11);
          if ( *v10 )
          {
            CBaseObject::Release(*v10);
            *v10 = 0LL;
          }
        }
        ++v8;
      }
    }
    if ( v7 )
    {
      if ( CTopLevelWindow::IsSheetOfGlass(this) )
      {
        CAtlasedImage::SetHiddenMargins(v38, 10LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 39), 8LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 40), 9LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 41), 2LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 42), 1LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 43), 6LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 44), 4LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 45), 5LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 47), 10LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 48), 8LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 49), 9LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 50), 2LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 51), 1LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 52), 6LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 53), 4LL);
        v39 = 5LL;
      }
      else
      {
        CAtlasedImage::SetHiddenMargins(v38, 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 39), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 40), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 41), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 42), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 43), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 44), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 45), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 47), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 48), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 49), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 50), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 51), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 52), 0LL);
        CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 53), 0LL);
        v39 = 0LL;
      }
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 54), v39);
    }
    v12 = (struct CVisual **)((char *)this + 536);
    if ( (*((_DWORD *)this + 146) & 0x10080) != 0 )
    {
      if ( !*v12 )
      {
        v32 = CImage::Create((struct CImage **)this + 67);
        v2 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x98Cu, 0LL);
          return v2;
        }
        inserted = CContainerVisual::InsertChildAfter(
                     *((CContainerVisual **)this + 31),
                     *v12,
                     *((struct CVisual **)this + 33));
        v2 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x98Du, 0LL);
          return v2;
        }
        CVisual::SetDirtyFlags(this, 0x20000);
      }
      *((_DWORD *)*v12 + 32) = (*((_DWORD *)this + 146) & 0x80 | 0x100u) >> 7;
      CVisual::SetRTLMirror(*v12, v6);
    }
    else
    {
      v13 = *v12;
      if ( *v12 )
      {
        v34 = (CContainerVisual *)*((_QWORD *)v13 + 3);
        if ( v34 )
        {
          v35 = CContainerVisual::RemoveChild(v34, v13);
          v2 = v35;
          if ( v35 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x99Cu, 0LL);
            return v2;
          }
          CVisual::SetDirtyFlags(this, 4096);
        }
        if ( *v12 )
        {
          CBaseObject::Release(*v12);
          *((_QWORD *)this + 67) = 0LL;
        }
      }
    }
    v14 = CTopLevelWindow::EnsureClientAreaNode(this);
    v2 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x9A5u, 0LL);
    }
    else
    {
      *((_DWORD *)this + 200) = CTopLevelWindow::CalculateBackgroundType(this);
      updated = CTopLevelWindow::UpdateHolographicSlate(this);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x9AAu, 0LL);
      }
      else
      {
        v16 = CTopLevelWindow::UpdateSystemBackdropVisual(this);
        v2 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x9ACu, 0LL);
        }
        else
        {
          v17 = CTopLevelWindow::UpdateButtonVisuals(this, v5);
          v2 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x9AFu, 0LL);
          }
          else
          {
            v18 = CTopLevelWindow::UpdateCaptionAccentColor(this);
            v2 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x9B1u, 0LL);
            }
            else
            {
              v19 = CTopLevelWindow::UpdateText(this, v5);
              v2 = v19;
              if ( v19 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x9B4u, 0LL);
            }
          }
        }
      }
    }
    return v2;
  }
  FloatCornerRadiusForCurrentStyle = CTopLevelWindow::GetFloatCornerRadiusForCurrentStyle(this);
  v4 = *((_DWORD *)this + 146);
  if ( (v4 & 0x20) == 0 && !CTopLevelWindow::HasRenderedBorder(v4) && FloatCornerRadiusForCurrentStyle <= 0.0 )
  {
    CWindowBorder::EnableBorder(*((CWindowBorder **)this + 28), 0);
    goto LABEL_7;
  }
  v22 = *((_QWORD *)this + 28);
  CTopLevelWindow::GetShadowStyle(this);
  CTopLevelWindow::GetBorderStyle(this);
  RoundedBorderColor = (unsigned int)CTopLevelWindow::GetRoundedBorderColor(v23, &v40);
  v25 = *(_DWORD *)(*((_QWORD *)this + 89) + 348LL);
  BorderRect = CTopLevelWindow::GetBorderRect(this, &v41, 0);
  v28 = CWindowBorder::SetBorderParameters(v22, BorderRect, v27, v25);
  v29 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v28,
      RoundedBorderColor);
    return v29;
  }
  else
  {
    v30 = CWindowBorder::EnableBorder(*((CWindowBorder **)this + 28), 1);
    v31 = v30;
    if ( v30 >= 0 )
      goto LABEL_7;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v30,
      RoundedBorderColor);
    return v31;
  }
}
