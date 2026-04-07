/*
 * XREFs of ??_ECDisplayAnimatedVisual@@MEAAPEAXI@Z @ 0x1800BCCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x1800BCBD4 (--1CDisplayAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayAnimatedVisual *__fastcall CDisplayAnimatedVisual::`vector deleting destructor'(
        CDisplayAnimatedVisual *this,
        char a2)
{
  CDisplayAnimatedVisual::~CDisplayAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x188);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
