/*
 * XREFs of RaidReleaseAdapterRemoveLock @ 0x140035D48
 * Callers:
 *     RaWmiDispatchIrp @ 0x1401B9E0C (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleaseAdapterRemoveLock(__int64 a1)
{
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
}
