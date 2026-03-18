/*
 * XREFs of ?UpdateDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802D359C
 * Callers:
 *     ?RenderAndPresent@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1802D0590 (-RenderAndPresent@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetDirtyRects@CTreeDirty@@QEBA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x180096EE0 (-GetDirtyRects@CTreeDirty@@QEBA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C6828 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?Reset@?$CMergedRectBase@$03@@QEAAXXZ @ 0x1801FC4CC (-Reset@-$CMergedRectBase@$03@@QEAAXXZ.c)
 */

void __fastcall CHolographicInteropTexture::UpdateDirtyRegion(CHolographicInteropTexture *this)
{
  __int64 v2; // rcx
  unsigned int *v3; // rcx
  const struct D2D_RECT_F *v4; // rbx
  __int64 v5; // rsi
  struct D2D_RECT_F v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 12);
  if ( *((_BYTE *)this + 2152) )
  {
    v6 = *(struct D2D_RECT_F *)(v2 + 80);
    CMergedRectBase<4>::Reset((__int64)this + 1952);
    CMergedRectBase<4>::Add(v3, &v6);
    *((_BYTE *)this + 2152) = 0;
  }
  else
  {
    CTreeDirty::GetDirtyRects(v2 + 112, &v6);
    v4 = *(const struct D2D_RECT_F **)&v6.right;
    v5 = *(_QWORD *)&v6.right + 16LL * *(_QWORD *)&v6.left;
    while ( v4 != (const struct D2D_RECT_F *)v5 )
      CMergedRectBase<4>::Add((unsigned int *)this + 488, v4++);
  }
}
