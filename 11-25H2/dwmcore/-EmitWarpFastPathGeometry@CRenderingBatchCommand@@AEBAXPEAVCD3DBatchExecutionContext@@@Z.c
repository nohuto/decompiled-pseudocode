/*
 * XREFs of ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18019D240
 * Callers:
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x180142F10 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180162780 (-EmitGeometry@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComma.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180164BE0 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchComm.c)
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x18000B240 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18014A370 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180197BA0 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?ComputeVertexColor@CDrawListEntry@@QEBA?AU_D3DCOLORVALUE@@M@Z @ 0x18019DA90 (-ComputeVertexColor@CDrawListEntry@@QEBA-AU_D3DCOLORVALUE@@M@Z.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x18019DC9C (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ??A?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@QEBAAEBUPrimitiveUVDesc@@_K@Z @ 0x18019E710 (--A-$span@$$CBUPrimitiveUVDesc@@$0-0@gsl@@QEBAAEBUPrimitiveUVDesc@@_K@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18019E740 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?ToD2D1InterpolationMode@InterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z @ 0x18019E7C8 (-ToD2D1InterpolationMode@InterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18019E7F0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderingBatchCommand::EmitWarpFastPathGeometry(
        CRenderingBatchCommand *this,
        struct CD3DBatchExecutionContext *a2)
{
  FLOAT v2; // xmm0_4
  CRenderingBatchCommand *v3; // r15
  __int64 v4; // r13
  __int64 v5; // rax
  __m128 v6; // xmm2
  __int64 v7; // r14
  CDrawListBitmap *v8; // rax
  __m128 v9; // xmm1
  float r; // xmm2_4
  float b; // xmm1_4
  struct D2D_RECT_F *v12; // r9
  unsigned int v13; // edx
  unsigned int v14; // r12d
  CDrawListBitmap *v15; // r13
  __int64 v16; // rbx
  int v17; // r15d
  unsigned int v18; // r14d
  char *v19; // rcx
  __int16 v20; // si
  char v21; // di
  int v22; // xmm1_4
  __int64 v23; // xmm1_8
  _QWORD *v24; // rbx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // r8
  CDrawListBitmap *v37; // rax
  char IsOpaque; // al
  int v39; // ecx
  int v40; // ecx
  unsigned int v41; // esi
  int v42; // edi
  const struct D2D_MATRIX_3X2_F *v43; // r8
  int v44; // ebx
  int v45; // ebx
  float *v46; // rax
  float v47; // xmm2_4
  float v48; // xmm3_4
  int v49; // eax
  FastRegion::Internal::CRgnData *v50; // rcx
  __int64 v51; // rdx
  __m128 v52; // xmm1
  float v53; // xmm3_4
  float v54; // xmm2_4
  float v55; // xmm1_4
  int v56; // eax
  unsigned int v57; // eax
  __int64 v58; // r11
  char v59; // al
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  unsigned int v66; // [rsp+38h] [rbp-D0h]
  int v67; // [rsp+40h] [rbp-C8h]
  __int64 v68; // [rsp+40h] [rbp-C8h]
  int v69; // [rsp+48h] [rbp-C0h]
  CDrawListBitmap *v70; // [rsp+50h] [rbp-B8h]
  CDrawListBitmap *v71; // [rsp+50h] [rbp-B8h]
  CDrawListBitmap *v72; // [rsp+50h] [rbp-B8h]
  int v73; // [rsp+58h] [rbp-B0h]
  int v74; // [rsp+64h] [rbp-A4h]
  __int64 v75; // [rsp+68h] [rbp-A0h]
  _QWORD v77[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v78; // [rsp+90h] [rbp-78h]
  _BYTE v79[48]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v80[20]; // [rsp+C8h] [rbp-40h]
  struct D2D_MATRIX_3X2_F v81; // [rsp+118h] [rbp+10h] BYREF
  float v82; // [rsp+130h] [rbp+28h]
  float v83; // [rsp+134h] [rbp+2Ch]
  struct _D3DCOLORVALUE v84; // [rsp+138h] [rbp+30h] BYREF
  __m128i v85; // [rsp+148h] [rbp+40h] BYREF
  struct D2D_RECT_F v86; // [rsp+158h] [rbp+50h] BYREF
  unsigned __int64 v87; // [rsp+168h] [rbp+60h]
  _DWORD v88[6]; // [rsp+170h] [rbp+68h] BYREF
  float v89[6]; // [rsp+188h] [rbp+80h] BYREF
  __int128 v90; // [rsp+1A0h] [rbp+98h] BYREF
  __int128 v91; // [rsp+1B0h] [rbp+A8h]
  __int128 v92; // [rsp+1C0h] [rbp+B8h]
  __int128 v93; // [rsp+1D0h] [rbp+C8h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+1E0h] [rbp+D8h] BYREF
  _QWORD v95[6]; // [rsp+1F8h] [rbp+F0h] BYREF

  v2 = *((float *)this + 4);
  v3 = this;
  v4 = *((_QWORD *)this + 1);
  v5 = *((_QWORD *)a2 + 1);
  v6 = (__m128)*((unsigned int *)this + 17);
  v86.top = *((FLOAT *)this + 5);
  v7 = *(_QWORD *)(v5 + 576);
  v8 = *(CDrawListBitmap **)(v4 + 24);
  v86.bottom = *((FLOAT *)this + 9);
  v9 = (__m128)*((unsigned int *)this + 16);
  v86.left = v2;
  v86.right = *((FLOAT *)this + 8);
  v87 = _mm_unpacklo_ps(v9, v6).m128_u64[0];
  *(struct D2D_RECT_F *)&matrix.m11 = v86;
  *(_QWORD *)&v81.m[2][0] = a2;
  *(_QWORD *)&matrix.m[2][0] = v87;
  v75 = v7;
  v77[0] = v4;
  v70 = v8;
  if ( !D2D1InvertMatrix(&matrix) )
    return;
  CDrawListEntry::ComputeVertexColor((CDrawListEntry *)v4, &v84, *((float *)v3 + 22));
  r = v84.r;
  b = v84.b;
  if ( CCommonRegistryData::WarpEnableDebugColor )
  {
    r = v84.r * 0.0;
    b = v84.b * 0.0;
    v84.r = v84.r * 0.0;
    v84.b = v84.b * 0.0;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v84.a - 1.0) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(r - 1.0) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v84.g - 1.0) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(b - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v67 = 3;
    v69 = 2;
  }
  else
  {
    v69 = 0;
    v67 = 1;
  }
  gsl::details::extent_type<-1>::extent_type<-1>(&v85, *(_QWORD *)(v4 + 88));
  v85.m128i_i64[1] = v4 + 104;
  if ( v85.m128i_i64[0] == -1 || v4 == -104 && v85.m128i_i64[0] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v13 = 0;
  v14 = 0;
  v66 = 0;
  if ( v85.m128i_i64[0] )
  {
    v15 = v70;
    v16 = 0LL;
    v17 = v67;
    v18 = 0;
    do
    {
      v71 = (CDrawListBitmap *)(*(__int64 (__fastcall **)(CDrawListBitmap *, _QWORD))(*(_QWORD *)v15 + 16LL))(v15, v14);
      if ( *((_QWORD *)v71 + 1) )
      {
        v68 = gsl::span<PrimitiveUVDesc const,-1>::operator[](&v85, v16);
        v19 = (char *)v15 + 2 * v16;
        v20 = *(_WORD *)&v19[v16 + 64];
        v21 = v19[v16 + 66];
        CDrawListBitmap::GetSize(v71);
        CDrawListBitmap::GetSize(v71);
        v89[1] = 0.0;
        v89[2] = 0.0;
        v89[0] = (float)v73;
        v89[3] = (float)v74;
        v88[1] = *(_DWORD *)(v68 + 4);
        v88[3] = *(_DWORD *)(v68 + 16);
        v22 = *(_DWORD *)(v68 + 28);
        v89[4] = 0.0 - (float)((float)v73 * 0.0);
        v88[5] = v22;
        v89[5] = 0.0 - (float)((float)v74 * 0.0);
        v88[0] = *(_DWORD *)v68;
        v88[2] = *(_DWORD *)(v68 + 12);
        v88[4] = *(_DWORD *)(v68 + 24);
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v77[1],
          (const struct D2D1::Matrix3x2F *)&matrix,
          (const struct D2D1::Matrix3x2F *)v88);
        *(_QWORD *)&v91 = v78;
        v90 = *(_OWORD *)&v77[1];
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v77[1],
          (const struct D2D1::Matrix3x2F *)&v90,
          (const struct D2D1::Matrix3x2F *)v89);
        v23 = v78;
        v24 = &v95[3 * v18];
        *(_OWORD *)v24 = *(_OWORD *)&v77[1];
        v24[2] = v23;
        memset_0(&v90, 0, 0x40uLL);
        v25 = v91;
        v72 = (CDrawListBitmap *)((unsigned __int64)v18 << 6);
        *(_OWORD *)&v79[(_QWORD)v72] = v90;
        v26 = v92;
        *(_OWORD *)&v79[(_QWORD)v72 + 16] = v25;
        v27 = v93;
        *(_OWORD *)&v79[(_QWORD)v72 + 32] = v26;
        *(_OWORD *)((char *)v80 + (_QWORD)v72) = v27;
        LOBYTE(v28) = HIBYTE(v20);
        *(_DWORD *)&v79[(_QWORD)v72 + 4] = 0;
        *(_DWORD *)&v79[(_QWORD)v72] = v18;
        *(_QWORD *)&v79[(_QWORD)v72 + 8] = v24;
        v29 = ExtendMode::ToD2D1ExtendMode(v28);
        LOBYTE(v30) = v21;
        *(_DWORD *)&v79[v31 + 28] = v29;
        v32 = ExtendMode::ToD2D1ExtendMode(v30);
        LOBYTE(v33) = v20;
        *(_DWORD *)&v79[v34 + 32] = v32;
        v35 = InterpolationMode::ToD2D1InterpolationMode(v33);
        *(_DWORD *)((char *)&v80[1] + v36) = 0;
        *(_DWORD *)&v79[v36 + 24] = v35;
        *(_DWORD *)((char *)&v80[2] + v36) = v14 == 0;
        *(_DWORD *)((char *)&v80[3] + v36) = v14 == 1;
        if ( *(_BYTE *)(v68 + 52) )
          *(_QWORD *)&v79[v36 + 16] = v68 + 36;
        if ( v14 )
        {
          if ( v14 == 1 )
            *(_DWORD *)((char *)v80 + v36) = 4;
        }
        else
        {
          v37 = (CDrawListBitmap *)(*(__int64 (__fastcall **)(CDrawListBitmap *, _QWORD))(*(_QWORD *)v15 + 16LL))(
                                     v15,
                                     0LL);
          IsOpaque = CDrawListBitmap::IsOpaque(v37);
          v39 = v69;
          if ( IsOpaque )
            v39 = v17;
          v80[16 * (unsigned __int64)v18] = v39;
        }
        ++v18;
      }
      v16 = ++v14;
    }
    while ( (unsigned __int64)v14 < v85.m128i_i64[0] );
    v3 = this;
    v4 = v77[0];
    v66 = v18;
    v7 = v75;
    v13 = v66;
  }
  v40 = *((_DWORD *)v3 + 21);
  v41 = 0;
  v42 = 240;
  if ( v40 > 17 )
  {
    v63 = v40 - 19;
    if ( v63 )
    {
      v64 = v63 - 1;
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( v65 )
        {
          if ( v65 == 2 )
            v41 = 10;
        }
        else
        {
          v41 = 8;
        }
        goto LABEL_24;
      }
      v42 = 112;
    }
    v41 = 2;
    goto LABEL_24;
  }
  if ( v40 == 17 )
  {
    v42 = 112;
    goto LABEL_78;
  }
  if ( !v40 )
  {
LABEL_23:
    v41 = 1;
    goto LABEL_24;
  }
  v60 = v40 - 4;
  if ( !v60 )
  {
    v42 = 112;
    goto LABEL_23;
  }
  v61 = v60 - 1;
  if ( v61 )
  {
    v62 = v61 - 1;
    if ( v62 )
    {
      if ( v62 != 9 )
        goto LABEL_24;
LABEL_78:
      v41 = 4;
      goto LABEL_24;
    }
    v42 = 112;
  }
  if ( v80[0] == 1 && v13 == 1 )
    v41 = 14;
LABEL_24:
  *(_OWORD *)&v81.m11 = 0LL;
  D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
    (D2DMatrixHelper *)(*(_QWORD *)(v4 + 16) + 56LL),
    &v86,
    &v81,
    v12);
  v43 = (const struct D2D_MATRIX_3X2_F *)*(unsigned int *)(v4 + 96);
  if ( (_DWORD)v43 && (_DWORD)v43 != 50529027 )
  {
    v57 = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
            (D2DMatrixHelper *)(unsigned int)v43,
            &v86.left,
            v43);
    (*(void (__fastcall **)(__int64, struct D2D_MATRIX_3X2_F *, _QWORD, struct D2D_MATRIX_3X2_F *))(v58 + 64))(
      v7,
      &v81,
      v57,
      &v81);
    if ( v81.m21 <= v81.m11 || v81.m22 <= v81.m12 )
      return;
    v44 = 0;
    goto LABEL_50;
  }
  v44 = 0;
  if ( (_DWORD)v43 )
  {
LABEL_50:
    if ( *(_DWORD *)v3 != 4 )
    {
      v59 = *(_BYTE *)(v4 + 101);
      if ( *(_BYTE *)(v4 + 100) )
      {
        v44 = v59 != 0 ? 12 : 4;
      }
      else if ( v59 )
      {
        v44 = 8;
      }
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, v41);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 40LL))(v7, v42 | (unsigned int)v44);
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, v79, v66);
  v45 = 0;
  if ( *(_DWORD *)v3 == 4 )
  {
    FastRegion::CRegion::BeginIterator((int **)v3 + 12, (__int64)&v90);
    while ( (unsigned __int64)v91 < *((_QWORD *)&v90 + 1) )
    {
      v85.m128i_i32[1] = *(_DWORD *)v91;
      v50 = (FastRegion::Internal::CRgnData *)*((_QWORD *)&v91 + 1);
      v85.m128i_i32[3] = *(_DWORD *)(v91 + 8);
      v51 = 2 * (int)v92;
      v85.m128i_i32[0] = *(_DWORD *)(*((_QWORD *)&v91 + 1) + 4 * v51);
      v85.m128i_i32[2] = *(_DWORD *)(*((_QWORD *)&v91 + 1) + 4 * v51 + 4);
      v52 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128(&v85)), (__m128)_xmm);
      v53 = fminf(v81.m22, v52.m128_f32[3]);
      v54 = fmaxf(v81.m11, v52.m128_f32[0]);
      v55 = fmaxf(v81.m12, v52.m128_f32[1]);
      v82 = fminf(v81.m21, v52.m128_f32[2]);
      v83 = v53;
      *(_QWORD *)&v81.m[2][0] = __PAIR64__(LODWORD(v55), LODWORD(v54));
      if ( v82 > v54 && v53 > v55 )
      {
        v56 = (*(__int64 (__fastcall **)(__int64, FLOAT *, struct _D3DCOLORVALUE *, _QWORD, _DWORD))(*(_QWORD *)v7 + 56LL))(
                v7,
                &v81.dx,
                &v84,
                0LL,
                0);
        if ( v56 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v56, 0x1EBu, 0LL);
        ++v45;
      }
      FastRegion::Internal::CRgnData::StepIterator(v50, (struct FastRegion::CRegion::Iterator *)&v90);
    }
  }
  else
  {
    v46 = *(float **)(*(_QWORD *)&v81.m[2][0] + 104LL);
    v81.m11 = fmaxf(*v46, v81.m11);
    v47 = fmaxf(v46[1], v81.m12);
    v81.m12 = v47;
    v81.m21 = fminf(v46[2], v81.m21);
    v48 = fminf(v46[3], v81.m22);
    v81.m22 = v48;
    if ( v81.m21 > v81.m11 && v48 > v47 )
    {
      v49 = (*(__int64 (__fastcall **)(__int64, struct D2D_MATRIX_3X2_F *, struct _D3DCOLORVALUE *, _QWORD, _DWORD))(*(_QWORD *)v7 + 56LL))(
              v7,
              &v81,
              &v84,
              0LL,
              0);
      if ( v49 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0x1F7u, 0LL);
      v45 = 1;
    }
  }
  dword_1804068B8 += v45;
}
