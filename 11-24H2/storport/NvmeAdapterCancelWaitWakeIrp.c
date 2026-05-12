/*
 * XREFs of NvmeAdapterCancelWaitWakeIrp @ 0x14012DE9C
 * Callers:
 *     NvmeAdapterDirectedPowerUpCompletion @ 0x14012E410 (NvmeAdapterDirectedPowerUpCompletion.c)
 *     NvmeAdapterPoFxD0Completion @ 0x14012EF80 (NvmeAdapterPoFxD0Completion.c)
 * Callees:
 *     NvmeAdapterCheckAndAcquirePoFx @ 0x14012DF08 (NvmeAdapterCheckAndAcquirePoFx.c)
 *     NvmeAdapterReleasePoFx @ 0x1401311D4 (NvmeAdapterReleasePoFx.c)
 */

BOOLEAN __fastcall NvmeAdapterCancelWaitWakeIrp(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( (unsigned __int8)NvmeAdapterCheckAndAcquirePoFx() )
  {
    v3 = *(IRP **)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) + 72LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) + 72LL) = 0LL;
    }
    NvmeAdapterReleasePoFx(a1);
  }
  return v2;
}
