/*
 * XREFs of ??_GCGlobalTimeTrackVisual@@MEAAPEAXI@Z @ 0x1800EC1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CGlobalTimeTrackVisual@@MEAA@XZ @ 0x1800EC17C (--1CGlobalTimeTrackVisual@@MEAA@XZ.c)
 */

void **__fastcall CGlobalTimeTrackVisual::`scalar deleting destructor'(void **this, char a2)
{
  CGlobalTimeTrackVisual::~CGlobalTimeTrackVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0xF8);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
