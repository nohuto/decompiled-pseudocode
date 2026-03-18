/*
 * XREFs of ?EnsureWeights@?$CRectangleCollection@$03@@AEAAXXZ @ 0x18024899C
 * Callers:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180106E70 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180175760 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?Optimize@?$CMergedRectBase@$03@@AEAAXXZ @ 0x1802899A8 (-Optimize@-$CMergedRectBase@$03@@AEAAXXZ.c)
 * Callees:
 *     ?CalcOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180248A84 (-CalcOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 */

__int64 __fastcall CRectangleCollection<4>::EnsureWeights(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int i; // esi
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 164) )
  {
    v2 = 1;
    for ( *(_BYTE *)(a1 + 164) = 0; v2 < *(_DWORD *)a1; ++v2 )
    {
      for ( i = 0; i < v2; ++i )
        result = CRectangleCollection<4>::CalcOverhead(a1, i, v2);
    }
  }
  return result;
}
