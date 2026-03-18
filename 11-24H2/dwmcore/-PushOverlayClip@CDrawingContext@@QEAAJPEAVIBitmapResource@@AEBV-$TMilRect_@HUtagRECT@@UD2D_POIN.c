/*
 * XREFs of ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180266F20
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180236DE0 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1802379C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18023E7F0 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??$query_to@VISwapChainRealization@@@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVISwapChainRealization@@@Z @ 0x1800D391C (--$query_to@VISwapChainRealization@@@-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800FB0BC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800FC770 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEB30 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180245C54 (-NotifyOverlayInvertedContent@COverlayContext@@QEAAXPEBVCVisual@@U_LUID@@AEBV-$TMilRect_@HUtagRE.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushOverlayClip(CDrawingContext *this, __int64 *a2, int *a3)
{
  double v3; // xmm2_8
  __int64 i; // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  struct D2D_RECT_F v17; // xmm0
  __int64 v18; // rax
  int (__fastcall *v19)(__int64 *, CGDISectionBitmapRealization **); // rbx
  COverlayContext *v20; // rbx
  const struct CVisual *CurrentVisual; // rax
  struct _LUID v22; // r8
  __int64 v23; // [rsp+30h] [rbp-59h] BYREF
  CGDISectionBitmapRealization *v24; // [rsp+38h] [rbp-51h] BYREF
  _OWORD v25[4]; // [rsp+40h] [rbp-49h] BYREF
  int v26; // [rsp+80h] [rbp-9h]
  struct D2D_RECT_F v27; // [rsp+90h] [rbp+7h] BYREF
  struct D2D_RECT_F v28; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v27 = 0LL;
  for ( i = 0LL; i < 4; ++i )
    *(&v28.left + i) = (float)a3[i];
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)this + 96, &v28, &v27.left);
  v8 = CDrawingContext::PushGpuClipRectInternal((__int64)this, 0LL, (__m128 *)&v27, 1, 0);
  v9 = v8;
  if ( v8 >= 0 )
  {
    CDrawingContext::GetClipBoundsWorld((__int64)this, &v27.left);
    if ( !IsEmpty(&v27) )
    {
      v13 = *((_OWORD *)this + 6);
      v14 = *((_OWORD *)this + 7);
      v26 = *((_DWORD *)this + 40);
      v25[0] = v13;
      v15 = *((_OWORD *)this + 8);
      v25[1] = v14;
      v16 = *((_OWORD *)this + 9);
      v25[2] = v15;
      v25[3] = v16;
      if ( CMILMatrix::Invert((CMILMatrix *)v25, v11, v12) )
      {
        v28 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)v25, &v27, &v28.left);
        v17 = *(struct D2D_RECT_F *)PixelAlign((int *)&v27, (unsigned int *)&v28, v3);
      }
      else
      {
        v17 = *(struct D2D_RECT_F *)a3;
      }
      v18 = *a2;
      v24 = 0LL;
      v23 = 0LL;
      v28 = v17;
      v19 = *(int (__fastcall **)(__int64 *, CGDISectionBitmapRealization **))(v18 + 64);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v24);
      if ( v19(a2, &v24) >= 0
        && (int)wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::query_to<ISwapChainRealization>(
                  &v24,
                  (__int64)&v23) >= 0 )
      {
        v20 = (COverlayContext *)*((_QWORD *)this + 6);
        (*(void (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)(v23 + 16) + 24LL))(v23 + 16, &v27);
        CurrentVisual = CDrawingContext::GetCurrentVisual(this);
        COverlayContext::NotifyOverlayInvertedContent(v20, CurrentVisual, v22, &v28);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v23);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globaldrawingcontext.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
