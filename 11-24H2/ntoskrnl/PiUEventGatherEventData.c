/*
 * XREFs of PiUEventGatherEventData @ 0x140724AE8
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x1406F77B4 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14085B370 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x14085B5E0 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x1408D2838 (PiUEventNotifyClient.c)
 *     PiUEventNotifyUserMode @ 0x1409EEFC4 (PiUEventNotifyUserMode.c)
 * Callees:
 *     PnpExtractCategorySpecificEventData @ 0x140A579CC (PnpExtractCategorySpecificEventData.c)
 */

__int64 __fastcall PiUEventGatherEventData(__int64 a1, const WCHAR **a2, __int64 a3, __int64 a4)
{
  const WCHAR *v4; // r10

  v4 = &word_140AEA890;
  if ( *(_QWORD *)(a1 + 64) )
    v4 = *(const WCHAR **)(a1 + 64);
  *a2 = v4;
  return PnpExtractCategorySpecificEventData(a1 + 80, a3, a4);
}
