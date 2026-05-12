/*
 * XREFs of NvmeNamespaceCancelWaitWakeIrp @ 0x140132F94
 * Callers:
 *     NvmeNamespaceDeregisterFromPoFx @ 0x140133000 (NvmeNamespaceDeregisterFromPoFx.c)
 *     NvmeNamespaceDirectedPowerDownCompletion @ 0x1401331F0 (NvmeNamespaceDirectedPowerDownCompletion.c)
 *     NvmeNamespacePoFxD0Completion @ 0x140133980 (NvmeNamespacePoFxD0Completion.c)
 *     NvmeNamespacePoFxD3Completion @ 0x140133A90 (NvmeNamespacePoFxD3Completion.c)
 * Callees:
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 */

BOOLEAN __fastcall NvmeNamespaceCancelWaitWakeIrp(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( NvmeNamespaceCheckAndAcquirePoFx(a1) )
  {
    v3 = *(IRP **)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 72LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 72LL) = 0LL;
    }
    NvmeNamespaceReleasePoFx(a1);
  }
  return v2;
}
