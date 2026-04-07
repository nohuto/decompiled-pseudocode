/*
 * XREFs of ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ @ 0x180006CFC (-UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x18000AB54 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180018860 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180019294 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180019BB4 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18001AB94 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?UpdateGDISurface@CTopLevelWindow@@AEAAJXZ @ 0x18001D704 (-UpdateGDISurface@CTopLevelWindow@@AEAAJXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180036690 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18003B874 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18003CCA0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18003E8C0 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18003FB60 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180041230 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x1800424A0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180045C90 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180051AFC (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     IsOpenThemeDataPresent @ 0x18005DB28 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18006DAA6 (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x1800B6508 (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D5870 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x1800E5C74 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1801058F8 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::ValidateVisual(CTopLevelWindow *this)
{
  int v1; // eax
  char v3; // di
  int v4; // edx
  __int64 v5; // rcx
  int v6; // r15d
  int v7; // ebp
  int v8; // r14d
  int v9; // r12d
  char v10; // r13
  int v11; // esi
  _DWORD *v12; // rax
  int v13; // r9d
  int v14; // r11d
  int v15; // r10d
  int v16; // edi
  int v17; // ecx
  unsigned __int64 v18; // rcx
  int v19; // r8d
  _DWORD *v20; // rsi
  int v21; // r8d
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // r9d
  int v26; // r10d
  int v27; // eax
  int v28; // r8d
  int v29; // r11d
  int v30; // edi
  char v31; // al
  int v32; // esi
  char v33; // di
  int CurrentStyle; // eax
  float *v35; // rcx
  int v36; // edi
  char v37; // al
  char v38; // si
  bool v39; // r14
  __int64 v40; // rdx
  unsigned int v41; // r13d
  int v42; // eax
  int v43; // eax
  int v45; // eax
  float v46; // xmm2_4
  float v47; // xmm3_4
  float v48; // xmm1_4
  char v49; // si
  char v50; // al
  __int64 CaptionColor; // r15
  CDesktopManager *v52; // rbp
  unsigned int v53; // r8d
  __int64 v54; // rcx
  unsigned int i; // r12d
  __int64 v56; // rcx
  CTopLevelWindow *v57; // rcx
  int v58; // eax
  unsigned int v59; // ebp
  int v60; // eax
  unsigned int v61; // ebp
  struct CWindowData *v62; // rdx
  CProjectionBorderVisual *v63; // rcx
  int updated; // eax
  int v65; // eax
  unsigned int v66; // ebp
  int v67; // eax
  unsigned int v68; // r14d
  int v69; // eax
  unsigned int v70; // ebp
  struct CWindowData *v71; // rdx
  __int64 v72; // rbp
  char v73; // di
  CSecondaryWindowRepresentation *v74; // rcx
  int v75; // eax
  __int64 v76; // rax
  bool v77; // al
  int v78; // eax
  unsigned int v79; // edi
  int v80; // eax
  int v81; // eax
  unsigned int v82; // r14d
  int v83; // eax
  unsigned int v84; // edi
  int v85; // eax
  unsigned int v86; // edi
  int v87; // eax
  __int64 v88; // r10
  unsigned __int64 v89; // r9
  __int64 v90; // rdx
  int v91; // eax
  int v92; // eax
  unsigned int v93; // [rsp+20h] [rbp-78h]
  unsigned int v94; // [rsp+20h] [rbp-78h]
  unsigned int v95; // [rsp+20h] [rbp-78h]
  unsigned int v96; // [rsp+20h] [rbp-78h]
  int v97; // [rsp+30h] [rbp-68h]
  int v98; // [rsp+34h] [rbp-64h]
  int v99; // [rsp+38h] [rbp-60h]
  __int128 v100; // [rsp+40h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char v102; // [rsp+A0h] [rbp+8h]
  unsigned int v103; // [rsp+A0h] [rbp+8h]
  unsigned int v104; // [rsp+A0h] [rbp+8h]
  unsigned int v105; // [rsp+A0h] [rbp+8h]
  char v106; // [rsp+A8h] [rbp+10h]
  bool v107; // [rsp+A8h] [rbp+10h]
  char v108; // [rsp+B0h] [rbp+18h]
  char v109; // [rsp+B8h] [rbp+20h]

  v1 = *((_DWORD *)this + 22);
  v3 = 0;
  v108 = 0;
  v4 = v1 & 8;
  v5 = v1 & 0x4000;
  v98 = v4;
  v99 = v1 & 0x4000;
  v6 = v1 & 2;
  v7 = v1 & 0x100000;
  v8 = v1 & 0x200000;
  v9 = v1 & 0x1000000;
  v10 = 0;
  LOBYTE(v11) = 0;
  if ( (*((_BYTE *)this + 248) & 8) != 0 )
  {
    v83 = CVisual::ValidateVisual(this);
    v84 = v83;
    if ( v83 >= 0 )
    {
      if ( (*((_DWORD *)this + 22) & 0x800000) != 0 )
      {
        CTopLevelWindow::UpdateLivePreviewAnimation(this);
        *((_DWORD *)this + 22) &= ~0x800000u;
      }
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11D5,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v83,
      v93);
    return v84;
  }
  if ( (v1 & 0x40000) != 0 )
  {
    CTopLevelWindow::UpdateWindowScale(this);
    *((_DWORD *)this + 22) &= ~0x40000u;
    v1 = *((_DWORD *)this + 22);
    v4 = v98;
    v108 = 1;
  }
  if ( (v1 & 0x40E000) != 0 || v8 || v6 || v4 || v9 || v7 )
  {
    v12 = (_DWORD *)*((_QWORD *)this + 94);
    v13 = v12[16];
    v14 = v12[18];
    v15 = v12[17];
    v16 = v12[19];
    if ( v13 != *((_DWORD *)this + 157) )
    {
      *((_DWORD *)this + 157) = v13;
      v10 = 1;
    }
    if ( v15 != *((_DWORD *)this + 158) )
    {
      *((_DWORD *)this + 158) = v15;
      v10 = 1;
    }
    if ( v14 != *((_DWORD *)this + 159) )
    {
      *((_DWORD *)this + 159) = v14;
      v10 = 1;
    }
    if ( v16 != *((_DWORD *)this + 160) )
    {
      *((_DWORD *)this + 160) = v16;
      v10 = 1;
    }
    v17 = v12[14] - v12[12];
    if ( v17 < 0 )
      v17 = 0;
    v18 = (unsigned int)(v17 - v15 - v13);
    v19 = v12[15] - v12[13];
    if ( v19 < 0 )
      v19 = 0;
    v20 = (_DWORD *)*((_QWORD *)this + 94);
    v21 = v19 - v16 - v14;
    v22 = v20[24];
    if ( v22 == 0x7FFFFFFF && v20[25] == 0x7FFFFFFF && v20[26] == 0x7FFFFFFF && v20[27] == 0x7FFFFFFF )
    {
      v25 = (int)v18 / 2 + v13;
      v26 = ((int)v18 + 1) / 2 + v15;
      v29 = v21 / 2 + v14;
      v27 = (v21 + 1) / 2;
    }
    else
    {
      v23 = v20[25];
      if ( (int)v18 < v22 )
        v22 = v18;
      v24 = v18 - v22;
      v25 = v22 + v13;
      if ( v24 < v23 )
        v23 = v24;
      v18 = (unsigned int)v20[26];
      v26 = v23 + v15;
      v27 = v20[27];
      if ( v21 < (int)v18 )
        v18 = (unsigned int)v21;
      v28 = v21 - v18;
      v29 = v18 + v14;
      if ( v28 < v27 )
        v27 = v28;
    }
    v30 = v27 + v16;
    v31 = 0;
    if ( v25 != *((_DWORD *)this + 161) )
    {
      *((_DWORD *)this + 161) = v25;
      v31 = 1;
    }
    if ( v26 != *((_DWORD *)this + 162) )
    {
      *((_DWORD *)this + 162) = v26;
      v31 = 1;
    }
    if ( v29 != *((_DWORD *)this + 163) )
    {
      *((_DWORD *)this + 163) = v29;
      v31 = 1;
    }
    if ( v30 != *((_DWORD *)this + 164) )
    {
      *((_DWORD *)this + 164) = v30;
      v31 = 1;
    }
    v109 = v10 | v31;
    if ( (unsigned __int8)v10 | (unsigned __int8)v31 )
    {
      v71 = (struct CWindowData *)*((_QWORD *)this + 94);
      v18 = *((_QWORD *)v71 + 58);
      if ( v18 )
        CProjectionBorderVisual::UpdateRectFromWindow((CProjectionBorderVisual *)v18, v71);
    }
    v32 = *((_DWORD *)this + 156);
    if ( !(unsigned __int8)IsOpenThemeDataPresent(v18) || (v106 = 1, (v32 & 6) == 0) )
      v106 = 0;
    v33 = 0;
    v102 = 0;
    CurrentStyle = CTopLevelWindow::GetCurrentStyle(*((_QWORD *)this + 94), 0LL);
    if ( CurrentStyle != *((_DWORD *)this + 156) )
    {
      v33 = 1;
      *((_DWORD *)this + 156) = CurrentStyle;
      v102 = 1;
    }
    if ( (int)CTopLevelWindow::UpdateColorizationColor(this) >= 0
      && (v35 = (float *)*((_QWORD *)this + 77)) != 0LL
      && (*(_BYTE *)(*((_QWORD *)this + 94) + 672LL) & 8) != 0
      && (*((_DWORD *)this + 161) || *((_DWORD *)this + 163) || *((_DWORD *)this + 162) || *((_DWORD *)this + 164))
      && ((v46 = v35[8] * v35[4], v47 = v35[8] * v35[5], v48 = v35[8] * v35[6], 1.0 != *((float *)this + 186))
       || v46 != *((float *)this + 183)
       || v47 != *((float *)this + 184)
       || v48 != *((float *)this + 185)) )
    {
      *((float *)this + 183) = v46;
      v10 = 1;
      *((float *)this + 184) = v47;
      *((float *)this + 185) = v48;
      *((_DWORD *)this + 186) = 1065353216;
      v49 = *((_DWORD *)this + 156) ^ v32;
      v102 = 1;
      v36 = v49 & 0x20;
      v97 = *((_DWORD *)this + 156);
      v11 = v49 & 0x40;
    }
    else
    {
      v10 = v33;
      v97 = *((_DWORD *)this + 156);
      v36 = ((unsigned __int8)v32 ^ (unsigned __int8)v97) & 0x20;
      v11 = ((unsigned __int8)v32 ^ (unsigned __int8)v97) & 0x40;
      if ( !v102 )
        goto LABEL_44;
    }
    v50 = (unsigned __int8)IsOpenThemeDataPresent(v35) && (v97 & 6) != 0;
    if ( v106 != v50 )
    {
      v37 = 1;
LABEL_45:
      if ( v36 || v11 || v8 || v37 )
        LOBYTE(v11) = 1;
      v107 = !*((_QWORD *)this + 65) && *(_QWORD *)(*((_QWORD *)this + 94) + 144LL);
      v3 = v109 | CTopLevelWindow::UpdateMarginsDependentOnStyle(this);
      if ( v9 || v3 || v102 || (_BYTE)v11 || v107 || v7 )
      {
        v62 = (struct CWindowData *)*((_QWORD *)this + 94);
        v63 = (CProjectionBorderVisual *)*((_QWORD *)v62 + 58);
        if ( v63 )
        {
          if ( v3 )
            CProjectionBorderVisual::UpdateRectFromWindow(v63, v62);
          if ( v8 )
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 94) + 464LL) + 24LL))(
              *(_QWORD *)(*((_QWORD *)this + 94) + 464LL),
              0x4000LL);
        }
        updated = CTopLevelWindow::UpdateWindowVisuals(this);
        v104 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x114Cu, 0LL);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x11F3,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
            (const char *)v104,
            v94);
          return v104;
        }
      }
      *((_DWORD *)this + 22) &= 0xFE9F1FFF;
      v1 = *((_DWORD *)this + 22);
      goto LABEL_58;
    }
LABEL_44:
    v37 = 0;
    goto LABEL_45;
  }
LABEL_58:
  if ( (v1 & 0x4000000) != 0 )
  {
    v45 = CTopLevelWindow::UpdateClientAreaBounds(this);
    v103 = v45;
    if ( v45 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11FA,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v45,
        v93);
      return v103;
    }
    *((_DWORD *)this + 22) &= ~0x4000000u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x2000000) != 0 )
  {
    v75 = CTopLevelWindow::UpdateGDISurface(this);
    v105 = v75;
    if ( v75 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1201,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v75,
        v93);
      return v105;
    }
    *((_DWORD *)this + 22) &= ~0x2000000u;
    v1 = *((_DWORD *)this + 22);
  }
  LOBYTE(v5) = v7 || v8;
  v38 = v5 | v11;
  if ( (v1 & 0x10000) != 0 )
  {
    v5 = *((_QWORD *)this + 71);
    if ( v5 )
    {
      v81 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(
              v5,
              *(_QWORD *)(*((_QWORD *)this + 94) + 16LL));
      v82 = v81;
      if ( v81 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x13C3u, 0LL);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x120C,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)v82,
          v95);
        return v82;
      }
    }
    *((_DWORD *)this + 22) &= ~0x10000u;
    v1 = *((_DWORD *)this + 22);
  }
  if ( (v1 & 0x20000) != 0 )
  {
    v67 = CTopLevelWindow::UpdateIcon(this);
    v68 = v67;
    if ( v67 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1212,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v67,
        v93);
      return v68;
    }
    *((_DWORD *)this + 22) &= ~0x20000u;
  }
  v39 = v3 || v6;
  if ( (unsigned __int8)IsOpenThemeDataPresent(v5)
    && ((*((_DWORD *)this + 22) & 0x1000) != 0 || v10 || v3 || v108 || v9 || v7) )
  {
    v58 = CTopLevelWindow::UpdateNCAreaPositionsAndSizes(this);
    v59 = v58;
    if ( v58 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1222,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v58,
        v93);
      return v59;
    }
    *((_DWORD *)this + 22) &= ~0x1000u;
  }
  if ( *((_QWORD *)this + 71) && v38 )
  {
    CaptionColor = CTopLevelWindow::GetCaptionColor(this);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 71) + 32LL))(*((_QWORD *)this + 71), CaptionColor);
    v52 = CDesktopManager::s_pDesktopManagerInstance;
    v41 = 0;
    v53 = 0;
    v54 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
    v40 = *(unsigned int *)(v54 + 368);
    if ( (_DWORD)v40 )
    {
      v88 = *(_QWORD *)(v54 + 344);
      while ( *(_QWORD *)(v88 + 48LL * v53 + 8) != *((_QWORD *)this + 94) )
      {
        if ( ++v53 >= (unsigned int)v40 )
          goto LABEL_115;
      }
      CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(*(CTopLevelWindow **)(v88 + 48LL * v53));
      v52 = CDesktopManager::s_pDesktopManagerInstance;
    }
LABEL_115:
    for ( i = 0; i < *((_DWORD *)v52 + 188); ++i )
      CDesktopThumbnailBase::NotifyTlwTitleBackgroundChange(
        *(CDesktopThumbnailBase **)(*((_QWORD *)v52 + 91) + 8LL * i),
        this,
        CaptionColor);
    v56 = *(_QWORD *)(*((_QWORD *)this + 94) + 480LL);
    if ( v56 )
    {
      v57 = *(CTopLevelWindow **)(v56 + 24);
      if ( v57 )
        CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(v57);
    }
  }
  else
  {
    v41 = 0;
  }
  v42 = *((_DWORD *)this + 22);
  if ( (v42 & 2) != 0 )
  {
    v69 = (*(__int64 (__fastcall **)(CTopLevelWindow *, _QWORD))(*(_QWORD *)this + 96LL))(this, 0LL);
    v70 = v69;
    if ( v69 < 0 )
    {
      v89 = (unsigned int)v69;
      v90 = 129LL;
      goto LABEL_207;
    }
    *((_DWORD *)this + 22) &= ~2u;
    v42 = *((_DWORD *)this + 22);
  }
  if ( (v42 & 8) != 0 )
  {
    v80 = (*(__int64 (__fastcall **)(CTopLevelWindow *))(*(_QWORD *)this + 184LL))(this);
    v70 = v80;
    if ( v80 < 0 )
    {
      v89 = (unsigned int)v80;
      v90 = 136LL;
      goto LABEL_207;
    }
    *((_DWORD *)this + 22) &= ~8u;
    v42 = *((_DWORD *)this + 22);
  }
  if ( (v42 & 0x10) != 0 )
  {
    v91 = CVisual::UpdateTransform(this);
    v70 = v91;
    if ( v91 < 0 )
    {
      v89 = (unsigned int)v91;
      v90 = 143LL;
      goto LABEL_207;
    }
    *((_DWORD *)this + 22) &= ~0x10u;
    v42 = *((_DWORD *)this + 22);
  }
  if ( (v42 & 0x20) != 0 )
  {
    v87 = (*(__int64 (__fastcall **)(CTopLevelWindow *))(*(_QWORD *)this + 168LL))(this);
    v70 = v87;
    if ( v87 < 0 )
    {
      v89 = (unsigned int)v87;
      v90 = 150LL;
      goto LABEL_207;
    }
    *((_DWORD *)this + 22) &= ~0x20u;
    v42 = *((_DWORD *)this + 22);
  }
  if ( (v42 & 0x40) != 0 )
  {
    v92 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                          + 16LL)
                                                            + 352LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
            (char *)this + 204);
    v70 = v92;
    if ( v92 >= 0 )
    {
      *((_DWORD *)this + 22) &= ~0x40u;
      goto LABEL_82;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v92, 0x3B1u, 0LL);
    v89 = v70;
    v90 = 157LL;
LABEL_207:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v90,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
      (const char *)v89,
      v93);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1248,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)v70,
      v96);
    return v70;
  }
LABEL_82:
  if ( v38 || v39 || v99 )
  {
    v60 = CTopLevelWindow::UpdateNCAreaBackground(this);
    v61 = v60;
    if ( v60 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124F,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v60,
        v93);
      return v61;
    }
    *((_DWORD *)this + 22) &= ~0x100000u;
  }
  if ( (*((_DWORD *)this + 22) & 0x80000) != 0 || v39 )
  {
    v65 = CTopLevelWindow::UpdateClientBlur(this);
    v66 = v65;
    if ( v65 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1256,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v65,
        v93);
      return v66;
    }
    *((_DWORD *)this + 22) &= ~0x80000u;
  }
  if ( v3 )
  {
    v72 = *((_QWORD *)this + 94);
    v73 = *((_BYTE *)this + 248) & 0x20;
    if ( *(_DWORD *)(v72 + 520) )
    {
      do
      {
        v74 = *(CSecondaryWindowRepresentation **)(*(_QWORD *)(v72 + 496) + 8LL * v41);
        v100 = *((_OWORD *)v74 + 4);
        if ( (_QWORD)v100 == v72 && (!v73 && DWORD2(v100) == 1 || v73 && DWORD2(v100) == 3) )
          CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(v74, v40);
        ++v41;
      }
      while ( v41 < *(_DWORD *)(v72 + 520) );
    }
  }
  if ( !*((_QWORD *)this + 37) )
    goto LABEL_89;
  v76 = *((_QWORD *)this + 94);
  v77 = (*(_BYTE *)(v76 + 172) & 2) == 0 && v38 && *(_DWORD *)(v76 + 168) == 2;
  if ( v39 || v98 )
  {
    if ( !v77 )
      goto LABEL_179;
    goto LABEL_213;
  }
  if ( v77 )
  {
LABEL_213:
    *(_DWORD *)(*((_QWORD *)this + 94) + 176LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
LABEL_179:
    v85 = CAccent::UpdateAccentPolicy(
            *((CAccent **)this + 37),
            (const struct tagRECT *)(*((_QWORD *)this + 94) + 48LL),
            (__m128i *)(*((_QWORD *)this + 94) + 168LL),
            *(struct CBaseGeometryProxy **)(*((_QWORD *)this + 94) + 424LL));
    v86 = v85;
    if ( v85 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1272,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)v85,
        v93);
      return v86;
    }
  }
  v78 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 48LL))(*((_QWORD *)this + 37));
  v79 = v78;
  if ( v78 >= 0 )
  {
LABEL_89:
    v43 = *((_DWORD *)this + 22);
    if ( (v43 & 0x800000) != 0 )
    {
      CTopLevelWindow::UpdateLivePreviewAnimation(this);
      *((_DWORD *)this + 22) &= ~0x800000u;
      v43 = *((_DWORD *)this + 22);
    }
    if ( (v43 & 0x8000000) != 0 )
    {
      CTopLevelWindow::UpdateDCompVisuals(this);
      *((_DWORD *)this + 22) &= ~0x8000000u;
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1275,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v78,
    v93);
  return v79;
}
