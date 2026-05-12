/*
 * XREFs of NvmeAdapterReleasePoFx @ 0x1401311D4
 * Callers:
 *     NvmeAdapterActiveCondition @ 0x14012DB70 (NvmeAdapterActiveCondition.c)
 *     NvmeAdapterCancelWaitWakeIrp @ 0x14012DE9C (NvmeAdapterCancelWaitWakeIrp.c)
 *     NvmeAdapterDirectedPowerDownRequestD3 @ 0x14012E190 (NvmeAdapterDirectedPowerDownRequestD3.c)
 *     NvmeAdapterIdleCondition @ 0x14012E670 (NvmeAdapterIdleCondition.c)
 *     NvmeAdapterPerfStateCallback @ 0x14012EEC0 (NvmeAdapterPerfStateCallback.c)
 *     NvmeAdapterPoFxD0Completion @ 0x14012EF80 (NvmeAdapterPoFxD0Completion.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterReleasePoFx(__int64 a1)
{
  __int64 v1; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v2; // rcx

  v1 = *(_QWORD *)(a1 + 160);
  if ( v1 && *(_QWORD *)(v1 + 8) )
  {
    v2 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v1 + 80);
    if ( v2 )
      ExReleaseRundownProtectionCacheAware(v2);
  }
}
