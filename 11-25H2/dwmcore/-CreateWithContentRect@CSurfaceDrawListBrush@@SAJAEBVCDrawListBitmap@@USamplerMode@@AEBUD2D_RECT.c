/*
 * XREFs of ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800DF4AC
 * Callers:
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800753B8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180093920 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x180119988 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18011A8EC (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18016E0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E3100 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x18024E820 (-DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAV.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18029DDE0 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z @ 0x1802E49BC (-CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z.c)
 * Callees:
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800E0A0C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E1140 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E2A80 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithContentRect(__int64 a1, __int16 *a2, float *a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, char *); // rax
  __int64 *Size; // rax
  float v13; // xmm7_4
  float v14; // xmm6_4
  __int64 v15; // rax
  __int64 v16; // rbx
  __int16 v17; // r12
  char v18; // r14
  CMILRefCountImpl *v19; // rcx
  void (*v20)(void); // rax
  __int64 v21; // rcx
  __int128 v22; // xmm0
  float v24[12]; // [rsp+30h] [rbp-78h]
  char v25; // [rsp+B0h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  v10 = 0LL;
  if ( v5 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 32LL);
    if ( (char *)v11 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(v5, &v25);
    }
    else if ( (char *)v11 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v5, &v25, a3);
    }
    else
    {
      Size = (__int64 *)v11(v5, &v25);
    }
    v10 = *Size;
  }
  v13 = 1.0 / (float)(int)v10;
  v14 = 1.0 / (float)SHIDWORD(v10);
  v15 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  v16 = v15;
  if ( v15 )
  {
    v17 = *a2;
    v18 = *((_BYTE *)a2 + 2);
    *(_QWORD *)(v15 + 8) = 1065353216LL;
    *(_DWORD *)(v15 + 16) = 0;
    *(_QWORD *)(v15 + 20) = 1065353216LL;
    *(_DWORD *)(v15 + 28) = 0;
    *(_BYTE *)(v15 + 52) = 0;
    *(_QWORD *)v15 = &CSurfaceDrawListBrush::`vftable';
    v19 = *(CMILRefCountImpl **)a1;
    *(_QWORD *)(v15 + 56) = *(_QWORD *)a1;
    if ( v19 )
    {
      v20 = *(void (**)(void))(*(_QWORD *)v19 + 8LL);
      if ( (char *)v20 == (char *)CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v19);
      else
        v20();
    }
    v21 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v16 + 64) = v21;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    *(_BYTE *)(v16 + 72) = *(_BYTE *)(a1 + 16);
    *(_WORD *)(v16 + 80) = v17;
    *(_BYTE *)(v16 + 82) = v18;
    *(float *)(v16 + 84) = v13;
    *(float *)(v16 + 100) = v14;
    *(float *)(v16 + 108) = 0.0 - (float)(v13 * 0.0);
    *(float *)(v16 + 112) = 0.0 - (float)(v14 * 0.0);
    *(_QWORD *)(v16 + 88) = 0LL;
    *(_DWORD *)(v16 + 96) = 0;
    *(_DWORD *)(v16 + 104) = 0;
    *(_DWORD *)(v16 + 116) = 1065353216;
    *(_DWORD *)(v16 + 144) = 1;
    *(_OWORD *)(v16 + 120) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *(_QWORD *)a4 = v16;
    *(_BYTE *)(v16 + 52) = 1;
    v22 = *(_OWORD *)a3;
    *(_DWORD *)(v16 + 48) = 50529027;
    *(_OWORD *)(v16 + 32) = v22;
    v24[1] = v14 * a3[1];
    v24[0] = v13 * *a3;
    v24[2] = v13 * a3[2];
    v24[3] = v14 * a3[3];
    *(_OWORD *)(*(_QWORD *)a4 + 120LL) = *(_OWORD *)v24;
  }
  else
  {
    v9 = -2147024882;
    *(_QWORD *)a4 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu, 0LL);
  }
  return v9;
}
