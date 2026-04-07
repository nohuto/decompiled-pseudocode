/*
 * XREFs of ??_GCDWriteText@@UEAAPEAXI@Z @ 0x1800620F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDWriteText@@UEAA@XZ @ 0x18006213C (--1CDWriteText@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CDWriteText *__fastcall CDWriteText::`scalar deleting destructor'(CDWriteText *this, char a2)
{
  CDWriteText::~CDWriteText(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1B0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
