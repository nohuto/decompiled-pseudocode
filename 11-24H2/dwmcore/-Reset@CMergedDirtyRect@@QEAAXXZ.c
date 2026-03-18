/*
 * XREFs of ?Reset@CMergedDirtyRect@@QEAAXXZ @ 0x1801DC32C
 * Callers:
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180039D50 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 * Callees:
 *     <none>
 */

void __fastcall CMergedDirtyRect::Reset(CMergedDirtyRect *this)
{
  bool v1; // zf

  *(_QWORD *)this = 0LL;
  v1 = *((_BYTE *)this + 176) == 0xFF;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 172) = 0;
  if ( !v1 )
    *((_BYTE *)this + 176) = 0;
  v1 = *((_BYTE *)this + 348) == 0xFF;
  *((_DWORD *)this + 45) = 0;
  *((_BYTE *)this + 344) = 0;
  if ( !v1 )
    *((_BYTE *)this + 348) = 0;
}
