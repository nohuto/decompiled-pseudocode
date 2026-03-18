/*
 * XREFs of ?Merge@?$CRectangleCollection@$07@@QEAA_NII@Z @ 0x1802492E8
 * Callers:
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C406C (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800C9C3C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?Merge@CTreeDirty@@AEAAXII@Z @ 0x1802491C0 (-Merge@CTreeDirty@@AEAAXII@Z.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180249274 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?CalcOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x1802494B8 (-CalcOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 *     ?MoveOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x1802496D0 (-MoveOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 */

char __fastcall CRectangleCollection<8>::Merge(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r15
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  __int64 v9; // r10
  unsigned int v10; // eax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF

  v5 = 4LL * a3;
  v12 = *(_OWORD *)&a1[4 * a2 + 1];
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v12, (float *)&a1[v5 + 1]);
  v7 = 0;
  v8 = a3;
  *(_OWORD *)&a1[2 * v9 + 1] = v12;
  if ( a3 >= *a1 )
    v8 = *a1;
  if ( a2 )
  {
    do
      CRectangleCollection<8>::CalcOverhead(a1, v7++, a2);
    while ( v7 < a2 );
  }
  while ( ++v7 < v8 )
    CRectangleCollection<8>::CalcOverhead(a1, a2, v7);
  while ( ++v7 < *a1 )
    CRectangleCollection<8>::CalcOverhead(a1, a2, v7);
  v10 = *a1 - 1;
  *a1 = v10;
  if ( a3 >= v10 )
    return 0;
  *(_OWORD *)&a1[v5 + 1] = *(_OWORD *)&a1[4 * v10 + 1];
  CRectangleCollection<8>::MoveOverhead(a1, a3, *a1);
  return 1;
}
