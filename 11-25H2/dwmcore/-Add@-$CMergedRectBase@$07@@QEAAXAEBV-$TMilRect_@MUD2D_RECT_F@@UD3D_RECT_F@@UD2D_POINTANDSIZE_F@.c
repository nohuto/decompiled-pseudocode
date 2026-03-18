/*
 * XREFs of ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C406C
 * Callers:
 *     ?AddDirtyRects@?$CTargetDirtyBase@$07@@QEAAXAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1800C3CEC (-AddDirtyRects@-$CTargetDirtyBase@$07@@QEAAXAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?AddDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3E90 (-AddDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x1800C68D4 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?FindBestMandatoryMergePair@?$CRectangleCollection@$07@@QEAAXPEAI0@Z @ 0x180248D08 (-FindBestMandatoryMergePair@-$CRectangleCollection@$07@@QEAAXPEAI0@Z.c)
 *     ?UpdateOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x1802493D8 (-UpdateOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x18024945C (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall CMergedRectBase<8>::Add(unsigned int *a1, const struct D2D_RECT_F *a2)
{
  unsigned int v3; // eax
  _OWORD *v4; // rdx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(v3) = IsEmpty(a2);
  if ( !(_BYTE)v3 )
  {
    if ( *((_BYTE *)a1 + 440) == 1 )
      *((_BYTE *)a1 + 440) = 0;
    *(_OWORD *)&a1[4 * *a1 + 1] = *v4;
    v3 = *a1 + 1;
    *a1 = v3;
    if ( v3 > 8 )
    {
      if ( v3 > 9 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3E,
          (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\MergedRect.h",
          v5);
      if ( *((_BYTE *)a1 + 436) )
        CRectangleCollection<8>::EnsureWeights(a1);
      else
        CRectangleCollection<8>::UpdateOverhead(a1, 8LL, 0xFFFFFFFFLL);
      v9 = 0;
      v8 = 0;
      CRectangleCollection<8>::FindBestMandatoryMergePair(a1, &v9, &v8);
      LOBYTE(v3) = CRectangleCollection<8>::Merge(a1, v9, v8);
    }
    else
    {
      *((_BYTE *)a1 + 436) = 1;
    }
  }
  return v3;
}
