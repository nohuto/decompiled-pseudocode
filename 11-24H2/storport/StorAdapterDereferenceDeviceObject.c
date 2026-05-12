/*
 * XREFs of StorAdapterDereferenceDeviceObject @ 0x1400669B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorAdapterDereferenceDeviceObject(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 64) + 336LL));
  return 0LL;
}
