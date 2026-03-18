/*
 * XREFs of PfSnPrefetchCacheCtxInitialize @ 0x14073B728
 * Callers:
 *     PfSnInitializePrefetcher @ 0x140C1B9DC (PfSnInitializePrefetcher.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402D6540 (ExInitializeResourceLite.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

NTSTATUS __fastcall PfSnPrefetchCacheCtxInitialize(__int64 a1)
{
  memset_0((void *)a1, 0, 0x90uLL);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  return ExInitializeResourceLite((PERESOURCE)(a1 + 40));
}
