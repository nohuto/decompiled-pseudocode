/*
 * XREFs of NvmeAdapterControllerFreeDmaBuffer @ 0x1400E0570
 * Callers:
 *     NvmeNamespaceCompleteNvmRequest @ 0x1400FC810 (NvmeNamespaceCompleteNvmRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterControllerFreeDmaBuffer(__int64 a1, unsigned int a2, void *a3)
{
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 400LL) + 184LL) & 0x2000) != 0 && a2 <= 0x1000 )
    ExFreePoolWithTag(a3, 0x52436152u);
  else
    MmFreeContiguousMemorySpecifyCache(a3, a2, MmCached);
}
