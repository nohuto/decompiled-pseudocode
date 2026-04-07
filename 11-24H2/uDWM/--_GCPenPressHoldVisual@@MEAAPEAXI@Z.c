/*
 * XREFs of ??_GCPenPressHoldVisual@@MEAAPEAXI@Z @ 0x1800C9F70
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x1800C9ED4 (--1CPenPressHoldVisual@@MEAA@XZ.c)
 */

void **__fastcall CPenPressHoldVisual::`scalar deleting destructor'(void **this, char a2)
{
  CPenPressHoldVisual::~CPenPressHoldVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x148);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
