/*
 * XREFs of CarReportRuleViolationFromNt @ 0x140B8F914
 * Callers:
 *     VfFailDeviceNode @ 0x1404A5500 (VfFailDeviceNode.c)
 *     VfMiscCheckKernelAddress @ 0x1404AC9C4 (VfMiscCheckKernelAddress.c)
 *     VfFailDriver @ 0x14060ECD0 (VfFailDriver.c)
 *     VfFailSystemBIOS @ 0x14060ED20 (VfFailSystemBIOS.c)
 *     MdlInvariantPostProcessing1 @ 0x140610090 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14061029C (MdlInvariantPreProcessing1.c)
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     ViSpMmProbeAndLockProcessPages_Entry @ 0x1406A4CD0 (ViSpMmProbeAndLockProcessPages_Entry.c)
 *     ViIoInitializeTimer_Entry @ 0x1406A4FC0 (ViIoInitializeTimer_Entry.c)
 *     VerifierIoAllocateIrp @ 0x140B8CC80 (VerifierIoAllocateIrp.c)
 *     VerifierIoAllocateIrpEx @ 0x140B8CDA0 (VerifierIoAllocateIrpEx.c)
 *     VerifierPortIoAllocateIrp @ 0x140B8D0D0 (VerifierPortIoAllocateIrp.c)
 *     VfTargetEtwUnregister @ 0x140B8D5A0 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140B8DAB8 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140B8DB44 (ViTargetRemovingCheckEtwWmi.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140B90228 (ViIrpCheckKernelAddressForIrp.c)
 *     VerifierIoVolumeDeviceToDosName @ 0x140B94190 (VerifierIoVolumeDeviceToDosName.c)
 *     ViDevObjRemove @ 0x140B9449C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140B94620 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockReportBadReleaseAndWaitTag @ 0x140B9488C (VfRemLockReportBadReleaseAndWaitTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140B948C8 (VfRemLockReportBadReleaseTag.c)
 *     ViErrorFinishReport @ 0x140B9567C (ViErrorFinishReport.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140B96600 (VfZwNotifyChangeKey_Entry.c)
 *     ViZwCheckApcRequirement @ 0x140B96C28 (ViZwCheckApcRequirement.c)
 *     ViZwCheckUnicodeString @ 0x140B96CE0 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140B96D78 (ViZwCheckVirtualAddress.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x140B96E80 (ViShutdownWatchdogExecuteDpc.c)
 *     VfPoolCheckForLeaks @ 0x140B9C350 (VfPoolCheckForLeaks.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140B9DE90 (VerifierPortExAllocatePoolWithQuotaTag.c)
 *     Below4gb_AllocateCommonBuffer_Entry @ 0x140B9E150 (Below4gb_AllocateCommonBuffer_Entry.c)
 *     Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry @ 0x140B9E1A0 (Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry.c)
 *     Below4gb_MmAllocateContiguousMemory_Entry @ 0x140B9E1F0 (Below4gb_MmAllocateContiguousMemory_Entry.c)
 *     Below4gb_MmAllocateNodePagesForMdlEx_Entry @ 0x140B9E240 (Below4gb_MmAllocateNodePagesForMdlEx_Entry.c)
 *     Below4gb_MmAllocatePagesForMdlEx_Entry @ 0x140B9E290 (Below4gb_MmAllocatePagesForMdlEx_Entry.c)
 *     Below4gb_MmAllocatePagesForMdl_Entry @ 0x140B9E2E0 (Below4gb_MmAllocatePagesForMdl_Entry.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140B9EC20 (ViWdIrpTimerDpcRoutine.c)
 *     ViIrqlKeLeaveCriticalRegion_Entry @ 0x140B9F6A0 (ViIrqlKeLeaveCriticalRegion_Entry.c)
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140B9F8B0 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140B9F940 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140B9FB10 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140B9FB70 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140B9FBE0 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140B9FDE0 (VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry.c)
 *     VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140B9FE40 (VfMiscKeReleaseInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140B9FFD0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140BA0100 (VfMiscMmBuildMdlForNonPagedPool_Entry.c)
 *     VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140BA0160 (VfMiscMmBuildMdlForNonPagedPool_Exit.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140BA01E0 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VfMiscObReferenceObjectByHandle_Exit @ 0x140BA04B0 (VfMiscObReferenceObjectByHandle_Exit.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140BA0590 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObject_Exit @ 0x140BA0620 (VfMiscObfReferenceObject_Exit.c)
 *     ViMiscCheckResourceAcquire @ 0x140BA1340 (ViMiscCheckResourceAcquire.c)
 *     ViMiscCheckResourceRelease @ 0x140BA1404 (ViMiscCheckResourceRelease.c)
 *     ViMiscEnforceRule @ 0x140BA1480 (ViMiscEnforceRule.c)
 *     ViMiscExCheckAPCsDisabled @ 0x140BA14E8 (ViMiscExCheckAPCsDisabled.c)
 *     ViMiscValidateKeWaitUsage @ 0x140BA1564 (ViMiscValidateKeWaitUsage.c)
 *     ViMiscValidateSynchronizationObject @ 0x140BA16A8 (ViMiscValidateSynchronizationObject.c)
 *     ViRlrsMmMapLockedPages_Entry @ 0x140BA1770 (ViRlrsMmMapLockedPages_Entry.c)
 *     VfLookasideAdd @ 0x140BA1E44 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140BA1F68 (VfLookasideDelete.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140BA2B40 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmUnlockPages @ 0x140BA2D30 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140BA2EB0 (VerifierMmUnmapIoSpace.c)
 *     VfDeleteResource @ 0x140BA388C (VfDeleteResource.c)
 *     VfTrackResource @ 0x140BA39B0 (VfTrackResource.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140BA3F50 (ViCtxCheckAndReleaseIsrState.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x140BA5E64 (VfIrpDatabaseCheckExFreePool.c)
 *     ExAllocatePoolSanityChecks @ 0x140BA62F4 (ExAllocatePoolSanityChecks.c)
 *     ExFreePoolSanityChecks @ 0x140BA64B0 (ExFreePoolSanityChecks.c)
 *     ViSpMmMapIoSpace_Entry @ 0x140BA6A90 (ViSpMmMapIoSpace_Entry.c)
 *     ViSpMmMapLockedPagesSanityChecks @ 0x140BA6B60 (ViSpMmMapLockedPagesSanityChecks.c)
 *     ViSpMmProbeAndLockPages_Entry @ 0x140BA6D10 (ViSpMmProbeAndLockPages_Entry.c)
 *     IovCompleteRequest @ 0x140BA8768 (IovCompleteRequest.c)
 *     IovFreeIrpPrivate @ 0x140BA8F30 (IovFreeIrpPrivate.c)
 *     VfIoCompletionCheckState @ 0x140BA910C (VfIoCompletionCheckState.c)
 *     VfCheckForResource @ 0x140BA91D8 (VfCheckForResource.c)
 *     VfCheckForLookaside @ 0x140BA9C90 (VfCheckForLookaside.c)
 *     ViMiscCheckKeRaiseIrql @ 0x140BAA01C (ViMiscCheckKeRaiseIrql.c)
 *     ViMiscCheckReleaseSpinlock @ 0x140BAA150 (ViMiscCheckReleaseSpinlock.c)
 *     ViMiscCheckKeLowerIrql @ 0x140BAA1D4 (ViMiscCheckKeLowerIrql.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140BAAFD0 (ViFreeTrackedPool.c)
 *     VfCheckUserHandle @ 0x140BAB228 (VfCheckUserHandle.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BAB7CC (VfFastIoSnapState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CarInitializeRuleViolationDetails @ 0x140615130 (CarInitializeRuleViolationDetails.c)
 *     CarQueryReportActionForTriage @ 0x1406153C0 (CarQueryReportActionForTriage.c)
 *     CarReportDifPluginRuleViolation @ 0x140615800 (CarReportDifPluginRuleViolation.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
      if ( ViVerifierBugcheckAttributes[3 * i] == BugCheckCode && dword_140B7D3E4[3 * i] == BugCheckParameter1 )
      {
        if ( VfVerifyMode < dword_140B7D3E8[3 * i] )
        {
          v14 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckLogIndex, 1u) + 1) & 0xF);
          result = BugCheckParameter4;
          qword_140FFF9B0[v14] = BugCheckParameter4;
          ViBugcheckLog[2 * v14] = BugCheckCode;
          qword_140FFF998[v14] = BugCheckParameter1;
          qword_140FFF9A0[v14] = BugCheckParameter2;
          qword_140FFF9A8[v14] = BugCheckParameter3;
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
