/*
 * XREFs of ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800CB30C
 * Callers:
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x1800C68D4 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800C9C3C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180089340 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x180099990 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800A2E98 (-CalcSubtractionRectangles@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QE.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetLargestOccluder@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NHPEAV2@@Z @ 0x1800CB080 (-GetLargestOccluder@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z @ 0x1800CBAF0 (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x180105B10 (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180119D40 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ??0?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x1801A6B50 (--0-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801E06E8 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x18024EE54 (-AddToTightDirtyRegion@@YAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N1@Z @ 0x18028FEBC (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_RECT_F *__fastcall CTreeDirty::GetOptimizedRect(
        unsigned __int64 a1,
        struct D2D_RECT_F *a2,
        unsigned int a3,
        const struct D2D_RECT_F *a4,
        __int64 a5,
        CRegion *a6,
        __int64 a7,
        char a8,
        _QWORD *a9)
{
  double v9; // xmm2_8
  __int64 v10; // rsi
  const struct D2D_RECT_F *v11; // r12
  struct D2D_RECT_F *v12; // rbx
  __m128i v14; // xmm11
  _BOOL8 v15; // r9
  __int64 v16; // r14
  __int64 v17; // r8
  float v18; // xmm12_4
  _QWORD *v19; // r13
  const struct CVisualTree **v20; // r12
  struct D2D_RECT_F *v21; // rcx
  __m128 v22; // xmm10
  const struct CVisualTree *v23; // rdx
  unsigned int v24; // eax
  float v25; // xmm7_4
  float v26; // xmm9_4
  unsigned int v27; // edi
  float v28; // xmm8_4
  float v29; // xmm6_4
  __int64 v30; // r14
  char IsCovered; // al
  char LargestOccluder; // al
  int v33; // ecx
  int v34; // eax
  float top; // xmm0_4
  float right; // xmm1_4
  float bottom; // xmm1_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  bool v43; // cc
  CDirtyRegionAnnotation *v44; // rdi
  __int64 v45; // r14
  __int64 v46; // r8
  int v47; // eax
  struct D2D_RECT_F *v48; // rdx
  __int64 v49; // r10
  _OWORD *v50; // rdi
  __int64 v51; // r14
  struct Windows::Foundation::Numerics::float4x4 *v52; // r8
  unsigned int *v53; // rdx
  int *v54; // rcx
  int *v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  bool v60; // al
  unsigned __int64 v61; // xmm0_8
  _DWORD *v62; // rdx
  __m128 v63; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v64; // [rsp+40h] [rbp-C0h]
  __int64 v65; // [rsp+48h] [rbp-B8h]
  const struct D2D_RECT_F *v66; // [rsp+50h] [rbp-B0h]
  _QWORD *v67; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int128 v68; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v69[4]; // [rsp+80h] [rbp-80h] BYREF
  int v70; // [rsp+C0h] [rbp-40h]

  v10 = a7;
  v11 = a4;
  v12 = a2;
  v66 = a4;
  v14 = 0LL;
  v15 = 0LL;
  v16 = a3;
  v63.m128_u64[0] = a1;
  v65 = a5;
  *(_QWORD *)&a2->left = 0LL;
  *(_QWORD *)&a2->right = 0LL;
  if ( a7 && CMILMatrix::IsIdentity<0>(a7) )
    v10 = v15;
  if ( a6 )
  {
    v53 = (unsigned int *)v11;
    if ( v10 )
    {
      v68 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v10, v11, (float *)&v68);
      v53 = (unsigned int *)&v68;
      v54 = (int *)&v67;
    }
    else
    {
      v54 = (int *)&v68;
    }
    v55 = PixelAlign(v54, v53, v9);
    v15 = 0LL;
    v14 = *(__m128i *)v55;
  }
  if ( *(_BYTE *)(a1 + 2324) == v15 )
  {
    v17 = *(unsigned int *)(a5 + 1536);
    v64 = *(_DWORD *)(a5 + 1536);
    if ( a1 == -20LL && MEMORY[0xFFFFFFFFFFFFFFFC] != v15 || (unsigned int)v16 >= *(_DWORD *)(a1 + 16) )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v18 = (float)((float)(*(float *)(16 * v16 + a1 + 20 + 12) - *(float *)(16 * v16 + a1 + 20 + 4))
                * (float)(*(float *)(16 * v16 + a1 + 20 + 8) - *(float *)(16 * v16 + a1 + 20)))
        * 0.25;
    if ( a6 )
    {
      LOBYTE(a2) = a8;
      AddToTightDirtyRegion(v12, a2, v10, a6);
      v17 = v64;
      v15 = 0LL;
    }
    v67 = (_QWORD *)(16 * v16 + a1 + 456);
    v19 = (_QWORD *)*v67;
    if ( (_QWORD *)*v67 != v67 )
    {
      v20 = (const struct CVisualTree **)v63.m128_u64[0];
      while ( 1 )
      {
        v21 = (struct D2D_RECT_F *)a9[1];
        a2 = (struct D2D_RECT_F *)((char *)v21 + 8 * *a9);
        while ( v21 != a2 )
        {
          if ( *(_QWORD *)&v21->left == v19[2] )
            goto LABEL_36;
          v21 = (struct D2D_RECT_F *)((char *)v21 + 8);
        }
        v22 = (__m128)_mm_loadu_si128((const __m128i *)(v19 + 3));
        v23 = *v20;
        v63 = v22;
        v24 = CDirtyRegionAnnotation::GetZ((CDirtyRegionAnnotation *)v19, v23, v17, v15);
        v25 = v22.m128_f32[0];
        v26 = _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
        v15 = 0LL;
        v27 = v24;
        if ( v26 <= v22.m128_f32[0] )
          goto LABEL_36;
        v28 = _mm_shuffle_ps(v22, v22, 255).m128_f32[0];
        v29 = _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
        if ( v28 <= v29 )
          goto LABEL_36;
        v30 = v65;
        if ( v24 )
        {
          v68 = 0LL;
          if ( *(_BYTE *)(v65 + 1564) )
          {
            COcclusionContext::PageInPixelsRectToDeviceRect(v65, &v63, &v68);
            v28 = v63.m128_f32[3];
            v26 = v63.m128_f32[2];
            v29 = v63.m128_f32[1];
            v25 = v63.m128_f32[0];
            v22 = v63;
          }
          else
          {
            LODWORD(v68) = v22.m128_i32[0];
            *((float *)&v68 + 1) = v29;
            *((float *)&v68 + 2) = v26;
            *((float *)&v68 + 3) = v28;
          }
          IsCovered = CArrayBasedCoverageSet::IsCovered(v30 + 616, &v68, v27);
          v15 = 0LL;
          if ( IsCovered )
            goto LABEL_36;
        }
        v68 = 0LL;
        if ( (float)((float)(v28 - v29) * (float)(v26 - v25)) > v18 )
        {
          LargestOccluder = COcclusionContext::GetLargestOccluder(v30, (const struct D2D_RECT_F *)&v63, 0, v27, &v68);
          v28 = v63.m128_f32[3];
          v15 = 0LL;
          v26 = v63.m128_f32[2];
          v29 = v63.m128_f32[1];
          v25 = v63.m128_f32[0];
          if ( LargestOccluder )
          {
            v39 = *((float *)&v68 + 3);
            v40 = *((float *)&v68 + 2);
            v41 = *((float *)&v68 + 1);
            v42 = *(float *)&v68;
            if ( a6 )
              goto LABEL_61;
            if ( v63.m128_f32[1] >= *((float *)&v68 + 1) && *((float *)&v68 + 3) >= v63.m128_f32[3] )
            {
              v43 = v63.m128_f32[0] <= *(float *)&v68;
              if ( v63.m128_f32[0] >= *(float *)&v68 )
                goto LABEL_62;
              if ( *((float *)&v68 + 2) >= v63.m128_f32[2] )
                goto LABEL_61;
            }
            if ( v63.m128_f32[0] >= *(float *)&v68
              && *((float *)&v68 + 2) >= v63.m128_f32[2]
              && (v63.m128_f32[1] >= *((float *)&v68 + 1) || *((float *)&v68 + 3) >= v63.m128_f32[3]) )
            {
LABEL_61:
              v43 = v63.m128_f32[0] <= *(float *)&v68;
LABEL_62:
              if ( !v43 )
              {
                LODWORD(v68) = v63.m128_i32[0];
                v42 = v63.m128_f32[0];
              }
              if ( v63.m128_f32[1] > *((float *)&v68 + 1) )
              {
                DWORD1(v68) = v63.m128_i32[1];
                v41 = v63.m128_f32[1];
              }
              if ( *((float *)&v68 + 2) > v63.m128_f32[2] )
              {
                DWORD2(v68) = v63.m128_i32[2];
                v40 = v63.m128_f32[2];
              }
              if ( *((float *)&v68 + 3) > v63.m128_f32[3] )
              {
                HIDWORD(v68) = v63.m128_i32[3];
                v39 = v63.m128_f32[3];
              }
              if ( v40 <= v42 || v39 <= v41 )
                v68 = 0uLL;
              v44 = (CDirtyRegionAnnotation *)v69;
              v45 = 4LL;
              do
              {
                --v45;
                if ( (char *)TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
                  CDirtyRegionAnnotation::CDirtyRegionAnnotation(v44);
                else
                  TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>(v44);
                v44 = (CDirtyRegionAnnotation *)((char *)v44 + 16);
              }
              while ( v45 );
              v47 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
                      v63.m128_f32,
                      (__int64)&v68,
                      v46,
                      (__int64)v69,
                      4u);
              v48 = (struct D2D_RECT_F *)v69;
              if ( v47 != 1 )
                v48 = (struct D2D_RECT_F *)&v63;
              TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v12->left, &v48->left);
              v15 = 0LL;
              if ( !a6 || !(_DWORD)v49 )
                goto LABEL_36;
              v50 = v69;
              v51 = v49;
              do
              {
                LOBYTE(a2) = a8;
                AddToTightDirtyRegion(v50++, a2, v10, a6);
                --v51;
              }
              while ( v51 );
              goto LABEL_84;
            }
          }
          v22 = v63;
        }
        if ( v12->right <= v12->left || (v33 = 0, v12->bottom <= v12->top) )
          v33 = 1;
        if ( v26 <= v25 || (v34 = 0, v28 <= v29) )
          v34 = 1;
        if ( v33 )
        {
          if ( v34 )
          {
            *(_QWORD *)&v12->right = 0LL;
            *(_QWORD *)&v12->left = 0LL;
          }
          else
          {
            *v12 = (struct D2D_RECT_F)v22;
          }
        }
        else if ( !v34 )
        {
          if ( v12->left > v25 )
            v12->left = v25;
          if ( v12->top > v29 )
            v12->top = v29;
          if ( v26 > v12->right )
            v12->right = v26;
          if ( v28 > v12->bottom )
            v12->bottom = v28;
        }
        if ( !a6 )
          goto LABEL_36;
        LOBYTE(a2) = a8;
        AddToTightDirtyRegion(&v63, a2, v10, a6);
LABEL_84:
        v15 = 0LL;
LABEL_36:
        v19 = (_QWORD *)*v19;
        v17 = v64;
        if ( v19 == v67 )
        {
          v11 = v66;
          break;
        }
      }
    }
    if ( a8 != v15 )
    {
      v68 = 0LL;
      if ( v10 )
        CMILMatrix::Transform2DBoundsHelper<0>(v10, v12, (float *)&v68);
      else
        v68 = (unsigned __int128)*v12;
      if ( *((float *)&v68 + 2) <= *(float *)&v68 || *((float *)&v68 + 3) <= *((float *)&v68 + 1) )
      {
        *(_QWORD *)&v12->right = 0LL;
        *(_QWORD *)&v12->left = 0LL;
      }
      else
      {
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v68, a2, v17, v15);
        if ( v10 )
        {
          v56 = *(_OWORD *)v10;
          v57 = *(_OWORD *)(v10 + 16);
          v70 = *(_DWORD *)(v10 + 64);
          v69[0] = v56;
          v58 = *(_OWORD *)(v10 + 32);
          v69[1] = v57;
          v59 = *(_OWORD *)(v10 + 48);
          v69[2] = v58;
          v69[3] = v59;
          v60 = Windows::Foundation::Numerics::invert(
                  (Windows::Foundation::Numerics *)v69,
                  (const struct Windows::Foundation::Numerics::float4x4 *)v69,
                  v52);
          LOWORD(v70) = v70 & 0xC003;
          v70 = v60 ? v70 : 0;
          CMILMatrix::Transform2DBoundsHelper<0>((__int64)v69, (const struct D2D_RECT_F *)&v68, &v12->left);
        }
        else
        {
          *v12 = (struct D2D_RECT_F)v68;
        }
      }
    }
    if ( v11->left > v12->left )
      v12->left = v11->left;
    top = v11->top;
    if ( top > v12->top )
      v12->top = top;
    right = v11->right;
    if ( v12->right > right )
      v12->right = right;
    bottom = v11->bottom;
    if ( v12->bottom > bottom )
      v12->bottom = bottom;
    if ( IsEmpty(v12) )
    {
      *(_QWORD *)&v12->right = 0LL;
      *(_QWORD *)&v12->left = 0LL;
    }
    if ( a6 )
    {
      *(_QWORD *)&v69[0] = (char *)v69 + 8;
      FastRegion::CRegion::SetRectangle(
        (FastRegion::CRegion *)v69,
        v14.m128i_i32[0],
        _mm_cvtsi128_si32(_mm_srli_si128(v14, 4)),
        _mm_srli_si128(v14, 8).m128i_i32[0],
        _mm_cvtsi128_si32(_mm_srli_si128(v14, 12)));
      CRegion::Intersect(a6, (const struct CRegion *)v69);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)v69);
    }
  }
  else
  {
    *v12 = *v11;
    if ( a6 )
    {
      v61 = _mm_srli_si128(v14, 8).m128i_u64[0];
      if ( v14.m128i_i32[0] >= (int)v61 || v14.m128i_i32[1] >= SHIDWORD(v61) )
      {
        **(_DWORD **)a6 = 0;
      }
      else
      {
        v62 = *(_DWORD **)a6;
        *v62 = 2;
        v62[1] = v14.m128i_i32[0];
        v62[3] = v14.m128i_i32[1];
        v62[2] = v61;
        v62[4] = 16;
        v62[7] = v14.m128i_i32[0];
        v62[8] = v61;
        v62[5] = HIDWORD(v61);
        v62[6] = 16;
      }
    }
  }
  return v12;
}
