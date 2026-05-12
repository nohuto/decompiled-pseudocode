/*
 * XREFs of NvmeAdapterAllocateContiguousIoResources @ 0x1400CCD48
 * Callers:
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D42D8 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmeAdapterAllocateControllerQueueResources @ 0x1400DE720 (NvmeAdapterAllocateControllerQueueResources.c)
 *     NvmeAdapterCreateFabricControllerQueue @ 0x1400E0A40 (NvmeAdapterCreateFabricControllerQueue.c)
 *     NvmeAdapterDeleteFabricControllerQueue @ 0x1400E0F60 (NvmeAdapterDeleteFabricControllerQueue.c)
 *     NvmeAdapterDrainFabricControllerQueue @ 0x1400E1D28 (NvmeAdapterDrainFabricControllerQueue.c)
 *     NvmeAdapterTransportDisconnectFabricControllerQueue @ 0x1400E8E70 (NvmeAdapterTransportDisconnectFabricControllerQueue.c)
 *     NvmeAdapterTransportReconnectFabricControllerQueue @ 0x1400E932C (NvmeAdapterTransportReconnectFabricControllerQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterAllocateContiguousIoResources(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = MmAllocateContiguousNodeMemory(a2, 0x100000000LL, -1LL, 0LL, 4, 0x80000000);
  if ( result )
  {
    *(_QWORD *)(result + 840) = 0LL;
    *(_QWORD *)(result + 24) = 0LL;
    *(_DWORD *)(result + 16) = a2;
  }
  return result;
}
