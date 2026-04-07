/*
 * XREFs of ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18003B464
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x180006B58 (-EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019608 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x18001BC54 (-ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18001DCB4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x1800309E4 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z.c)
 *     ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z @ 0x180031BB8 (-Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z.c)
 *     ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ @ 0x1800339F0 (-GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA-AW4SYSTEMBACKDROP_TYPE@@XZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800354B0 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateSystemBackdropVisual(CTopLevelWindow *this, __int64 a2)
{
  int v3; // esi
  CBaseObject **v4; // rdi
  struct CVisual *v5; // rdx
  CVisual *v6; // rcx
  int EffectiveSystemBackdropType; // ebp
  int inserted; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  CBaseObject *v14; // rdi
  char v15; // bp
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  DWORD SysColor; // eax
  int v21; // [rsp+20h] [rbp-28h]
  int v22; // [rsp+20h] [rbp-28h]
  struct _MARGINS v23; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 1;
  if ( (unsigned int)(*((_DWORD *)this + 210) - 2) > 2 )
  {
    v4 = (CBaseObject **)((char *)this + 320);
    v5 = (struct CVisual *)*((_QWORD *)this + 40);
    if ( !v5 )
      goto LABEL_3;
    inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), v5);
    if ( inserted >= 0 )
    {
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(v4);
      goto LABEL_3;
    }
    v19 = 360LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)inserted,
      v21);
    return (unsigned int)inserted;
  }
  EffectiveSystemBackdropType = CTopLevelWindow::GetEffectiveSystemBackdropType((__int64)this, a2);
  if ( EffectiveSystemBackdropType == 3 )
    CWindowBackgroundTreatmentVisual::EnableTreatment(*((CWindowBackgroundTreatmentVisual **)this + 33));
  v4 = (CBaseObject **)((char *)this + 320);
  if ( !*((_QWORD *)this + 40) )
  {
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)this + 40);
    inserted = CSystemBackdropVisual::Create(EffectiveSystemBackdropType, (CSystemBackdropVisual **)this + 40);
    if ( inserted < 0 )
    {
      v19 = 342LL;
    }
    else
    {
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 36) + 32LL),
                   (unsigned __int64)*v4,
                   0LL,
                   1u,
                   v21);
      if ( inserted >= 0 )
        goto LABEL_3;
      v19 = 345LL;
    }
    goto LABEL_31;
  }
LABEL_3:
  v6 = *v4;
  if ( !*v4 )
    return 0LL;
  if ( *((_DWORD *)this + 210) != 4 )
  {
    v23 = 0LL;
    CVisual::SetInsetFromParent(v6, &v23);
    goto LABEL_13;
  }
  inserted = CTopLevelWindow::ResizeVisualToTitlebar(this, *v4);
  if ( inserted < 0 )
  {
    v19 = 369LL;
    goto LABEL_31;
  }
LABEL_13:
  v14 = *v4;
  v15 = (*(_BYTE *)(*((_QWORD *)this + 94) + 677LL) & 4) != 0;
  if ( (unsigned __int8)CDesktopManager::IsHighContrastMode(v11, v10, v12, v13) )
  {
    v3 = 3;
  }
  else if ( (*(_BYTE *)(*((_QWORD *)this + 94) + 672LL) & 2) == 0
         || !*(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 641LL) )
  {
    v3 = 2;
  }
  v16 = *((_DWORD *)v14 + 71);
  if ( v16 == v3 && *((_BYTE *)v14 + 280) == v15 && v3 != 3 )
    return 0LL;
  if ( v16 == 3 && v3 == 3 )
  {
    SysColor = GetSysColor(5);
    if ( *((_BYTE *)v14 + 288) == 0xFF
      && *(_WORD *)((char *)v14 + 289) == (_WORD)SysColor
      && *((_BYTE *)v14 + 291) == BYTE2(SysColor) )
    {
      return 0LL;
    }
  }
  v17 = CSystemBackdropVisual::SetState((__int64)v14, v3, v15);
  v18 = v17;
  if ( v17 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x53,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
    (const char *)(unsigned int)v17,
    v21);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17D,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)v18,
    v22);
  return v18;
}
