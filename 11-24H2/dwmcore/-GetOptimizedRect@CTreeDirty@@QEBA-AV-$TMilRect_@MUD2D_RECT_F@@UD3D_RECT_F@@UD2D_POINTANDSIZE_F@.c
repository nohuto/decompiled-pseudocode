/*
 * XREFs of ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009D528
 * Callers:
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180098B64 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009B9DC (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x18003023C (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18003DE60 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetLargestOccluder@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NHPEAV2@@Z @ 0x18009CF50 (-GetLargestOccluder@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z @ 0x18009DD10 (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800FB0F0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18014E920 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x180174FF8 (-CalcSubtractionRectangles@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QE.c)
 *     ??0?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18019D270 (--0-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801D3468 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x180244FC0 (-AddToTightDirtyRegion@@YAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N1@Z @ 0x18028491C (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_RECT_F *__fastcall CTreeDirty::GetOptimizedRect(
        unsigned __int64 a1,
        struct D2D_RECT_F *a2,
        unsigned int a3,
        _BOOL8 a4,
        __int64 a5,
        const struct FastRegion::Internal::CRgnData **a6,
        __int128 *a7,
        char a8,
        _QWORD *a9)
{
  double v9; // xmm2_8
  __int128 *v10; // rsi
  __int64 v11; // r12
  struct D2D_RECT_F *v12; // rbx
  __m128i v14; // xmm11
  __int64 v15; // r14
  unsigned int v16; // r8d
  float v17; // xmm12_4
  _QWORD *v18; // r13
  const struct CVisualTree **v19; // r12
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  __m128 v22; // xmm10
  const struct CVisualTree *v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  float v26; // xmm7_4
  float v27; // xmm9_4
  int v28; // edi
  float v29; // xmm8_4
  float v30; // xmm6_4
  __int64 v31; // r14
  char IsCovered; // al
  char LargestOccluder; // al
  int v34; // ecx
  int v35; // eax
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm1_4
  float bottom; // xmm1_4
  float right; // xmm2_4
  float top; // xmm3_4
  float left; // xmm0_4
  bool v44; // cc
  CDirtyRegionAnnotation *v45; // rdi
  __int64 v46; // r14
  int v47; // r8d
  int v48; // eax
  __m128 *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // r10
  _OWORD *v52; // rdi
  __int64 v53; // r14
  struct Windows::Foundation::Numerics::float4x4 *v54; // r8
  unsigned int *v55; // rdx
  int *v56; // rcx
  int *v57; // rax
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  bool v62; // al
  unsigned __int64 v63; // xmm0_8
  const struct FastRegion::Internal::CRgnData *v64; // rdx
  __m128 v65; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v66; // [rsp+40h] [rbp-C0h]
  __int64 v67; // [rsp+48h] [rbp-B8h]
  _BOOL8 v68; // [rsp+50h] [rbp-B0h]
  _QWORD *v69; // [rsp+58h] [rbp-A8h] BYREF
  struct D2D_RECT_F v70; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v71[4]; // [rsp+80h] [rbp-80h] BYREF
  int v72; // [rsp+C0h] [rbp-40h]

  v10 = a7;
  v11 = a4;
  v12 = a2;
  v68 = a4;
  v14 = 0LL;
  LODWORD(a4) = 0;
  v15 = a3;
  v65.m128_u64[0] = a1;
  v67 = a5;
  *(_QWORD *)&a2->left = 0LL;
  *(_QWORD *)&a2->right = 0LL;
  if ( a7 && (unsigned __int8)CMILMatrix::IsIdentity<0>(a7) )
    v10 = (__int128 *)a4;
  if ( a6 )
  {
    v55 = (unsigned int *)v11;
    if ( v10 )
    {
      v70 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v10, v11, &v70);
      v55 = (unsigned int *)&v70;
      v56 = (int *)&v69;
    }
    else
    {
      v56 = (int *)&v70;
    }
    v57 = PixelAlign(v56, v55, v9);
    LODWORD(a4) = 0;
    v14 = *(__m128i *)v57;
  }
  if ( *(_BYTE *)(a1 + 2324) == a4 )
  {
    v16 = *(_DWORD *)(a5 + 1536);
    v66 = v16;
    if ( a1 == -20LL && MEMORY[0xFFFFFFFFFFFFFFFC] != a4 || (unsigned int)v15 >= *(_DWORD *)(a1 + 16) )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v17 = (float)((float)(*(float *)(16 * v15 + a1 + 20 + 12) - *(float *)(16 * v15 + a1 + 20 + 4))
                * (float)(*(float *)(16 * v15 + a1 + 20 + 8) - *(float *)(16 * v15 + a1 + 20)))
        * 0.25;
    if ( a6 )
    {
      LOBYTE(a2) = a8;
      AddToTightDirtyRegion(v12, a2, v10, a6);
      v16 = v66;
      LOBYTE(a4) = 0;
    }
    v69 = (_QWORD *)(16 * v15 + a1 + 456);
    v18 = (_QWORD *)*v69;
    if ( (_QWORD *)*v69 != v69 )
    {
      v19 = (const struct CVisualTree **)v65.m128_u64[0];
      while ( 1 )
      {
        v20 = (_QWORD *)a9[1];
        v21 = &v20[*a9];
        while ( v20 != v21 )
        {
          if ( *v20 == v18[2] )
            goto LABEL_36;
          ++v20;
        }
        v22 = (__m128)_mm_loadu_si128((const __m128i *)(v18 + 3));
        v23 = *v19;
        v65 = v22;
        v24 = CDirtyRegionAnnotation::GetZ((CDirtyRegionAnnotation *)v18, v23, v16, a4);
        v26 = v22.m128_f32[0];
        v27 = _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
        LOBYTE(a4) = 0;
        v28 = v24;
        if ( v27 <= v22.m128_f32[0] )
          goto LABEL_36;
        v29 = _mm_shuffle_ps(v22, v22, 255).m128_f32[0];
        v30 = _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
        if ( v29 <= v30 )
          goto LABEL_36;
        v31 = v67;
        if ( v24 )
        {
          v70 = 0LL;
          if ( *(_BYTE *)(v67 + 1564) )
          {
            COcclusionContext::PageInPixelsRectToDeviceRect(v67, &v65, &v70, 0LL);
            v29 = v65.m128_f32[3];
            v27 = v65.m128_f32[2];
            v30 = v65.m128_f32[1];
            v26 = v65.m128_f32[0];
            v22 = v65;
          }
          else
          {
            *(_QWORD *)&v70.left = __PAIR64__(LODWORD(v30), v22.m128_u32[0]);
            *(_QWORD *)&v70.right = __PAIR64__(LODWORD(v29), LODWORD(v27));
          }
          IsCovered = CArrayBasedCoverageSet::IsCovered(v31 + 616, &v70);
          LOBYTE(a4) = 0;
          if ( IsCovered )
            goto LABEL_36;
        }
        v70 = 0LL;
        if ( (float)((float)(v29 - v30) * (float)(v27 - v26)) > v17 )
        {
          LargestOccluder = COcclusionContext::GetLargestOccluder(v31, &v65, 0, v28, &v70);
          v29 = v65.m128_f32[3];
          LOBYTE(a4) = 0;
          v27 = v65.m128_f32[2];
          v30 = v65.m128_f32[1];
          v26 = v65.m128_f32[0];
          if ( LargestOccluder )
          {
            bottom = v70.bottom;
            right = v70.right;
            top = v70.top;
            left = v70.left;
            if ( a6 )
              goto LABEL_61;
            if ( v65.m128_f32[1] >= v70.top && v70.bottom >= v65.m128_f32[3] )
            {
              v44 = v65.m128_f32[0] <= v70.left;
              if ( v65.m128_f32[0] >= v70.left )
                goto LABEL_62;
              if ( v70.right >= v65.m128_f32[2] )
                goto LABEL_61;
            }
            if ( v65.m128_f32[0] >= v70.left
              && v70.right >= v65.m128_f32[2]
              && (v65.m128_f32[1] >= v70.top || v70.bottom >= v65.m128_f32[3]) )
            {
LABEL_61:
              v44 = v65.m128_f32[0] <= v70.left;
LABEL_62:
              if ( !v44 )
              {
                LODWORD(v70.left) = v65.m128_i32[0];
                left = v65.m128_f32[0];
              }
              if ( v65.m128_f32[1] > v70.top )
              {
                LODWORD(v70.top) = v65.m128_i32[1];
                top = v65.m128_f32[1];
              }
              if ( v70.right > v65.m128_f32[2] )
              {
                LODWORD(v70.right) = v65.m128_i32[2];
                right = v65.m128_f32[2];
              }
              if ( v70.bottom > v65.m128_f32[3] )
              {
                LODWORD(v70.bottom) = v65.m128_i32[3];
                bottom = v65.m128_f32[3];
              }
              if ( right <= left || bottom <= top )
                v70 = (struct D2D_RECT_F)0LL;
              v45 = (CDirtyRegionAnnotation *)v71;
              v46 = 4LL;
              do
              {
                --v46;
                if ( (char *)TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
                  CDirtyRegionAnnotation::CDirtyRegionAnnotation(v45);
                else
                  TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>(v45);
                v45 = (CDirtyRegionAnnotation *)((char *)v45 + 16);
              }
              while ( v46 );
              v48 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
                      (unsigned int)&v65,
                      (unsigned int)&v70,
                      v47,
                      (unsigned int)v71,
                      4);
              v49 = (__m128 *)v71;
              if ( v48 != 1 )
                v49 = &v65;
              TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v12->left, v49->m128_f32);
              LOBYTE(a4) = 0;
              if ( !a6 || !(_DWORD)v51 )
                goto LABEL_36;
              v52 = v71;
              v53 = v51;
              do
              {
                LOBYTE(v50) = a8;
                AddToTightDirtyRegion(v52++, v50, v10, a6);
                --v53;
              }
              while ( v53 );
              goto LABEL_84;
            }
          }
          v22 = v65;
        }
        if ( v12->right <= v12->left || (v34 = 0, v12->bottom <= v12->top) )
          v34 = 1;
        if ( v27 <= v26 || (v35 = 0, v29 <= v30) )
          v35 = 1;
        if ( v34 )
        {
          if ( v35 )
          {
            *(_QWORD *)&v12->right = 0LL;
            *(_QWORD *)&v12->left = 0LL;
          }
          else
          {
            *v12 = (struct D2D_RECT_F)v22;
          }
        }
        else if ( !v35 )
        {
          if ( v12->left > v26 )
            v12->left = v26;
          if ( v12->top > v30 )
            v12->top = v30;
          if ( v27 > v12->right )
            v12->right = v27;
          if ( v29 > v12->bottom )
            v12->bottom = v29;
        }
        if ( !a6 )
          goto LABEL_36;
        LOBYTE(v25) = a8;
        AddToTightDirtyRegion(&v65, v25, v10, a6);
LABEL_84:
        LOBYTE(a4) = 0;
LABEL_36:
        v18 = (_QWORD *)*v18;
        v16 = v66;
        if ( v18 == v69 )
        {
          v11 = v68;
          break;
        }
      }
    }
    if ( a8 != a4 )
    {
      v70 = 0LL;
      if ( v10 )
        CMILMatrix::Transform2DBoundsHelper<0>(v10, v12, &v70);
      else
        v70 = *v12;
      if ( v70.right <= v70.left || v70.bottom <= v70.top )
      {
        *(_QWORD *)&v12->right = 0LL;
        *(_QWORD *)&v12->left = 0LL;
      }
      else
      {
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v70);
        if ( v10 )
        {
          v58 = *v10;
          v59 = v10[1];
          v72 = *((_DWORD *)v10 + 16);
          v71[0] = v58;
          v60 = v10[2];
          v71[1] = v59;
          v61 = v10[3];
          v71[2] = v60;
          v71[3] = v61;
          v62 = Windows::Foundation::Numerics::invert(
                  (Windows::Foundation::Numerics *)v71,
                  (const struct Windows::Foundation::Numerics::float4x4 *)v71,
                  v54);
          LOWORD(v72) = v72 & 0xC003;
          v72 = v62 ? v72 : 0;
          CMILMatrix::Transform2DBoundsHelper<0>(v71, &v70, v12);
        }
        else
        {
          *v12 = v70;
        }
      }
    }
    if ( *(float *)v11 > v12->left )
      v12->left = *(FLOAT *)v11;
    v36 = *(float *)(v11 + 4);
    if ( v36 > v12->top )
      v12->top = v36;
    v37 = *(float *)(v11 + 8);
    if ( v12->right > v37 )
      v12->right = v37;
    v38 = *(float *)(v11 + 12);
    if ( v12->bottom > v38 )
      v12->bottom = v38;
    if ( IsEmpty(v12) )
    {
      *(_QWORD *)&v12->right = 0LL;
      *(_QWORD *)&v12->left = 0LL;
    }
    if ( a6 )
    {
      *(_QWORD *)&v71[0] = (char *)v71 + 8;
      FastRegion::CRegion::SetRectangle(
        (FastRegion::CRegion *)v71,
        v14.m128i_i32[0],
        _mm_cvtsi128_si32(_mm_srli_si128(v14, 4)),
        _mm_srli_si128(v14, 8).m128i_i32[0],
        _mm_cvtsi128_si32(_mm_srli_si128(v14, 12)));
      CRegion::Intersect(a6, (const struct FastRegion::Internal::CRgnData **)v71);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)v71);
    }
  }
  else
  {
    *v12 = *(struct D2D_RECT_F *)v11;
    if ( a6 )
    {
      v63 = _mm_srli_si128(v14, 8).m128i_u64[0];
      if ( v14.m128i_i32[0] >= (int)v63 || v14.m128i_i32[1] >= SHIDWORD(v63) )
      {
        *(_DWORD *)*a6 = 0;
      }
      else
      {
        v64 = *a6;
        *(_DWORD *)v64 = 2;
        *((_DWORD *)v64 + 1) = v14.m128i_i32[0];
        *((_DWORD *)v64 + 3) = v14.m128i_i32[1];
        *((_DWORD *)v64 + 2) = v63;
        *((_DWORD *)v64 + 4) = 16;
        *((_DWORD *)v64 + 7) = v14.m128i_i32[0];
        *((_DWORD *)v64 + 8) = v63;
        *((_DWORD *)v64 + 5) = HIDWORD(v63);
        *((_DWORD *)v64 + 6) = 16;
      }
    }
  }
  return v12;
}
