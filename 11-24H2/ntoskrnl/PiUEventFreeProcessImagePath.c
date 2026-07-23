/*
 * XREFs of PiUEventFreeProcessImagePath @ 0x140AB79A8
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x1406F57B4 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1408570E0 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x140857350 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x1408D0228 (PiUEventNotifyClient.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
