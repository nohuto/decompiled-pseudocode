/*
 * XREFs of ??_GCDCompThumbnailData@@UEAAPEAXI@Z @ 0x18007F2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDCompThumbnailData *__fastcall CDCompThumbnailData::`scalar deleting destructor'(
        CDCompThumbnailData *this,
        const struct std::nothrow_t *a2)
{
  if ( ((unsigned __int8)a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, a2);
  return this;
}
