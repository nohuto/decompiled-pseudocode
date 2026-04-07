/*
 * XREFs of ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800DC460
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTouchVisual@@MEAA@XZ @ 0x180086E10 (--1CTouchVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void **__fastcall CTouchVisual::`scalar deleting destructor'(void **this, char a2)
{
  CTouchVisual::~CTouchVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x100);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
