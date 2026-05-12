/*
 * XREFs of RaidUnitPoFxIdleComponentFromIoctl @ 0x140037038
 * Callers:
 *     RaUnitStoragePowerIdle @ 0x140036D80 (RaUnitStoragePowerIdle.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 */

void __fastcall RaidUnitPoFxIdleComponentFromIoctl(__int64 a1)
{
  __int64 v1; // rsi
  PEX_RUNDOWN_REF_CACHE_AWARE *v2; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    PoFxIdleComponent(**(_QWORD **)(a1 + 1872), 0LL, 2LL);
    ExReleaseRundownProtectionCacheAware(*v2);
  }
  if ( *(_QWORD *)(v1 + 4960) )
    RaidAdapterPoFxIdleComponent(v1, 0LL, 2LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
    ExReleaseRundownProtectionCacheAware(*v2);
}
