/*
 * XREFs of MiGetWsleContents @ 0x140239750
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiOutSwapWorkingSetPte @ 0x140225A10 (MiOutSwapWorkingSetPte.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x140239824 (MiCrcStillIntact.c)
 *     MiPteForTrimmedProto @ 0x1402476D0 (MiPteForTrimmedProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiUnlockWsle @ 0x1402CC3B4 (MiUnlockWsle.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiSetReadOnlyOnSectionView @ 0x14037D0D8 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiDecommitAddToList @ 0x140382190 (MiDecommitAddToList.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiCombineWithExisting @ 0x14038A898 (MiCombineWithExisting.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiFastTrimWorkingSet @ 0x1403C4B40 (MiFastTrimWorkingSet.c)
 *     MiMakeDriverPageStayResident @ 0x1403F48C4 (MiMakeDriverPageStayResident.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiProcessVpabAccessedInfo @ 0x1404851C8 (MiProcessVpabAccessedInfo.c)
 *     MiConvertAndFlushWsleVas @ 0x14048B024 (MiConvertAndFlushWsleVas.c)
 *     MiSetPagingOfDriver @ 0x14049D9E4 (MiSetPagingOfDriver.c)
 *     MiUnmapKernelScp @ 0x14049F14C (MiUnmapKernelScp.c)
 *     MiMakeVaRangeNoAccess @ 0x1404A0378 (MiMakeVaRangeNoAccess.c)
 *     MiClearDriverTablePtes @ 0x1404EE8A0 (MiClearDriverTablePtes.c)
 *     MiPageBootRegistry @ 0x14065D9FC (MiPageBootRegistry.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetWsleContents(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 v6; // rcx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r8
  __int64 v9; // rdx

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v6 = *(_QWORD *)v2;
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
            v6 = v3 | 0x20;
          v3 = v6 | 0x42;
          if ( (v9 & 0x42) == 0 )
            v3 = v6;
        }
      }
    }
  }
  v4 = v3;
  result = HIBYTE(v3);
  LOBYTE(result) = (16 * ((v4 >> 60) & 7)) | result & 0xF;
  return result;
}
