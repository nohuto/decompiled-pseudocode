/*
 * XREFs of ??_GCDDisplayManager@@EEAAPEAXI@Z @ 0x1800B80F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDDisplayManager@@EEAA@XZ @ 0x1800B80BC (--1CDDisplayManager@@EEAA@XZ.c)
 */

CDDisplayManager *__fastcall CDDisplayManager::`scalar deleting destructor'(CDDisplayManager *this, char a2)
{
  CDDisplayManager::~CDDisplayManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x18);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
