/*
 * XREFs of ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x18007E470
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18007E4BC (--1CTouchDragVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CTouchDragVisual *__fastcall CTouchDragVisual::`scalar deleting destructor'(CTouchDragVisual *this, char a2)
{
  CTouchDragVisual::~CTouchDragVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1A8);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
