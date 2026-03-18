/*
 * XREFs of ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180236DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800516E0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1AEBU_D3DCOLORVALUE@@@Z @ 0x18005DD70 (-DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUD2D_REC.c)
 *     ?DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18005DF6C (-DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV-$TMil.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180069704 (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x18006AC38 (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2090 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800D27D0 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1801B0C50 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x1801C3E00 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     McTemplateU0pppffff_EventWriteTransfer @ 0x180200A20 (McTemplateU0pppffff_EventWriteTransfer.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180266F20 (-PushOverlayClip@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBV-$TMilRect_@HUtagRECT@@UD2D_POIN.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Draw(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v7; // ebx
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  float bottom; // xmm6_4
  float right; // xmm7_4
  float top; // xmm8_4
  float left; // xmm9_4
  struct CVisual *CurrentVisual; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  float height; // xmm1_4
  float v22; // xmm0_4
  struct _D3DCOLORVALUE *BorderColor; // rax
  int v24; // eax
  int v25; // eax
  __int128 v27; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v28[64]; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+A8h] [rbp-60h]
  struct D2D_RECT_F v30; // [rsp+B8h] [rbp-50h] BYREF
  struct D2D_RECT_F v31; // [rsp+C8h] [rbp-40h] BYREF
  struct _D3DCOLORVALUE v32; // [rsp+D8h] [rbp-30h] BYREF

  v7 = 0;
  v29 = 0;
  v31 = 0LL;
  v9 = 0;
  CCompositionSurfaceBitmap::CalcImageTransform(this, (float *)a3, (__int64)v28, &v31);
  if ( IsEmpty(&v31) )
    return v7;
  v30 = 0LL;
  if ( (_BYTE)v10 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v28, &v31, &v30.left);
    bottom = v30.bottom;
    right = v30.right;
    top = v30.top;
    left = v30.left;
  }
  else
  {
    left = v31.left;
    top = v31.top;
    right = v31.right;
    bottom = v31.bottom;
    v30 = v31;
  }
  CDrawingContext::EtwLogCurrentState(a2, v10, v11);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
    McTemplateU0pppffff_EventWriteTransfer(v18, v17, CurrentVisual, this, this, 0, 0, right - left, bottom - top);
  }
  v27 = 0LL;
  if ( (unsigned __int8)CDrawingContext::DrawAsOverlay(
                          a2,
                          (CCompositionSurfaceBitmap *)(((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64))) )
  {
    if ( TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(&v27) )
    {
LABEL_14:
      if ( !(unsigned int)CCompositionSurfaceBitmap::GetSizePreference((__int64)this) )
        goto LABEL_19;
      if ( !CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a3) )
        goto LABEL_19;
      height = a3->height;
      v22 = a3->width + 0.0;
      *(_QWORD *)&v27 = 0LL;
      *((float *)&v27 + 2) = v22;
      *((float *)&v27 + 3) = height + 0.0;
      BorderColor = CCompositionSurfaceBitmap::GetBorderColor(this, &v32);
      v24 = CCompositionSurfaceBitmap::DrawContentBorders((__int64)a2, (float *)&v27, &v30.left, (__int64)BorderColor);
      v7 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x105u, 0LL);
      }
      else
      {
LABEL_19:
        v25 = CCompositionSurfaceBitmap::DrawLetterboxingMarginsInternal(
                (__int64)this,
                a2,
                &v31.left,
                (const struct CMILMatrix *)v28);
        v7 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x109u, 0LL);
      }
      goto LABEL_22;
    }
    v19 = CDrawingContext::PushOverlayClip(a2);
    v7 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xEAu, 0LL);
      return v7;
    }
    v9 = 1;
  }
  v20 = CContent::Draw(this, a2, a3, a4);
  v7 = v20;
  if ( v20 >= 0 )
  {
    if ( v9 )
    {
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      v9 = 0;
    }
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0xF0u, 0LL);
LABEL_22:
  if ( v9 )
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
  return v7;
}
