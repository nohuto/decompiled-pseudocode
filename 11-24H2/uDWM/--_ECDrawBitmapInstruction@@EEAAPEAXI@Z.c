/*
 * XREFs of ??_ECDrawBitmapInstruction@@EEAAPEAXI@Z @ 0x180075A10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawBitmapInstruction@@EEAA@XZ @ 0x180075A5C (--1CDrawBitmapInstruction@@EEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CDrawBitmapInstruction *__fastcall CDrawBitmapInstruction::`vector deleting destructor'(
        CDrawBitmapInstruction *this,
        char a2)
{
  CDrawBitmapInstruction::~CDrawBitmapInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x18);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
