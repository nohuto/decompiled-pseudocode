/*
 * XREFs of NvmeAdapterFreeControllerIoQueues @ 0x1400E2DF4
 * Callers:
 *     NvmeAdapterAllocateControllerIoQueues @ 0x1400DE644 (NvmeAdapterAllocateControllerIoQueues.c)
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400DEF90 (NvmeAdapterCleanupFabricNvmeController.c)
 * Callees:
 *     NvmeFabricControllerQueueCleanupHostDHKey @ 0x1400F635C (NvmeFabricControllerQueueCleanupHostDHKey.c)
 */

void __fastcall NvmeAdapterFreeControllerIoQueues(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rsi

  if ( *(_QWORD *)(a1 + 728) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 20); ++i )
    {
      v3 = 192LL * i;
      if ( *(_QWORD *)(v3 + *(_QWORD *)(a1 + 728) + 96) )
      {
        NvmeFabricControllerQueueCleanupHostDHKey();
        ExFreePoolWithTag(*(PVOID *)(v3 + *(_QWORD *)(a1 + 728) + 96), 0x414E6152u);
        *(_QWORD *)(v3 + *(_QWORD *)(a1 + 728) + 96) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 728), 0x52436152u);
    *(_QWORD *)(a1 + 728) = 0LL;
  }
}
