/*
 * XREFs of CarReportRuleViolationFromNt @ 0x140B7D934
 * Callers:
 *     VfFailDeviceNode @ 0x1404A9E40 (VfFailDeviceNode.c)
 *     VfMiscCheckKernelAddress @ 0x1404B11E4 (VfMiscCheckKernelAddress.c)
 *     VfFailDriver @ 0x140604750 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x1406047A0 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x140605B10 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140605D1C (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     ViSpMmProbeAndLockProcessPages_Entry @ 0x140698AA0 (ViSpMmProbeAndLockProcessPages_Entry.c)
 *     ViIoInitializeTimer_Entry @ 0x140698D90 (ViIoInitializeTimer_Entry.c)
 *     VerifierIoAllocateIrp @ 0x140B7ACA0 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateIrpEx @ 0x140B7ADC0 (VerifierIoAllocateIrpEx.c)
 *     VerifierPortIoAllocateIrp @ 0x140B7B0F0 (VerifierPortIoAllocateIrp.c)
 *     VfTargetEtwUnregister @ 0x140B7B5C0 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140B7BAD8 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140B7BB64 (ViTargetRemovingCheckEtwWmi.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140B7E248 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140B821B0 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140B824BC (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140B82640 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140B828AC (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140B828E8 (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x140B8369C (ViErrorFinishReport.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140B84620 (VfZwNotifyChangeKey_Entry.c)
 *     ViZwCheckApcRequirement @ 0x140B84C48 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140B84D00 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140B84D98 (ViZwCheckVirtualAddress.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140B84EA0 (ViShutdownWatchdogExecuteDpc.c)
 *     VfPoolCheckForLeaks @ 0x140B8A370 (VfPoolCheckForLeaks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140B8BEB0 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     Below4gb_AllocateCommonBuffer_Entry @ 0x140B8C170 (Below4gb_AllocateCommonBuffer_Entry.c)
 *     Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry @ 0x140B8C1C0 (Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry.c)
 *     Below4gb_MmAllocateContiguousMemory_Entry @ 0x140B8C210 (Below4gb_MmAllocateContiguousMemory_Entry.c)
 *     Below4gb_MmAllocateNodePagesForMdlEx_Entry @ 0x140B8C260 (Below4gb_MmAllocateNodePagesForMdlEx_Entry.c)
 *     Below4gb_MmAllocatePagesForMdlEx_Entry @ 0x140B8C2B0 (Below4gb_MmAllocatePagesForMdlEx_Entry.c)
 *     Below4gb_MmAllocatePagesForMdl_Entry @ 0x140B8C300 (Below4gb_MmAllocatePagesForMdl_Entry.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140B8CC40 (ViWdIrpTimerDpcRoutine.c)
 *     ViIrqlKeLeaveCriticalRegion_Entry @ 0x140B8D6C0 (ViIrqlKeLeaveCriticalRegion_Entry.c)
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140B8D8D0 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140B8D960 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140B8DB30 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140B8DB90 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140B8DC00 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140B8DE00 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140B8DE60 (VfMiscKeReleaseInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140B8DFF0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140B8E120 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140B8E180 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140B8E200 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VfMiscObReferenceObjectByHandle_Exit @ 0x140B8E4D0 (VfMiscObReferenceObjectByHandle_Exit.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140B8E5B0 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObject_Exit @ 0x140B8E640 (VfMiscObfReferenceObject_Exit.c)
 *     ViMiscCheckResourceAcquire @ 0x140B8F360 (ViMiscCheckResourceAcquire.c)
 *     ViMiscCheckResourceRelease @ 0x140B8F424 (ViMiscCheckResourceRelease.c)
 *     ViMiscEnforceRule @ 0x140B8F4A0 (ViMiscEnforceRule.c)
 *     ViMiscExCheckAPCsDisabled @ 0x140B8F508 (ViMiscExCheckAPCsDisabled.c)
 *     ViMiscValidateKeWaitUsage @ 0x140B8F584 (ViMiscValidateKeWaitUsage.c)
 *     ViMiscValidateSynchronizationObject @ 0x140B8F6C8 (ViMiscValidateSynchronizationObject.c)
 *     ViRlrsMmMapLockedPages_Entry @ 0x140B8F790 (ViRlrsMmMapLockedPages_Entry.c)
 *     VfLookasideAdd @ 0x140B8FE64 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140B8FF88 (VfLookasideDelete.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140B90B60 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmUnlockPages @ 0x140B90D50 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140B90ED0 (VerifierMmUnmapIoSpace.c)
 *     VfDeleteResource @ 0x140B918AC (VfDeleteResource.c)
 *     VfTrackResource @ 0x140B919D0 (VfTrackResource.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140B91F70 (ViCtxCheckAndReleaseIsrState.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x140B93E84 (VfIrpDatabaseCheckExFreePool.c)
 *     ExAllocatePoolSanityChecks @ 0x140B94314 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x140B944D0 (ExFreePoolSanityChecks.c)
 *     ViSpMmMapIoSpace_Entry @ 0x140B94AB0 (ViSpMmMapIoSpace_Entry.c)
 *     ViSpMmMapLockedPagesSanityChecks @ 0x140B94B80 (ViSpMmMapLockedPagesSanityChecks.c)
 *     ViSpMmProbeAndLockPages_Entry @ 0x140B94D30 (ViSpMmProbeAndLockPages_Entry.c)
 *     IovCompleteRequest @ 0x140B96788 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x140B96F50 (IovFreeIrpPrivate.c)
 *     VfIoCompletionCheckState @ 0x140B9712C (VfIoCompletionCheckState.c)
 *     VfCheckForResource @ 0x140B971F8 (VfCheckForResource.c)
 *     VfCheckForLookaside @ 0x140B97CB0 (VfCheckForLookaside.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140B9803C (ViMiscCheckKeRaiseIrql.c)
 *     ViMiscCheckReleaseSpinlock @ 0x140B98170 (ViMiscCheckReleaseSpinlock.c)
 *     ViMiscCheckKeLowerIrql @ 0x140B981F4 (ViMiscCheckKeLowerIrql.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140B98FF0 (ViFreeTrackedPool.c)
 *     VfCheckUserHandle @ 0x140B99248 (VfCheckUserHandle.c)
 *     VfFastIoCheckState @ 0x140B99470 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140B997F8 (VfFastIoSnapState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CarInitializeRuleViolationDetails @ 0x14060ABB0 (CarInitializeRuleViolationDetails.c)
 *     CarQueryReportActionForTriage @ 0x14060AE40 (CarQueryReportActionForTriage.c)
 *     CarReportDifPluginRuleViolation @ 0x14060B280 (CarReportDifPluginRuleViolation.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
      if ( ViVerifierBugcheckAttributes[3 * i] == BugCheckCode && dword_140B6B3E4[3 * i] == BugCheckParameter1 )
      {
        if ( VfVerifyMode < dword_140B6B3E8[3 * i] )
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
