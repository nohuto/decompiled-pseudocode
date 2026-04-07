/*
 * XREFs of ??_GCIndirectTouchVisual@@MEAAPEAXI@Z @ 0x1800C6EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800C6E60 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 */

void **__fastcall CIndirectTouchVisual::`scalar deleting destructor'(void **this, char a2)
{
  CIndirectTouchVisual::~CIndirectTouchVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x180);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
