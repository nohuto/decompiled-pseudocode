/*
 * XREFs of CarReportRuleViolationFromNt @ 0x140B8D914
 * Callers:
 *     VfFailDeviceNode @ 0x1404AB270 (VfFailDeviceNode.c)
 *     VfMiscCheckKernelAddress @ 0x1404B2134 (VfMiscCheckKernelAddress.c)
 *     VfFailDriver @ 0x140610710 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x140610760 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x140611AD0 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140611CDC (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x140612434 (VfReportIssueWithOptions.c)
 *     ViSpMmProbeAndLockProcessPages_Entry @ 0x1406A3CD0 (ViSpMmProbeAndLockProcessPages_Entry.c)
 *     ViIoInitializeTimer_Entry @ 0x1406A3FC0 (ViIoInitializeTimer_Entry.c)
 *     VerifierIoAllocateIrp @ 0x140B8AC80 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateIrpEx @ 0x140B8ADA0 (VerifierIoAllocateIrpEx.c)
 *     VerifierPortIoAllocateIrp @ 0x140B8B0D0 (VerifierPortIoAllocateIrp.c)
 *     VfTargetEtwUnregister @ 0x140B8B5A0 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140B8BAB8 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140B8BB44 (ViTargetRemovingCheckEtwWmi.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140B8E228 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140B92190 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140B9249C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140B92620 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140B9288C (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140B928C8 (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x140B9367C (ViErrorFinishReport.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140B94600 (VfZwNotifyChangeKey_Entry.c)
 *     ViZwCheckApcRequirement @ 0x140B94C28 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140B94CE0 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140B94D78 (ViZwCheckVirtualAddress.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140B94E80 (ViShutdownWatchdogExecuteDpc.c)
 *     VfPoolCheckForLeaks @ 0x140B9A350 (VfPoolCheckForLeaks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140B9BE90 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     Below4gb_AllocateCommonBuffer_Entry @ 0x140B9C150 (Below4gb_AllocateCommonBuffer_Entry.c)
 *     Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry @ 0x140B9C1A0 (Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry.c)
 *     Below4gb_MmAllocateContiguousMemory_Entry @ 0x140B9C1F0 (Below4gb_MmAllocateContiguousMemory_Entry.c)
 *     Below4gb_MmAllocateNodePagesForMdlEx_Entry @ 0x140B9C240 (Below4gb_MmAllocateNodePagesForMdlEx_Entry.c)
 *     Below4gb_MmAllocatePagesForMdlEx_Entry @ 0x140B9C290 (Below4gb_MmAllocatePagesForMdlEx_Entry.c)
 *     Below4gb_MmAllocatePagesForMdl_Entry @ 0x140B9C2E0 (Below4gb_MmAllocatePagesForMdl_Entry.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140B9CC20 (ViWdIrpTimerDpcRoutine.c)
 *     ViIrqlKeLeaveCriticalRegion_Entry @ 0x140B9D6A0 (ViIrqlKeLeaveCriticalRegion_Entry.c)
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140B9D8B0 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140B9D940 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140B9DB10 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140B9DB70 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140B9DBE0 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140B9DDE0 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140B9DE40 (VfMiscKeReleaseInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140B9DFD0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140B9E100 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140B9E160 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140B9E1E0 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VfMiscObReferenceObjectByHandle_Exit @ 0x140B9E4B0 (VfMiscObReferenceObjectByHandle_Exit.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140B9E590 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObject_Exit @ 0x140B9E620 (VfMiscObfReferenceObject_Exit.c)
 *     ViMiscCheckResourceAcquire @ 0x140B9F340 (ViMiscCheckResourceAcquire.c)
 *     ViMiscCheckResourceRelease @ 0x140B9F404 (ViMiscCheckResourceRelease.c)
 *     ViMiscEnforceRule @ 0x140B9F480 (ViMiscEnforceRule.c)
 *     ViMiscExCheckAPCsDisabled @ 0x140B9F4E8 (ViMiscExCheckAPCsDisabled.c)
 *     ViMiscValidateKeWaitUsage @ 0x140B9F564 (ViMiscValidateKeWaitUsage.c)
 *     ViMiscValidateSynchronizationObject @ 0x140B9F6A8 (ViMiscValidateSynchronizationObject.c)
 *     ViRlrsMmMapLockedPages_Entry @ 0x140B9F770 (ViRlrsMmMapLockedPages_Entry.c)
 *     VfLookasideAdd @ 0x140B9FE44 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140B9FF68 (VfLookasideDelete.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140BA0B40 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmUnlockPages @ 0x140BA0D30 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140BA0EB0 (VerifierMmUnmapIoSpace.c)
 *     VfDeleteResource @ 0x140BA188C (VfDeleteResource.c)
 *     VfTrackResource @ 0x140BA19B0 (VfTrackResource.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140BA1F50 (ViCtxCheckAndReleaseIsrState.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x140BA3E64 (VfIrpDatabaseCheckExFreePool.c)
 *     ExAllocatePoolSanityChecks @ 0x140BA42F4 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x140BA44B0 (ExFreePoolSanityChecks.c)
 *     ViSpMmMapIoSpace_Entry @ 0x140BA4A90 (ViSpMmMapIoSpace_Entry.c)
 *     ViSpMmMapLockedPagesSanityChecks @ 0x140BA4B60 (ViSpMmMapLockedPagesSanityChecks.c)
 *     ViSpMmProbeAndLockPages_Entry @ 0x140BA4D10 (ViSpMmProbeAndLockPages_Entry.c)
 *     IovCompleteRequest @ 0x140BA6768 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x140BA6F30 (IovFreeIrpPrivate.c)
 *     VfIoCompletionCheckState @ 0x140BA710C (VfIoCompletionCheckState.c)
 *     VfCheckForResource @ 0x140BA71D8 (VfCheckForResource.c)
 *     VfCheckForLookaside @ 0x140BA7C90 (VfCheckForLookaside.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140BA801C (ViMiscCheckKeRaiseIrql.c)
 *     ViMiscCheckReleaseSpinlock @ 0x140BA8150 (ViMiscCheckReleaseSpinlock.c)
 *     ViMiscCheckKeLowerIrql @ 0x140BA81D4 (ViMiscCheckKeLowerIrql.c)
 *     VfHandlePoolAlloc @ 0x140BA8AA0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140BA8FD0 (ViFreeTrackedPool.c)
 *     VfCheckUserHandle @ 0x140BA9228 (VfCheckUserHandle.c)
 *     VfFastIoCheckState @ 0x140BA9450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BA97CC (VfFastIoSnapState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     CarInitializeRuleViolationDetails @ 0x140616B70 (CarInitializeRuleViolationDetails.c)
 *     CarQueryReportActionForTriage @ 0x140616E00 (CarQueryReportActionForTriage.c)
 *     CarReportDifPluginRuleViolation @ 0x140617240 (CarReportDifPluginRuleViolation.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall CarReportRuleViolationFromNt(
        int BugCheckCode,
        __int64 BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 BugCheckParameter4,
        unsigned int a6,
        __int64 a7)
{
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  __int64 i; // rcx
  __int64 v14; // rcx
  _DWORD v15[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v16[10]; // [rsp+40h] [rbp-68h] BYREF
  int v17; // [rsp+90h] [rbp-18h]

  memset_0(v16, 0, 0x58uLL);
  CurrentIrql = KeGetCurrentIrql();
  result = CarInitializeRuleViolationDetails(v16);
  if ( (VfRuleClasses & 0x400000) == 0 || CurrentIrql <= 2u )
  {
    for ( i = 0LL; (unsigned int)i < 0xD; i = (unsigned int)(i + 1) )
    {
      if ( ViVerifierBugcheckAttributes[3 * i] == BugCheckCode && dword_140B7B3E4[3 * i] == BugCheckParameter1 )
      {
        if ( VfVerifyMode < dword_140B7B3E8[3 * i] )
        {
          v14 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
          result = BugCheckParameter4;
          qword_140FFE9B0[v14] = BugCheckParameter4;
          ViBugcheckLog[2 * v14] = BugCheckCode;
          qword_140FFE998[v14] = BugCheckParameter1;
          qword_140FFE9A0[v14] = BugCheckParameter2;
          qword_140FFE9A8[v14] = BugCheckParameter3;
          return result;
        }
        break;
      }
    }
    if ( CurrentIrql > 2u
      || ViLegacyVolatile
      || (int)CarQueryReportActionForTriage(BugCheckCode, BugCheckParameter1, v15) < 0 )
    {
      KeBugCheckEx(BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
    }
    v16[2] = BugCheckParameter4;
    v17 = BugCheckCode;
    v16[0] = BugCheckParameter2;
    v16[1] = BugCheckParameter3;
    return CarReportDifPluginRuleViolation(a6, BugCheckParameter1, a7, (__int64)v16);
  }
  return result;
}
