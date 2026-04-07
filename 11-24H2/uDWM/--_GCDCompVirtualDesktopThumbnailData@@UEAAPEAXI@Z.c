/*
 * XREFs of ??_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z @ 0x180086590
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDCompVirtualDesktopThumbnailData@@UEAA@XZ @ 0x180099AEC (--1CDCompVirtualDesktopThumbnailData@@UEAA@XZ.c)
 */

CDCompVirtualDesktopThumbnailData *__fastcall CDCompVirtualDesktopThumbnailData::`scalar deleting destructor'(
        CDCompVirtualDesktopThumbnailData *this,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CDCompVirtualDesktopThumbnailData::~CDCompVirtualDesktopThumbnailData(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
