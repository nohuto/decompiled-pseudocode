/*
 * XREFs of ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800126F0
 * Callers:
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180010FF0 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180093920 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x1800B17D0 (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800DE390 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationIn.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800DF8A0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18010DE80 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016EEC0 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180199760 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18019E848 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

char __fastcall Matrix3x3::Get2DScaleDimensionsWithPerspective(__int64 a1, float *a2, float *a3, float *a4)
{
  float *v4; // rax
  char result; // al
  float v9; // xmm4_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float *v12; // rcx
  __int64 v13; // rdx
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm5_4
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm8_4
  float v20; // xmm1_4
  __int128 v21; // [rsp+20h] [rbp-50h] BYREF
  float v22; // [rsp+30h] [rbp-40h]
  float v23; // [rsp+34h] [rbp-3Ch]

  v4 = (float *)(a1 + 20);
  if ( COERCE_FLOAT(*(_DWORD *)(a1 + 8) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*(_DWORD *)v4 & _xmm) >= 0.0000011920929 )
  {
    if ( !a4 )
    {
      result = 0;
      *a2 = 1.0;
      *a3 = 1.0;
      return result;
    }
    v9 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v20 = (float)((float)(a4[3] - a4[1]) * 0.5) + a4[1];
    *(float *)&v21 = (float)((float)(a4[2] - *a4) * 0.5) + *a4;
    v22 = *(float *)&v21;
    *((float *)&v21 + 1) = v20;
    *((float *)&v21 + 3) = v20;
    *((float *)&v21 + 2) = *(float *)&v21 + 1.0;
    v23 = v20 + 1.0;
    goto LABEL_9;
  }
  v9 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v22 = 0.0;
    v21 = _xmm;
    v23 = 1.0;
LABEL_9:
    v12 = (float *)&v21;
    v13 = 3LL;
    do
    {
      v14 = (float)((float)(*(float *)a1 * *v12) + (float)(*(float *)(a1 + 12) * v12[1])) + *(float *)(a1 + 24);
      v15 = (float)((float)(*(float *)(a1 + 4) * *v12) + (float)(*(float *)(a1 + 16) * v12[1])) + *(float *)(a1 + 28);
      v16 = (float)((float)(*v4 * v12[1]) + (float)(*(float *)(a1 + 8) * *v12)) + *(float *)(a1 + 32);
      if ( COERCE_FLOAT(LODWORD(v16) & _xmm) >= 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - v9) & _xmm) >= 0.000081380211 )
      {
        v14 = v14 / v16;
        v15 = v15 / v16;
      }
      *v12 = v14;
      v12[1] = v15;
      v12 += 2;
      --v13;
    }
    while ( v13 );
    v17 = v22 - *(float *)&v21;
    v18 = v23 - *((float *)&v21 + 1);
    v19 = sqrtf_0(
            (float)((float)(*((float *)&v21 + 2) - *(float *)&v21) * (float)(*((float *)&v21 + 2) - *(float *)&v21))
          + (float)((float)(*((float *)&v21 + 3) - *((float *)&v21 + 1))
                  * (float)(*((float *)&v21 + 3) - *((float *)&v21 + 1))));
    v11 = sqrtf_0((float)(v18 * v18) + (float)(v17 * v17));
    *a2 = v19;
    goto LABEL_7;
  }
  v10 = sqrtf_0((float)(*(float *)a1 * *(float *)a1) + (float)(*(float *)(a1 + 4) * *(float *)(a1 + 4)));
  v11 = sqrtf_0((float)(*(float *)(a1 + 12) * *(float *)(a1 + 12)) + (float)(*(float *)(a1 + 16) * *(float *)(a1 + 16)));
  *a2 = v10;
LABEL_7:
  *a3 = v11;
  return 1;
}
