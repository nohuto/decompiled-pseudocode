/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x1408EBDE4
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140739C28 (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchRequestPerform @ 0x1408EAE18 (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x1408EBF40 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset_0((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
