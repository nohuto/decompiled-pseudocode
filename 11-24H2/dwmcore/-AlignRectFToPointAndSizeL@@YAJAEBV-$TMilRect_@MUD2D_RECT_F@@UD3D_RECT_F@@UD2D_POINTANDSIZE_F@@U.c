/*
 * XREFs of ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800FECE0
 * Callers:
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800FE5E0 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A1F90 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCColorTransformResource@@@Z @ 0x180214CA8 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x180265AA8 (-PushValueColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800FE9E0 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180100680 (-IsWellOrdered@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall AlignRectFToPointAndSizeL(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // ebp
  float *v5; // rcx
  double v6; // xmm0_8
  double v7; // xmm6_8
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  double v11; // xmm0_8
  int v12; // edi
  int v13; // eax
  double v14; // xmm0_8

  v4 = 0;
  if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered(a1)
    && (*(_QWORD *)&v6 = *(unsigned int *)v5, *(float *)&v6 >= -2147483600.0)
    && *(float *)&v6 <= 2147483600.0
    && (*(_QWORD *)&v7 = *((unsigned int *)v5 + 1), *(float *)&v7 >= -2147483600.0)
    && *(float *)&v7 <= 2147483600.0
    && v5[2] <= 2147483600.0
    && v5[3] <= 2147483600.0 )
  {
    v8 = PixelAlign(v6, 0, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_N2_1474836e9)));
    *a2 = v8;
    v9 = v8;
    v10 = PixelAlign(v7, 0, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_N2_1474836e9)));
    *(_QWORD *)&v11 = *(unsigned int *)(a1 + 8);
    v12 = v10;
    a2[1] = v10;
    v13 = PixelAlign(v11, 1, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_N2_1474836e9)));
    *(_QWORD *)&v14 = *(unsigned int *)(a1 + 12);
    a2[2] = v13 - v9;
    a2[3] = PixelAlign(v14, 1, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_N2_1474836e9))) - v12;
  }
  else
  {
    v4 = -2003304438;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304438, 0x47u, 0LL);
  }
  return v4;
}
