/*
 * XREFs of ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x18010C9B0
 * Callers:
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800753B8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180080B20 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18010DE80 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180298130 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18010C004 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18010C210 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180124AD0 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::GetCpuClip(CDrawingContext *this, struct CCpuClip *a2)
{
  CPolygonShape *(__fastcall *v3)(CPolygonShape *, char); // r8
  CPolygonShape *(__fastcall ***v5)(CPolygonShape *, char); // rsi
  CPolygonShape *(__fastcall *v6)(CPolygonShape *, char); // rax
  CRectanglesShape *v7; // rcx
  __int64 v8; // rcx
  __m128 *v9; // rsi
  int v10; // r12d
  int v11; // r13d
  __int64 v12; // r14
  __int64 v13; // r15
  int v14; // eax
  int v15; // eax
  CVisual *v16; // r15
  struct _LIST_ENTRY *v17; // r14
  struct _LIST_ENTRY **p_Blink; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  CPolygonShape *(__fastcall ***v21)(CPolygonShape *, char); // rdi
  CPolygonShape *(__fastcall *v22)(CPolygonShape *, char); // rax
  char v23; // al
  __m128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __m128 v27; // xmm1
  bool v28; // al
  __int64 v29; // r9
  __m128 *v30; // r10
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  CPolygonShape *v33; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v34; // r8
  float *v35; // r9
  float v36; // xmm5_4
  float v37; // xmm6_4
  __m128 v38; // xmm0
  __m128 v39; // xmm1
  __m128 v40; // xmm0
  __m128 v41; // xmm1
  __m128 v42; // xmm1
  __m128 v43; // xmm1
  bool v44; // al
  __m128 v45; // xmm0
  __m128 v46; // xmm1
  __m128 v47; // xmm0
  __m128 v48; // xmm1
  __m128 v49; // xmm1
  __m128 v50; // xmm1
  __m128 v51; // [rsp+20h] [rbp-E0h]
  __m256i v52; // [rsp+30h] [rbp-D0h]
  __m128 v53; // [rsp+50h] [rbp-B0h]
  __m128 v54; // [rsp+70h] [rbp-90h] BYREF
  __m256i v55; // [rsp+80h] [rbp-80h]
  __m128 v56; // [rsp+A0h] [rbp-60h]
  int v57; // [rsp+B0h] [rbp-50h]
  __m128 v58; // [rsp+C0h] [rbp-40h] BYREF
  __m128 v59; // [rsp+D0h] [rbp-30h]
  __int128 v60; // [rsp+E0h] [rbp-20h]
  __m128 v61; // [rsp+F0h] [rbp-10h]
  int v62; // [rsp+100h] [rbp+0h]

  v3 = CPolygonShape::`scalar deleting destructor';
  if ( *((_BYTE *)a2 + 24) )
  {
    v5 = (CPolygonShape *(__fastcall ***)(CPolygonShape *, char))*((_QWORD *)a2 + 2);
    if ( v5 )
    {
      v6 = **v5;
      v7 = (CRectanglesShape *)*((_QWORD *)a2 + 2);
      if ( v6 == CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::~CRectanglesShape(v7);
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v5);
      }
      else if ( v6 == CRoundedRectangleShape::`vector deleting destructor' )
      {
        CRoundedRectangleShape::~CRoundedRectangleShape(v7);
        CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v5);
      }
      else if ( v6 == CPolygonShape::`scalar deleting destructor' )
      {
        CPolygonShape::`scalar deleting destructor'(v7, 1);
      }
      else
      {
        ((void (__fastcall *)(CRectanglesShape *, __int64, CPolygonShape *(__fastcall *)(CPolygonShape *, char)))v6)(
          v7,
          1LL,
          CPolygonShape::`scalar deleting destructor');
      }
    }
  }
  *((_QWORD *)a2 + 2) = 0LL;
  *((_BYTE *)a2 + 24) = 0;
  *((_BYTE *)a2 + 108) = 0;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)((char *)a2 + 100) = 1LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 4) = 1065353216LL;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_DWORD *)a2 + 12) = 0;
  *(_QWORD *)((char *)a2 + 52) = 1065353216LL;
  *(_QWORD *)((char *)a2 + 60) = 0LL;
  *((_DWORD *)a2 + 17) = 0;
  *((_QWORD *)a2 + 9) = 1065353216LL;
  *((_QWORD *)a2 + 10) = 0LL;
  *((_DWORD *)a2 + 22) = 0;
  *((_DWORD *)a2 + 23) = 1065353216;
  *((_BYTE *)a2 + 97) &= 0xE9u;
  *((_BYTE *)a2 + 97) |= 0x29u;
  *((_BYTE *)a2 + 96) = -86;
  v8 = *((_QWORD *)this + 94);
  if ( *(_BYTE *)(v8 - 8) )
  {
    v9 = 0LL;
    v10 = 1;
    v11 = 4;
    v12 = 0LL;
    v13 = 0LL;
    v62 = 0;
    if ( v8 != *((_QWORD *)this + 93) && *(_QWORD *)(v8 - 176) )
    {
      v14 = *((_DWORD *)this + 86);
      if ( v14 )
        v15 = *(_DWORD *)(*((_QWORD *)this + 42) + 4LL * (unsigned int)(v14 - 1));
      else
        v15 = 0;
      if ( *((_DWORD *)this + 74) == v15 )
      {
        if ( *((_BYTE *)this + 7936) )
        {
          if ( *((_BYTE *)this + 7937) )
            v16 = (CVisual *)*((_QWORD *)this + 402);
          else
            v16 = (CVisual *)*((_QWORD *)this + 994);
        }
        else
        {
          v16 = 0LL;
        }
        v17 = (struct _LIST_ENTRY *)*((_QWORD *)this + 993);
        p_Blink = 0LL;
        if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, _QWORD, CPolygonShape *(__fastcall *)(CPolygonShape *, char)))v17->Flink[11].Blink)(
               v17,
               0LL,
               v3) )
        {
          p_Blink = (struct _LIST_ENTRY **)((char *)v16 + 328);
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(v16);
          if ( TreeDataListHead )
          {
            for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
            {
              if ( i[2].Flink == v17 )
              {
                p_Blink = &i[-22].Blink;
                break;
              }
            }
          }
        }
        v9 = (__m128 *)p_Blink[14];
      }
      else
      {
        v24 = *(__m128 *)(v8 - 84);
        v25 = *(_OWORD *)(v8 - 84 + 16);
        v57 = *(_DWORD *)(v8 - 20);
        v54 = v24;
        v26 = *(_OWORD *)(v8 - 84 + 32);
        *(_OWORD *)v55.m256i_i8 = v25;
        v27 = *(__m128 *)(v8 - 84 + 48);
        *(_OWORD *)&v55.m256i_u64[2] = v26;
        v56 = v27;
        v28 = Windows::Foundation::Numerics::invert(
                (Windows::Foundation::Numerics *)&v54,
                (const struct Windows::Foundation::Numerics::float4x4 *)&v54,
                (struct Windows::Foundation::Numerics::float4x4 *)v3);
        LOWORD(v57) = v57 & 0xC003;
        if ( !v28 )
        {
          if ( COERCE_FLOAT(*(_DWORD *)(v29 + 40) & _xmm) >= 0.000081380211 )
            return;
          if ( !(unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v29) )
            return;
          v36 = v35[12];
          v37 = v35[13];
          *(_OWORD *)&v52.m256i_u64[1] = 0LL;
          v51.m128_u64[1] = 0LL;
          v38 = v51;
          v53.m128_u64[1] = 0x3F80000000000000LL;
          v38.m128_f32[0] = *v35;
          v52.m256i_i64[3] = 1065353216LL;
          v39 = *(__m128 *)v52.m256i_i8;
          v39.m128_f32[0] = v35[4];
          v40 = _mm_shuffle_ps(v38, v38, 225);
          v41 = _mm_shuffle_ps(v39, v39, 225);
          v40.m128_f32[0] = v35[1];
          v41.m128_f32[0] = v35[5];
          *(__m128 *)v52.m256i_i8 = _mm_shuffle_ps(v41, v41, 225);
          v57 = 10248;
          v55 = v52;
          v42 = v53;
          v51 = _mm_shuffle_ps(v40, v40, 225);
          v42.m128_f32[0] = v36;
          v54 = v51;
          v43 = _mm_shuffle_ps(v42, v42, 225);
          v43.m128_f32[0] = v37;
          v53 = _mm_shuffle_ps(v43, v43, 225);
          v56 = v53;
          v44 = Windows::Foundation::Numerics::invert(
                  (Windows::Foundation::Numerics *)&v54,
                  (const struct Windows::Foundation::Numerics::float4x4 *)&v54,
                  v34);
          LOWORD(v57) = v57 & 0xC003;
          if ( !v44 )
            return;
        }
        CMILMatrix::Multiply(v30, (const struct CMILMatrix *)&v54, (struct CMILMatrix *)&v58);
        if ( !CMILMatrix::ProducesUniformZ<1>((__int64)&v58) )
          return;
        if ( COERCE_FLOAT(v61.m128_i32[2] & _xmm) >= 0.000081380211 )
        {
          if ( !CMILMatrix::ProducesUniformZ<1>(*((_QWORD *)this + 94) - 84LL) )
            return;
          v11 = 36;
          *(_OWORD *)&v52.m256i_u64[1] = 0LL;
          v51.m128_u64[1] = 0LL;
          v45 = v51;
          v53.m128_u64[1] = 0x3F80000000000000LL;
          v52.m256i_i64[3] = 1065353216LL;
          v45.m128_f32[0] = v58.m128_f32[0];
          v46 = *(__m128 *)v52.m256i_i8;
          v46.m128_f32[0] = v59.m128_f32[0];
          v47 = _mm_shuffle_ps(v45, v45, 225);
          v48 = _mm_shuffle_ps(v46, v46, 225);
          v47.m128_f32[0] = v58.m128_f32[1];
          v48.m128_f32[0] = v59.m128_f32[1];
          v59 = _mm_shuffle_ps(v48, v48, 225);
          v49 = v53;
          v62 = 10248;
          v58 = _mm_shuffle_ps(v47, v47, 225);
          v49.m128_f32[0] = v61.m128_f32[0];
          v50 = _mm_shuffle_ps(v49, v49, 225);
          v50.m128_f32[0] = v61.m128_f32[1];
          v60 = *(_OWORD *)&v52.m256i_u64[2];
          v61 = _mm_shuffle_ps(v50, v50, 225);
        }
        v9 = &v58;
        if ( !CMILMatrix::IsInvertibleDeterminant((float)(v59.m128_f32[1] * v58.m128_f32[0]) - (float)(v59.m128_f32[0] * v58.m128_f32[1])) )
          return;
      }
      v19 = *((_QWORD *)this + 94);
      if ( v19 == *((_QWORD *)this + 93) || !*(_QWORD *)(v19 - 176) )
      {
        v13 = 0LL;
      }
      else
      {
        v20 = *((_QWORD *)this + 337);
        v10 = *(_DWORD *)(v20 - 8);
        v13 = *(_QWORD *)(v20 - 40);
      }
      v12 = *(_QWORD *)(*((_QWORD *)this + 94) - 16LL);
    }
    if ( *((_BYTE *)a2 + 24) )
    {
      v21 = (CPolygonShape *(__fastcall ***)(CPolygonShape *, char))*((_QWORD *)a2 + 2);
      if ( v21 )
      {
        v22 = **v21;
        if ( v22 == CRectanglesShape::`scalar deleting destructor' )
        {
          CRectanglesShape::~CRectanglesShape(*((CRectanglesShape **)a2 + 2));
          CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v21);
        }
        else if ( v22 == CRoundedRectangleShape::`vector deleting destructor' )
        {
          CRoundedRectangleShape::~CRoundedRectangleShape(*((CRoundedRectangleShape **)a2 + 2));
          CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v21);
        }
        else
        {
          v33 = (CPolygonShape *)*((_QWORD *)a2 + 2);
          if ( v22 == CPolygonShape::`scalar deleting destructor' )
            CPolygonShape::`scalar deleting destructor'(v33, 1);
          else
            ((void (__fastcall *)(CPolygonShape *, __int64, CPolygonShape *(__fastcall *)(CPolygonShape *, char)))v22)(
              v33,
              1LL,
              v3);
        }
      }
    }
    *((_QWORD *)a2 + 2) = 0LL;
    *((_BYTE *)a2 + 24) = 0;
    *((_BYTE *)a2 + 108) = 0;
    *(_QWORD *)a2 = v13;
    *((_DWORD *)a2 + 25) = v10;
    *((_DWORD *)a2 + 26) = v11;
    *((_QWORD *)a2 + 1) = v12;
    if ( v9 )
    {
      *((__m128 *)a2 + 2) = *v9;
      *((__m128 *)a2 + 3) = v9[1];
      *((__m128 *)a2 + 4) = v9[2];
      *((__m128 *)a2 + 5) = v9[3];
      *((_DWORD *)a2 + 24) = v9[4].m128_i32[0];
    }
    else
    {
      *((_QWORD *)a2 + 4) = 1065353216LL;
      *((_QWORD *)a2 + 5) = 0LL;
      *((_DWORD *)a2 + 12) = 0;
      *(_QWORD *)((char *)a2 + 52) = 1065353216LL;
      *(_QWORD *)((char *)a2 + 60) = 0LL;
      *((_DWORD *)a2 + 17) = 0;
      *((_QWORD *)a2 + 9) = 1065353216LL;
      *((_QWORD *)a2 + 10) = 0LL;
      *((_DWORD *)a2 + 22) = 0;
      *((_DWORD *)a2 + 23) = 1065353216;
      v23 = *((_BYTE *)a2 + 97);
      *((_BYTE *)a2 + 96) = -86;
      *((_BYTE *)a2 + 97) = v23 & 0xC0 | 0x29;
    }
  }
}
