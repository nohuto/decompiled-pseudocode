/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x18017070C
 * Callers:
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18008A030 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180170090 (-BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801700E8 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180170400 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x180178FA8 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801E3C90 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUD2D_RECT_F@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x1802B7AC8 (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUD2D_RECT_F@@PEBVCMILMatrix@@PEAUID2D1GeometrySin.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct D2D_POINT_2F *a2, struct D2D_POINT_2F *a3, int a4)
{
  signed __int64 v4; // r10
  float v6; // xmm4_4
  float v7; // xmm3_4
  char v8; // al
  char v9; // r9
  float v10; // xmm3_4
  FLOAT v11; // xmm1_4

  v4 = (char *)a2 - (char *)a3;
  do
  {
    v6 = *(float *)((char *)&a3->x + v4);
    v7 = *(float *)((char *)&a3->y + v4);
    a3->x = (float)((float)(v7 * *((float *)this + 4)) + (float)(v6 * *(float *)this)) + *((float *)this + 12);
    a3->y = (float)((float)(v7 * *((float *)this + 5)) + (float)(v6 * *((float *)this + 1))) + *((float *)this + 13);
    if ( (char)(4 * *((_BYTE *)this + 65)) >> 6 == 1
      || (char)(4 * *((_BYTE *)this + 65)) >> 6 >= 0
      && (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                         (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm) * 61440.0)
                                       + (float)(COERCE_FLOAT(*((_DWORD *)this + 7) & _xmm) * 61440.0))
                               + COERCE_FLOAT(*((_DWORD *)this + 15) & _xmm))
                       - 1.0) & _xmm) < 0.000081380211
        ? (v8 = 1, v9 = 48)
        : (v8 = 0, v9 = 16),
          *((_BYTE *)this + 65) = v9 | *((_BYTE *)this + 65) & 0xCF,
          !v8) )
    {
      v10 = (float)((float)(v7 * *((float *)this + 7)) + (float)(v6 * *((float *)this + 3))) + *((float *)this + 15);
      if ( COERCE_FLOAT(LODWORD(v10) & _xmm) >= 0.000081380211 )
      {
        v11 = a3->y / v10;
        a3->x = a3->x / v10;
        a3->y = v11;
      }
    }
    ++a3;
    --a4;
  }
  while ( a4 );
}
