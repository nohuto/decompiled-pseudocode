/*
 * XREFs of RaidUnitCancelWaitWakeIrp @ 0x14003D350
 * Callers:
 *     StorPortUnitPoFxD0Completion @ 0x140008588 (StorPortUnitPoFxD0Completion.c)
 *     StorPortUnitPoFxD3Completion @ 0x1400414E0 (StorPortUnitPoFxD3Completion.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007705C (RaUnitDeregisterFromIdleDetection.c)
 *     StorPortUnitDirectedPowerDownCompletion @ 0x14007A190 (StorPortUnitDirectedPowerDownCompletion.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 */

BOOLEAN __fastcall RaidUnitCancelWaitWakeIrp(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v3 = *(IRP **)(*(_QWORD *)(a1 + 1872) + 72LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 72LL) = 0LL;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  return v2;
}
