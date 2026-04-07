/*
 * XREFs of ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x1800B8790
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B84E0 (--1CDesktopManager@@EEAA@XZ.c)
 */

CDesktopManager *__fastcall CDesktopManager::`vector deleting destructor'(
        CDesktopManager *this,
        const struct std::nothrow_t *a2)
{
  char v2; // di

  v2 = (char)a2;
  CDesktopManager::~CDesktopManager(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x520);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
