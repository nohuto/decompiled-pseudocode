/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180170C98
 * Callers:
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18016F69C (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180170940 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180170B40 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1801FF944 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180229730 (-CalcDeviceTransformDelta@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@.c)
 *     ?CalcDeviceTransformDelta@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18023BDD0 (-CalcDeviceTransformDelta@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180250B78 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18028B390 (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  char v3; // al
  char result; // al
  double v5; // xmm3_8
  float v6; // xmm0_4
  float v7; // xmm0_4
  double v8; // xmm3_8
  float v9; // xmm0_4
  float v10; // xmm1_4
  double v11; // xmm2_8

  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v3 = *(_BYTE *)(a1 + 65);
  *(_BYTE *)(a1 + 64) = -86;
  result = v3 & 0xC0 | 0x29;
  *(_BYTE *)(a1 + 65) = result;
  v5 = (a3[2] - *a3) / (a2[2] - *a2);
  v6 = v5;
  *(float *)a1 = v6;
  v7 = *a3 - *a2 * v5;
  *(float *)(a1 + 48) = v7;
  v8 = (a3[3] - a3[1]) / (a2[3] - a2[1]);
  v9 = v8;
  *(float *)(a1 + 20) = v9;
  v10 = a2[1];
  v11 = a3[1];
  *(_BYTE *)(a1 + 64) = -120;
  *(float *)(a1 + 52) = v11 - v10 * v8;
  return result;
}
