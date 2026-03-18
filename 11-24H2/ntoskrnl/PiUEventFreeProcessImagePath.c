/*
 * XREFs of PiUEventFreeProcessImagePath @ 0x140ABC988
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x1406F77B4 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14085B370 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x14085B5E0 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x1408D2838 (PiUEventNotifyClient.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
