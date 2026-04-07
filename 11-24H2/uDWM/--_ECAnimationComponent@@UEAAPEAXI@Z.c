/*
 * XREFs of ??_ECAnimationComponent@@UEAAPEAXI@Z @ 0x18007B900
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18007B94C (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CAnimationComponent *__fastcall CAnimationComponent::`vector deleting destructor'(CAnimationComponent *this, char a2)
{
  CAnimationComponent::~CAnimationComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xA0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
