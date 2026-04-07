/*
 * XREFs of ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x1800CA3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CPressTapVisual@@MEAA@XZ @ 0x1800CA38C (--1CPressTapVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CPressTapVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CPressTapVisual::~CPressTapVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x170);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
