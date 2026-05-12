/*
 * XREFs of NvmeNamespaceWaitForRemoveLock @ 0x1401154E0
 * Callers:
 *     NvmeNamespaceDeleteDeviceIrp @ 0x1400FD7E8 (NvmeNamespaceDeleteDeviceIrp.c)
 *     NvmeNamespaceDisableDeviceIrp @ 0x1400FE41C (NvmeNamespaceDisableDeviceIrp.c)
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401B1928 (NvmeNamespaceSurpriseRemovalIrp.c)
 * Callees:
 *     StorEtwNvmeNamespaceEvent @ 0x1400A9A30 (StorEtwNvmeNamespaceEvent.c)
 *     NvmeNamespaceWaitForOutstandingIoComplete @ 0x1401152E0 (NvmeNamespaceWaitForOutstandingIoComplete.c)
 */

__int64 __fastcall NvmeNamespaceWaitForRemoveLock(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx

  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 968LL) & 1) == 0 )
    return 0LL;
  v2 = 2;
  if ( *(_DWORD *)(a1 + 96) != 5 )
    v2 = 5;
  if ( NvmeNamespaceWaitForOutstandingIoComplete(a1, v2) )
    return 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1288LL);
  if ( v3 )
    *(_DWORD *)(v3 + 48) |= 1u;
  StorEtwNvmeNamespaceEvent(
    a1,
    1,
    3,
    (__int64)L"Namespace wait for remove lock timed out",
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0,
    (void *)&word_140150F48,
    0);
  return 3221225653LL;
}
