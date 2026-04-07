/*
 * XREFs of ?OnDestinationClientRectChanged@CThumbnailVisual@@QEAAXXZ @ 0x180086BD4
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180052B98 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180052CAC (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CThumbnailVisual::OnDestinationClientRectChanged(CThumbnailVisual *this)
{
  CThumbnailVisual::SetDirtyFlags(this, 4096);
}
