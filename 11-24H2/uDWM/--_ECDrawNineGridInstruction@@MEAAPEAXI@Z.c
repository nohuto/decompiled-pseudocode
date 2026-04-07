/*
 * XREFs of ??_ECDrawNineGridInstruction@@MEAAPEAXI@Z @ 0x180070050
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawNineGridInstruction@@MEAA@XZ @ 0x18007009C (--1CDrawNineGridInstruction@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CDrawNineGridInstruction *__fastcall CDrawNineGridInstruction::`vector deleting destructor'(
        CDrawNineGridInstruction *this,
        char a2)
{
  CDrawNineGridInstruction::~CDrawNineGridInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x80);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
