/*
 * XREFs of ??_ECSolidRectangleInstruction@@EEAAPEAXI@Z @ 0x180075980
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSolidRectangleInstruction@@EEAA@XZ @ 0x1800759CC (--1CSolidRectangleInstruction@@EEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CSolidRectangleInstruction *__fastcall CSolidRectangleInstruction::`vector deleting destructor'(
        CSolidRectangleInstruction *this,
        char a2)
{
  CSolidRectangleInstruction::~CSolidRectangleInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x30);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
