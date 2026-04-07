/*
 * XREFs of ??_ECContactStationaryVisual@@MEAAPEAXI@Z @ 0x180012B00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x180012DB0 (--1CContactStationaryVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CContactStationaryVisual *__fastcall CContactStationaryVisual::`vector deleting destructor'(
        CContactStationaryVisual *this,
        char a2)
{
  CContactStationaryVisual::~CContactStationaryVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x180);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
