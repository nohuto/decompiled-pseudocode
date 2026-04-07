/*
 * XREFs of ??_ECImageLegacyMilBrushProxy@@MEAAPEAXI@Z @ 0x18006AC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImageLegacyMilBrushProxy@@MEAA@XZ @ 0x18006ACAC (--1CImageLegacyMilBrushProxy@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CImageLegacyMilBrushProxy *__fastcall CImageLegacyMilBrushProxy::`vector deleting destructor'(
        CImageLegacyMilBrushProxy *this,
        char a2)
{
  CImageLegacyMilBrushProxy::~CImageLegacyMilBrushProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x18);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
