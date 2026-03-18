/*
 * XREFs of PfpPrefetchSharedInitialize @ 0x1409528C0
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x140745C48 (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchRequestPerform @ 0x140951A08 (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x140951F40 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall PfpPrefetchSharedInitialize(__int64 a1)
{
  memset_0((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 40) = PfpPrefetchSharedConflictNotifyStart;
  KeInitializeEvent((PRKEVENT)(a1 + 88), NotificationEvent, 0);
  *(_QWORD *)(a1 + 120) = 1LL;
}
