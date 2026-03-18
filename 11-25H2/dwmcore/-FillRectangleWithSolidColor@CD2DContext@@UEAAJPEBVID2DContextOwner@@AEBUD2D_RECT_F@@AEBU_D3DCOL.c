/*
 * XREFs of ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802C5320
 * Callers:
 *     <none>
 * Callees:
 *     ?Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ @ 0x180082590 (-Top@CD2DTargetStack@@QEBAPEAVCD2DTarget@@XZ.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180086F00 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180087450 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801C37D0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801E4A58 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x1801FB2CC (McTemplateU0ffff_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x1802BF754 (-scRGBTosRGB@@YAMM@Z.c)
 *     ?GetColorSpace@CD2DTarget@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1802D62A0 (-GetColorSpace@CD2DTarget@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::FillRectangleWithSolidColor(
        CD2DContext *this,
        void (__fastcall ***a2)(CDrawingContext *__hidden this, struct D2D_MATRIX_3X2_F *),
        const struct D2D_RECT_F *a3,
        const struct _D3DCOLORVALUE *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  CD2DTarget *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r8
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  float g; // xmm6_4
  float b; // xmm7_4
  __int64 v18; // rcx
  int v19; // eax
  struct D2D_MATRIX_3X2_F v21; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v22; // [rsp+48h] [rbp-99h]
  _BYTE v23[80]; // [rsp+58h] [rbp-89h] BYREF
  D3DVALUE r; // [rsp+A8h] [rbp-39h] BYREF
  float v25; // [rsp+ACh] [rbp-35h]
  float v26; // [rsp+B0h] [rbp-31h]
  float v27; // [rsp+B4h] [rbp-2Dh]
  __int128 v28; // [rsp+B8h] [rbp-29h] BYREF

  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  v10 = CD2DTargetStack::Top((CD2DContext *)((char *)this + 328));
  v22 = 0LL;
  *(_OWORD *)&v21.m[1][0] = 0LL;
  CD2DContext::EnsureBeginDraw(this, v11, v12);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v13 = ((__int64 (__fastcall *)(void (__fastcall ***)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *)))(*a2)[1])(a2);
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      2,
      v13);
  }
  CD2DContext::SetCommonState(this, a2, a6, &a5, (struct D2D_MATRIX_3X2_F *)v21.m[1]);
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    CMILMatrix::CMILMatrix((CMILMatrix *)v23, (struct D2D_MATRIX_3X2_F *)v21.m[1]);
    *(struct D2D_RECT_F *)&v21.m[1][0] = *a3;
    v28 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v23, (const struct D2D_RECT_F *)v21.m[1], (float *)&v28);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0ffff_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT,
        v14,
        *((float *)&v28 + 1),
        SBYTE8(v28),
        SBYTE12(v28));
  }
  ColorSpace = CD2DTarget::GetColorSpace(v10);
  g = a4->g;
  b = a4->b;
  if ( ColorSpace )
  {
    r = a4->r;
    v25 = g;
    v26 = b;
  }
  else
  {
    r = scRGBTosRGB(a4->r);
    v25 = scRGBTosRGB(g);
    v26 = scRGBTosRGB(b);
  }
  v18 = *((_QWORD *)this + 39);
  v27 = fminf(1.0, fmaxf(a4->a, 0.0));
  (*(void (__fastcall **)(__int64, D3DVALUE *))(*(_QWORD *)v18 + 64LL))(v18, &r);
  (*(void (__fastcall **)(_QWORD, const struct D2D_RECT_F *, _QWORD))(**((_QWORD **)this + 25) + 136LL))(
    *((_QWORD *)this + 25),
    a3,
    *((_QWORD *)this + 39));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v19 = ((__int64 (__fastcall *)(void (__fastcall ***)(CDrawingContext *__hidden, struct D2D_MATRIX_3X2_F *)))(*a2)[1])(a2);
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      2,
      v19);
  }
  return 0LL;
}
