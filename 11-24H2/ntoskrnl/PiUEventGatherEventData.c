/*
 * XREFs of PiUEventGatherEventData @ 0x140722678
 * Callers:
 *     PiUEventMovePendingEventToSynchronousQueue @ 0x1406F57B4 (PiUEventMovePendingEventToSynchronousQueue.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1408570E0 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventHandleGetEvent @ 0x140857350 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x1408D0228 (PiUEventNotifyClient.c)
 *     PiUEventNotifyUserMode @ 0x1409ECA04 (PiUEventNotifyUserMode.c)
 * Callees:
 *     PnpExtractCategorySpecificEventData @ 0x140A4F174 (PnpExtractCategorySpecificEventData.c)
 */

__int64 __fastcall PiUEventGatherEventData(__int64 a1, const WCHAR **a2, __int64 a3, __int64 a4)
{
  const WCHAR *v4; // r10

  v4 = &word_140AEDAC0;
  if ( *(_QWORD *)(a1 + 64) )
    v4 = *(const WCHAR **)(a1 + 64);
  *a2 = v4;
  return PnpExtractCategorySpecificEventData(a1 + 80, a3, a4);
}
