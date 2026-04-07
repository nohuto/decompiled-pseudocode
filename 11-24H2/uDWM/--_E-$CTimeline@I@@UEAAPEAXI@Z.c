/*
 * XREFs of ??_E?$CTimeline@I@@UEAAPEAXI@Z @ 0x18006ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTimelineBase@@UEAA@XZ @ 0x18006ED8C (--1CTimelineBase@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180087E70 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CTimelineBase *__fastcall CTimeline<unsigned int>::`vector deleting destructor'(CTimelineBase *lpMem, char a2)
{
  CTimelineBase::~CTimelineBase(lpMem);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(lpMem, (const struct CSecondaryWindowRepresentation *)0x78);
    else
      DefaultHeap::Free(lpMem);
  }
  return lpMem;
}
