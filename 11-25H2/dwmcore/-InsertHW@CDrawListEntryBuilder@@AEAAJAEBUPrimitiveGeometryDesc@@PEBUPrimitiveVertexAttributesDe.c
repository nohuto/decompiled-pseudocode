/*
 * XREFs of ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180090CA0
 * Callers:
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x180090AD0 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 * Callees:
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180047F70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18008B410 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008B4A0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x18008ED00 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180091550 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??1?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801D76D0 (--1-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimitiveSubRect@CDr.c)
 *     ??9@YA_NAEBVCMilPoint2F@@0@Z @ 0x180237270 (--9@YA_NAEBVCMilPoint2F@@0@Z.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1802598B0 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertHW(
        CDrawListEntryBuilder *this,
        struct PrimitiveGeometryDesc *a2,
        struct PrimitiveVertexAttributesDesc *a3,
        LPVOID *p_lpMem,
        char a5)
{
  int BuiltHWPrimitiveEntry; // r14d
  struct PrimitiveGeometryDesc *v8; // rsi
  struct CPrimitiveColor *v10; // r13
  int v11; // ebx
  int v12; // r12d
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  CShape **v17; // r14
  CShape *v18; // rcx
  _BYTE *v19; // rbx
  __int64 result; // rax
  HANDLE ProcessHeap; // rax
  char v22; // r13
  _DWORD *v23; // r12
  _DWORD *v24; // rbx
  int v25; // eax
  __int64 *v26; // r12
  unsigned int v27; // xmm1_4
  __int64 v28; // rcx
  unsigned int v29; // xmm0_4
  unsigned int v30; // xmm1_4
  __int64 v31; // rcx
  __m128 v32; // xmm0
  __m128 v33; // xmm1
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __m128 v36; // xmm1
  __int128 v37; // xmm0
  __m128 v38; // xmm1
  __m128 v39; // xmm1
  bool v40; // zf
  __int32 v41; // xmm1_4
  __int32 v42; // xmm0_4
  __int32 v43; // xmm1_4
  int v44; // xmm0_4
  int v45; // xmm1_4
  __int64 v46; // rcx
  int v47; // eax
  int v48; // r9d
  unsigned int v49; // ebx
  unsigned int v50; // [rsp+20h] [rbp-E0h]
  __m128 v51; // [rsp+30h] [rbp-D0h] BYREF
  __m256i v52; // [rsp+40h] [rbp-C0h]
  _BYTE v53[20]; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  struct CPrimitiveColor *v55; // [rsp+80h] [rbp-80h]
  __int128 v56; // [rsp+90h] [rbp-70h] BYREF
  __int128 v57; // [rsp+A0h] [rbp-60h]
  __int128 v58; // [rsp+B0h] [rbp-50h]
  __m128 v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+D0h] [rbp-30h]
  _QWORD v61[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v62; // [rsp+F8h] [rbp-8h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  unsigned __int64 v64; // [rsp+110h] [rbp+10h]
  int v65; // [rsp+118h] [rbp+18h]
  __int64 v66; // [rsp+11Ch] [rbp+1Ch]
  D2D1_MATRIX_3X2_F matrix; // [rsp+128h] [rbp+28h] BYREF
  LPVOID lpMem; // [rsp+150h] [rbp+50h] BYREF
  _BYTE *v69; // [rsp+158h] [rbp+58h]
  __int64 *v70; // [rsp+160h] [rbp+60h]
  _BYTE v71[216]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v72; // [rsp+240h] [rbp+140h] BYREF

  BuiltHWPrimitiveEntry = 0;
  v8 = a2;
  if ( !a3 )
  {
    v10 = 0LL;
    v55 = 0LL;
    goto LABEL_3;
  }
  a2 = (struct PrimitiveGeometryDesc *)*((_QWORD *)a3 + 3);
  v10 = (struct CPrimitiveColor *)*((_QWORD *)a3 + 2);
  v55 = v10;
  if ( !a2 )
  {
LABEL_3:
    if ( !*((_BYTE *)this + 4493) )
      goto LABEL_4;
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, (__int64)a2, 0LL, 0LL);
    if ( BuiltHWPrimitiveEntry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x230u, 0LL);
      return (unsigned int)BuiltHWPrimitiveEntry;
    }
    *((_BYTE *)this + 4493) = 0;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 4493) || (unsigned __int8)operator!=((char *)this + 4472) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, (__int64)a2, 0LL, 0LL);
    if ( BuiltHWPrimitiveEntry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x228u, 0LL);
      return (unsigned int)BuiltHWPrimitiveEntry;
    }
    *((_BYTE *)this + 4493) = 1;
    *((_QWORD *)this + 559) = **((_QWORD **)a3 + 3);
  }
LABEL_4:
  lpMem = v71;
  v69 = v71;
  v70 = &v72;
  if ( p_lpMem )
  {
    v22 = a5;
    goto LABEL_32;
  }
  if ( !*((_BYTE *)this + 4491) || (*((_BYTE *)v8 + 24) & 1) != 0 )
    goto LABEL_18;
  v11 = CCommonRegistryData::MegaRectSize;
  v12 = 0;
  v13 = *(float *)v8;
  v14 = *((float *)v8 + 2);
  v15 = 0.0;
  if ( !CCommonRegistryData::MegaRectSize )
    v11 = 1;
  if ( v14 >= v13 )
  {
    v16 = *((float *)v8 + 3);
    if ( v16 >= *((float *)v8 + 1) )
      v15 = (float)(v16 - *((float *)v8 + 1)) * (float)(v14 - v13);
  }
  if ( v15 < (float)v11 )
    goto LABEL_16;
  v17 = (CShape **)*((_QWORD *)this + 2);
  v18 = *v17;
  if ( *v17 )
  {
    if ( !v17[2] )
    {
      if ( (!v18 || CShape::IsAxisAlignedRectangle(v18))
        && CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(v17 + 4)) )
      {
        BuiltHWPrimitiveEntry = 0;
        goto LABEL_17;
      }
LABEL_42:
      v60 = 0;
      BuiltHWPrimitiveEntry = 0;
      v26 = (__int64 *)*((_QWORD *)this + 2);
      if ( *((_BYTE *)v26 + 108) )
      {
        if ( !v26[2] )
        {
          v47 = CCpuClip::ConvertContextDependentClipToLocal(*((CCpuClip **)this + 2));
          BuiltHWPrimitiveEntry = v47;
          if ( v47 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x85u, 0LL);
            v12 = BuiltHWPrimitiveEntry;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x81Du, 0LL);
            goto LABEL_56;
          }
        }
        v31 = v26[2];
        v12 = BuiltHWPrimitiveEntry;
        v56 = _xmm;
        v37 = _xmm;
        v57 = _xmm;
        v39 = *(__m128 *)&_xmm.r;
        BYTE1(v60) = BYTE1(v60) & 0xC0 | 0x29;
        v54 = v31;
        LOBYTE(v60) = -86;
      }
      else
      {
        v27 = *((_DWORD *)v26 + 9);
        v28 = *v26;
        matrix.m11 = *((FLOAT *)v26 + 8);
        *(_QWORD *)&matrix.m[0][1] = __PAIR64__(*((_DWORD *)v26 + 12), v27);
        v29 = *((_DWORD *)v26 + 20);
        matrix.m22 = *((FLOAT *)v26 + 13);
        v30 = *((_DWORD *)v26 + 21);
        v54 = v28;
        *(_QWORD *)&matrix.m[2][0] = __PAIR64__(v30, v29);
        D2D1InvertMatrix(&matrix);
        v31 = v54;
        *(_OWORD *)&v52.m256i_u64[1] = 0LL;
        *(_QWORD *)&v53[12] = 0x28083F800000LL;
        v32 = (__m128)v51.m128_u64[0];
        *(_DWORD *)&v53[8] = 0;
        v12 = 0;
        v32.m128_f32[0] = matrix.m11;
        v33 = *(__m128 *)v52.m256i_i8;
        v34 = _mm_shuffle_ps(v32, v32, 225);
        v33.m128_f32[0] = matrix.m21;
        v52.m256i_i64[3] = 1065353216LL;
        v35 = _mm_shuffle_ps(v33, v33, 225);
        v34.m128_f32[0] = matrix.m12;
        v35.m128_f32[0] = matrix.m22;
        *(__m128 *)v52.m256i_i8 = _mm_shuffle_ps(v35, v35, 225);
        v60 = 10248;
        v57 = *(_OWORD *)v52.m256i_i8;
        v36 = *(__m128 *)v53;
        v51 = _mm_shuffle_ps(v34, v34, 225);
        v36.m128_f32[0] = matrix.dx;
        v56 = (__int128)v51;
        v37 = *(_OWORD *)&v52.m256i_u64[2];
        v38 = _mm_shuffle_ps(v36, v36, 225);
        v38.m128_f32[0] = matrix.dy;
        v39 = _mm_shuffle_ps(v38, v38, 225);
        *(__m128 *)v53 = v39;
      }
      v40 = *((_BYTE *)this + 4489) == 0;
      v59 = v39;
      v58 = v37;
      if ( !v40 )
      {
        v41 = *((_DWORD *)this + 9);
        v51.m128_i32[0] = *((_DWORD *)this + 8);
        v42 = *((_DWORD *)this + 10);
        *(_QWORD *)&v53[12] = 1065353216LL;
        v52.m256i_i32[0] = v42;
        v51.m128_i32[1] = v41;
        v43 = *((_DWORD *)this + 11);
        *(_OWORD *)&v52.m256i_u64[1] = 0LL;
        v51.m128_u64[1] = 0LL;
        v44 = *((_DWORD *)this + 12);
        v52.m256i_i32[1] = v43;
        v45 = *((_DWORD *)this + 13);
        *(_DWORD *)v53 = v44;
        *(_DWORD *)&v53[4] = v45;
        v52.m256i_i64[3] = 1065353216LL;
        *(_DWORD *)&v53[8] = 0;
        *(_WORD *)&v53[16] = 10248;
        CMILMatrix::Multiply((CMILMatrix *)&v56, (const struct CMILMatrix *)&v51);
        v31 = v54;
      }
      if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31) )
      {
        if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)&v56) )
        {
          v61[0] = v56;
          v66 = 1065353216LL;
          v46 = *(_QWORD *)(v54 + 16);
          v61[2] = v57;
          v62 = 0LL;
          *(_DWORD *)v53 = 0;
          v64 = v59.m128_u64[0];
          v61[1] = 0LL;
          v63 = 1065353216LL;
          v65 = 0;
          WORD2(v66) = 10248;
          CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
            (const struct CRoundedRectangleGeometryData *)(v46 + 16),
            (const struct CMILMatrix *)v61,
            (struct CRoundedRectangleGeometryData *)&v51);
          CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
            v11,
            (_DWORD)v8,
            50529027,
            (unsigned int)&v51,
            (__int64)&lpMem);
        }
        goto LABEL_17;
      }
LABEL_16:
      BuiltHWPrimitiveEntry = v12;
      if ( v12 >= 0 )
        goto LABEL_17;
LABEL_56:
      v48 = v12;
      v50 = 573;
      goto LABEL_57;
    }
LABEL_61:
    if ( CShapePtr::IsAxisAlignedRectangle(v17 + 2) )
      goto LABEL_16;
    goto LABEL_42;
  }
  if ( v17[2] )
    goto LABEL_61;
  BuiltHWPrimitiveEntry = 0;
LABEL_17:
  if ( v69 == lpMem )
  {
LABEL_18:
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::AppendHWPrimitive(this, v8, a3);
    if ( BuiltHWPrimitiveEntry >= 0 )
      goto LABEL_19;
    v50 = 586;
LABEL_69:
    v48 = BuiltHWPrimitiveEntry;
LABEL_57:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, v50, 0LL);
    detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::~vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>(&lpMem);
    return (unsigned int)BuiltHWPrimitiveEntry;
  }
  p_lpMem = &lpMem;
  v22 = 0;
LABEL_32:
  v23 = p_lpMem[1];
  v24 = *p_lpMem;
  if ( v23 != v24 )
  {
    memset(&matrix, 0, 32);
    while ( v24 != v23 )
    {
      if ( !v22 || !*((_BYTE *)v24 + 20) )
      {
        v25 = *((_DWORD *)v8 + 4);
        *(_OWORD *)&matrix.m11 = *(_OWORD *)v24;
        LODWORD(matrix.dx) = v24[4] & v25;
        BuiltHWPrimitiveEntry = CDrawListEntryBuilder::AppendHWPrimitive(
                                  this,
                                  (const struct PrimitiveGeometryDesc *)&matrix,
                                  a3);
        if ( BuiltHWPrimitiveEntry < 0 )
        {
          v50 = 600;
          goto LABEL_69;
        }
      }
      v24 += 6;
    }
  }
  v10 = v55;
LABEL_19:
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v69 - (_BYTE *)lpMem) >> 3) )
    v69 -= 8 * ((v69 - (_BYTE *)lpMem) >> 3);
  v19 = lpMem;
  lpMem = 0LL;
  if ( v19 != v71 && v19 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v19);
  }
  if ( !v10 && (*((_DWORD *)this + 6) & 0x800) == 0 )
    return (unsigned int)BuiltHWPrimitiveEntry;
  result = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
             this,
             (__int64)a2,
             v10,
             (const struct _D3DCOLORVALUE *)a3);
  v49 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x262u, 0LL);
    return v49;
  }
  return result;
}
