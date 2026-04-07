/*
 * XREFs of ??_ECMagnifierControl@@EEAAPEAXI@Z @ 0x1800C8AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CMagnifierControl@@EEAA@XZ @ 0x1800C8A00 (--1CMagnifierControl@@EEAA@XZ.c)
 */

CMagnifierControl *__fastcall CMagnifierControl::`vector deleting destructor'(CMagnifierControl *this, char a2)
{
  CMagnifierControl::~CMagnifierControl(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xC0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
