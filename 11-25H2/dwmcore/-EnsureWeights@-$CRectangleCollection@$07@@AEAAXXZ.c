/*
 * XREFs of ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x18024945C
 * Callers:
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x180096CC0 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?Optimize@CTreeDirty@@QEAAXXZ @ 0x180097060 (-Optimize@CTreeDirty@@QEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x180098EA0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C406C (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800C9C3C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?FindBestMandatoryMergePair@?$CRectangleCollection@$07@@QEAAXPEAI0@Z @ 0x180248D08 (-FindBestMandatoryMergePair@-$CRectangleCollection@$07@@QEAAXPEAI0@Z.c)
 *     ?_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180248DB0 (-_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180249274 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 * Callees:
 *     ?CalcOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x1802494B8 (-CalcOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 */

__int64 __fastcall CRectangleCollection<8>::EnsureWeights(__int64 a1)
{
  __int64 v2; // r8
  unsigned int i; // edi
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 436) )
  {
    v2 = 1LL;
    *(_BYTE *)(a1 + 436) = 0;
    if ( *(_DWORD *)a1 > 1u )
    {
      do
      {
        for ( i = 0; i < (unsigned int)v2; ++i )
          result = CRectangleCollection<8>::CalcOverhead(a1, i, v2);
        v2 = (unsigned int)(v2 + 1);
      }
      while ( (unsigned int)v2 < *(_DWORD *)a1 );
    }
  }
  return result;
}
