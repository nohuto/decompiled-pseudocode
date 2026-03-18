/*
 * XREFs of ?GetBrushParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18016E810
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180015130 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080770 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResource@@PEAULayoutData@CContent@@W4D2D1_INTERPOLATION_MODE@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800DF098 (-GetBrushParametersWorker@CBitmapResourceRenderStrategy@@KAJPEBVCSurfaceBrush@@PEAVIBitmapResour.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x18016ED14 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016EEC0 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?GetVisualTree@CCachedVisualImage@@MEBAPEAVCVisualTree@@XZ @ 0x18016F0C0 (-GetVisualTree@CCachedVisualImage@@MEBAPEAVCVisualTree@@XZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801C37D0 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualSurfaceRenderStrategy::GetBrushParameters(
        CVisualSurfaceRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CBrushDrawListGenerator *a3)
{
  CVisualSurface *v3; // r15
  unsigned int v5; // r13d
  CCachedVisualImage *v7; // rbx
  char v8; // r12
  int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // r8
  __m128 m21_low; // xmm6
  __m128 m22_low; // xmm7
  float dx; // xmm8_4
  float dy; // xmm9_4
  float v16; // xmm10_4
  float v17; // xmm11_4
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned int v26; // edx
  int v27; // eax
  float v28; // xmm5_4
  float v29; // xmm3_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  int BrushParametersWorker; // eax
  struct CVisualTree *v35; // r14
  struct CVisualTree *(__fastcall *v36)(CCachedVisualImage *__hidden); // rax
  struct CVisualTree *VisualTree; // rax
  __int64 v39; // rax
  int CVIForRealizationSize; // eax
  CMatrixStack *v41; // rcx
  struct D2D_VECTOR_2F v42[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v43; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v44[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+88h] [rbp-80h] BYREF
  __int128 v46; // [rsp+98h] [rbp-70h]
  _BYTE v47[20]; // [rsp+B8h] [rbp-50h]
  __int128 v48; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v49; // [rsp+E8h] [rbp-20h]
  __int128 v50; // [rsp+F8h] [rbp-10h]
  __int128 v51; // [rsp+108h] [rbp+0h]
  int v52; // [rsp+118h] [rbp+10h]
  __int128 v53; // [rsp+128h] [rbp+20h] BYREF
  __int128 v54; // [rsp+138h] [rbp+30h]
  __int128 v55; // [rsp+148h] [rbp+40h]
  __int128 v56; // [rsp+158h] [rbp+50h]
  int v57; // [rsp+168h] [rbp+60h]
  char v58; // [rsp+230h] [rbp+128h]
  struct D2D_VECTOR_2F v59; // [rsp+238h] [rbp+130h] BYREF
  float v60; // [rsp+240h] [rbp+138h] BYREF

  v3 = (CVisualSurface *)*((_QWORD *)a2 + 16);
  v5 = *((_DWORD *)a2 + 31);
  v7 = 0LL;
  v8 = 0;
  v58 = *((_BYTE *)v3 + 204);
  memset(&v43, 0, sizeof(v43));
  memset(v44, 0, sizeof(v44));
  v9 = CSurfaceBrush::ComputeLayout(
         a2,
         (const struct D2D_SIZE_F *)((char *)a3 + 44),
         (struct CContent::LayoutData *)v43.m[1],
         0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x5D2u, 0LL);
    goto LABEL_14;
  }
  if ( v58 )
  {
    if ( *((_BYTE *)a2 + 201) )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)&v53, (struct D2D_MATRIX_3X2_F *)v43.m[1]);
      v41 = (CMatrixStack *)(*(_QWORD *)a3 + 288LL);
      *(_DWORD *)&v47[16] = 0;
      *(_OWORD *)&v42[0].x = *(_OWORD *)&v44[1];
      CMatrixStack::Top(v41, (struct CMILMatrix *)&v45);
      v50 = v55;
      v51 = v56;
      v48 = v53;
      v49 = v54;
      v52 = v57;
      CMILMatrix::Multiply((CMILMatrix *)&v48, (const struct CMILMatrix *)&v45);
      v59.x = 0.0;
      v60 = 1.0;
      if ( (unsigned __int8)CMILMatrix::Get2DScaleDimensionsWithPerspective(&v48, &v59, &v60, v42)
        && (v59.x < 1.0 || v60 < 1.0) )
      {
        v5 = 3;
      }
      v8 = 1;
    }
    v39 = *(_QWORD *)a3;
    v59.x = 0.0;
    v59.y = 0.0;
    CVIForRealizationSize = CVisualSurface::GetCVIForRealizationSize(
                              v3,
                              *(_DWORD *)(*(_QWORD *)(v39 + 40) + 960LL),
                              &v59,
                              &v59,
                              (struct CCachedVisualImage **)&v43);
    v10 = CVIForRealizationSize;
    if ( CVIForRealizationSize >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CVIForRealizationSize, 0x5F3u, 0LL);
LABEL_20:
    v7 = *(CCachedVisualImage **)&v43.m11;
    goto LABEL_14;
  }
  v11 = *(_QWORD *)a3;
  *(_DWORD *)&v47[8] = 0;
  m21_low = (__m128)LODWORD(v43.m21);
  m22_low = (__m128)LODWORD(v43.m22);
  dx = v43.dx;
  dy = v43.dy;
  v16 = *(float *)v44;
  v17 = *((float *)v44 + 1);
  *(_QWORD *)&v47[12] = 0x28003F800000LL;
  v45 = *(unsigned __int64 *)&v43.m[1][0];
  v18 = *(_DWORD *)(v11 + 296);
  v46 = *(unsigned __int64 *)&v43.m[2][0];
  *(_QWORD *)v47 = v44[0];
  v47[16] = 8;
  v52 = 0;
  if ( v18 )
  {
    v19 = (unsigned int)(v18 - 1);
    v20 = *(_QWORD *)(v11 + 288);
    v21 = *(_OWORD *)(68 * v19 + v20 + 16);
    v48 = *(_OWORD *)(68 * v19 + v20);
    v22 = *(_OWORD *)(68 * v19 + v20 + 32);
    v49 = v21;
    v23 = *(_OWORD *)(68 * v19 + v20 + 48);
    v52 = *(_DWORD *)(68 * v19 + v20 + 64);
  }
  else
  {
    v48 = _xmm;
    v22 = _xmm;
    v49 = _xmm;
    v23 = *(__int128 *)&_xmm.r;
    BYTE1(v52) = BYTE1(v52) & 0xC0 | 0x29;
    LOBYTE(v52) = -86;
  }
  v50 = v22;
  v53 = v45;
  v51 = v23;
  v56 = *(_OWORD *)v47;
  v54 = v46;
  v55 = _xmm;
  v57 = *(_DWORD *)&v47[16];
  CMILMatrix::Multiply((CMILMatrix *)&v53, (const struct CMILMatrix *)&v48);
  v59.x = 0.0;
  v60 = 0.0;
  *(_OWORD *)&v42[0].x = *(_OWORD *)&v44[1];
  CMILMatrix::Get2DScaleDimensionsWithPerspective(&v53, &v59, &v60, v42);
  v24 = *((_BYTE *)v3 + 204) != 0 ? 8 : 0;
  v25 = *(_QWORD *)(*(_QWORD *)a3 + 40LL);
  v42[0] = *(struct D2D_VECTOR_2F *)((char *)v3 + v24 + 184);
  v26 = *(_DWORD *)(v25 + 960);
  v42[0].x = v42[0].x * v59.x;
  v42[0].y = v42[0].y * v60;
  v27 = CVisualSurface::GetCVIForRealizationSize(v3, v26, v42, v42, (struct CCachedVisualImage **)&v43);
  v10 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x629u, 0LL);
    goto LABEL_20;
  }
  v28 = m21_low.m128_f32[0];
  v29 = *(float *)((char *)v3 + v24 + 188);
  v30 = *(float *)((char *)v3 + v24 + 184);
  v44[1] = 0LL;
  v31 = v29 / v42[0].y;
  v32 = v30 / v42[0].x;
  m21_low.m128_f32[0] = m21_low.m128_f32[0] * 0.0;
  v44[2] = v42[0];
  v33 = m22_low.m128_f32[0];
  m22_low.m128_f32[0] = m22_low.m128_f32[0] * 0.0;
  v42[1].x = (float)(dx * v31) + m21_low.m128_f32[0];
  m21_low.m128_f32[0] = (float)(m21_low.m128_f32[0] + (float)(dx * 0.0)) + v16;
  v42[1].y = (float)(dy * v31) + m22_low.m128_f32[0];
  m22_low.m128_f32[0] = (float)(m22_low.m128_f32[0] + (float)(dy * 0.0)) + v17;
  v42[0].y = (float)(v33 * v32) + (float)(dy * 0.0);
  v42[0].x = (float)(v28 * v32) + (float)(dx * 0.0);
  v44[0] = _mm_unpacklo_ps(m21_low, m22_low).m128_u64[0];
  *(_OWORD *)&v43.m[1][0] = *(_OWORD *)&v42[0].x;
LABEL_7:
  v7 = *(CCachedVisualImage **)&v43.m11;
  BrushParametersWorker = CBitmapResourceRenderStrategy::GetBrushParametersWorker(
                            a2,
                            (struct IBitmapResource *)((*(_QWORD *)&v43.m11 + 72LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)&v43.m11 >> 64)),
                            (struct CContent::LayoutData *)v43.m[1],
                            v5,
                            a3);
  v10 = BrushParametersWorker;
  if ( BrushParametersWorker < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BrushParametersWorker, 0x64Bu, 0LL);
  }
  else if ( *((_DWORD *)a3 + 10) )
  {
    v35 = *(struct CVisualTree **)(*(_QWORD *)a3 + 7944LL);
    v36 = *(struct CVisualTree *(__fastcall **)(CCachedVisualImage *__hidden))(*(_QWORD *)v7 + 216LL);
    if ( v36 == CCachedVisualImage::GetVisualTree )
      VisualTree = CCachedVisualImage::GetVisualTree(v7);
    else
      VisualTree = v36(v7);
    if ( VisualTree == v35 )
    {
      *((_DWORD *)a3 + 13) |= 0x40u;
    }
    else if ( !v58 || v8 )
    {
      *((_DWORD *)a3 + 13) |= 0x10u;
    }
  }
LABEL_14:
  if ( v7 )
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v7 + 16LL))(v7);
  return v10;
}
