/*
 * XREFs of NvmeControllerFreeExtendedCommand @ 0x1401293D8
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeControllerDeleteAERExtendedCommandPool @ 0x1400EC8D0 (NvmeControllerDeleteAERExtendedCommandPool.c)
 *     NvmeControllerCreateNvmeNamespace @ 0x1400FAA24 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x1400FB03C (NvmeControllerDeleteNvmeNamespace.c)
 *     NvmeControllerAllocateExtendedCommand @ 0x1401290D8 (NvmeControllerAllocateExtendedCommand.c)
 *     NvmeControllerDeleteExtendedCommandsInZombieList @ 0x1401292B4 (NvmeControllerDeleteExtendedCommandsInZombieList.c)
 *     NvmeControllerFreePendingZombieCommands @ 0x140129454 (NvmeControllerFreePendingZombieCommands.c)
 * Callees:
 *     NvmeFreeContiguousMemory @ 0x140087FC4 (NvmeFreeContiguousMemory.c)
 */

void __fastcall NvmeControllerFreeExtendedCommand(__int64 a1, _QWORD *a2)
{
  void *v4; // rcx

  if ( a2 )
  {
    v4 = (void *)a2[7];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x52436152u);
      a2[7] = 0LL;
    }
    if ( *a2 )
    {
      NvmeFreeContiguousMemory(*(_QWORD *)(a1 + 128));
      *a2 = 0LL;
    }
    ExFreePoolWithTag(a2, 0x52436152u);
  }
}
