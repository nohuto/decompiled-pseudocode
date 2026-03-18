/*
 * XREFs of ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180043CD4
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x1800441B8 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075104 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075D1C (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18022AED8 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1802639EC (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNot.c)
 * Callees:
 *     <none>
 */

int *__fastcall CMilRectLFromD2D_RECT_F(int *a1, __int64 a2)
{
  float v2; // xmm0_4
  float v3; // eax
  double v4; // xmm0_8
  int v5; // eax
  double v6; // xmm0_8
  int v7; // eax
  float v9; // [rsp+8h] [rbp+8h]

  v2 = *(float *)a2 + 6291456.25;
  v3 = v2;
  v4 = *(float *)(a2 + 4);
  *a1 = (int)(LODWORD(v3) << 10) >> 11;
  *(float *)&v4 = v4 + 6291456.25;
  v5 = LODWORD(v4);
  v6 = *(float *)(a2 + 8);
  a1[1] = v5 << 10 >> 11;
  *(float *)&v6 = v6 + 6291456.25;
  v7 = LODWORD(v6);
  LODWORD(v6) = *(_DWORD *)(a2 + 12);
  a1[2] = v7 << 10 >> 11;
  v9 = *(float *)&v6 + 6291456.25;
  a1[3] = (int)(LODWORD(v9) << 10) >> 11;
  return a1;
}
