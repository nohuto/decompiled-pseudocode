/*
 * XREFs of ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180026250
 * Callers:
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180024410 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::UnionUnsafe(
        float *a1,
        float *a2)
{
  float v2; // xmm0_4
  bool v3; // cf
  bool v4; // zf
  float v7; // xmm0_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm5_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  float v22; // xmm3_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  char result; // al

  v2 = a1[5];
  v3 = v2 < a1[4];
  v4 = v2 == a1[4];
  v7 = a1[3];
  v8 = a2[5];
  v9 = a2[4];
  v10 = a2[2];
  v11 = *a2;
  v12 = a2[3];
  v13 = a2[1];
  v14 = *a1;
  v15 = a1[1];
  v16 = a1[2];
  v17 = (v3 || v4) + 1;
  if ( v16 > v14 )
    v17 = v3 || v4;
  v18 = 0;
  v19 = v17 + 1;
  if ( v7 > v15 )
    v19 = v17;
  if ( v8 <= v9 )
    v18 = 1;
  v20 = v18 + 1;
  if ( v10 > v11 )
    v20 = v18;
  v21 = v20 + 1;
  if ( v12 > v13 )
    v21 = v20;
  if ( v19 <= 1 )
  {
    if ( v21 <= 1 )
    {
      v22 = v7;
      if ( v14 > v11 )
      {
        *a1 = v11;
        v22 = v7;
      }
      v23 = a2[1];
      v24 = v7;
      if ( v15 > v23 )
      {
        a1[1] = v23;
        v24 = v22;
      }
      v25 = a2[2];
      if ( v25 > v16 )
      {
        a1[2] = v25;
        v7 = v24;
      }
      v26 = a2[3];
      if ( v26 > v7 )
        a1[3] = v26;
      v27 = a2[5];
      if ( v27 > a1[5] )
        a1[5] = v27;
      v28 = a2[4];
      if ( a1[4] > v28 )
        a1[4] = v28;
    }
    return 1;
  }
  if ( v21 <= 1 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
    return 1;
  }
  *((_QWORD *)a1 + 2) = 0LL;
  result = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
