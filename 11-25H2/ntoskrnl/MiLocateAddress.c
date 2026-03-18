/*
 * XREFs of MiLocateAddress @ 0x1402B57D0
 * Callers:
 *     MiStoreGetVadForAddress @ 0x140207B58 (MiStoreGetVadForAddress.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x140233E80 (MiHandleTransitionFault.c)
 *     MiSharePages @ 0x140238650 (MiSharePages.c)
 *     MiVadSupportsCombine @ 0x140239CF4 (MiVadSupportsCombine.c)
 *     MiSharedVaToPartition @ 0x14023B3F0 (MiSharedVaToPartition.c)
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiResolvePrivateZeroFault @ 0x1402420D0 (MiResolvePrivateZeroFault.c)
 *     MiReservePageFileSpace @ 0x1402471FC (MiReservePageFileSpace.c)
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 *     MiUserFaultAllowed @ 0x14024ACD0 (MiUserFaultAllowed.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1402A3914 (MiCaptureWriteWatchDirtyBit.c)
 *     MiObtainReferencedSecureVad @ 0x1402A6B28 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiLockStealUserVm @ 0x1402C97A0 (MiLockStealUserVm.c)
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiTrimSharedPageFromViews @ 0x140321850 (MiTrimSharedPageFromViews.c)
 *     MiImagePageOk @ 0x14033B990 (MiImagePageOk.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiComputeFaultNode @ 0x14037C200 (MiComputeFaultNode.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     NtUnlockVirtualMemory @ 0x1403875B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiUpdatePrefetchPriority @ 0x1403898E0 (MiUpdatePrefetchPriority.c)
 *     MiDeleteEmptyPageTables @ 0x1403D7BA0 (MiDeleteEmptyPageTables.c)
 *     MmOutSwapVirtualAddresses @ 0x1403D8A60 (MmOutSwapVirtualAddresses.c)
 *     MiComputeMaximumFaultCluster @ 0x1403E1520 (MiComputeMaximumFaultCluster.c)
 *     MiProcessCommitIntact @ 0x1403FA380 (MiProcessCommitIntact.c)
 *     MiFindPlaceholderVadToReplace @ 0x14049EEB8 (MiFindPlaceholderVadToReplace.c)
 *     MiCanGrantExecute @ 0x1404A3608 (MiCanGrantExecute.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 *     MmCheckForSafeExecution @ 0x1407E64BC (MmCheckForSafeExecution.c)
 *     MiUnlockVadRange @ 0x1408D97C0 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408D98A0 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408F71CC (MiCoalescePlaceholderAllocations.c)
 *     MiMapChildLargePageVads @ 0x140AB0E64 (MiMapChildLargePageVads.c)
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
