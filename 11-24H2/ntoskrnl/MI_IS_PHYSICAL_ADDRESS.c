/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0
 * Callers:
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MiMappingHasIoReferences @ 0x14026347C (MiMappingHasIoReferences.c)
 *     MiGetPhysicalAddress @ 0x140263560 (MiGetPhysicalAddress.c)
 *     MiProbeLockFrame @ 0x140282AC0 (MiProbeLockFrame.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14028E960 (MiClearMappingAndDereferenceIoSpace.c)
 *     MmProtectMdlSystemAddress @ 0x14040E150 (MmProtectMdlSystemAddress.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MmSetPageProtection @ 0x1404D6CF0 (MmSetPageProtection.c)
 *     MmProtectDriverSection @ 0x14066B7C0 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 *     MiPfnRangeIsZero @ 0x14066E2AC (MiPfnRangeIsZero.c)
 *     MiAddTriageDumpPtes @ 0x1406773F8 (MiAddTriageDumpPtes.c)
 *     MiDbgReleaseAddress @ 0x14067F0C0 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x14067F674 (MiDbgWriteCheck.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiBackSystemImageWithPagefile @ 0x1407E7BB4 (MiBackSystemImageWithPagefile.c)
 *     MiImagePagable @ 0x1407E7D70 (MiImagePagable.c)
 *     MiPrepareDriverPatchState @ 0x1407E7E2C (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F13E8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiInitializeShadowPageTable @ 0x1407F6428 (MiInitializeShadowPageTable.c)
 *     MmAllocateIsrStack @ 0x1407F6B68 (MmAllocateIsrStack.c)
 *     MmResetDriverPaging @ 0x140A3D910 (MmResetDriverPaging.c)
 *     MiHandleDriverNonPagedSections @ 0x140A3DA08 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x140A3DBD4 (MiDisablePagingOfDriver.c)
 *     MiFreeDriverInitialization @ 0x140A3DC80 (MiFreeDriverInitialization.c)
 *     MmPageEntireDriver @ 0x140A3E710 (MmPageEntireDriver.c)
 *     MmLockPagableSectionByHandle @ 0x140A3FE90 (MmLockPagableSectionByHandle.c)
 *     MmChangeImageProtection @ 0x140A45E20 (MmChangeImageProtection.c)
 *     MmLockPagableDataSection @ 0x140A5CF50 (MmLockPagableDataSection.c)
 *     MiUpdateForkMaps @ 0x140A6680C (MiUpdateForkMaps.c)
 *     MiUnlockDriverCode @ 0x140A8823C (MiUnlockDriverCode.c)
 *     MiProtectSystemImage @ 0x140A90AEC (MiProtectSystemImage.c)
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 *     MiProtectKernelCfgData @ 0x140C4EAD0 (MiProtectKernelCfgData.c)
 *     MiInitializeDriverPtes @ 0x140C50A98 (MiInitializeDriverPtes.c)
 *     MiInitializeNonPagedPool @ 0x140C53CA4 (MiInitializeNonPagedPool.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140C554B0 (MiApplyImportOptimizationToBootDriver.c)
 *     MiCheckLargePageOk @ 0x140C55B84 (MiCheckLargePageOk.c)
 *     MiHandleBootImage @ 0x140C5AE90 (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140C5B14C (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeSystemImageRegion @ 0x140C5B698 (MiInitializeSystemImageRegion.c)
 *     MiReloadBootLoadedDrivers @ 0x140C5BA34 (MiReloadBootLoadedDrivers.c)
 *     MmDiscardDriverSection @ 0x140C5BF00 (MmDiscardDriverSection.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PHYSICAL_ADDRESS(unsigned __int64 a1)
{
  unsigned int v1; // r11d
  __int64 v2; // r10
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-30h]
  unsigned __int64 v11; // [rsp+8h] [rbp-28h]
  unsigned __int64 v12; // [rsp+10h] [rbp-20h]
  unsigned __int64 v13; // [rsp+18h] [rbp-18h]
  __int64 v14; // [rsp+20h] [rbp-10h]

  v1 = 4;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4LL;
  while ( 1 )
  {
    v3 = *(&v10 + v2--);
    --v1;
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v5 = *(_QWORD *)v3;
      if ( (v4 & 1) == 0 )
        return 0LL;
      if ( ((v4 & 0x42) == 0 || (v4 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v9 = *(_QWORD *)(KernelWaitTime + 8 * ((v3 >> 3) & 0x1FF));
            if ( (v9 & 0x20) != 0 )
              LOBYTE(v5) = v4 | 0x20;
            LOBYTE(v4) = v5 | 0x42;
            if ( (v9 & 0x42) == 0 )
              LOBYTE(v4) = v5;
          }
        }
      }
    }
    if ( (v4 & 1) == 0 )
      return 0LL;
    if ( (v4 & 0x80u) != 0LL )
      break;
    if ( v2 == 1 )
      return 0LL;
  }
  return v1;
}
