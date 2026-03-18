/*
 * XREFs of ?GetDirtyRects@CTreeDirty@@QEBA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C51F8
 * Callers:
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1800C4140 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x1800C68D4 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?SetRedrawRects@CTreeDirty@@AEAAXXZ @ 0x180272BFC (-SetRedrawRects@CTreeDirty@@AEAAXXZ.c)
 *     ?UpdateDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802DC83C (-UpdateDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CTreeDirty::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  if ( *(_BYTE *)(a1 + 2324) )
  {
    *a2 = 1LL;
    a2[1] = a1 + 2308;
    if ( a1 == -2308 )
      goto LABEL_7;
  }
  else
  {
    v2 = *(unsigned int *)(a1 + 16);
    *a2 = v2;
    a2[1] = a1 + 20;
    if ( a1 == -20 && v2 )
LABEL_7:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  }
  return a2;
}
