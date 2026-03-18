/*
 * XREFs of GetIoQueueList_ProcessQueueListEntry @ 0x14001B044
 * Callers:
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x14001AF6C (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x14001C068 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

void __fastcall GetIoQueueList_ProcessQueueListEntry(_LIST_ENTRY *QueueLE, _SINGLE_LIST_ENTRY *SListHead, void *a3)
{
  _LIST_ENTRY *Next; // rax
  unsigned int RefCount; // edx
  _LIST_ENTRY *Blink; // rcx

  if ( LODWORD(QueueLE[1].Flink) == 1 )
  {
    Next = (_LIST_ENTRY *)SListHead->Next;
    SListHead->Next = (_SINGLE_LIST_ENTRY *)&QueueLE[1].Blink;
    QueueLE[1].Blink = Next;
    RefCount = _InterlockedIncrement((volatile signed __int32 *)&QueueLE[-56].Flink + 1);
    if ( SLOBYTE(QueueLE[-55].Flink) < 0 )
    {
      Blink = QueueLE[-60].Blink;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)Blink,
          (void *)0x65776F70,
          1479,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
          TagAddRef,
          RefCount);
    }
  }
}
