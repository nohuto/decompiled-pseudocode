/*
 * XREFs of ?RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x1800749DC
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800298B0 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x180073B4C (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderMask(
        CTreeEffectLayer *this,
        const struct D2D_SIZE_F *a2,
        struct CDrawingContext *a3,
        struct IRenderTargetBitmap *a4)
{
  float v8; // xmm1_4
  float width; // xmm0_4
  float height; // xmm2_4
  FLOAT v11; // xmm0_4
  FLOAT v12; // xmm2_4
  float v13; // xmm1_4
  double v14; // xmm1_8
  float v15; // xmm0_4
  float v16; // xmm0_4
  double v17; // xmm1_8
  double v18; // xmm1_8
  float v19; // xmm0_4
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-50h]
  _DWORD v25[6]; // [rsp+40h] [rbp-30h] BYREF
  struct D2D_RECT_F v26; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( !a4 )
    return 0LL;
  if ( g_LockAndReadLayer )
  {
    v23 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a4 + 144LL))(a4);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 112LL))(
      v23,
      ((unsigned __int64)a3 + 24) & -(__int64)(a3 != 0LL));
  }
  v8 = *((float *)this + 70);
  width = a2->width;
  height = a2->height;
  v26.left = 0.0;
  v26.top = 0.0;
  v25[1] = 0;
  v25[2] = 0;
  v11 = width / v8;
  v12 = height / v8;
  v13 = a2->width;
  v26.right = v11;
  v26.bottom = v12;
  v14 = (v13 - 0.0) / (v11 - 0.0);
  v15 = v14;
  *(float *)v25 = v15;
  v16 = 0.0 - v14 * 0.0;
  v17 = a2->height - 0.0;
  *(float *)&v25[4] = v16;
  v18 = v17 / (v12 - 0.0);
  v19 = v18;
  *(float *)&v25[3] = v19;
  *(float *)&v25[5] = 0.0 - v18 * 0.0;
  v20 = CDrawingContext::DrawBitmapRealization(
          a3,
          (struct IRenderTargetBitmap *)((char *)a4 + 8),
          &v26,
          (const struct D2D1::Matrix3x2F *)v25,
          0,
          0,
          (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
  v21 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x914,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)v20,
      v24);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x34Au, 0LL);
  }
  else
  {
    return 0;
  }
  return v21;
}
