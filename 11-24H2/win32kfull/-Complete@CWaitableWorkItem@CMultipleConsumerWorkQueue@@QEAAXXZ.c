/*
 * XREFs of ?Complete@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1400B368C
 * Callers:
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1400B339C (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMultipleConsumerWorkQueue::CWaitableWorkItem::Complete(
        CMultipleConsumerWorkQueue::CWaitableWorkItem *this)
{
  *((_DWORD *)this + 2) = 3;
  KeSetEvent(**(PRKEVENT **)(*((_QWORD *)this + 5) + 8LL), 1, 0);
}
