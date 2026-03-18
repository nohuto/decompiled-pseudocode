/*
 * XREFs of ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x180173C70
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x180173F00 (-reserve_region@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA_ea_180173F00.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x180175100 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CRegionShape::IntersectWithRect(__int64 a1, float *a2, char *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int *v6; // rdi
  int v7; // eax
  __int64 v8; // r15
  int *v9; // rdi
  char *v10; // r15
  int v11; // esi
  int *v12; // rdx
  int *v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  float *v16; // r13
  int *v17; // r12
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  _OWORD *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r13d
  __int128 v27; // [rsp+38h] [rbp-38h]
  int *v28; // [rsp+48h] [rbp-28h]

  *(_QWORD *)a3 = 0LL;
  v4 = (_QWORD *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc(a1, a2);
  v5 = v4;
  if ( v4 )
  {
    v4[1] = 0LL;
    *v4 = &CRectanglesShape::`vftable';
    v4[2] = v4 + 5;
    v4[3] = v4 + 5;
    v4[4] = v4 + 7;
    v4[7] = 0LL;
    v6 = *(int **)(a1 + 16);
    v7 = *v6;
    if ( *v6 )
    {
      v8 = v6[4];
      v9 = v6 + 3;
      v10 = (char *)v9 + v8;
      v11 = 0;
      v12 = &v9[2 * v7 - 2];
      v13 = v9 + 2;
      v28 = v12;
      v14 = ((__int64)v9 + v9[3] - (_QWORD)v10 + 8) >> 3;
      if ( (int)v14 <= 0 )
      {
        v11 = 1;
        while ( 1 )
        {
          v9 = v13;
          v15 = v13[3];
          v10 = (char *)v13 + v13[1];
          v13 += 2;
          LODWORD(v14) = ((__int64)v13 + v15 - (__int64)v10) >> 3;
          if ( (_DWORD)v14 )
            break;
          if ( v9 >= v12 )
            goto LABEL_7;
        }
        v11 = 0;
      }
    }
    else
    {
      LODWORD(v14) = 0;
      v12 = 0LL;
      v11 = 0;
      v9 = 0LL;
      v10 = a3;
      v28 = 0LL;
    }
LABEL_7:
    v16 = a2;
LABEL_8:
    while ( v9 < v12 )
    {
      v17 = v9 + 2;
      v18 = (float)*v9;
      v19 = (float)*(int *)&v10[8 * v11];
      v20 = (float)*(int *)&v10[8 * v11 + 4];
      v21 = (float)v9[2];
      *(float *)&v27 = v19;
      *((float *)&v27 + 1) = v18;
      *((float *)&v27 + 2) = v20;
      *((float *)&v27 + 3) = v21;
      if ( *v16 > v19 )
      {
        *(float *)&v27 = *v16;
        v19 = *v16;
      }
      if ( v16[1] > v18 )
      {
        *((float *)&v27 + 1) = v16[1];
        v18 = *((float *)&v27 + 1);
      }
      if ( v20 > v16[2] )
      {
        *((float *)&v27 + 2) = v16[2];
        v20 = *((float *)&v27 + 2);
      }
      if ( v21 > v16[3] )
      {
        *((float *)&v27 + 3) = v16[3];
        v21 = *((float *)&v27 + 3);
      }
      if ( v20 > v19 && v21 > v18 )
      {
        v22 = (_OWORD *)detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::reserve_region(
                          v5 + 2,
                          (__int64)(v5[3] - v5[2]) >> 4,
                          1LL);
        v12 = v28;
        *v22 = v27;
      }
      if ( ++v11 >= (int)v14 )
      {
        while ( 1 )
        {
          v9 = v17;
          v23 = v17[3];
          v10 = (char *)v17 + v17[1];
          v17 += 2;
          LODWORD(v14) = ((__int64)v17 + v23 - (__int64)v10) >> 3;
          if ( (_DWORD)v14 )
            break;
          if ( v9 >= v12 )
            goto LABEL_8;
        }
        v11 = 0;
      }
    }
    v24 = 0;
    *(_QWORD *)a3 = v5;
  }
  else
  {
    v24 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x75u, 0LL);
  }
  return v24;
}
