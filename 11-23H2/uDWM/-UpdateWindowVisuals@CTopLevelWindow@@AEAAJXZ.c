/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0
 * Callers:
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180021578 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x180008DAC (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000BC44 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x18001AA04 (-GetShadowStyle@CTopLevelWindow@@AEAA-AW4ShadowStyle@CWindowBorder@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18001BFC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ @ 0x18001DBFC (-IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18001DCB4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x18001E584 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001E9F8 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800325B4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180033668 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800336E4 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180033728 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x180034AC0 (-GetRoundedBorderColor@CTopLevelWindow@@AEAA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800353C0 (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800354B0 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18003567C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x180035864 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x18003AB74 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18003ABE0 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x18003B168 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18003B464 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x18003B620 (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18003B734 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x18003B810 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180054B7C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18005DB28 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x18006B9C8 (-InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z.c)
 *     ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x18006D89A (-GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x18009EB64 (-Create@CAtlasedImage@@SAJPEAPEAV1@@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800AC1A8 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800AC2D0 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x1800E5110 (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // rcx
  float v4; // xmm6_4
  int EffectiveCornerStyle; // eax
  int v6; // ebx
  __int64 v7; // rbx
  struct CVisual *v8; // rdx
  int v9; // ebx
  char v10; // di
  char v11; // al
  __int64 v12; // r9
  __int64 v13; // rcx
  struct CTopLevelWindow::WindowFrame *v14; // r12
  char v15; // r13
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // bp
  CBaseObject **v21; // rbx
  unsigned int i; // edi
  struct tagSIZE *WindowFramePart; // rsi
  CBaseObject *v24; // rdx
  unsigned __int64 *v25; // rbx
  struct CVisual *v26; // rdx
  int inserted; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  bool v33; // zf
  CBaseObject *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v41; // r14
  int ShadowStyle; // ebp
  BOOL v43; // esi
  struct _D3DCOLORVALUE *RoundedBorderColor; // rdi
  int v45; // ebx
  struct tagRECT *BorderRect; // rax
  __int64 v47; // r8
  int v48; // eax
  unsigned int v49; // ebx
  int BorderStructure; // eax
  unsigned int v51; // ebx
  char v52; // di
  int v53; // r10d
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  struct CAtlasedImage *v61; // r8
  CAtlasedRectsVisual *v62; // rcx
  CAtlasedImage *v63; // r9
  CAtlasedImage *v64; // rcx
  CAtlasedImage *v65; // rcx
  CAtlasedImage *v66; // rcx
  CAtlasedImage *v67; // rcx
  CAtlasedImage *v68; // rcx
  CAtlasedImage *v69; // rcx
  CAtlasedImage *v70; // rcx
  CAtlasedImage *v71; // rcx
  CAtlasedImage *v72; // rcx
  CAtlasedImage *v73; // rcx
  CAtlasedImage *v74; // rcx
  CAtlasedImage *v75; // rcx
  CAtlasedImage *v76; // rcx
  CAtlasedImage *v77; // rcx
  CAtlasedImage *v78; // rcx
  CAtlasedImage *v79; // rcx
  CAtlasedImage *v80; // rcx
  CAtlasedImage *v81; // rcx
  CAtlasedImage *v82; // rcx
  CAtlasedImage *v83; // rcx
  CAtlasedImage *v84; // rcx
  CAtlasedImage *v85; // rcx
  CAtlasedImage *v86; // rcx
  CAtlasedImage *v87; // rcx
  CAtlasedImage *v88; // rcx
  CAtlasedImage *v89; // rcx
  CAtlasedImage *v90; // rcx
  CAtlasedImage *v91; // rcx
  CAtlasedImage *v92; // rcx
  int HolographicSlate; // eax
  unsigned __int64 v94; // rdx
  VisualCollection *v95; // rcx
  CBaseObject *v96; // rcx
  int v97; // [rsp+20h] [rbp-98h]
  int v98; // [rsp+20h] [rbp-98h]
  unsigned int v99; // [rsp+20h] [rbp-98h]
  struct _D3DCOLORVALUE v100; // [rsp+40h] [rbp-78h] BYREF
  struct tagRECT v101; // [rsp+50h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = 0;
  if ( !(unsigned __int8)((__int64 (*)(void))IsOpenThemeDataPresent)() )
    return v2;
  if ( *((_BYTE *)this + 864) )
    goto LABEL_11;
  v4 = 0.0;
  if ( (*((_BYTE *)this + 624) & 0x20) == 0 && (*(_DWORD *)(*((_QWORD *)this + 94) + 128LL) & 0x1000) == 0 )
  {
    EffectiveCornerStyle = CTopLevelWindow::GetEffectiveCornerStyle((__int64)this);
    v3 = (unsigned int)EffectiveCornerStyle;
    if ( EffectiveCornerStyle >= 2 )
    {
      v3 = (unsigned int)(EffectiveCornerStyle - 2);
      if ( EffectiveCornerStyle == 2 )
        goto LABEL_49;
      v3 = (unsigned int)(EffectiveCornerStyle - 3);
      if ( EffectiveCornerStyle == 3 )
      {
        v4 = FLOAT_4_0;
        goto LABEL_6;
      }
      if ( EffectiveCornerStyle == 4 )
LABEL_49:
        v4 = FLOAT_8_0;
    }
  }
LABEL_6:
  v6 = *((_DWORD *)this + 156);
  if ( (v6 & 0x20) != 0 || (unsigned __int8)IsOpenThemeDataPresent(v3) && (v6 & 6) != 0 || v4 > 0.0 )
  {
    v41 = *((_QWORD *)this + 34);
    ShadowStyle = CTopLevelWindow::GetShadowStyle(this);
    v43 = (*(_BYTE *)(*((_QWORD *)this + 94) + 673LL) & 4) != 0;
    RoundedBorderColor = CTopLevelWindow::GetRoundedBorderColor(this, &v100);
    v45 = *(_DWORD *)(*((_QWORD *)this + 94) + 348LL);
    BorderRect = CTopLevelWindow::GetBorderRect(this, &v101, 0);
    v48 = CWindowBorder::SetBorderParameters(v41, BorderRect, v47, v45, &RoundedBorderColor->r, v43, ShadowStyle);
    v49 = v48;
    if ( v48 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8CE,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v48,
        v97);
      return v49;
    }
    v3 = *((_QWORD *)this + 34);
    if ( !*(_QWORD *)(v3 + 248) )
    {
      BorderStructure = CWindowBorder::CreateBorderStructure((CWindowBorder *)v3);
      v51 = BorderStructure;
      if ( BorderStructure < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE0,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
          (const char *)(unsigned int)BorderStructure,
          v97);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8CF,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)v51,
          v98);
        return v51;
      }
    }
  }
  else
  {
    v7 = *((_QWORD *)this + 34);
    v8 = *(struct CVisual **)(v7 + 248);
    if ( v8 )
    {
      VisualCollection::Remove((VisualCollection *)(v7 + 32), v8);
      if ( *(_QWORD *)(v7 + 264) )
      {
        v55 = *(_QWORD *)(v7 + 256);
        if ( v55 )
        {
          CVisualProxy::SetClip(*(CVisualProxy **)(v55 + 16), 0LL);
          CVisual::SetIgnoreClipForHitTest(*(CVisual **)(v7 + 256), 0, v56);
        }
      }
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)(v7 + 248));
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v7 + 272));
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v7 + 280));
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)(v7 + 264));
      *(struct _D3DCOLORVALUE *)&v100.r = 0LL;
      std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=((_QWORD *)(v7 + 288), (__int64 *)&v100);
      if ( *(_QWORD *)&v100.b )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v100.b);
      CWindowBorder::SetBorderModeForContentClip((CWindowBorder *)v7);
    }
  }
LABEL_11:
  v9 = *((_DWORD *)this + 156);
  v10 = *(_BYTE *)(*((_QWORD *)this + 94) + 675LL);
  v11 = IsOpenThemeDataPresent(v3);
  v13 = 3LL;
  if ( v11 && (v9 & 6) != 0 )
  {
    v52 = v10 & 0x10;
    if ( (v9 & 0x20) != 0 )
    {
      if ( v52 || (v9 & 0x40) != 0 )
      {
        v14 = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 16);
        goto LABEL_14;
      }
    }
    else if ( v52 || (v9 & 0x40) != 0 )
    {
      v13 = 0LL;
      if ( (v9 & 2) != 0 )
        v13 = 4LL;
    }
    else
    {
      v13 = 1LL;
      if ( (v9 & 2) != 0 )
        v13 = 5LL;
    }
    v14 = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * v13);
  }
  else
  {
    v14 = 0LL;
  }
LABEL_14:
  v15 = (*((_DWORD *)this + 156) & 0x20000) != 0;
  v16 = (__int64 *)*((_QWORD *)this + 36);
  v17 = *((unsigned __int8 *)v16 + 92);
  if ( v15 != (v17 & 1) )
  {
    v59 = *v16;
    *((_BYTE *)v16 + 92) = v15 | v17 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v59 + 24))(v16, 16LL);
  }
  v18 = *((_QWORD *)this + 74);
  v19 = *(unsigned __int8 *)(v18 + 92);
  if ( v15 != (v19 & 1) )
  {
    v60 = *(_QWORD *)v18;
    *(_BYTE *)(v18 + 92) = v15 | v19 & 0xFE;
    (*(void (__fastcall **)(__int64, __int64))(v60 + 24))(v18, 16LL);
  }
  v20 = v14 && (unsigned __int8)CDesktopManager::IsHighContrastMode(v18, v17, v19, v12);
  *(_QWORD *)&v100.r = 0LL;
  v21 = (CBaseObject **)((char *)this + 344);
  for ( i = 0; i < 0x16; ++i )
  {
    WindowFramePart = 0LL;
    if ( v20 )
    {
      if ( i - 18 <= 3 )
      {
        v24 = *v21;
LABEL_23:
        if ( v24 )
        {
          v62 = (CAtlasedRectsVisual *)*((_QWORD *)v24 + 10);
          if ( v62 )
            CAtlasedRectsVisual::RemoveAtlasImage(v62, v24);
          if ( *v21 )
          {
            CBaseObject::Release(*v21);
            *v21 = 0LL;
          }
        }
        goto LABEL_24;
      }
      WindowFramePart = (struct tagSIZE *)CTopLevelWindow::GetWindowFramePart(v14, i);
    }
    v24 = *v21;
    if ( !WindowFramePart )
      goto LABEL_23;
    if ( !v24 )
    {
      inserted = CAtlasedImage::Create(v21);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v99 = 2299;
        goto LABEL_172;
      }
      v61 = *(struct CAtlasedImage **)&v100.r;
      *((_DWORD *)*v21 + 30) = i;
      inserted = CAtlasedRectsVisual::InsertAfterAtlasImage(*((CAtlasedRectsVisual **)this + 38), *v21, v61);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v99 = 2304;
        goto LABEL_172;
      }
    }
    CAtlasedImage::SetBitmapSource(*v21, (struct CBitmapSource *)WindowFramePart);
    CAtlasedImage::SetSize(*v21, WindowFramePart + 3);
    *(_QWORD *)&v100.r = *v21;
LABEL_24:
    ++v21;
  }
  if ( !v20 )
    goto LABEL_26;
  if ( CTopLevelWindow::IsSheetOfGlass(this) )
  {
    if ( *((_DWORD *)v63 + 16) != 10 )
    {
      *((_DWORD *)v63 + 16) = 10;
      CAtlasedImage::SetDirtyFlags(v63, 1, 0x2000u);
    }
    v64 = (CAtlasedImage *)*((_QWORD *)this + 44);
    if ( *((_DWORD *)v64 + 16) != 8 )
    {
      *((_DWORD *)v64 + 16) = 8;
      CAtlasedImage::SetDirtyFlags(v64, 1, 0x2000u);
    }
    v65 = (CAtlasedImage *)*((_QWORD *)this + 45);
    if ( *((_DWORD *)v65 + 16) != 9 )
    {
      *((_DWORD *)v65 + 16) = 9;
      CAtlasedImage::SetDirtyFlags(v65, 1, 0x2000u);
    }
    v66 = (CAtlasedImage *)*((_QWORD *)this + 46);
    if ( *((_DWORD *)v66 + 16) != 2 )
    {
      *((_DWORD *)v66 + 16) = 2;
      CAtlasedImage::SetDirtyFlags(v66, 1, 0x2000u);
    }
    v67 = (CAtlasedImage *)*((_QWORD *)this + 47);
    if ( *((_DWORD *)v67 + 16) != 1 )
    {
      *((_DWORD *)v67 + 16) = 1;
      CAtlasedImage::SetDirtyFlags(v67, 1, 0x2000u);
    }
    v68 = (CAtlasedImage *)*((_QWORD *)this + 48);
    if ( *((_DWORD *)v68 + 16) != 6 )
    {
      *((_DWORD *)v68 + 16) = 6;
      CAtlasedImage::SetDirtyFlags(v68, 1, 0x2000u);
    }
    v69 = (CAtlasedImage *)*((_QWORD *)this + 49);
    if ( *((_DWORD *)v69 + 16) != 4 )
    {
      *((_DWORD *)v69 + 16) = 4;
      CAtlasedImage::SetDirtyFlags(v69, 1, 0x2000u);
    }
    v70 = (CAtlasedImage *)*((_QWORD *)this + 50);
    if ( *((_DWORD *)v70 + 16) != 5 )
    {
      *((_DWORD *)v70 + 16) = 5;
      CAtlasedImage::SetDirtyFlags(v70, 1, 0x2000u);
    }
    v71 = (CAtlasedImage *)*((_QWORD *)this + 52);
    if ( *((_DWORD *)v71 + 16) != 10 )
    {
      *((_DWORD *)v71 + 16) = 10;
      CAtlasedImage::SetDirtyFlags(v71, 1, 0x2000u);
    }
    v72 = (CAtlasedImage *)*((_QWORD *)this + 53);
    if ( *((_DWORD *)v72 + 16) != 8 )
    {
      *((_DWORD *)v72 + 16) = 8;
      CAtlasedImage::SetDirtyFlags(v72, 1, 0x2000u);
    }
    v73 = (CAtlasedImage *)*((_QWORD *)this + 54);
    if ( *((_DWORD *)v73 + 16) != 9 )
    {
      *((_DWORD *)v73 + 16) = 9;
      CAtlasedImage::SetDirtyFlags(v73, 1, 0x2000u);
    }
    v74 = (CAtlasedImage *)*((_QWORD *)this + 55);
    if ( *((_DWORD *)v74 + 16) != 2 )
    {
      *((_DWORD *)v74 + 16) = 2;
      CAtlasedImage::SetDirtyFlags(v74, 1, 0x2000u);
    }
    v75 = (CAtlasedImage *)*((_QWORD *)this + 56);
    if ( *((_DWORD *)v75 + 16) != 1 )
    {
      *((_DWORD *)v75 + 16) = 1;
      CAtlasedImage::SetDirtyFlags(v75, 1, 0x2000u);
    }
    v76 = (CAtlasedImage *)*((_QWORD *)this + 57);
    if ( *((_DWORD *)v76 + 16) != 6 )
    {
      *((_DWORD *)v76 + 16) = 6;
      CAtlasedImage::SetDirtyFlags(v76, 1, 0x2000u);
    }
    v77 = (CAtlasedImage *)*((_QWORD *)this + 58);
    if ( *((_DWORD *)v77 + 16) != 4 )
    {
      *((_DWORD *)v77 + 16) = 4;
      CAtlasedImage::SetDirtyFlags(v77, 1, 0x2000u);
    }
    v78 = (CAtlasedImage *)*((_QWORD *)this + 59);
    if ( *((_DWORD *)v78 + 16) != 5 )
    {
      *((_DWORD *)v78 + 16) = 5;
      goto LABEL_159;
    }
  }
  else
  {
    if ( *((_DWORD *)v63 + 16) )
    {
      *((_DWORD *)v63 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v63, 1, 0x2000u);
    }
    v79 = (CAtlasedImage *)*((_QWORD *)this + 44);
    if ( *((_DWORD *)v79 + 16) )
    {
      *((_DWORD *)v79 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v79, 1, 0x2000u);
    }
    v80 = (CAtlasedImage *)*((_QWORD *)this + 45);
    if ( *((_DWORD *)v80 + 16) )
    {
      *((_DWORD *)v80 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v80, 1, 0x2000u);
    }
    v81 = (CAtlasedImage *)*((_QWORD *)this + 46);
    if ( *((_DWORD *)v81 + 16) )
    {
      *((_DWORD *)v81 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v81, 1, 0x2000u);
    }
    v82 = (CAtlasedImage *)*((_QWORD *)this + 47);
    if ( *((_DWORD *)v82 + 16) )
    {
      *((_DWORD *)v82 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v82, 1, 0x2000u);
    }
    v83 = (CAtlasedImage *)*((_QWORD *)this + 48);
    if ( *((_DWORD *)v83 + 16) )
    {
      *((_DWORD *)v83 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v83, 1, 0x2000u);
    }
    v84 = (CAtlasedImage *)*((_QWORD *)this + 49);
    if ( *((_DWORD *)v84 + 16) )
    {
      *((_DWORD *)v84 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v84, 1, 0x2000u);
    }
    v85 = (CAtlasedImage *)*((_QWORD *)this + 50);
    if ( *((_DWORD *)v85 + 16) )
    {
      *((_DWORD *)v85 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v85, 1, 0x2000u);
    }
    v86 = (CAtlasedImage *)*((_QWORD *)this + 52);
    if ( *((_DWORD *)v86 + 16) )
    {
      *((_DWORD *)v86 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v86, 1, 0x2000u);
    }
    v87 = (CAtlasedImage *)*((_QWORD *)this + 53);
    if ( *((_DWORD *)v87 + 16) )
    {
      *((_DWORD *)v87 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v87, 1, 0x2000u);
    }
    v88 = (CAtlasedImage *)*((_QWORD *)this + 54);
    if ( *((_DWORD *)v88 + 16) )
    {
      *((_DWORD *)v88 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v88, 1, 0x2000u);
    }
    v89 = (CAtlasedImage *)*((_QWORD *)this + 55);
    if ( *((_DWORD *)v89 + 16) )
    {
      *((_DWORD *)v89 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v89, 1, 0x2000u);
    }
    v90 = (CAtlasedImage *)*((_QWORD *)this + 56);
    if ( *((_DWORD *)v90 + 16) )
    {
      *((_DWORD *)v90 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v90, 1, 0x2000u);
    }
    v91 = (CAtlasedImage *)*((_QWORD *)this + 57);
    if ( *((_DWORD *)v91 + 16) )
    {
      *((_DWORD *)v91 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v91, 1, 0x2000u);
    }
    v92 = (CAtlasedImage *)*((_QWORD *)this + 58);
    if ( *((_DWORD *)v92 + 16) )
    {
      *((_DWORD *)v92 + 16) = 0;
      CAtlasedImage::SetDirtyFlags(v92, 1, 0x2000u);
    }
    v78 = (CAtlasedImage *)*((_QWORD *)this + 59);
    if ( *((_DWORD *)v78 + 16) )
    {
      *((_DWORD *)v78 + 16) = 0;
LABEL_159:
      CAtlasedImage::SetDirtyFlags(v78, 1, 0x2000u);
    }
  }
LABEL_26:
  v25 = (unsigned __int64 *)((char *)this + 576);
  if ( (*((_DWORD *)this + 156) & 0x10080) != 0 )
  {
    if ( !*v25 )
    {
      inserted = CImage::Create((struct CImage **)this + 72);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v99 = 2366;
        goto LABEL_172;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 36) + 32LL),
                   *v25,
                   *((struct CVisual **)this + 38),
                   1u,
                   v97);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v99 = 2367;
        goto LABEL_172;
      }
      v54 = *((_DWORD *)this + 22);
      if ( (v54 & 0x20000) == 0 )
      {
        *((_DWORD *)this + 22) = v54 | 0x20000;
        CVisual::PropagateDirtyChildren(this);
      }
    }
    v53 = 2;
    if ( *((char *)this + 624) < 0 )
      v53 = 3;
    *(_DWORD *)(*v25 + 200) = v53;
    CVisual::SetRTLMirror((CVisual *)*v25, v15);
    goto LABEL_28;
  }
  v26 = (struct CVisual *)*v25;
  if ( *v25 )
  {
    v57 = *((_QWORD *)v26 + 3);
    if ( v57 )
    {
      inserted = VisualCollection::Remove((VisualCollection *)(v57 + 32), v26);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v99 = 2382;
        goto LABEL_172;
      }
      v58 = *((_DWORD *)this + 22);
      if ( (v58 & 0x1000) == 0 )
      {
        *((_DWORD *)this + 22) = v58 | 0x1000;
        CVisual::PropagateDirtyChildren(this);
      }
    }
    if ( *v25 )
    {
      CBaseObject::Release((CBaseObject *)*v25);
      *v25 = 0LL;
    }
  }
LABEL_28:
  inserted = CTopLevelWindow::EnsureClientAreaNode(this);
  v2 = inserted;
  if ( inserted < 0 )
  {
    v99 = 2391;
  }
  else
  {
    v31 = CTopLevelWindow::CalculateBackgroundType((__int64)this, v28, v29, v30);
    v33 = (*((_BYTE *)this + 249) & 2) == 0;
    *((_DWORD *)this + 210) = v31;
    if ( v33 )
    {
      v34 = (CBaseObject *)*((_QWORD *)this + 101);
      if ( v34 )
      {
        CBaseObject::Release(v34);
        v94 = *((_QWORD *)this + 65);
        v95 = (VisualCollection *)(*((_QWORD *)this + 102) + 32LL);
        *((_QWORD *)this + 101) = 0LL;
        VisualCollection::InsertRelative(v95, v94, 0LL, 1u, v97);
        v96 = (CBaseObject *)*((_QWORD *)this + 102);
        if ( v96 )
        {
          CBaseObject::Release(v96);
          *((_QWORD *)this + 102) = 0LL;
        }
      }
    }
    else
    {
      HolographicSlate = CTopLevelWindow::CreateHolographicSlate(this);
      v2 = HolographicSlate;
      if ( HolographicSlate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, HolographicSlate, 0x13Au, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x95Cu, 0LL);
        return v2;
      }
    }
    inserted = CTopLevelWindow::UpdateSystemBackdropVisual(this, v32);
    v2 = inserted;
    if ( inserted < 0 )
    {
      v99 = 2398;
    }
    else
    {
      inserted = CTopLevelWindow::UpdateButtonVisuals((struct CButton **)this, v14);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v99 = 2401;
      }
      else
      {
        inserted = CTopLevelWindow::UpdateCaptionAccentColor(this, v35, v36, v37);
        v2 = inserted;
        if ( inserted < 0 )
        {
          v99 = 2403;
        }
        else
        {
          inserted = CTopLevelWindow::UpdateText(this, v14, v38, v39);
          v2 = inserted;
          if ( inserted >= 0 )
            return v2;
          v99 = 2406;
        }
      }
    }
  }
LABEL_172:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v99, 0LL);
  return v2;
}
