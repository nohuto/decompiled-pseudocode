/*
 * XREFs of ??_GCPopInstruction@@UEAAPEAXI@Z @ 0x1800731B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPopInstruction@@UEAA@XZ @ 0x1800731FC (--1CPopInstruction@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CPopInstruction *__fastcall CPopInstruction::`scalar deleting destructor'(CPopInstruction *this, char a2)
{
  CPopInstruction::~CPopInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x10);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
