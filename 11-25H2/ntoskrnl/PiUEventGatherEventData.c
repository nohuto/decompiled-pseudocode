/*
 * XREFs of PiUEventGatherEventData @ 0x1407189E8
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x140718B54 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventNotifyClient @ 0x1408D0318 (PiUEventNotifyClient.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140966B30 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x140966DA0 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyUserMode @ 0x14096D4D4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     PnpExtractCategorySpecificEventData @ 0x140A541DC (PnpExtractCategorySpecificEventData.c)
 */

__int64 __fastcall PiUEventGatherEventData(__int64 a1, const WCHAR **a2, __int64 a3, __int64 a4)
{
  const WCHAR *v4; // r10

  v4 = &word_140AD8570;
  if ( *(_QWORD *)(a1 + 64) )
    v4 = *(const WCHAR **)(a1 + 64);
  *a2 = v4;
  return PnpExtractCategorySpecificEventData(a1 + 80, a3, a4);
}
