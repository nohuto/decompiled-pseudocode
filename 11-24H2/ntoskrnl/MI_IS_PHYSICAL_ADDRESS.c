/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x140293050
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiProbeLockFrame @ 0x140238050 (MiProbeLockFrame.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MiMappingHasIoReferences @ 0x140292CEC (MiMappingHasIoReferences.c)
 *     MiGetPhysicalAddress @ 0x140292DD0 (MiGetPhysicalAddress.c)
 *     MiClearMappingAndDereferenceIoSpace @ 0x14029E560 (MiClearMappingAndDereferenceIoSpace.c)
 *     MmProtectMdlSystemAddress @ 0x1404063A0 (MmProtectMdlSystemAddress.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MmSetPageProtection @ 0x1404D0140 (MmSetPageProtection.c)
 *     MmProtectDriverSection @ 0x14066C990 (MmProtectDriverSection.c)
 *     MiReplaceImportEntry @ 0x14066D2FC (MiReplaceImportEntry.c)
 *     MiPfnRangeIsZero @ 0x14066F480 (MiPfnRangeIsZero.c)
 *     MiAddTriageDumpPtes @ 0x1406785C8 (MiAddTriageDumpPtes.c)
 *     MiDbgReleaseAddress @ 0x1406802C0 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140680874 (MiDbgWriteCheck.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiBackSystemImageWithPagefile @ 0x1407E8184 (MiBackSystemImageWithPagefile.c)
 *     MiImagePagable @ 0x1407E8340 (MiImagePagable.c)
 *     MiPrepareDriverPatchState @ 0x1407E83FC (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F19B8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiInitializeShadowPageTable @ 0x1407F6B9C (MiInitializeShadowPageTable.c)
 *     MmAllocateIsrStack @ 0x1407F72DC (MmAllocateIsrStack.c)
 *     MmResetDriverPaging @ 0x140A33220 (MmResetDriverPaging.c)
 *     MiHandleDriverNonPagedSections @ 0x140A33318 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x140A334E4 (MiDisablePagingOfDriver.c)
 *     MiFreeDriverInitialization @ 0x140A33590 (MiFreeDriverInitialization.c)
 *     MmPageEntireDriver @ 0x140A34020 (MmPageEntireDriver.c)
 *     MmLockPagableSectionByHandle @ 0x140A35770 (MmLockPagableSectionByHandle.c)
 *     MmChangeImageProtection @ 0x140A3BAE0 (MmChangeImageProtection.c)
 *     MmLockPagableDataSection @ 0x140A54770 (MmLockPagableDataSection.c)
 *     MiUpdateForkMaps @ 0x140A5F5F0 (MiUpdateForkMaps.c)
 *     MiUnlockDriverCode @ 0x140A8472C (MiUnlockDriverCode.c)
 *     MiProtectSystemImage @ 0x140A8D1E8 (MiProtectSystemImage.c)
 *     MiFreeInitializationCode @ 0x140AE80CC (MiFreeInitializationCode.c)
 *     MiProtectKernelCfgData @ 0x140C50C60 (MiProtectKernelCfgData.c)
 *     MiInitializeDriverPtes @ 0x140C52C28 (MiInitializeDriverPtes.c)
 *     MiInitializeNonPagedPool @ 0x140C55E34 (MiInitializeNonPagedPool.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140C57640 (MiApplyImportOptimizationToBootDriver.c)
 *     MiCheckLargePageOk @ 0x140C57D14 (MiCheckLargePageOk.c)
 *     MiHandleBootImage @ 0x140C5D020 (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140C5D2DC (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeSystemImageRegion @ 0x140C5D828 (MiInitializeSystemImageRegion.c)
 *     MiReloadBootLoadedDrivers @ 0x140C5DBC4 (MiReloadBootLoadedDrivers.c)
 *     MmDiscardDriverSection @ 0x140C5E090 (MmDiscardDriverSection.c)
 *     MiFreeBootDriverPages @ 0x140C68CE8 (MiFreeBootDriverPages.c)
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
