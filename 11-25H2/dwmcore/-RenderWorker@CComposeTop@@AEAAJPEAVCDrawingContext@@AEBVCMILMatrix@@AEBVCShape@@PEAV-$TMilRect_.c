/*
 * XREFs of ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769C8
 * Callers:
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075C7C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800765A0 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180255E4C (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E7D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800E24E0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180117D20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118380 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118590 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposeTop::RenderWorker(
        __int64 a1,
        CDrawingContext *a2,
        const struct CMILMatrix *a3,
        const struct CShape *a4,
        _OWORD *a5)
{
  char v8; // r15
  __int64 (__fastcall *v9)(const struct CShape *, __int128 *, _BYTE *); // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v16; // [rsp+38h] [rbp-79h] BYREF
  __int128 v17; // [rsp+3Ch] [rbp-75h]
  __int128 v18; // [rsp+4Ch] [rbp-65h]
  int v19; // [rsp+5Ch] [rbp-55h]
  _BYTE v20[64]; // [rsp+60h] [rbp-51h] BYREF
  int v21; // [rsp+A0h] [rbp-11h]
  __int128 v22; // [rsp+B0h] [rbp-1h] BYREF

  v21 = 0;
  v8 = 0;
  CMILMatrix::Multiply((__m128 *)(a1 + 24), a3, (struct CMILMatrix *)v20);
  v9 = *(__int64 (__fastcall **)(const struct CShape *, __int128 *, _BYTE *))(*(_QWORD *)a4 + 48LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x148u, 0LL);
      goto LABEL_9;
    }
    v13 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v20, 0, 1);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x14Bu, 0LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x151u, 0LL);
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
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x13Au, 0LL);
LABEL_9:
  if ( a5 )
    *a5 = v22;
  return v11;
}
