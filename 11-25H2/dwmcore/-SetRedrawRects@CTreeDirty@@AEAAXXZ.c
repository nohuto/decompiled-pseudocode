/*
 * XREFs of ?SetRedrawRects@CTreeDirty@@AEAAXXZ @ 0x180272BFC
 * Callers:
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x180096CC0 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?Optimize@CTreeDirty@@QEAAXXZ @ 0x180097060 (-Optimize@CTreeDirty@@QEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x180098EA0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ?GetDirtyRects@CTreeDirty@@QEBA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C51F8 (-GetDirtyRects@CTreeDirty@@QEBA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

void __fastcall CTreeDirty::SetRedrawRects(CTreeDirty *this)
{
  int v2; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 2326) )
  {
    CTreeDirty::GetDirtyRects((__int64)this, v3);
    v2 = v3[0];
    memcpy_0((char *)this + 2176, (const void *)v3[1], 16LL * v3[0]);
    *((_DWORD *)this + 576) = v2;
    *((_BYTE *)this + 2326) = 1;
  }
}
