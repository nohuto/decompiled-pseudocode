/*
 * XREFs of NvmeAdapterStopFabricControllerNamespaces @ 0x1400E87D8
 * Callers:
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400E884C (NvmeAdapterStopFabricNvmeControllerOperations.c)
 * Callees:
 *     NvmeAdapterRemoveNvmeControllerFromList @ 0x1400D68C8 (NvmeAdapterRemoveNvmeControllerFromList.c)
 *     NvmeNamespaceProcessQueueRequests @ 0x140107114 (NvmeNamespaceProcessQueueRequests.c)
 */

__int64 __fastcall NvmeAdapterStopFabricControllerNamespaces(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rdi
  __int64 *i; // rbx

  result = *(unsigned int *)(a1 + 136);
  if ( (result & 0x200) != 0 )
  {
    NvmeAdapterRemoveNvmeControllerFromList(*(_QWORD *)(a1 + 128), a1);
    *(_QWORD *)(a1 + 136) &= ~0x200uLL;
    v3 = (__int64 *)(a1 + 640);
    for ( result = *v3; (__int64 *)result != v3; result = *(_QWORD *)result )
      *(_QWORD *)(result + 88) &= ~2uLL;
    for ( i = (__int64 *)*v3; i != v3; i = (__int64 *)*i )
      result = NvmeNamespaceProcessQueueRequests(i - 3);
  }
  return result;
}
