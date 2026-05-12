/*
 * XREFs of NvmeNamespaceDeleteIoQueue2 @ 0x1400FDD1C
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x1400FB03C (NvmeControllerDeleteNvmeNamespace.c)
 * Callees:
 *     NvmeNamespaceFreeIoQueueResources @ 0x140103920 (NvmeNamespaceFreeIoQueueResources.c)
 */

__int64 __fastcall NvmeNamespaceDeleteIoQueue2(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax
  void *v4; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 256);
    if ( v2 )
    {
      result = NvmeNamespaceFreeIoQueueResources(v2);
      *(_QWORD *)(a1 + 256) = 0LL;
    }
    v4 = *(void **)(a1 + 264);
    if ( v4 )
    {
      result = NvmeNamespaceFreeIoQueueResources(v4);
      *(_QWORD *)(a1 + 264) = 0LL;
    }
  }
  return result;
}
