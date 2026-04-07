/*
 * XREFs of ??_ECFullScreenMagnifier@@EEAAPEAXI@Z @ 0x1800C3240
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CFullScreenMagnifier@@EEAA@XZ @ 0x1800C31FC (--1CFullScreenMagnifier@@EEAA@XZ.c)
 */

CFullScreenMagnifier *__fastcall CFullScreenMagnifier::`vector deleting destructor'(
        CFullScreenMagnifier *this,
        char a2)
{
  CFullScreenMagnifier::~CFullScreenMagnifier(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x100);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
