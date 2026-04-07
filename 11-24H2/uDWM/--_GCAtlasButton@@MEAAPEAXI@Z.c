/*
 * XREFs of ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x18006F4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasButton@@MEAA@XZ @ 0x18006F52C (--1CAtlasButton@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CAtlasButton *__fastcall CAtlasButton::`scalar deleting destructor'(CAtlasButton *this, char a2)
{
  CAtlasButton::~CAtlasButton(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x98);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
