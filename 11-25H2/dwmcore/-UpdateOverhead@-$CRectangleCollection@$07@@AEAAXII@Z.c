/*
 * XREFs of ?UpdateOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x1802493D8
 * Callers:
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C406C (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800C9C3C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180248DB0 (-_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ?CalcOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x1802494B8 (-CalcOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 */

__int64 __fastcall CRectangleCollection<8>::UpdateOverhead(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  __int64 result; // rax

  v3 = 0;
  v4 = a3;
  if ( a3 >= *a1 )
    v4 = *a1;
  if ( a2 )
  {
    do
      result = CRectangleCollection<8>::CalcOverhead(a1, v3++, a2);
    while ( v3 < a2 );
  }
  while ( ++v3 < v4 )
    result = CRectangleCollection<8>::CalcOverhead(a1, a2, v3);
  while ( ++v3 < *a1 )
    result = CRectangleCollection<8>::CalcOverhead(a1, a2, v3);
  return result;
}
