/*
 * XREFs of NvmeNamespaceIdleCondition @ 0x140133700
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 */

void __fastcall NvmeNamespaceIdleCondition(__int64 a1, unsigned int a2)
{
  if ( NvmeNamespaceCheckAndAcquirePoFx(a1) )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 64LL) = 0;
    PoFxCompleteIdleCondition(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), a2);
    NvmeNamespaceReleasePoFx(a1);
  }
}
