/*
 * XREFs of ??_ECDrawVisualTreeInstruction@@EEAAPEAXI@Z @ 0x180073830
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawVisualTreeInstruction@@EEAA@XZ @ 0x18007387C (--1CDrawVisualTreeInstruction@@EEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CDrawVisualTreeInstruction *__fastcall CDrawVisualTreeInstruction::`vector deleting destructor'(
        CDrawVisualTreeInstruction *this,
        char a2)
{
  CDrawVisualTreeInstruction::~CDrawVisualTreeInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x18);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
