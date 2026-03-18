/*
 * XREFs of MiLocateAddress @ 0x1402FC070
 * Callers:
 *     MiSharedVaToPartition @ 0x140214100 (MiSharedVaToPartition.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiHandleTransitionFault @ 0x14021B1A0 (MiHandleTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiLockStealUserVm @ 0x140227A3C (MiLockStealUserVm.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiObtainReferencedSecureVad @ 0x140262864 (MiObtainReferencedSecureVad.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiImagePageOk @ 0x1402E8330 (MiImagePageOk.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiInitializeReadInProgressPfn @ 0x1402EF9B8 (MiInitializeReadInProgressPfn.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiComputeFaultNode @ 0x1402FA290 (MiComputeFaultNode.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiVadSupportsCombine @ 0x1402FBB08 (MiVadSupportsCombine.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MiResolvePrivateZeroFault @ 0x1402FE070 (MiResolvePrivateZeroFault.c)
 *     MiReservePageFileSpace @ 0x140368314 (MiReservePageFileSpace.c)
 *     MiStoreGetVadForAddress @ 0x14039788C (MiStoreGetVadForAddress.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiUpdatePrefetchPriority @ 0x1403FE3E8 (MiUpdatePrefetchPriority.c)
 *     MiProcessCommitIntact @ 0x140402340 (MiProcessCommitIntact.c)
 *     MmOutSwapVirtualAddresses @ 0x140404108 (MmOutSwapVirtualAddresses.c)
 *     MiDeleteEmptyPageTables @ 0x140405978 (MiDeleteEmptyPageTables.c)
 *     MiComputeMaximumFaultCluster @ 0x14040EB50 (MiComputeMaximumFaultCluster.c)
 *     MiFindPlaceholderVadToReplace @ 0x140497E8C (MiFindPlaceholderVadToReplace.c)
 *     MiCanGrantExecute @ 0x1404A3418 (MiCanGrantExecute.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 *     MmCheckForSafeExecution @ 0x1407F634C (MmCheckForSafeExecution.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DC33C (MiCoalescePlaceholderAllocations.c)
 *     MiUnlockVadRange @ 0x1408E8A30 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 *     MiMapChildLargePageVads @ 0x140AB5D2C (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // r10
  struct _LIST_ENTRY *result; // rax
  unsigned __int64 v3; // r9

  Process = KeGetCurrentThread()->ApcState.Process;
  result = Process[3].Header.WaitListHead.Flink;
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (LODWORD(result[1].Blink) | ((unsigned __int64)LOBYTE(result[2].Flink) << 32))
    || v3 > (HIDWORD(result[1].Blink) | ((unsigned __int64)BYTE1(result[2].Flink) << 32)) )
  {
    result = *(struct _LIST_ENTRY **)&Process[3].Header.Lock;
    if ( result )
    {
      do
      {
        if ( v3 > (HIDWORD(result[1].Blink) | ((unsigned __int64)BYTE1(result[2].Flink) << 32)) )
        {
          result = result->Blink;
        }
        else
        {
          if ( v3 >= (LODWORD(result[1].Blink) | ((unsigned __int64)LOBYTE(result[2].Flink) << 32)) )
            break;
          result = result->Flink;
        }
      }
      while ( result );
      if ( result )
      {
        Process[3].Header.WaitListHead.Flink = result;
        return result;
      }
    }
    return 0LL;
  }
  return result;
}
