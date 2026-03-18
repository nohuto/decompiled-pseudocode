/*
 * XREFs of ?GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x18005DB50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E140 (-GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005E5AC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetMPORects(__int64 a1, __int64 a2, float *a3, __int64 a4, float *a5)
{
  float *v9; // rsi
  int v11; // eax
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm1_4
  int v16; // eax
  float v17; // xmm0_4
  __int128 v18; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v19[64]; // [rsp+48h] [rbp-1h] BYREF
  int v20; // [rsp+88h] [rbp+3Fh]

  if ( (*(_DWORD *)(a1 - 88) & 0x4000) != 0 )
  {
    v20 = 0;
    v18 = 0uLL;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
      (CBitmapRealization *)(a1 - 328),
      (struct CMILMatrix *)v19);
    *a3 = (float)0;
    a3[1] = (float)0;
    v11 = v18;
    a3[2] = (float)0;
    v12 = (float)v11;
    v13 = DWORD1(v18);
    a3[3] = (float)0;
    v9 = a5;
    *a5 = v12;
    v14 = (float)v13;
    v15 = (float)SDWORD2(v18);
    v16 = HIDWORD(v18);
    a5[1] = v14;
    a5[2] = v15;
    v18 = 0LL;
    a5[3] = (float)v16;
    CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins(a1, &v18);
    *(_OWORD *)a4 = *(_OWORD *)a5;
    v17 = *(float *)(a4 + 4);
    *(float *)a4 = *(float *)a4 - *(float *)(a1 - 128);
    *(float *)(a4 + 4) = v17 - *(float *)(a1 - 124);
    *(float *)(a4 + 8) = *(float *)(a1 - 120) + *(float *)(a4 + 8);
    *(float *)(a4 + 12) = *(float *)(a1 - 116) + *(float *)(a4 + 12);
  }
  else
  {
    v9 = a5;
    *a3 = (float)*(int *)(a1 - 172);
    a3[1] = (float)*(int *)(a1 - 168);
    a3[2] = (float)*(int *)(a1 - 164);
    a3[3] = (float)*(int *)(a1 - 160);
    *(_QWORD *)a4 = 0LL;
    *(float *)(a4 + 8) = (float)*(int *)(a1 - 112);
    *(float *)(a4 + 12) = (float)*(int *)(a1 - 108);
    *a5 = (float)*(int *)(a1 - 104);
    a5[1] = (float)*(int *)(a1 - 100);
    a5[2] = (float)*(int *)(a1 - 96);
    a5[3] = (float)*(int *)(a1 - 92);
  }
  CMILMatrix::Transform2DBoundsHelper<0>(a2, a4, a4);
  return CMILMatrix::Transform2DBoundsHelper<0>(a2, v9, v9);
}
