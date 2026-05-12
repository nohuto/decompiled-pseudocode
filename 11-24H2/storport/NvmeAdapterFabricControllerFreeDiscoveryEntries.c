/*
 * XREFs of NvmeAdapterFabricControllerFreeDiscoveryEntries @ 0x1400E244C
 * Callers:
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400DEF90 (NvmeAdapterCleanupFabricNvmeController.c)
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400E4750 (NvmeAdapterNvmeControllerBackgroundWork.c)
 *     NvmeAdapterPerformFabricControllerDiscovery @ 0x1400E5B08 (NvmeAdapterPerformFabricControllerDiscovery.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterFabricControllerFreeDiscoveryEntries(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    ExFreePoolWithTag(v2, 0x52436152u);
  }
}
