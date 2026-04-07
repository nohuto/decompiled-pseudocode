/*
 * XREFs of ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18006B8EC
 * Callers:
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x180068100 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x18007C4E0 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180024618 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18002CC00 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x18002E4B0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18002EDE4 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003450C (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1800359D4 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x18003E3A0 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004BB08 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180066354 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180066440 (-SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x18006BCB4 (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4ShadowStyle@1@@Z @ 0x18006C024 (-SetBorderParameters@CWindowBorder@@QEAAJAEBUtagRECT@@MHAEBU_D3DCOLORVALUE@@W4BorderStyle@1@W4Sh.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x18006C1B0 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAcrylicSheet::EnsureBackgroundEffects(CBaseObject **this)
{
  CBaseObject **v1; // r14
  CVisualProxy ***v3; // r12
  CBaseObject **v4; // r15
  bool v5; // cf
  DWORD SysColor; // r13d
  DWORD v7; // eax
  CWindowBorder **v8; // rdi
  int v9; // esi
  int v10; // ecx
  int v11; // esi
  __int64 v12; // r8
  __int64 v13; // rdx
  int v15; // ebx
  __int64 v16; // rdx
  D3DVALUE v17; // xmm0_4
  CBaseObject *v18; // rcx
  struct _D3DCOLORVALUE *v19; // [rsp+20h] [rbp-50h]
  struct _D3DCOLORVALUE v20; // [rsp+40h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v21; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  int v23; // [rsp+B8h] [rbp+48h]
  int v24; // [rsp+C0h] [rbp+50h]

  v1 = this + 33;
  wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(this + 33);
  v3 = (CVisualProxy ***)(this + 34);
  wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(this + 34);
  v4 = this + 35;
  wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(this + 35);
  v5 = *((_BYTE *)this + 417) != 0;
  *(struct _D3DCOLORVALUE *)&v21.r = *(const struct _D3DCOLORVALUE *)&CTopLevelWindow::OVERLAPPED_BORDER_COLOR.r;
  SysColor = v5 ? 13882323 : 5526612;
  if ( CDesktopManager::IsHighContrastMode() )
  {
    SysColor = GetSysColor(5);
    v7 = GetSysColor(8);
    v20.a = 1.0;
    v20.r = (float)(unsigned __int8)v7 / 255.0;
    v20.g = (float)BYTE1(v7) / 255.0;
    v20.b = (float)BYTE2(v7) / 255.0;
    *(struct _D3DCOLORVALUE *)&v21.r = *(struct _D3DCOLORVALUE *)&v20.r;
  }
  v8 = this + 32;
  v9 = 0;
  v10 = 0;
  if ( *((_DWORD *)this + 62) - *((_DWORD *)this + 60) >= 0 )
    v9 = *((_DWORD *)this + 62) - *((_DWORD *)this + 60);
  v23 = v9;
  if ( *((_DWORD *)this + 63) - *((_DWORD *)this + 61) >= 0 )
    v10 = *((_DWORD *)this + 63) - *((_DWORD *)this + 61);
  v24 = v10;
  if ( !*v8 )
  {
    *(_QWORD *)&v20.r = 0LL;
    *v8 = 0LL;
    *(_QWORD *)&v20.b = __PAIR64__(v10, v9);
    v11 = CWindowBorder::Create(this + 32);
    if ( v11 < 0 )
    {
      v13 = 125LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v11,
        (int)v19);
      return (unsigned int)v11;
    }
    v19 = &v21;
    v11 = CWindowBorder::SetBorderParameters(*v8, &v20, v12, *((unsigned int *)this + 105));
    if ( v11 < 0 )
    {
      v13 = 132LL;
      goto LABEL_10;
    }
    v11 = CWindowBorder::EnableBorder(*v8, 1);
    if ( v11 < 0 )
    {
      v13 = 134LL;
      goto LABEL_10;
    }
    v11 = CContainerVisual::AddChild((CContainerVisual *)this, *v8);
    if ( v11 < 0 )
    {
      v13 = 135LL;
      goto LABEL_10;
    }
    v9 = v23;
  }
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 633LL) )
  {
    wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(v1);
    v11 = CAccentAcrylicBlurBehind::Create(v1);
    if ( v11 < 0 )
    {
      v13 = 144LL;
      goto LABEL_10;
    }
    *(_OWORD *)((char *)*v1 + 312) = *((_OWORD *)this + 15);
    CVisual::SetDirtyFlags((CVisual *)this, 4096);
    v15 = CAcrylicSheet::EnsureAcrylicAccentColor((CAcrylicSheet *)this);
    if ( v15 < 0 )
    {
      v16 = 147LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
        (const char *)(unsigned int)v15,
        (int)v19);
      return (unsigned int)v15;
    }
    v15 = CWindowBorder::SetContent((struct CVisual **)*v8, (CVisualProxy **)*v1);
    if ( v15 < 0 )
    {
      v16 = 148LL;
      goto LABEL_23;
    }
  }
  else
  {
    wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(this + 34);
    v15 = CRenderDataVisual::Create(this + 34);
    if ( v15 < 0 )
    {
      v16 = 152LL;
      goto LABEL_23;
    }
    v15 = CWindowBorder::SetContent((struct CVisual **)*v8, *v3);
    if ( v15 < 0 )
    {
      v16 = 153LL;
      goto LABEL_23;
    }
    wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(v4);
    v15 = CSolidRectangleInstruction::Create(v4);
    if ( v15 < 0 )
    {
      v16 = 155LL;
      goto LABEL_23;
    }
    *(_QWORD *)&v20.r = 0LL;
    v21.a = 1.0;
    v20.a = (float)v24;
    v21.r = flt_180105840[(unsigned __int8)SysColor] / 255.0;
    v17 = flt_180105840[(unsigned __int64)(unsigned __int16)SysColor >> 8] / 255.0;
    v20.b = (float)v9;
    v21.g = v17;
    v18 = *v4;
    v21.b = flt_180105840[BYTE2(SysColor)] / 255.0;
    CSolidRectangleInstruction::SetRect((__int64)v18, &v20);
    v15 = CSolidRectangleInstruction::SetSolidFill((struct _D3DCOLORVALUE *)*v4, &v21);
    if ( v15 < 0 )
    {
      v16 = 170LL;
      goto LABEL_23;
    }
    v15 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)*v3, *v4);
    if ( v15 < 0 )
    {
      v16 = 171LL;
      goto LABEL_23;
    }
  }
  return 0LL;
}
