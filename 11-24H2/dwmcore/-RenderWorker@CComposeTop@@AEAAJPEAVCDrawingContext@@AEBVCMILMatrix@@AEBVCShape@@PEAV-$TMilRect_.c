/*
 * XREFs of ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B0C98
 * Callers:
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801B0810 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1054 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024AAFC (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800BC1A0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800F5410 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5A70 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposeTop::RenderWorker(
        __int64 a1,
        CDrawingContext *a2,
        const struct CMILMatrix *a3,
        const struct CShape *a4,
        _OWORD *a5)
{
  char v8; // r15
  __int64 (__fastcall *v9)(const struct CShape *, __int128 *, __m128 *); // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v16; // [rsp+38h] [rbp-79h] BYREF
  __int128 v17; // [rsp+3Ch] [rbp-75h]
  __int128 v18; // [rsp+4Ch] [rbp-65h]
  int v19; // [rsp+5Ch] [rbp-55h]
  __m128 v20[4]; // [rsp+60h] [rbp-51h] BYREF
  int v21; // [rsp+A0h] [rbp-11h]
  __int128 v22; // [rsp+B0h] [rbp-1h] BYREF

  v21 = 0;
  v8 = 0;
  CMILMatrix::Multiply((__m128 *)(a1 + 24), a3, (struct CMILMatrix *)v20);
  v9 = *(__int64 (__fastcall **)(const struct CShape *, __int128 *, __m128 *))(*(_QWORD *)a4 + 48LL);
  v22 = 0uLL;
  v10 = v9(a4, &v22, v20);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 8) )
      goto LABEL_8;
    v16 = 2;
    v17 = 0LL;
    LODWORD(v17) = 0;
    v19 = 0;
    v18 = 0LL;
    v12 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v16, 1);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x148u, 0LL);
      goto LABEL_9;
    }
    v13 = CDrawingContext::PushTransformInternal((const void **)a2, 0LL, v20, 0, 1);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x14Bu, 0LL);
      goto LABEL_16;
    }
    v8 = 1;
    v14 = CDrawingContext::FillShapeWithBitmap(
            a2,
            *(struct IBitmapResource **)(a1 + 8),
            (const struct CMILMatrix *)&CMILMatrix::Identity,
            a4,
            1,
            0);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x151u, 0LL);
    }
    else
    {
LABEL_8:
      if ( !v8 )
        goto LABEL_9;
    }
    CDrawingContext::PopTransformInternal(a2, 1);
LABEL_16:
    CDrawingContext::PopRenderOptionsInternal(a2, 1);
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x13Au, 0LL);
LABEL_9:
  if ( a5 )
    *a5 = v22;
  return v11;
}
