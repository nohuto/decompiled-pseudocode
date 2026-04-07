/*
 * XREFs of ?OnSourceWindowVisualCreated@CThumbnailVisual@@QEAAXXZ @ 0x18009B2F8
 * Callers:
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001A90C (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CThumbnailVisual::OnSourceWindowVisualCreated(CThumbnailVisual *this)
{
  CThumbnailVisual::SetDirtyFlags(this, 0x2000);
}
