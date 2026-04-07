/*
 * XREFs of ??_ECImmersiveWindowIconic@@MEAAPEAXI@Z @ 0x1800C6710
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x1800C66C4 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 */

CImmersiveWindowIconic *__fastcall CImmersiveWindowIconic::`vector deleting destructor'(
        CImmersiveWindowIconic *this,
        char a2)
{
  CImmersiveWindowIconic::~CImmersiveWindowIconic(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x120);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
