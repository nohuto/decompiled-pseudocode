/*
 * XREFs of ??_ECLegacyNonClientBackground@@UEAAPEAXI@Z @ 0x1800715F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyNonClientBackground@@UEAA@XZ @ 0x18007163C (--1CLegacyNonClientBackground@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CLegacyNonClientBackground *__fastcall CLegacyNonClientBackground::`vector deleting destructor'(
        CLegacyNonClientBackground *this,
        char a2)
{
  CLegacyNonClientBackground::~CLegacyNonClientBackground(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x138);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
