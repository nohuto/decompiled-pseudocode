/*
 * XREFs of ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024FD30
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18002A7A0 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E2D20 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A1900 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@U1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPE.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800A42B0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800DC130 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024FF6C (-NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV-$TMilRect_@HUtagRE.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushOverlayClip(__m128 *this, __int64 *a2, int *a3)
{
  double v3; // xmm2_8
  __int64 v4; // rax
  char v8; // bl
  int v9; // eax
  unsigned int v10; // esi
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  bool v17; // al
  struct D2D_RECT_F v18; // xmm0
  __int64 v19; // rax
  __int64 (__fastcall *v20)(CGDISectionBitmapRealization *, const struct _GUID *, void **); // rax
  int v21; // eax
  unsigned __int64 v22; // rbx
  struct CVisual *CurrentVisual; // rax
  __int64 v24; // r8
  char *v25; // [rsp+30h] [rbp-69h] BYREF
  CGDISectionBitmapRealization *v26; // [rsp+38h] [rbp-61h] BYREF
  __m128 v27[4]; // [rsp+40h] [rbp-59h] BYREF
  __int32 v28; // [rsp+80h] [rbp-19h]
  __m128 v29; // [rsp+90h] [rbp-9h] BYREF
  struct D2D_RECT_F v30; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = 0LL;
  v29 = 0LL;
  v8 = 1;
  do
  {
    *(&v30.left + v4) = (float)a3[v4];
    ++v4;
  }
  while ( v4 < 4 );
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)&this[6], &v30, v29.m128_f32);
  v9 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, &v29, 1, 0);
  v10 = v9;
  if ( v9 >= 0 )
  {
    CDrawingContext::GetClipBoundsWorld((__int64)this, v29.m128_f32);
    if ( v29.m128_f32[2] > v29.m128_f32[0] && v29.m128_f32[3] > v29.m128_f32[1] )
      v8 = 0;
    if ( !v8 )
    {
      v13 = this[6];
      v14 = this[7];
      v28 = this[10].m128_i32[0];
      v27[0] = v13;
      v15 = this[8];
      v27[1] = v14;
      v16 = this[9];
      v27[2] = v15;
      v27[3] = v16;
      v17 = Windows::Foundation::Numerics::invert((Windows::Foundation::Numerics *)v27, v27, v12);
      LOWORD(v28) = v28 & 0xC003;
      if ( v17 )
      {
        v30 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v27, (const struct D2D_RECT_F *)&v29, &v30.left);
        v18 = *(struct D2D_RECT_F *)PixelAlign((int *)&v29, (unsigned int *)&v30, v3);
      }
      else
      {
        v18 = *(struct D2D_RECT_F *)a3;
      }
      v19 = *a2;
      v25 = 0LL;
      v26 = 0LL;
      v30 = v18;
      if ( (*(int (__fastcall **)(__int64 *, CGDISectionBitmapRealization **))(v19 + 64))(a2, &v26) >= 0 )
      {
        v20 = **(__int64 (__fastcall ***)(CGDISectionBitmapRealization *, const struct _GUID *, void **))v26;
        v21 = v20 == CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface
            ? CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(
                v26,
                &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
                (void **)&v25)
            : v20(v26, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, (void **)&v25);
        if ( v21 >= 0 )
        {
          v22 = this[3].m128_u64[0];
          (*(void (__fastcall **)(char *, __m128 *))(*((_QWORD *)v25 + 2) + 24LL))(v25 + 16, &v29);
          CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)this);
          COverlayContext::NotifyOverlayInvertedContent(v22, CurrentVisual, v24, &v30);
        }
      }
      if ( v25 )
        (*(void (__fastcall **)(char *))(*(_QWORD *)v25 + 16LL))(v25);
      if ( v26 )
        (*(void (__fastcall **)(CGDISectionBitmapRealization *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globaldrawingcontext.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
