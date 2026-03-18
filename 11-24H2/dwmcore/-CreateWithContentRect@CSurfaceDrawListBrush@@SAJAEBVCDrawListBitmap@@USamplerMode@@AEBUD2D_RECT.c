/*
 * XREFs of ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800BA160
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006A920 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18006C274 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006DF60 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18014F5E8 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x18024498C (-DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAV.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180292780 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z @ 0x1802DB71C (-CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x1800BA54C (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z @ 0x1800BA7D0 (--0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithContentRect(__int64 a1, __int16 *a2, float *a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v8; // rax
  __int64 (__fastcall *v11)(__int64, __int16 *); // rax
  __int64 *Size; // rax
  float v13; // xmm7_4
  float v14; // xmm6_4
  __int64 v15; // rcx
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v19; // [rsp+38h] [rbp-19h]
  float v20[10]; // [rsp+48h] [rbp-9h] BYREF
  __int16 v21; // [rsp+B8h] [rbp+67h] BYREF
  char v22; // [rsp+BAh] [rbp+69h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v8 = 0LL;
  if ( v5 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v5 + 32LL);
    if ( (char *)v11 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
    {
      Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(v5, &v21);
    }
    else if ( (char *)v11 == (char *)CDxHandleBitmapRealization::GetSize )
    {
      Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v5, &v21);
    }
    else
    {
      Size = (__int64 *)v11(v5, &v21);
    }
    v8 = *Size;
  }
  v20[1] = 0.0;
  v20[2] = 0.0;
  v20[3] = 0.0;
  v20[5] = 0.0;
  v20[8] = 1.0;
  v13 = 1.0 / (float)(int)v8;
  v20[0] = v13;
  v14 = 1.0 / (float)SHIDWORD(v8);
  v20[4] = v14;
  v20[6] = 0.0 - (float)(v13 * 0.0);
  v20[7] = 0.0 - (float)(v14 * 0.0);
  v15 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  if ( !v15 )
  {
    *(_QWORD *)a4 = 0LL;
    goto LABEL_13;
  }
  v21 = *a2;
  v22 = *((_BYTE *)a2 + 2);
  v16 = CSurfaceDrawListBrush::CSurfaceDrawListBrush(v15, a1, &v21, v20, 1);
  *(_QWORD *)a4 = v16;
  if ( !v16 )
  {
LABEL_13:
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Fu, 0LL);
    return v6;
  }
  *(_BYTE *)(v16 + 52) = 1;
  v17 = *(_OWORD *)a3;
  *(_DWORD *)(v16 + 48) = 50529027;
  *(_OWORD *)(v16 + 32) = v17;
  *((float *)&v19 + 1) = v14 * a3[1];
  *(float *)&v19 = v13 * *a3;
  *((float *)&v19 + 2) = v13 * a3[2];
  *((float *)&v19 + 3) = v14 * a3[3];
  *(_OWORD *)(*(_QWORD *)a4 + 120LL) = v19;
  return v6;
}
