/*
 * XREFs of ??_GCDisplayDuplicateToExtendAnimatedVisual@@MEAAPEAXI@Z @ 0x1800BE500
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ @ 0x1800BE40C (--1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayDuplicateToExtendAnimatedVisual *__fastcall CDisplayDuplicateToExtendAnimatedVisual::`scalar deleting destructor'(
        CDisplayDuplicateToExtendAnimatedVisual *this,
        char a2)
{
  CDisplayDuplicateToExtendAnimatedVisual::~CDisplayDuplicateToExtendAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1F0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
