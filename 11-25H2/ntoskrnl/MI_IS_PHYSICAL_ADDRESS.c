/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190
 * Callers:
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     MiMappingHasIoReferences @ 0x1402AAABC (MiMappingHasIoReferences.c)
 *     MiGetPhysicalAddress @ 0x1402ABF00 (MiGetPhysicalAddress.c)
 *     MiProbeLockFrame @ 0x1402ACAF0 (MiProbeLockFrame.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x1403292C0 (MiClearMappingAndDereferenceIoSpace.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MmProtectMdlSystemAddress @ 0x1404107F0 (MmProtectMdlSystemAddress.c)
 *     MmSetPageProtection @ 0x1404F43C0 (MmSetPageProtection.c)
 *     MmProtectDriverSection @ 0x14065FC80 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 *     MiPfnRangeIsZero @ 0x14066276C (MiPfnRangeIsZero.c)
 *     MiAddTriageDumpPtes @ 0x14066BAA8 (MiAddTriageDumpPtes.c)
 *     MiDbgReleaseAddress @ 0x1406738A0 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140673E54 (MiDbgWriteCheck.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MiBackSystemImageWithPagefile @ 0x1407D7CFC (MiBackSystemImageWithPagefile.c)
 *     MiImagePagable @ 0x1407D7EB0 (MiImagePagable.c)
 *     MiPrepareDriverPatchState @ 0x1407D7F6C (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407E1548 (MiApplyHotPatchToLoadedDriver.c)
 *     MiInitializeShadowPageTable @ 0x1407E6598 (MiInitializeShadowPageTable.c)
 *     MmAllocateIsrStack @ 0x1407E6CD8 (MmAllocateIsrStack.c)
 *     MmResetDriverPaging @ 0x140A395F0 (MmResetDriverPaging.c)
 *     MiHandleDriverNonPagedSections @ 0x140A396E8 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x140A398B4 (MiDisablePagingOfDriver.c)
 *     MiFreeDriverInitialization @ 0x140A39960 (MiFreeDriverInitialization.c)
 *     MmPageEntireDriver @ 0x140A3A3F0 (MmPageEntireDriver.c)
 *     MmChangeImageProtection @ 0x140A41ED0 (MmChangeImageProtection.c)
 *     MmLockPagableSectionByHandle @ 0x140A4B850 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x140A5F0D0 (MmLockPagableDataSection.c)
 *     MiUpdateForkMaps @ 0x140A6EA7C (MiUpdateForkMaps.c)
 *     MiUnlockDriverCode @ 0x140A8370C (MiUnlockDriverCode.c)
 *     MiProtectSystemImage @ 0x140A8B9E8 (MiProtectSystemImage.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 *     MiProtectKernelCfgData @ 0x140C3D8A0 (MiProtectKernelCfgData.c)
 *     MiInitializeDriverPtes @ 0x140C3F868 (MiInitializeDriverPtes.c)
 *     MiInitializeNonPagedPool @ 0x140C42A74 (MiInitializeNonPagedPool.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140C441C8 (MiApplyImportOptimizationToBootDriver.c)
 *     MiCheckLargePageOk @ 0x140C448A4 (MiCheckLargePageOk.c)
 *     MiHandleBootImage @ 0x140C49B04 (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140C49DC0 (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeSystemImageRegion @ 0x140C4A30C (MiInitializeSystemImageRegion.c)
 *     MiReloadBootLoadedDrivers @ 0x140C4A6A8 (MiReloadBootLoadedDrivers.c)
 *     MmDiscardDriverSection @ 0x140C4AB80 (MmDiscardDriverSection.c)
 *     MiFreeBootDriverPages @ 0x140C54EE4 (MiFreeBootDriverPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PHYSICAL_ADDRESS(unsigned __int64 a1)
{
  unsigned int v1; // r11d
  __int64 v2; // r10
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rcx
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
      v6 = *(_QWORD *)v3;
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
              LOBYTE(v6) = v4 | 0x20;
            LOBYTE(v4) = v6 | 0x42;
            if ( (v9 & 0x42) == 0 )
              LOBYTE(v4) = v6;
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
