/*
 * XREFs of ?DoesContain@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801B3040
 * Callers:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?DoesContain@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B2FDC (-DoesContain@CTreeDirty@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::DoesContain(float *a1, float *a2)
{
  float v2; // xmm2_4

  v2 = a2[2];
  return v2 <= *a2 || a2[3] <= a2[1] || *a2 >= *a1 && a2[1] >= a1[1] && a1[2] >= v2 && a1[3] >= a2[3];
}
