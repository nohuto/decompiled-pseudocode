/*
 * XREFs of ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x1800CA7E0
 * Callers:
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800702F0 (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180072340 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x1800CAE40 (-TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEB.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800D19E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180143970 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
        const struct CRoundedRectangleGeometryData *a1,
        const struct CMILMatrix *a2,
        struct CRoundedRectangleGeometryData *a3)
{
  bool v3; // zf
  float v5; // xmm8_4
  const struct CRoundedRectangleGeometryData *v6; // r10
  struct CRoundedRectangleGeometryData *v7; // r11
  float v8; // xmm10_4
  float v9; // xmm5_4
  float v10; // xmm7_4
  unsigned int v11; // edi
  char v12; // al
  float y; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm11_4
  float v16; // xmm5_4
  float x; // xmm11_4
  char v18; // dl
  char v19; // dl
  char v20; // cl
  int v21; // xmm3_4
  int v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  bool v25; // dl
  bool v26; // al
  __m128i si128; // xmm2
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned int v30; // ebx
  unsigned int *v31; // rdx
  unsigned int *v32; // rax
  __m128 v33; // xmm1
  __m128 v34; // xmm0
  unsigned int *v35; // rax
  __m128 v36; // xmm1
  __m128 v37; // xmm0
  unsigned int *v38; // rax
  __m128 v39; // xmm1
  __m128 v40; // xmm0
  __m128 v41; // xmm1
  __m128 v42; // xmm0
  float v43; // xmm5_4
  float v44; // xmm3_4
  float v45; // xmm0_4
  __m128 v46; // xmm1
  __m128 v47; // xmm0
  float v48; // xmm1_4
  float v49; // xmm0_4
  unsigned __int64 v50; // rcx
  struct D2D_RECT_F v51; // [rsp+20h] [rbp-C8h] BYREF
  struct D2D_POINT_2F v52[4]; // [rsp+38h] [rbp-B0h] BYREF

  v3 = *((_BYTE *)a1 + 52) == 0;
  v5 = *((float *)a1 + 1);
  v6 = a1;
  v7 = a3;
  v8 = *(float *)a1;
  v51.left = *(FLOAT *)a1;
  v51.top = v5;
  if ( v3 )
  {
    v9 = *((float *)a1 + 2);
    v10 = *((float *)a1 + 3);
  }
  else
  {
    v9 = v8 + *((float *)a1 + 2);
    v10 = v5 + *((float *)a1 + 3);
  }
  v11 = 1;
  v12 = (char)(4 * *((_BYTE *)a2 + 64)) >> 6;
  v51.bottom = v10;
  v51.right = v9;
  if ( v12 <= 0 )
  {
    if ( v12 < 0 )
    {
LABEL_5:
      y = v5 + *((float *)a2 + 13);
      v14 = v10 + *((float *)a2 + 13);
      v15 = *((float *)a2 + 12);
      v16 = v9 + v15;
      x = v15 + v8;
      goto LABEL_6;
    }
    if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a2)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - 1.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 5) - 1.0) & _xmm) < 0.000081380211 )
    {
      *((_BYTE *)a2 + 64) |= 0x30u;
      goto LABEL_5;
    }
    *((_BYTE *)a2 + 64) &= ~0x20u;
    *((_BYTE *)a2 + 64) |= 0x10u;
  }
  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a2) )
  {
    v44 = *((float *)a2 + 5);
    x = (float)(*(float *)a2 * v8) + *((float *)a2 + 12);
    y = (float)(v5 * v44) + *((float *)a2 + 13);
    v16 = (float)(v43 * *(float *)a2) + *((float *)a2 + 12);
    v14 = (float)(v10 * v44) + *((float *)a2 + 13);
    if ( *(float *)a2 <= 0.0 || v44 <= 0.0 )
    {
      if ( x > v16 )
      {
        x = v16;
        v16 = (float)(*(float *)a2 * v8) + *((float *)a2 + 12);
      }
      if ( y > v14 )
      {
        v45 = y;
        y = v14;
        v14 = v45;
      }
    }
  }
  else
  {
    CMILMatrix::Transform2DRectToPerspective(a2, &v51, v52);
    x = v52[0].x;
    v50 = 1LL;
    y = v52[0].y;
    v16 = v52[0].x;
    v14 = v52[0].y;
    do
    {
      v48 = v52[v50].x;
      v49 = v52[v50].y;
      x = fminf(x, v48);
      ++v50;
      y = fminf(y, v49);
      v16 = fmaxf(v16, v48);
      v14 = fmaxf(v14, v49);
    }
    while ( v50 < 4 );
  }
LABEL_6:
  v18 = *((_BYTE *)a2 + 65);
  if ( (char)(v18 << 6) >> 6 == 1 )
  {
    v20 = 0;
    goto LABEL_16;
  }
  if ( (char)(v18 << 6) >> 6 < 0 )
  {
    v20 = 1;
    goto LABEL_68;
  }
  if ( (char)(4 * v18) >> 6 == 1 )
    goto LABEL_14;
  if ( (char)(4 * v18) >> 6 >= 0 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a2 + 7) & _xmm) * 61440.0)
                                      + (float)(COERCE_FLOAT(*((_DWORD *)a2 + 3) & _xmm) * 61440.0))
                              + COERCE_FLOAT(*((_DWORD *)a2 + 15) & _xmm))
                      - 1.0) & _xmm) >= 0.000081380211 )
    {
      v18 = v18 & 0xCF | 0x10;
      goto LABEL_14;
    }
    v18 |= 0x30u;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a2 - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 5) - 0.0) & _xmm) < 0.000081380211 )
  {
    *((_BYTE *)a2 + 64) &= 0xCu;
    v19 = v18 | 3;
    *((_BYTE *)a2 + 64) |= 0x51u;
    v20 = 1;
    goto LABEL_15;
  }
LABEL_14:
  v20 = 0;
  v19 = v18 & 0xFC | 1;
LABEL_15:
  *((_BYTE *)a2 + 65) = v19;
  if ( !v20 )
  {
LABEL_16:
    v21 = *(_DWORD *)a2;
    v22 = *((_DWORD *)a2 + 5);
    goto LABEL_17;
  }
LABEL_68:
  v21 = *((_DWORD *)a2 + 1);
  v22 = *((_DWORD *)a2 + 4);
LABEL_17:
  LODWORD(v23) = v21 & _xmm;
  LODWORD(v24) = v22 & _xmm;
  if ( *((_BYTE *)v6 + 52) )
  {
    v46 = (__m128)*((unsigned int *)v6 + 4);
    v47 = (__m128)*((unsigned int *)v6 + 5);
    *(float *)v7 = x;
    *((float *)v7 + 1) = y;
    v46.m128_f32[0] = v46.m128_f32[0] * v23;
    *((_BYTE *)v7 + 52) = 1;
    *((float *)v7 + 2) = v16 - x;
    *((float *)v7 + 3) = v14 - y;
    v47.m128_f32[0] = v47.m128_f32[0] * v24;
    if ( v20 )
    {
      v47 = _mm_unpacklo_ps(v47, v46);
      v46.m128_u64[0] = v47.m128_u64[0];
      v47.m128_i32[0] = _mm_shuffle_ps(v47, v47, 85).m128_u32[0];
      *(_QWORD *)&v51.left = v46.m128_u64[0];
    }
    *((_DWORD *)v7 + 4) = v46.m128_i32[0];
    *((_DWORD *)v7 + 5) = v47.m128_i32[0];
  }
  else
  {
    *(float *)v7 = x;
    *((float *)v7 + 1) = y;
    *((float *)v7 + 2) = v16;
    *((float *)v7 + 3) = v14;
    *((_BYTE *)v7 + 52) = 0;
    v25 = *(float *)a2 < 0.0 || *((float *)a2 + 1) < 0.0;
    v26 = *((float *)a2 + 4) < 0.0 || *((float *)a2 + 5) < 0.0;
    if ( v25 )
    {
      if ( v26 )
      {
        v30 = 0;
        v28 = 2;
        v29 = 3;
      }
      else
      {
        v29 = 0;
        v28 = 1;
        v30 = 3;
        v11 = 2;
      }
    }
    else if ( v26 )
    {
      v28 = 3;
      v30 = 1;
      v11 = 0;
      v29 = 2;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v28 = _mm_cvtsi128_si32(si128);
      v11 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 12));
      v29 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
      v30 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
    }
    if ( v20 )
    {
      v11 = v29;
      v29 = 3;
    }
    v31 = (unsigned int *)((char *)v6 + 16);
    if ( *((_BYTE *)v6 + 52) )
      v32 = (unsigned int *)((char *)v6 + 16);
    else
      v32 = (unsigned int *)((char *)v6 + 8 * v28 + 16);
    v33 = (__m128)*v32;
    v34 = (__m128)v32[1];
    v33.m128_f32[0] = v33.m128_f32[0] * v23;
    v34.m128_f32[0] = v34.m128_f32[0] * v24;
    if ( v20 )
    {
      v34 = _mm_unpacklo_ps(v34, v33);
      v33.m128_u64[0] = v34.m128_u64[0];
      v34.m128_i32[0] = _mm_shuffle_ps(v34, v34, 85).m128_u32[0];
      *(_QWORD *)&v51.left = v33.m128_u64[0];
    }
    *((_DWORD *)v7 + 4) = v33.m128_i32[0];
    *((_DWORD *)v7 + 5) = v34.m128_i32[0];
    if ( *((_BYTE *)v6 + 52) )
      v35 = (unsigned int *)((char *)v6 + 16);
    else
      v35 = (unsigned int *)((char *)v6 + 8 * v29 + 16);
    v36 = (__m128)*v35;
    v37 = (__m128)v35[1];
    v36.m128_f32[0] = v36.m128_f32[0] * v23;
    v37.m128_f32[0] = v37.m128_f32[0] * v24;
    if ( v20 )
    {
      v37 = _mm_unpacklo_ps(v37, v36);
      v36.m128_u64[0] = v37.m128_u64[0];
      v37.m128_i32[0] = _mm_shuffle_ps(v37, v37, 85).m128_u32[0];
      *(_QWORD *)&v51.left = v36.m128_u64[0];
    }
    *((_DWORD *)v7 + 6) = v36.m128_i32[0];
    *((_DWORD *)v7 + 7) = v37.m128_i32[0];
    if ( *((_BYTE *)v6 + 52) )
      v38 = (unsigned int *)((char *)v6 + 16);
    else
      v38 = (unsigned int *)((char *)v6 + 8 * v30 + 16);
    v39 = (__m128)*v38;
    v40 = (__m128)v38[1];
    v39.m128_f32[0] = v39.m128_f32[0] * v23;
    v40.m128_f32[0] = v40.m128_f32[0] * v24;
    if ( v20 )
    {
      v40 = _mm_unpacklo_ps(v40, v39);
      v39.m128_u64[0] = v40.m128_u64[0];
      v40.m128_i32[0] = _mm_shuffle_ps(v40, v40, 85).m128_u32[0];
      *(_QWORD *)&v51.left = v39.m128_u64[0];
    }
    *((_DWORD *)v7 + 8) = v39.m128_i32[0];
    *((_DWORD *)v7 + 9) = v40.m128_i32[0];
    if ( !*((_BYTE *)v6 + 52) )
      v31 = (unsigned int *)((char *)v6 + 8 * v11 + 16);
    v41 = (__m128)*v31;
    v42 = (__m128)v31[1];
    v41.m128_f32[0] = v41.m128_f32[0] * v23;
    v42.m128_f32[0] = v42.m128_f32[0] * v24;
    if ( v20 )
    {
      v42 = _mm_unpacklo_ps(v42, v41);
      v41.m128_u64[0] = v42.m128_u64[0];
      v42.m128_i32[0] = _mm_shuffle_ps(v42, v42, 85).m128_u32[0];
      *(_QWORD *)&v51.left = v41.m128_u64[0];
    }
    *((_DWORD *)v7 + 10) = v41.m128_i32[0];
    *((_DWORD *)v7 + 11) = v42.m128_i32[0];
  }
  *((float *)v7 + 12) = fminf(v23, v24) * *((float *)v6 + 12);
}
