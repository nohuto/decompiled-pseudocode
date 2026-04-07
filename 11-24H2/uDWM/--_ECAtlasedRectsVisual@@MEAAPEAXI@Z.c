/*
 * XREFs of ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180078490
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18002DA94 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void **__fastcall CAtlasedRectsVisual::`vector deleting destructor'(void **this, char a2)
{
  CAtlasedRectsVisual::~CAtlasedRectsVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0xF0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
