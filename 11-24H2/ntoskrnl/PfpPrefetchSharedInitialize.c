/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x140936270
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140743F38 (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchRequestPerform @ 0x1409353B4 (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409358F0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset_0((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
