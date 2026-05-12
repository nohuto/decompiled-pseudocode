/*
 * XREFs of NvmeAdapterFreeControllerAdminQueue @ 0x1400E2D7C
 * Callers:
 *     NvmeAdapterAllocateControllerAdminQueue @ 0x1400DE5B0 (NvmeAdapterAllocateControllerAdminQueue.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterCreateNvmeController @ 0x14019DFDC (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     NvmeFabricControllerQueueCleanupHostDHKey @ 0x1400F635C (NvmeFabricControllerQueueCleanupHostDHKey.c)
 */

void __fastcall NvmeAdapterFreeControllerAdminQueue(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 712);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 96) )
    {
      NvmeFabricControllerQueueCleanupHostDHKey();
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 712) + 96LL), 0x414E6152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 712) + 96LL) = 0LL;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 712), 0x52436152u);
    *(_QWORD *)(a1 + 712) = 0LL;
  }
}
