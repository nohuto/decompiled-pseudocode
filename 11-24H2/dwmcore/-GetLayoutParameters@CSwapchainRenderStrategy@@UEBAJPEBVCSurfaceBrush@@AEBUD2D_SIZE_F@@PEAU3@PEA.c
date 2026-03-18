/*
 * XREFs of ?GetLayoutParameters@CSwapchainRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18019F3B0
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180141330 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004CE50 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2700 (-GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@QEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x18019F610 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapchainRenderStrategy::GetLayoutParameters(
        CSwapchainRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5,
        struct D2D_MATRIX_3X2_F *a6)
{
  __int64 v6; // r15
  CCompositionSurfaceBitmap *v8; // rcx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(CCompositionSurfaceBitmap *, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  unsigned int v12; // ebx
  char v13; // di
  float bottom; // xmm1_4
  float right; // xmm0_4
  float top; // xmm3_4
  float left; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  __int128 *v20; // rax
  __int64 v21; // xmm1_8
  struct IBitmapRealization *v23[2]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v24[6]; // [rsp+40h] [rbp-89h] BYREF
  int v25; // [rsp+70h] [rbp-59h]
  int v26; // [rsp+74h] [rbp-55h]
  int v27; // [rsp+80h] [rbp-49h]
  __int128 v28; // [rsp+90h] [rbp-39h] BYREF
  int v29; // [rsp+A0h] [rbp-29h]
  int v30; // [rsp+A4h] [rbp-25h]
  struct D2D_RECT_F v31; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-11h] BYREF
  __int128 v33; // [rsp+C8h] [rbp-1h] BYREF
  int v34; // [rsp+D8h] [rbp+Fh]
  int v35; // [rsp+DCh] [rbp+13h]

  v6 = *((_QWORD *)a2 + 16);
  v27 = 0;
  v8 = (CCompositionSurfaceBitmap *)(v6 + 72);
  v31 = 0LL;
  v32 = 0LL;
  v9 = *(_QWORD *)(v6 + 72);
  v23[0] = 0LL;
  v28 = 0LL;
  v10 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct IBitmapRealization **))(v9 + 64);
  if ( v10 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v8, v23);
  else
    CurrentRenderingRealization = ((__int64 (__fastcall *)(CCompositionSurfaceBitmap *, struct IBitmapRealization **, const struct D2D_SIZE_F *))v10)(
                                    v8,
                                    v23,
                                    a3);
  v12 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(struct IBitmapRealization *, _QWORD *, struct D2D_RECT_F *))(*(_QWORD *)v23[0]
                                                                                                + 40LL))(
            v23[0],
            v24,
            &v31);
    if ( CCompositionSurfaceBitmap::GetScaledLetterboxingMargins(v6, (__int64)&v32) )
    {
      CMILMatrix::PrependTranslate((CMILMatrix *)v24, *(float *)&v32, *((float *)&v32 + 1), 0.0);
      v13 = 1;
    }
    else if ( !v13 )
    {
      left = v31.left;
      top = v31.top;
      right = v31.right;
      bottom = v31.bottom;
      goto LABEL_7;
    }
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v24, &v31, (float *)&v28);
    bottom = *((float *)&v28 + 3);
    right = *((float *)&v28 + 2);
    top = *((float *)&v28 + 1);
    left = *(float *)&v28;
LABEL_7:
    v18 = right - left;
    if ( v18 == 0.0 || (v19 = bottom - top, v19 == 0.0) )
    {
      v12 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        -2003304441,
        0x4EEu,
        0LL);
    }
    else
    {
      a4->width = v18;
      a4->height = v19;
      *a5 = v31;
      if ( v13 )
      {
        v20 = &v28;
        *(_QWORD *)&v28 = v24[0];
        *((_QWORD *)&v28 + 1) = v24[2];
        v29 = v25;
        v30 = v26;
      }
      else
      {
        v20 = &v33;
        v34 = 0;
        v35 = 0;
        v33 = _xmm;
      }
      v21 = *((_QWORD *)v20 + 2);
      *(_OWORD *)&a6->m11 = *v20;
      *(_QWORD *)&a6->m[2][0] = v21;
    }
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    20,
    &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    CurrentRenderingRealization,
    0x4D2u,
    0LL);
LABEL_12:
  if ( v23[0] )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
  return v12;
}
