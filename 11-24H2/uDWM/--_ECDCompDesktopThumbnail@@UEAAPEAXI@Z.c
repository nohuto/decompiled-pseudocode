/*
 * XREFs of ??_ECDCompDesktopThumbnail@@UEAAPEAXI@Z @ 0x180085CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x180096E70 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 */

CDCompDesktopThumbnail *__fastcall CDCompDesktopThumbnail::`vector deleting destructor'(
        CDCompDesktopThumbnail *this,
        char a2)
{
  CDesktopThumbnailBase::~CDesktopThumbnailBase(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xF8);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
