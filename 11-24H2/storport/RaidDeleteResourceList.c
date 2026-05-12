/*
 * XREFs of RaidDeleteResourceList @ 0x1401812E0
 * Callers:
 *     RaidDeleteAdapter @ 0x1400437A8 (RaidDeleteAdapter.c)
 *     RaidAdapterConfigureResources @ 0x140054EDC (RaidAdapterConfigureResources.c)
 *     DeleteNvmeAdapter @ 0x1400CB320 (DeleteNvmeAdapter.c)
 *     NvmeAdapterConfigureResources @ 0x1400CD914 (NvmeAdapterConfigureResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x140183020 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidDeleteResourceList(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C526152u);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x4C526152u);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
