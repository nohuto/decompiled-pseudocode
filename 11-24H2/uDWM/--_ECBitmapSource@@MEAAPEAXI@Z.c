/*
 * XREFs of ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x180025210
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmapSource@@MEAA@XZ @ 0x18002525C (--1CBitmapSource@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CBitmapSource *__fastcall CBitmapSource::`vector deleting destructor'(CBitmapSource *this, char a2)
{
  CBitmapSource::~CBitmapSource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x68);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
