/*
 * XREFs of ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x18021EE8C
 * Callers:
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18018E754 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018EA60 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180260804 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall CSuperWetInkManager::UpdateRenderStateClip(
        const struct D2D_RECT_F *a1,
        __m128i *a2,
        __int64 a3,
        struct D2D_RECT_F *a4)
{
  double v4; // xmm2_8
  char v5; // bl
  int *v8; // rax
  __m128i v9; // xmm0
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int right_low; // r8d
  unsigned int v13; // r9d
  bool v14; // cc
  FLOAT bottom; // r11d
  unsigned int v16; // r10d
  FLOAT top; // ecx
  FLOAT right; // edx
  FLOAT v19; // eax
  int v21[4]; // [rsp+20h] [rbp-48h] BYREF
  struct D2D_RECT_F v22; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v22 = 0LL;
  if ( a3 )
    CMILMatrix::Transform2DBoundsHelper<0>(a3, a1, &v22.left);
  else
    v22 = *a1;
  v8 = PixelAlign(v21, (unsigned int *)&v22, v4);
  v9 = *a2;
  v10 = 0;
  v11 = 0;
  right_low = 0;
  v13 = 0;
  v14 = *v8 <= 0;
  v22 = (struct D2D_RECT_F)*a2;
  if ( !v14 )
    v10 = *v8;
  bottom = v22.bottom;
  if ( v8[1] > 0 )
    v11 = v8[1];
  v16 = _mm_cvtsi128_si32(v9);
  if ( v8[2] > 0 )
    right_low = v8[2];
  if ( v8[3] > 0 )
    v13 = v8[3];
  if ( v10 > v16 )
    v16 = v10;
  top = v22.top;
  LODWORD(v22.left) = v16;
  if ( v11 > LODWORD(v22.top) )
    top = *(float *)&v11;
  right = v22.right;
  v22.top = top;
  if ( right_low >= LODWORD(v22.right) )
    right_low = LODWORD(v22.right);
  else
    right = *(float *)&right_low;
  v22.right = right;
  v19 = v22.bottom;
  if ( v13 < LODWORD(v22.bottom) )
    v19 = *(float *)&v13;
  v22.bottom = v19;
  if ( right_low <= v16 )
    goto LABEL_25;
  if ( v13 >= LODWORD(bottom) )
    v13 = LODWORD(bottom);
  if ( v13 <= LODWORD(top) )
  {
LABEL_25:
    v19 = 0.0;
    right = 0.0;
    v22 = (struct D2D_RECT_F)0LL;
    top = 0.0;
    v16 = 0;
  }
  *a4 = v22;
  if ( LODWORD(v19) > LODWORD(top) && LODWORD(right) > v16 )
    return 1;
  return v5;
}
