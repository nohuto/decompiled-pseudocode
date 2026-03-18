/*
 * XREFs of IoUpdateDumpPhysicalRanges @ 0x140592538
 * Callers:
 *     MiRemovePhysicalMemoryBatchComplete @ 0x14066E884 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiAddPhysicalMemoryChunks @ 0x1407E8944 (MiAddPhysicalMemoryChunks.c)
 *     MiRemovePhysicalMemory @ 0x1407E9DAC (MiRemovePhysicalMemory.c)
 *     MiHotAddPartitionMemory @ 0x1407FC284 (MiHotAddPartitionMemory.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     IopConstructInMemoryDumpHeader @ 0x140593950 (IopConstructInMemoryDumpHeader.c)
 *     IopGetPhysicalMemoryBlock @ 0x14059473C (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IoUpdateDumpPhysicalRanges()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rdx
  __int64 PhysicalMemoryBlock; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CrashdmpImageEntry && CrashdmpInitialized == 1 && ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
  {
    PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
    if ( PhysicalMemoryBlock )
      guard_dispatch_icall_no_overrides(PhysicalMemoryBlock, v1, v3, v4);
    ExReleaseResourceLite(&IopCrashDumpLock);
  }
  if ( OfflineDumpEnabled )
    IopConstructInMemoryDumpHeader();
  return KeLeaveCriticalRegionThread();
}
