/*
 * XREFs of ?GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x18005EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005EFA0 (-CalcSourceRect@CBitmapRealization@@IEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2870 (-GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetMPORects(__int64 a1, __int64 a2, float *a3, _OWORD *a4, _OWORD *a5)
{
  __int64 v5; // rsi
  int *v9; // rax
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm1_4
  __int64 result; // rax
  float v14; // [rsp+20h] [rbp-30h] BYREF
  float v15; // [rsp+24h] [rbp-2Ch]
  float v16; // [rsp+28h] [rbp-28h]
  float v17; // [rsp+2Ch] [rbp-24h]
  __int128 v18; // [rsp+30h] [rbp-20h]
  float v19[4]; // [rsp+40h] [rbp-10h] BYREF

  v5 = a1 - 328;
  v9 = (int *)CBitmapRealization::CalcSourceRect(a1 - 328);
  v14 = 0.0;
  v15 = 0.0;
  v10 = (float)*v9;
  *a3 = v10;
  v11 = (float)v9[1];
  a3[1] = v11;
  v12 = (float)v9[2];
  a3[2] = v12;
  LODWORD(v9) = v9[3];
  v16 = v12 - v10;
  a3[3] = (float)(int)v9;
  v17 = (float)(int)v9 - v11;
  CMILMatrix::Transform2DBoundsHelper<0>(a2, &v14, a5);
  result = 49152LL;
  if ( (*(_DWORD *)(v5 + 240) & 0xC000) == 0xC000 )
  {
    v18 = 0LL;
    CBitmapRealization::GetScaledLetterboxingMargins(v5);
    v19[0] = v14 - *(float *)&v18;
    v19[1] = v15 - *((float *)&v18 + 1);
    v19[2] = *((float *)&v18 + 2) + v16;
    v19[3] = *((float *)&v18 + 3) + v17;
    return CMILMatrix::Transform2DBoundsHelper<0>(a2, v19, a4);
  }
  else
  {
    *a4 = *a5;
  }
  return result;
}
