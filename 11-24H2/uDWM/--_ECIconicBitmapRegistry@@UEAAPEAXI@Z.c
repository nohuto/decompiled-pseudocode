/*
 * XREFs of ??_ECIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800B87E0
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B84E0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CIconicBitmapRegistry@@UEAA@XZ @ 0x1800C54EC (--1CIconicBitmapRegistry@@UEAA@XZ.c)
 */

CIconicBitmapRegistry *__fastcall CIconicBitmapRegistry::`vector deleting destructor'(
        CIconicBitmapRegistry *this,
        char a2)
{
  CIconicBitmapRegistry::~CIconicBitmapRegistry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x70);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
