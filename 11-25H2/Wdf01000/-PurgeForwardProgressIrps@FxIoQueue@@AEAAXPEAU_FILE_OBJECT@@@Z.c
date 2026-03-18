/*
 * XREFs of ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1400483B8
 * Callers:
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14001577C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1400216B8 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 * Callees:
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400483F4 (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x140048454 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 */

void __fastcall FxIoQueue::PurgeForwardProgressIrps(FxIoQueue *this, _FILE_OBJECT *FileObject)
{
  FxIoQueue *v2; // rcx
  _LIST_ENTRY cleanupList; // [rsp+20h] [rbp-18h] BYREF

  cleanupList.Blink = &cleanupList;
  cleanupList.Flink = &cleanupList;
  FxIoQueue::GetForwardProgressIrps(this, &cleanupList, FileObject);
  FxIoQueue::CancelIrps(v2, &cleanupList);
}
