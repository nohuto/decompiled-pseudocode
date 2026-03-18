/*
 * XREFs of ?Merge@?$CRectangleCollection@$03@@QEAA_NII@Z @ 0x1802488FC
 * Callers:
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180106E70 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180175760 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?Optimize@?$CMergedRectBase@$03@@AEAAXXZ @ 0x1802899A8 (-Optimize@-$CMergedRectBase@$03@@AEAAXXZ.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?UpdateOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180248A00 (-UpdateOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 *     ?MoveOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x180248C20 (-MoveOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 */

char __fastcall CRectangleCollection<4>::Merge(_DWORD *a1, int a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // r11d
  __int64 v7; // r10
  __int64 v8; // rax
  float v10[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 4LL * a3;
  *(_OWORD *)v10 = *(_OWORD *)&a1[4 * a2 + 1];
  TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(v10, (float *)&a1[v4 + 1]);
  *(_OWORD *)&a1[2 * v7 + 1] = *(_OWORD *)v10;
  CRectangleCollection<4>::UpdateOverhead(a1, v6, a3);
  v8 = (unsigned int)(*a1 - 1);
  *a1 = v8;
  if ( a3 >= (unsigned int)v8 )
    return 0;
  *(_OWORD *)&a1[v4 + 1] = *(_OWORD *)&a1[4 * v8 + 1];
  CRectangleCollection<4>::MoveOverhead(a1, a3, (unsigned int)*a1);
  return 1;
}
