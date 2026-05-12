/*
 * XREFs of NvmeNamespaceDereferenceDeviceObject @ 0x1400FDD70
 * Callers:
 *     <none>
 * Callees:
 *     GetNvmeNamespace @ 0x14006B1C0 (GetNvmeNamespace.c)
 */

__int64 __fastcall NvmeNamespaceDereferenceDeviceObject(__int64 a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *NvmeNamespace; // rax

  NvmeNamespace = (PEX_RUNDOWN_REF_CACHE_AWARE *)GetNvmeNamespace(a1);
  ExReleaseRundownProtectionCacheAware(NvmeNamespace[15]);
  return 0LL;
}
