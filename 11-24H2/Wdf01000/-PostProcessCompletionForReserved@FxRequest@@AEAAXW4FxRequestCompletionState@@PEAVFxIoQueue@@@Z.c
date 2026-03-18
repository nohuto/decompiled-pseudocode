/*
 * XREFs of ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x140082D5C
 * Callers:
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x140008EFC (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1400258C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14002B800 (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxRequest::PostProcessCompletionForReserved(
        FxRequest *this,
        FxRequestCompletionState State,
        FxIoQueue *Queue)
{
  unsigned int RefCount; // edx
  _LIST_ENTRY *Blink; // rcx

  if ( State )
  {
    if ( (State & 0x80u) == 0 )
      FxIoQueue::RequestCompletedCallback(Queue, this, (unsigned __int8)Queue);
  }
  else
  {
    RefCount = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    {
      Blink = this[-1].m_OwnerListEntry2.Blink;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)Blink,
          (void *)0x706D6F43,
          960,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          RefCount);
    }
  }
  this->Release(this, (void *)1348761414, 963, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
}
