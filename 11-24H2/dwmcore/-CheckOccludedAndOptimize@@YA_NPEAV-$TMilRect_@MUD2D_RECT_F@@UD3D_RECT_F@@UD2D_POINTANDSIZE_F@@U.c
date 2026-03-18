/*
 * XREFs of ?CheckOccludedAndOptimize@@YA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV1@@Z @ 0x1802367B0
 * Callers:
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N1@Z @ 0x18028491C (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ?TrimCornerRect@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1802849C0 (-TrimCornerRect@CArrayBasedCoverageSet@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_PO.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 */

char __fastcall CheckOccludedAndOptimize(float *a1, float *a2)
{
  __int128 v4; // xmm3
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm7_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  int v11; // ecx
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  __int128 v17; // [rsp+20h] [rbp-38h]
  __int128 v18; // [rsp+20h] [rbp-38h]

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    if ( *a1 < *a2 || a2[2] < a1[2] )
      return 0;
    v12 = a2[1];
    v13 = a1[1];
    v14 = a2[3];
    v15 = a1[3];
    if ( v13 < v12 )
    {
      if ( v14 >= v15 && v15 > v12 )
        a1[3] = v12;
      return 0;
    }
    if ( v14 < v15 )
    {
      if ( v14 > v13 )
        a1[1] = v14;
      return 0;
    }
    return 1;
  }
  v4 = *(_OWORD *)a1;
  v17 = *(_OWORD *)a1;
  if ( *a2 > COERCE_FLOAT(*(_OWORD *)a1) )
    *(float *)&v4 = *a2;
  LODWORD(v5) = HIDWORD(*(_QWORD *)a1);
  v6 = v5;
  if ( a2[1] > *((float *)&v17 + 1) )
  {
    v5 = a2[1];
    v6 = v5;
  }
  LODWORD(v7) = *((_QWORD *)a1 + 1);
  v8 = v7;
  if ( *((float *)&v17 + 2) > a2[2] )
  {
    v7 = a2[2];
    v8 = v7;
  }
  LODWORD(v9) = HIDWORD(*(_OWORD *)a1);
  v10 = v9;
  if ( *((float *)&v17 + 3) > a2[3] )
  {
    v9 = a2[3];
    v10 = v9;
  }
  if ( v8 <= *(float *)&v4 || v10 <= v6 )
    return 0;
  v11 = 0;
  v18 = 0LL;
  if ( v5 > a1[1] )
  {
    v11 = 1;
    *(_QWORD *)((char *)&v18 + 4) = *(_QWORD *)(a1 + 1);
    *((float *)&v18 + 3) = v5;
    *(float *)&v18 = *a1;
  }
  if ( *(float *)&v4 > *a1 )
  {
    if ( !v11 )
    {
      *(float *)&v18 = *a1;
      *((_QWORD *)&v18 + 1) = __PAIR64__(LODWORD(v9), v4);
      *((float *)&v18 + 1) = v5;
    }
    ++v11;
  }
  if ( a1[2] > v7 )
  {
    if ( !v11 )
    {
      *(_QWORD *)&v18 = __PAIR64__(LODWORD(v5), LODWORD(v7));
      *((float *)&v18 + 2) = a1[2];
      *((float *)&v18 + 3) = v9;
    }
    ++v11;
  }
  if ( a1[3] > v9 )
  {
    if ( !v11 )
    {
      *((float *)&v18 + 1) = v9;
      *((float *)&v18 + 3) = a1[3];
      *(float *)&v18 = *a1;
      *((float *)&v18 + 2) = a1[2];
    }
    ++v11;
  }
  if ( !v11 )
    return 1;
  if ( v11 == 1 )
    *(_OWORD *)a1 = v18;
  return 0;
}
