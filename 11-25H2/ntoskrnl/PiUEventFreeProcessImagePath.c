/*
 * XREFs of PiUEventFreeProcessImagePath @ 0x140AB8808
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x140718B54 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventNotifyClient @ 0x1408D0318 (PiUEventNotifyClient.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140966B30 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x140966DA0 (PiUEventHandleGetEvent.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventFreeProcessImagePath(void **a1)
{
  wchar_t *v2; // rcx

  if ( a1 )
  {
    v2 = (wchar_t *)*a1;
    if ( v2 )
    {
      if ( v2 != L"unknown" )
      {
        ExFreePoolWithTag(v2, 0x59706E50u);
        *a1 = 0LL;
      }
    }
  }
}
