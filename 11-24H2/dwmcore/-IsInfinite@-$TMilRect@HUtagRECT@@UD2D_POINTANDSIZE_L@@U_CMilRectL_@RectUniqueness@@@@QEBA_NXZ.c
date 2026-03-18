/*
 * XREFs of ?IsInfinite@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027A38
 * Callers:
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV2@2@Z @ 0x1800270F0 (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NAEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800279C0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_N.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800299F0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsInfinite(_DWORD *a1)
{
  return *a1 == 0x80000000 && a1[2] == 0x7FFFFFFF || a1[1] == 0x80000000 && a1[3] == 0x7FFFFFFF;
}
