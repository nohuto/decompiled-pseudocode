/*
 * XREFs of ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18008F790
 * Callers:
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x180090AD0 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18008B410 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008B4A0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x18008ED00 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091550 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1802598B0 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::PartitionPrimitive(__int64 a1, int a2, float *a3, _QWORD *a4)
{
  int v4; // ebx
  float v7; // xmm3_4
  int v8; // edi
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  CShape **v12; // r15
  CShape *v13; // rcx
  __int64 v15; // r15
  unsigned int v16; // r13d
  unsigned int v17; // xmm1_4
  _QWORD *v18; // r12
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  __m128 v22; // xmm1
  __m128 v23; // xmm1
  __int128 v24; // xmm0
  __m128 v25; // xmm1
  __m128 v26; // xmm1
  bool v27; // zf
  __int32 v28; // xmm1_4
  __int32 v29; // xmm0_4
  __int32 v30; // xmm1_4
  int v31; // xmm0_4
  int v32; // xmm1_4
  __int64 v33; // rcx
  int v34; // eax
  __m128 v35; // [rsp+30h] [rbp-D0h] BYREF
  __m256i v36; // [rsp+40h] [rbp-C0h]
  _BYTE v37[20]; // [rsp+60h] [rbp-A0h]
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  __int128 v39; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-60h]
  __m128 v41; // [rsp+B0h] [rbp-50h]
  int v42; // [rsp+C0h] [rbp-40h]
  _QWORD v43[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v44; // [rsp+E8h] [rbp-18h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v46; // [rsp+100h] [rbp+0h]
  int v47; // [rsp+108h] [rbp+8h]
  __int64 v48; // [rsp+10Ch] [rbp+Ch]
  D2D1_MATRIX_3X2_F matrix; // [rsp+118h] [rbp+18h] BYREF

  v4 = (int)a3;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a4[1] - *a4) >> 3) )
    a4[1] -= 8 * ((__int64)(a4[1] - *a4) >> 3);
  v7 = *a3;
  v8 = 1;
  v9 = a3[2];
  v10 = 0.0;
  if ( a2 )
    v8 = a2;
  if ( v9 >= v7 )
  {
    v11 = a3[3];
    if ( v11 >= a3[1] )
      v10 = (float)(v11 - a3[1]) * (float)(v9 - v7);
  }
  if ( v10 < (float)v8 )
    return 0LL;
  v12 = *(CShape ***)(a1 + 16);
  v13 = *v12;
  if ( *v12 )
  {
    if ( !v12[2] )
    {
      if ( (!v13 || CShape::IsAxisAlignedRectangle(v13))
        && CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(v12 + 4)) )
      {
        return 0LL;
      }
      goto LABEL_17;
    }
LABEL_25:
    if ( CShapePtr::IsAxisAlignedRectangle(v12 + 2) )
      return 0LL;
LABEL_17:
    v15 = *(_QWORD *)(a1 + 16);
    v16 = 0;
    v42 = 0;
    if ( *(_BYTE *)(v15 + 108) )
    {
      if ( !*(_QWORD *)(v15 + 16) )
      {
        v34 = CCpuClip::ConvertContextDependentClipToLocal((CCpuClip *)v15);
        v16 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x85u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x81Du, 0LL);
          return v16;
        }
      }
      v18 = *(_QWORD **)(v15 + 16);
      v38 = _xmm;
      v24 = _xmm;
      v39 = _xmm;
      v26 = *(__m128 *)&_xmm.r;
      BYTE1(v42) = BYTE1(v42) & 0xC0 | 0x29;
      LOBYTE(v42) = -86;
    }
    else
    {
      v17 = *(_DWORD *)(v15 + 36);
      v18 = *(_QWORD **)v15;
      matrix.m11 = *(FLOAT *)(v15 + 32);
      *(_QWORD *)&matrix.m[0][1] = __PAIR64__(*(_DWORD *)(v15 + 48), v17);
      *(_QWORD *)&matrix.m[1][1] = __PAIR64__(*(_DWORD *)(v15 + 80), *(_DWORD *)(v15 + 52));
      matrix.dy = *(FLOAT *)(v15 + 84);
      D2D1InvertMatrix(&matrix);
      *(_OWORD *)&v36.m256i_u64[1] = 0LL;
      *(_QWORD *)&v37[12] = 0x28083F800000LL;
      v19 = (__m128)v35.m128_u64[0];
      *(_DWORD *)&v37[8] = 0;
      v19.m128_f32[0] = matrix.m11;
      v20 = *(__m128 *)v36.m256i_i8;
      v21 = _mm_shuffle_ps(v19, v19, 225);
      v20.m128_f32[0] = matrix.m21;
      v36.m256i_i64[3] = 1065353216LL;
      v22 = _mm_shuffle_ps(v20, v20, 225);
      v21.m128_f32[0] = matrix.m12;
      v22.m128_f32[0] = matrix.m22;
      *(__m128 *)v36.m256i_i8 = _mm_shuffle_ps(v22, v22, 225);
      v42 = 10248;
      v39 = *(_OWORD *)v36.m256i_i8;
      v23 = *(__m128 *)v37;
      v35 = _mm_shuffle_ps(v21, v21, 225);
      v23.m128_f32[0] = matrix.dx;
      v38 = (__int128)v35;
      v24 = *(_OWORD *)&v36.m256i_u64[2];
      v25 = _mm_shuffle_ps(v23, v23, 225);
      v25.m128_f32[0] = matrix.dy;
      v26 = _mm_shuffle_ps(v25, v25, 225);
      *(__m128 *)v37 = v26;
    }
    v27 = *(_BYTE *)(a1 + 4489) == 0;
    v41 = v26;
    v40 = v24;
    if ( !v27 )
    {
      v28 = *(_DWORD *)(a1 + 36);
      v35.m128_i32[0] = *(_DWORD *)(a1 + 32);
      v29 = *(_DWORD *)(a1 + 40);
      *(_QWORD *)&v37[12] = 1065353216LL;
      v36.m256i_i32[0] = v29;
      v35.m128_i32[1] = v28;
      v30 = *(_DWORD *)(a1 + 44);
      *(_OWORD *)&v36.m256i_u64[1] = 0LL;
      v35.m128_u64[1] = 0LL;
      v31 = *(_DWORD *)(a1 + 48);
      v36.m256i_i32[1] = v30;
      v32 = *(_DWORD *)(a1 + 52);
      *(_DWORD *)v37 = v31;
      *(_DWORD *)&v37[4] = v32;
      v36.m256i_i64[3] = 1065353216LL;
      *(_DWORD *)&v37[8] = 0;
      *(_WORD *)&v37[16] = 10248;
      CMILMatrix::Multiply((CMILMatrix *)&v38, (const struct CMILMatrix *)&v35);
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18)
      && CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)&v38) )
    {
      v33 = v18[2];
      v43[0] = v38;
      v48 = 0x28083F800000LL;
      v43[2] = v39;
      v44 = 0LL;
      *(_DWORD *)v37 = 0;
      v46 = v41.m128_u64[0];
      v43[1] = 0LL;
      v45 = 1065353216LL;
      v47 = 0;
      CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
        (const struct CRoundedRectangleGeometryData *)(v33 + 16),
        (const struct CMILMatrix *)v43,
        (struct CRoundedRectangleGeometryData *)&v35);
      CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
        v8,
        v4,
        50529027,
        (unsigned int)&v35,
        (__int64)a4);
    }
    return v16;
  }
  if ( v12[2] )
    goto LABEL_25;
  return 0LL;
}
