/*
 * XREFs of NvmeNamespaceActiveConditionStep1 @ 0x140132D10
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceActiveConditionStep2 @ 0x140132D40 (NvmeNamespaceActiveConditionStep2.c)
 */

void __fastcall NvmeNamespaceActiveConditionStep1(__int64 a1)
{
  if ( NvmeNamespaceCheckAndAcquirePoFx(a1) )
  {
    NvmeNamespaceActiveConditionStep2(a1);
    NvmeNamespaceReleasePoFx(a1);
  }
}
