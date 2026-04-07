/*
 * XREFs of ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x1800A2B40
 * Callers:
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x1800A3010 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x1800A3B00 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x18001985C (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180033F9C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800354B0 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18003567C (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180035AB0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x180035CF4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x18009EA5C (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x1800A2AA8 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800A3D0C (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18010609C (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CAcrylicSheet::EnsureBackgroundEffects(CAcrylicSheet *this)
{
  struct CAccentAcrylicBlurBehind **v1; // r14
  struct CVisual **v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct CSolidRectangleInstruction **v7; // rdi
  CBaseObject *v8; // rcx
  DWORD SysColor; // r12d
  DWORD v10; // eax
  __int64 *v11; // rsi
  LONG v12; // r15d
  LONG v13; // ecx
  __int64 v14; // r8
  int inserted; // r15d
  __int64 v16; // rdx
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rdx
  CBaseObject *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  float v26; // xmm0_4
  struct CSolidRectangleInstruction *v27; // rax
  __int128 v28; // xmm1
  int v29; // [rsp+20h] [rbp-60h]
  int v30; // [rsp+40h] [rbp-40h]
  LONG v31; // [rsp+44h] [rbp-3Ch]
  int v32; // [rsp+48h] [rbp-38h]
  bool v33[16]; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v34; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v1 = (struct CAccentAcrylicBlurBehind **)((char *)this + 312);
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((char *)this + 312);
  v3 = (struct CVisual **)((char *)this + 320);
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((char *)this + 320);
  v7 = (struct CSolidRectangleInstruction **)((char *)this + 328);
  v8 = (CBaseObject *)*((_QWORD *)this + 41);
  *((_QWORD *)this + 41) = 0LL;
  if ( v8 )
    CBaseObject::Release(v8);
  LOBYTE(v8) = *((_BYTE *)this + 465);
  *(struct _D3DCOLORVALUE *)v33 = *(const struct _D3DCOLORVALUE *)&CTopLevelWindow::OVERLAPPED_BORDER_COLOR.r;
  SysColor = (_BYTE)v8 != 0 ? 13882323 : 5526612;
  LOBYTE(v8) = -(char)v8;
  v30 = 3 - ((_BYTE)v8 != 0);
  if ( (unsigned __int8)CDesktopManager::IsHighContrastMode((__int64)v8, v4, v5, v6) )
  {
    SysColor = GetSysColor(5);
    v10 = GetSysColor(8);
    v34.bottom = 1065353216;
    v30 = 0;
    *(float *)&v34.left = (float)(unsigned __int8)v10 / 255.0;
    *(float *)&v34.top = (float)BYTE1(v10) / 255.0;
    *(float *)&v34.right = (float)BYTE2(v10) / 255.0;
    *(struct tagRECT *)v33 = v34;
  }
  v11 = (__int64 *)((char *)this + 304);
  v12 = 0;
  v13 = 0;
  if ( *((_DWORD *)this + 74) - *((_DWORD *)this + 72) >= 0 )
    v12 = *((_DWORD *)this + 74) - *((_DWORD *)this + 72);
  v31 = v12;
  if ( *((_DWORD *)this + 75) - *((_DWORD *)this + 73) >= 0 )
    v13 = *((_DWORD *)this + 75) - *((_DWORD *)this + 73);
  v32 = v13;
  if ( !*v11 )
  {
    v34.bottom = v13;
    *(_QWORD *)&v34.left = 0LL;
    v34.right = v12;
    *v11 = 0LL;
    inserted = CWindowBorder::Create((struct CWindowBorder **)this + 38);
    if ( inserted < 0 )
    {
      v16 = 128LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)inserted);
      return (unsigned int)inserted;
    }
    inserted = CWindowBorder::SetBorderParameters(*v11, &v34, v14, *((_DWORD *)this + 117), (float *)v33, 0, v30);
    if ( inserted < 0 )
    {
      v16 = 135LL;
      goto LABEL_12;
    }
    inserted = CWindowBorder::EnableBorder((CWindowBorder *)*v11, 1);
    if ( inserted < 0 )
    {
      v16 = 137LL;
      goto LABEL_12;
    }
    inserted = VisualCollection::InsertRelative((CAcrylicSheet *)((char *)this + 32), *v11, 0LL, 0, v29);
    if ( inserted < 0 )
    {
      v16 = 138LL;
      goto LABEL_12;
    }
    v12 = v31;
  }
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 641LL) )
  {
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(v1);
    v18 = CAccentAcrylicBlurBehind::Create(v1);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x93,
        (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v18);
      return v19;
    }
    *(_OWORD *)((char *)*v1 + 360) = *((_OWORD *)this + 18);
    v20 = *((_DWORD *)this + 22);
    if ( (v20 & 0x1000) == 0 )
    {
      *((_DWORD *)this + 22) = v20 | 0x1000;
      CVisual::PropagateDirtyChildren(this);
    }
    v21 = CAcrylicSheet::EnsureAcrylicAccentColor(this);
    if ( v21 < 0 )
    {
      v22 = 150LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v21);
      return (unsigned int)v21;
    }
    v21 = CWindowBorder::SetContent((struct CVisual **)*v11, *v1);
    if ( v21 < 0 )
    {
      v22 = 151LL;
      goto LABEL_27;
    }
  }
  else
  {
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((char *)this + 320);
    v21 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 40);
    if ( v21 < 0 )
    {
      v22 = 155LL;
      goto LABEL_27;
    }
    v21 = CWindowBorder::SetContent((struct CVisual **)*v11, *v3);
    if ( v21 < 0 )
    {
      v22 = 156LL;
      goto LABEL_27;
    }
    v23 = *v7;
    *v7 = 0LL;
    if ( v23 )
      CBaseObject::Release(v23);
    v21 = CSolidRectangleInstruction::Create(v7);
    if ( v21 < 0 )
    {
      v22 = 158LL;
      goto LABEL_27;
    }
    *(_QWORD *)&v34.left = 0LL;
    *(_DWORD *)&v33[12] = 1065353216;
    *(float *)&v34.bottom = (float)v32;
    *(float *)v33 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)SysColor] / 255.0;
    v26 = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)SysColor >> 8] / 255.0;
    *(float *)&v34.right = (float)v12;
    *(float *)&v33[4] = v26;
    v27 = *v7;
    *(float *)&v33[8] = GammaLUT_sRGB_to_scRGB[BYTE2(SysColor)] / 255.0;
    v28 = *(_OWORD *)v33;
    *((struct tagRECT *)v27 + 2) = v34;
    *((_OWORD *)*v7 + 1) = v28;
    v21 = CRenderDataVisual::AddInstruction(*v3, *v7, v24, v25);
    if ( v21 < 0 )
    {
      v22 = 174LL;
      goto LABEL_27;
    }
  }
  return 0LL;
}
