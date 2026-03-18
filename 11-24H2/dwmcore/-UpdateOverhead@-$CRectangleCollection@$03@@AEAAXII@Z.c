/*
 * XREFs of ?UpdateOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x18024148C
 * Callers:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800315A0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C6828 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?Merge@?$CRectangleCollection@$03@@QEAA_NII@Z @ 0x180241388 (-Merge@-$CRectangleCollection@$03@@QEAA_NII@Z.c)
 * Callees:
 *     ?CalcOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180241510 (-CalcOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 */

__int64 __fastcall CRectangleCollection<4>::UpdateOverhead(unsigned int *a1, unsigned int a2, unsigned int a3)
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
      result = CRectangleCollection<4>::CalcOverhead(a1, v3++, a2);
    while ( v3 < a2 );
  }
  while ( ++v3 < v4 )
    result = CRectangleCollection<4>::CalcOverhead(a1, a2, v3);
  while ( ++v3 < *a1 )
    result = CRectangleCollection<4>::CalcOverhead(a1, a2, v3);
  return result;
}
