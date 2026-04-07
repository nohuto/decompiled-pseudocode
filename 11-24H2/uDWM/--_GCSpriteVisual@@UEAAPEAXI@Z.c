/*
 * XREFs of ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x1800C2ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x180039CE0 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CSpriteVisual *__fastcall CSpriteVisual::`scalar deleting destructor'(CSpriteVisual *this, char a2)
{
  CSpriteVisual::~CSpriteVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xA8);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
