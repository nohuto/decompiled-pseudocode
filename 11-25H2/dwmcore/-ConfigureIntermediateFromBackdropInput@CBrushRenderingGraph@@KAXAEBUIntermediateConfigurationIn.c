/*
 * XREFs of ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800DE390
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180127930 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18019FAE8 (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800126F0 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE760 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E1140 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E2A80 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     ceilf_0 @ 0x1802E886C (ceilf_0.c)
 *     floorf_0 @ 0x1802E88A8 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a1,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a2)
{
  int v2; // xmm0_4
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v7; // r13
  int v8; // xmm0_4
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(_QWORD, _QWORD); // rax
  __int64 *Size; // rax
  unsigned int v13; // xmm0_4
  unsigned int v14; // xmm1_4
  float *v15; // rsi
  struct D2D_MATRIX_3X2_F *v16; // r9
  FLOAT bottom; // xmm1_4
  float v18; // xmm8_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  __int64 v22; // r8
  float v23; // xmm0_4
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(__int64, int *); // rax
  __int64 *v26; // rax
  __int64 v27; // rax
  float v28; // xmm8_4
  float v29; // xmm7_4
  __int64 v30; // rax
  int v31; // [rsp+28h] [rbp-B9h] BYREF
  float v32; // [rsp+30h] [rbp-B1h] BYREF
  int v33; // [rsp+34h] [rbp-ADh]
  int v34; // [rsp+38h] [rbp-A9h]
  float v35; // [rsp+3Ch] [rbp-A5h]
  float v36; // [rsp+40h] [rbp-A1h]
  float v37; // [rsp+44h] [rbp-9Dh]
  struct D2D_RECT_F v38; // [rsp+48h] [rbp-99h] BYREF
  _BYTE v39[40]; // [rsp+70h] [rbp-71h] BYREF
  __int128 v40; // [rsp+98h] [rbp-49h] BYREF
  float v41; // [rsp+A8h] [rbp-39h]
  float v42; // [rsp+ACh] [rbp-35h]

  v2 = *(_DWORD *)a1;
  v3 = *((_QWORD *)a1 + 2);
  v4 = 0LL;
  *(_QWORD *)&v40 = 0LL;
  v7 = *(_QWORD *)a2;
  DWORD2(v40) = v2;
  v8 = *((_DWORD *)a1 + 1);
  v9 = 0LL;
  v10 = *(_QWORD *)(v3 + 8);
  HIDWORD(v40) = v8;
  if ( v10 )
  {
    v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10 + 32LL);
    if ( v11 == IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(v10, &v31);
    }
    else if ( (char *)v11 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      Size = (__int64 *)CDxHandleBitmapRealization::GetSize(
                          v10,
                          &v31,
                          IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize);
    }
    else
    {
      Size = (__int64 *)((__int64 (__fastcall *)(__int64, int *, __int64 (__fastcall *)(_QWORD, _QWORD)))v11)(
                          v10,
                          &v31,
                          IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize);
    }
    v9 = *Size;
  }
  v33 = 0;
  v34 = 0;
  v32 = (float)(int)v9;
  v35 = (float)SHIDWORD(v9);
  v36 = 0.0 - (float)((float)(int)v9 * 0.0);
  v37 = 0.0 - (float)((float)SHIDWORD(v9) * 0.0);
  Matrix3x3::operator*(v3 + 48, v39, &v32);
  Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)v39, (float *)a2 + 6, (float *)a2 + 7, (float *)&v40);
  v13 = *(_DWORD *)a1;
  v14 = *((_DWORD *)a1 + 1);
  *(_QWORD *)&v40 = 0LL;
  v15 = (float *)(v3 + 84);
  *((_QWORD *)&v40 + 1) = __PAIR64__(v14, v13);
  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v40, (const struct D2D_RECT_F *)(v3 + 84), &v38, v16);
  bottom = v38.bottom;
  *((_DWORD *)a2 + 4) = LODWORD(v38.left);
  *((FLOAT *)a2 + 5) = bottom;
  v18 = *(float *)(v3 + 84);
  if ( COERCE_FLOAT(LODWORD(v18) & _xmm) < 8388608.0 )
    v18 = (float)(int)floorf_0(*v15);
  v19 = ceilf_0(*(float *)(v3 + 92));
  v20 = *(float *)(v3 + 88);
  v21 = v19;
  if ( COERCE_FLOAT(LODWORD(v20) & _xmm) < 8388608.0 )
    v20 = (float)(int)floorf_0(*(float *)(v3 + 88));
  v23 = ceilf_0(*(float *)(v3 + 96));
  if ( v18 == v21 )
    v21 = v21 + 1.0;
  if ( v20 == v23 )
    v23 = v23 + 1.0;
  *((float *)a2 + 2) = v21 - v18;
  *((float *)a2 + 3) = v23 - v20;
  v24 = *(_QWORD *)(v3 + 8);
  if ( v24 )
  {
    v25 = *(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 32LL);
    if ( (char *)v25 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      v26 = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(v24, &v31);
    }
    else if ( (char *)v25 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      v26 = (__int64 *)CDxHandleBitmapRealization::GetSize(v24, &v31, v22);
    }
    else
    {
      v26 = (__int64 *)v25(v24, &v31);
    }
    v4 = *v26;
  }
  v33 = 0;
  v34 = 0;
  v32 = (float)(int)v4;
  v35 = (float)SHIDWORD(v4);
  v36 = 0.0 - (float)((float)(int)v4 * 0.0);
  v37 = 0.0 - (float)((float)SHIDWORD(v4) * 0.0);
  v27 = Matrix3x3::operator*(v3 + 48, v39, &v32);
  LODWORD(v28) = LODWORD(v18) ^ _xmm;
  LODWORD(v29) = LODWORD(v20) ^ _xmm;
  v40 = _xmm;
  v41 = v28;
  v42 = v29;
  v30 = Matrix3x3::operator*(v27, &v38, &v40);
  *(_OWORD *)(v7 + 48) = *(_OWORD *)v30;
  *(_OWORD *)(v7 + 64) = *(_OWORD *)(v30 + 16);
  *(_DWORD *)(v7 + 80) = *(_DWORD *)(v30 + 32);
  *(float *)(v7 + 84) = v28 + *v15;
  *(float *)(v7 + 88) = v29 + *(float *)(v3 + 88);
  *(float *)(v7 + 92) = v28 + *(float *)(v3 + 92);
  *(float *)(v7 + 96) = v29 + *(float *)(v3 + 96);
  *(_BYTE *)(v7 + 105) = 1;
  *(_BYTE *)(v7 + 106) = *(_BYTE *)(v3 + 106);
  *(_BYTE *)(v7 + 107) = *(_BYTE *)(v3 + 107);
}
