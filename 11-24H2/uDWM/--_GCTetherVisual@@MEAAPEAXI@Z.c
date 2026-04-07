/*
 * XREFs of ??_GCTetherVisual@@MEAAPEAXI@Z @ 0x1800D9480
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800D93B8 (--1CTetherVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CTetherVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CTetherVisual::~CTetherVisual(this);
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
