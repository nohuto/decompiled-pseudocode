/*
 * XREFs of ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802D9CA0
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1802D9ED0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800AA280 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

struct D2D_RECT_F *__fastcall CSecondaryD2DBitmap::GetPrefilteredRect(__int64 a1, struct D2D_RECT_F *a2, int *a3)
{
  int v3; // eax
  double v4; // xmm2_8
  FLOAT v6; // xmm0_4
  FLOAT v7; // xmm1_4
  int v8; // eax
  FLOAT v9; // xmm0_4
  int v10; // eax
  float v11; // xmm1_4
  struct D2D_RECT_F *result; // rax
  struct D2D_RECT_F v13; // [rsp+20h] [rbp-29h] BYREF
  _OWORD v14[4]; // [rsp+30h] [rbp-19h] BYREF
  int v15; // [rsp+70h] [rbp+27h]
  __int128 v16; // [rsp+80h] [rbp+37h] BYREF

  v3 = *a3;
  v15 = 0;
  *(_QWORD *)&v4 = *(unsigned int *)(a1 + 204);
  *(float *)&v4 = *(float *)&v4 / 96.0;
  LOWORD(v15) = 10666;
  v6 = (float)v3;
  v7 = (float)a3[1];
  v8 = a3[2];
  v13.left = v6;
  v9 = (float)v8;
  v10 = a3[3];
  v13.top = v7;
  v13.right = v9;
  v13.bottom = (float)v10;
  v14[1] = _xmm;
  v14[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
  v11 = *(float *)(a1 + 200);
  v14[0] = _xmm;
  v14[2] = _xmm;
  CMILMatrix::Scale((CMILMatrix *)v14, v11 / 96.0, *(float *)&v4, 1.0);
  v16 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v14, &v13, (float *)&v16);
  PixelAlign((int *)&v13, (unsigned int *)&v16, v4);
  result = a2;
  *a2 = v13;
  return result;
}
