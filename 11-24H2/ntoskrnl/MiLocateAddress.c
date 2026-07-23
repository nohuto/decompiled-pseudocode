/*
 * XREFs of MiLocateAddress @ 0x140344F70
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x140202774 (MiCaptureWriteWatchDirtyBit.c)
 *     MiReservePageFileSpace @ 0x140202948 (MiReservePageFileSpace.c)
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiLockStealUserVm @ 0x14025539C (MiLockStealUserVm.c)
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiObtainReferencedSecureVad @ 0x140292568 (MiObtainReferencedSecureVad.c)
 *     MiStoreGetVadForAddress @ 0x1402F5754 (MiStoreGetVadForAddress.c)
 *     MiSharedVaToPartition @ 0x140307460 (MiSharedVaToPartition.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiResolvePrivateZeroFault @ 0x1403087F0 (MiResolvePrivateZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiComputeFaultNode @ 0x140343670 (MiComputeFaultNode.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiVadSupportsCombine @ 0x140344CB0 (MiVadSupportsCombine.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiImagePageOk @ 0x140349970 (MiImagePageOk.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MmOutSwapVirtualAddresses @ 0x1403C64C8 (MmOutSwapVirtualAddresses.c)
 *     MiFindPlaceholderVadToReplace @ 0x1403C6CE0 (MiFindPlaceholderVadToReplace.c)
 *     MiDeleteEmptyPageTables @ 0x1403C7ED4 (MiDeleteEmptyPageTables.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiUpdatePrefetchPriority @ 0x1403DCA60 (MiUpdatePrefetchPriority.c)
 *     MiProcessCommitIntact @ 0x1403FC8C0 (MiProcessCommitIntact.c)
 *     MiComputeMaximumFaultCluster @ 0x140406D50 (MiComputeMaximumFaultCluster.c)
 *     MiCanGrantExecute @ 0x14049E378 (MiCanGrantExecute.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 *     MmCheckForSafeExecution @ 0x1407F6AC0 (MmCheckForSafeExecution.c)
 *     MiUnlockVadRange @ 0x1408D9210 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D92F0 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408DA56C (MiCoalescePlaceholderAllocations.c)
 *     MiMapChildLargePageVads @ 0x140AAFFF4 (MiMapChildLargePageVads.c)
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
