/*
 * XREFs of ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019C330
 * Callers:
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180264078 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 * Callees:
 *     <none>
 */

char __fastcall TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::Intersect(
        float *a1,
        float *a2)
{
  float v2; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm8_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm0_4
  int v13; // ecx
  unsigned int v14; // eax
  char result; // al

  v2 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v7 = a1[4];
  v8 = a1[5];
  v9 = *a1;
  if ( *a2 > *a1 )
  {
    *a1 = v2;
    v9 = v2;
  }
  v10 = a1[1];
  if ( v4 > v10 )
  {
    a1[1] = v4;
    v10 = v4;
  }
  v11 = a1[2];
  if ( v11 > v5 )
  {
    a1[2] = v5;
    v11 = v5;
  }
  v12 = a1[3];
  if ( v12 > v6 )
  {
    a1[3] = v6;
    v12 = v6;
  }
  v13 = (v8 <= v7) + 1;
  if ( v11 > v9 )
    v13 = v8 <= v7;
  v14 = v13 + 1;
  if ( v12 > v10 )
    v14 = v13;
  if ( v14 <= 1 )
    return 1;
  *((_QWORD *)a1 + 2) = 0LL;
  result = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
