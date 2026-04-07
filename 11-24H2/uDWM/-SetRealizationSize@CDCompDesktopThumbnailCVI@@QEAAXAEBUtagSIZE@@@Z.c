/*
 * XREFs of ?SetRealizationSize@CDCompDesktopThumbnailCVI@@QEAAXAEBUtagSIZE@@@Z @ 0x1800BC468
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180060D60 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDCompDesktopThumbnailCVI::SetRealizationSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  this[8] = *a2;
}
