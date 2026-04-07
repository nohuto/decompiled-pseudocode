/*
 * XREFs of ??_GCPenBarrelKeyVisual@@MEAAPEAXI@Z @ 0x180085CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x180098388 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 */

CPenBarrelKeyVisual *__fastcall CPenBarrelKeyVisual::`scalar deleting destructor'(CPenBarrelKeyVisual *this, char a2)
{
  CPenBarrelKeyVisual::~CPenBarrelKeyVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x130);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
