/*
 * XREFs of ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1400416EC
 * Callers:
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x140041790 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 *     ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x14006BBA0 (-GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxIoTarget::GetSentRequestsListLocked(
        FxIoTarget *this,
        _SINGLE_LIST_ENTRY *RequestListHead,
        _LIST_ENTRY *SendList,
        bool *AddedToList)
{
  _LIST_ENTRY *Blink; // rbx
  unsigned int RefCount; // edx
  FxTagTracker *v8; // rcx

  Blink = SendList->Blink;
  for ( *AddedToList = SendList->Flink != SendList; Blink != SendList; Blink = Blink->Blink )
  {
    RefCount = _InterlockedIncrement((volatile signed __int32 *)&Blink[-7].Flink + 1);
    if ( SLOBYTE(Blink[-6].Flink) < 0 )
    {
      v8 = (FxTagTracker *)Blink[-11].Blink;
      if ( v8 )
        FxTagTracker::UpdateTagHistory(
          v8,
          (void *)0x6C636E43,
          608,
          "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
          TagAddRef,
          RefCount);
    }
    Blink[1].Blink = (_LIST_ENTRY *)RequestListHead->Next;
    RequestListHead->Next = (_SINGLE_LIST_ENTRY *)&Blink[1].Blink;
  }
}
