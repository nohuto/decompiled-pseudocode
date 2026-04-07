/*
 * XREFs of ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104184
 * Callers:
 *     ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x180104550 (-SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z.c)
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
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE05C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18010609C (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::AddIconPlate(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DWORD SysColor; // ebx
  DWORD v6; // eax
  __int128 v7; // xmm6
  bool v8; // zf
  struct CVisual ***v9; // rbx
  CBaseObject *v10; // rcx
  int v11; // eax
  struct CVisual **v12; // rsi
  CBaseObject *v13; // rcx
  int v14; // eax
  int v15; // eax
  int inserted; // eax
  struct CRenderDataInstruction **v17; // rdi
  CBaseObject *v18; // rcx
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  int v26; // [rsp+28h] [rbp-29h]
  int v27; // [rsp+28h] [rbp-29h]
  int v28; // [rsp+28h] [rbp-29h]
  __int128 v29; // [rsp+48h] [rbp-9h]
  int v30[4]; // [rsp+58h] [rbp+7h] BYREF
  __m128i si128; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (unsigned __int8)CDesktopManager::IsHighContrastMode((__int64)this, a2, a3, a4) )
  {
    SysColor = GetSysColor(5);
    v6 = GetSysColor(8);
    HIDWORD(v29) = 1065353216;
    *(float *)&v29 = (float)(unsigned __int8)v6 / 255.0;
    *((float *)&v29 + 1) = (float)BYTE1(v6) / 255.0;
    *((float *)&v29 + 2) = (float)BYTE2(v6) / 255.0;
    *(_OWORD *)v30 = v29;
    *(float *)&v29 = (float)(unsigned __int8)SysColor / 255.0;
    *((float *)&v29 + 1) = (float)BYTE1(SysColor) / 255.0;
    *((_QWORD *)&v29 + 1) = COERCE_UNSIGNED_INT((float)BYTE2(SysColor) / 255.0) | 0x3F80000000000000LL;
    v7 = v29;
  }
  else
  {
    v8 = *((_BYTE *)this + 32) == 0;
    *(_OWORD *)v30 = 0LL;
    if ( v8 )
      v7 = _xmm;
    else
      v7 = _xmm;
  }
  v9 = (struct CVisual ***)((char *)this + 48);
  v10 = (CBaseObject *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = CWindowBorder::Create((struct CWindowBorder **)this + 6);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      197LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v11,
      v26);
  v12 = (struct CVisual **)((char *)this + 56);
  v13 = (CBaseObject *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v13 )
    CBaseObject::Release(v13);
  v14 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 7);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      198LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v14,
      v26);
  v15 = CWindowBorder::SetContent(*v9, *v12);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      199LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v15,
      v26);
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)*v12 + 32),
               *((_QWORD *)this + 10),
               0LL,
               0,
               v26);
  if ( inserted < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      200LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)inserted,
      v27);
  v17 = (struct CRenderDataInstruction **)((char *)this + 64);
  v18 = (CBaseObject *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v18 )
    CBaseObject::Release(v18);
  v19 = CSolidRectangleInstruction::Create((struct CSolidRectangleInstruction **)this + 8);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      201LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v19,
      v27);
  v21 = CWindowBorder::SetBorderParameters(
          (__int64)*v9,
          (const struct tagRECT *)&si128,
          v20,
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 336LL) + 348LL),
          (float *)v30,
          0,
          0);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      208LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v21,
      v28);
  v22 = CWindowBorder::EnableBorder((CWindowBorder *)*v9, 1);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      210LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v22,
      v28);
  *((_OWORD *)*v17 + 2) = _xmm;
  *((_OWORD *)*v17 + 1) = v7;
  v25 = CRenderDataVisual::AddInstruction(*v12, *v17, v23, v24);
  if ( v25 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      214LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v25,
      v28);
}
