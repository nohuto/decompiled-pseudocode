/*
 * XREFs of ??_GCDrawTileImageInstruction@@EEAAPEAXI@Z @ 0x1800702D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawTileImageInstruction@@EEAA@XZ @ 0x18007031C (--1CDrawTileImageInstruction@@EEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CDrawTileImageInstruction *__fastcall CDrawTileImageInstruction::`scalar deleting destructor'(
        CDrawTileImageInstruction *this,
        char a2)
{
  CDrawTileImageInstruction::~CDrawTileImageInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x38);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
