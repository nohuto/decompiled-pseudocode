/*
 * XREFs of ??_GCImage@@EEAAPEAXI@Z @ 0x180078720
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImage@@EEAA@XZ @ 0x18007876C (--1CImage@@EEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CImage *__fastcall CImage::`scalar deleting destructor'(CImage *this, char a2)
{
  CImage::~CImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x100);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
