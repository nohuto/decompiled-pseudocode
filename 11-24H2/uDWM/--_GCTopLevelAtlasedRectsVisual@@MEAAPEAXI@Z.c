/*
 * XREFs of ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x18002EF20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18002DA94 (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void **__fastcall CTopLevelAtlasedRectsVisual::`scalar deleting destructor'(void **this, char a2)
{
  *this = &CTopLevelAtlasedRectsVisual::`vftable';
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
