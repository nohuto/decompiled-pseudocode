/*
 * XREFs of ??_GCDCompDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x1800EC980
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x1800BBA64 (--1CDesktopThumbnailCVI@@MEAA@XZ.c)
 */

CDCompDesktopThumbnailCVI *__fastcall CDCompDesktopThumbnailCVI::`scalar deleting destructor'(
        CDCompDesktopThumbnailCVI *this,
        char a2)
{
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x48);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
