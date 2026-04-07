/*
 * XREFs of ??_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z @ 0x180066E20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemBackdropVisual@@UEAA@XZ @ 0x180066E6C (--1CSystemBackdropVisual@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CMicaSystemBackdropVisual *__fastcall CMicaSystemBackdropVisual::`vector deleting destructor'(
        CMicaSystemBackdropVisual *this,
        char a2)
{
  CSystemBackdropVisual::~CSystemBackdropVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xD0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
