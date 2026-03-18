/*
 * XREFs of ?CalcSubtractionRectangles@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x180174FF8
 * Callers:
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009D528 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?AddRectWithPartialOcclusion@CRectanglesShape@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801746A0 (-AddRectWithPartialOcclusion@CRectanglesShape@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180174930 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
        float *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  float v5; // xmm1_4
  unsigned int v6; // r8d
  float v8; // xmm1_4
  _DWORD *v9; // r11
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rcx
  __int64 v13; // rdx

  v5 = a1[1];
  v6 = 0;
  if ( *(float *)(a2 + 4) > v5 )
  {
    if ( a5 )
    {
      *(float *)(a4 + 4) = v5;
      *(_DWORD *)(a4 + 12) = *(_DWORD *)(a2 + 4);
      *(float *)a4 = *a1;
      *(float *)(a4 + 8) = a1[2];
    }
    v6 = 1;
  }
  v8 = *a1;
  v9 = (_DWORD *)(a2 + 12);
  if ( *(float *)a2 > *a1 )
  {
    if ( v6 < a5 )
    {
      v10 = 2LL * v6;
      *(float *)(a4 + 8 * v10) = v8;
      *(_DWORD *)(a4 + 8 * v10 + 8) = *(_DWORD *)a2;
      *(_DWORD *)(a4 + 8 * v10 + 4) = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a4 + 8 * v10 + 12) = *v9;
    }
    ++v6;
  }
  v11 = *(float *)(a2 + 8);
  if ( a1[2] > v11 )
  {
    if ( v6 < a5 )
    {
      v9 = (_DWORD *)(a2 + 12);
      v12 = 2LL * v6;
      *(float *)(a4 + 8 * v12) = v11;
      *(float *)(a4 + 8 * v12 + 8) = a1[2];
      *(_DWORD *)(a4 + 8 * v12 + 4) = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a4 + 8 * v12 + 12) = *(_DWORD *)(a2 + 12);
    }
    ++v6;
  }
  if ( a1[3] > *(float *)v9 )
  {
    if ( v6 < a5 )
    {
      v13 = 2LL * v6;
      *(_DWORD *)(a4 + 8 * v13 + 4) = *v9;
      *(float *)(a4 + 8 * v13 + 12) = a1[3];
      *(float *)(a4 + 8 * v13) = *a1;
      *(float *)(a4 + 8 * v13 + 8) = a1[2];
    }
    ++v6;
  }
  return v6;
}
