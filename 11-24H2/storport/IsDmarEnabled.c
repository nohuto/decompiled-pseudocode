/*
 * XREFs of IsDmarEnabled @ 0x140011E00
 * Callers:
 *     RaFreeRaidResources @ 0x140010D60 (RaFreeRaidResources.c)
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     StorPortGetPhysicalAddress @ 0x140011890 (StorPortGetPhysicalAddress.c)
 *     NvmeAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1400130A8 (NvmeAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     StorAllocateContiguousIoResourcesWithPreferredNode @ 0x140021D94 (StorAllocateContiguousIoResourcesWithPreferredNode.c)
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 *     NvmeFreeContiguousMemorySpecifyCacheEx @ 0x140055D98 (NvmeFreeContiguousMemorySpecifyCacheEx.c)
 *     NVMeAllocateContiguousIoResources @ 0x1400875F0 (NVMeAllocateContiguousIoResources.c)
 *     NVMeFreeContiguousIoResources @ 0x14008770C (NVMeFreeContiguousIoResources.c)
 *     NvmeAllocateContiguousMemoryWithPreferredNode @ 0x140087984 (NvmeAllocateContiguousMemoryWithPreferredNode.c)
 *     NvmeFreeContiguousMemory @ 0x140087FC4 (NvmeFreeContiguousMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDmarEnabled(__int64 a1)
{
  if ( *(_DWORD *)a1 == 1094997074 )
    return *(_BYTE *)(a1 + 888) && *(_DWORD *)(a1 + 908) == 3;
  return *(_DWORD *)a1 == 1314275652 && *(_BYTE *)(a1 + 1152) && *(_DWORD *)(a1 + 1172) == 3;
}
