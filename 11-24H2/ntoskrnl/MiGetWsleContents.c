/*
 * XREFs of MiGetWsleContents @ 0x1402E5390
 * Callers:
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140232BB8 (MiSetReadOnlyOnSectionView.c)
 *     MiPteForTrimmedProto @ 0x140232FE4 (MiPteForTrimmedProto.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiDecommitAddToList @ 0x1402889A0 (MiDecommitAddToList.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiUnlockWsle @ 0x1402C7B94 (MiUnlockWsle.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiCombineWithExisting @ 0x1402F92E0 (MiCombineWithExisting.c)
 *     MiCrcStillIntact @ 0x1402FA610 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiOutSwapWorkingSetPte @ 0x140302690 (MiOutSwapWorkingSetPte.c)
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiProcessVpabAccessedInfo @ 0x1403AAE48 (MiProcessVpabAccessedInfo.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiMakeDriverPageStayResident @ 0x1404373EC (MiMakeDriverPageStayResident.c)
 *     MiConvertAndFlushWsleVas @ 0x140486DF0 (MiConvertAndFlushWsleVas.c)
 *     MiMakeVaRangeNoAccess @ 0x140498B94 (MiMakeVaRangeNoAccess.c)
 *     MiSetPagingOfDriver @ 0x14049CBA8 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404F2870 (MiClearDriverTablePtes.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetWsleContents(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v9; // rdx

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v4 = *(_QWORD *)v2;
    if ( (v3 & 1) != 0 && ((v3 & 0x42) == 0 || (v3 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v9 = *(_QWORD *)(KernelWaitTime + 8 * ((v2 >> 3) & 0x1FF));
          if ( (v9 & 0x20) != 0 )
            v4 = v3 | 0x20;
          v3 = v4 | 0x42;
          if ( (v9 & 0x42) == 0 )
            v3 = v4;
        }
      }
    }
  }
  v5 = v3;
  result = HIBYTE(v3);
  LOBYTE(result) = (16 * ((v5 >> 60) & 7)) | result & 0xF;
  return result;
}
