/*
 * XREFs of RtlEnterCriticalSection @ 0x1800148F0
 * Callers:
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     RtlExitUserProcess @ 0x180004320 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDynamicShimModule @ 0x180005B7C (LdrpDynamicShimModule.c)
 *     RtlSleepConditionVariableCS @ 0x180013330 (RtlSleepConditionVariableCS.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800144D0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     TppWorkpExecuteCallback @ 0x180022BB0 (TppWorkpExecuteCallback.c)
 *     RtlpAllocateNTHeapInternal @ 0x1800283A0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180028AA0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x18002B950 (RtlpFreeUserBlock.c)
 *     RtlpFreeHeap @ 0x18002D620 (RtlpFreeHeap.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180031240 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x180035CC0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpSetProcUserMachineLangList @ 0x180036910 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     EtwpSwitchBuffer @ 0x18003D730 (EtwpSwitchBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x18003E4B8 (EtwpAllocateFreeBuffers.c)
 *     RtlDebugSizeHeap @ 0x18003F690 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x18003F7D0 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x1800400E0 (RtlLockHeap.c)
 *     RtlDebugFreeHeap @ 0x18004178C (RtlDebugFreeHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800423E0 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800426EC (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800428AC (RtlDebugSetUserValueHeap.c)
 *     RtlCompactHeap @ 0x180043EC0 (RtlCompactHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800446C4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800463B0 (RtlQueryProcessHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x1800469B0 (RtlpEnumProcessHeaps.c)
 *     RtlpHpHeapWalk @ 0x180047C00 (RtlpHpHeapWalk.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180063F90 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x180064190 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800643D0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x18006471C (LdrpGetLoadAsEntry.c)
 *     LdrpCorInitialize @ 0x180065128 (LdrpCorInitialize.c)
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     LdrpSendPostSnapNotifications @ 0x1800707A0 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x1800712E4 (LdrpSendDllNotifications.c)
 *     LdrpCheckForRetryLoading @ 0x18007234C (LdrpCheckForRetryLoading.c)
 *     RtlpReferenceCurrentDirectory @ 0x180078310 (RtlpReferenceCurrentDirectory.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18007C4E0 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x18007CA30 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlCreateEnvironmentEx @ 0x180082D50 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180083050 (RtlSetEnvironmentVar.c)
 *     RtlpComputePath @ 0x180084760 (RtlpComputePath.c)
 *     RtlQueryEnvironmentVariable @ 0x1800851D0 (RtlQueryEnvironmentVariable.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180085B9C (RtlpQueryPseudoEnvironmentVariable.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x18008B22C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     EtwpFlushActiveBuffers @ 0x18008E264 (EtwpFlushActiveBuffers.c)
 *     RtlTlsFree @ 0x18008EFF0 (RtlTlsFree.c)
 *     RtlpProcessHeapsRemove @ 0x18008FCA4 (RtlpProcessHeapsRemove.c)
 *     RtlSetHeapDebuggingInformation @ 0x180095C6C (RtlSetHeapDebuggingInformation.c)
 *     RtlSetHeapInformation @ 0x180096E70 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x1800970B4 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetUserValueHeap @ 0x18009BF90 (RtlSetUserValueHeap.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 *     RtlDebugAllocateHeap @ 0x18009CC30 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800A1040 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800A18B0 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800A2A3C (RtlDebugReAllocateHeap.c)
 *     RtlCreateTagHeap @ 0x1800A5370 (RtlCreateTagHeap.c)
 *     RtlpProcessHeapsInsert @ 0x1800A8C18 (RtlpProcessHeapsInsert.c)
 *     RtlpActivateLowFragmentationHeap @ 0x1800A8DCC (RtlpActivateLowFragmentationHeap.c)
 *     RtlTlsAlloc @ 0x1800B9670 (RtlTlsAlloc.c)
 *     LdrpQueueWork @ 0x1800D6D64 (LdrpQueueWork.c)
 *     LdrpObtainLockedEnclave @ 0x1800D8D60 (LdrpObtainLockedEnclave.c)
 *     RtlpSetupExtendedBlock @ 0x1800DF090 (RtlpSetupExtendedBlock.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E6A30 (RtlCreateProcessParametersInternal.c)
 *     LdrpWorkCallback @ 0x1800EAD70 (LdrpWorkCallback.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800EAE54 (RtlUpdateProcessRegistryInfo.c)
 *     AVrfDllLoadNotification @ 0x1800EC804 (AVrfDllLoadNotification.c)
 *     RtlAcquirePebLock @ 0x1800F4700 (RtlAcquirePebLock.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800F5060 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlSetCurrentDirectory_U @ 0x1800FAB90 (RtlSetCurrentDirectory_U.c)
 *     LdrRegisterDllNotification @ 0x18010AE40 (LdrRegisterDllNotification.c)
 *     RtlpSetProcMergedLangList @ 0x18010B414 (RtlpSetProcMergedLangList.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18010D110 (RtlGetProcessPreferredUILanguages.c)
 *     RtlDebugSetUserFlagsHeap @ 0x18010E0EC (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x18010E270 (RtlSetUserFlagsHeap.c)
 *     LdrUnregisterDllNotification @ 0x180111490 (LdrUnregisterDllNotification.c)
 *     LdrpCreateSoftwareEnclave @ 0x180111BD4 (LdrpCreateSoftwareEnclave.c)
 *     RtlSetCurrentEnvironment @ 0x180112B10 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x180112E80 (RtlSetEnvironmentStrings.c)
 *     AVrfDllUnloadNotification @ 0x180118E30 (AVrfDllUnloadNotification.c)
 *     RtlDebugCompactHeap @ 0x18011EBF8 (RtlDebugCompactHeap.c)
 *     AVrfInternalHeapFreeNotification @ 0x180131D40 (AVrfInternalHeapFreeNotification.c)
 *     LdrDeleteEnclave @ 0x180132C60 (LdrDeleteEnclave.c)
 *     RtlpCleanupRegistryKeys @ 0x18013F570 (RtlpCleanupRegistryKeys.c)
 *     RtlLockHeapManagerForCloning @ 0x180141950 (RtlLockHeapManagerForCloning.c)
 *     RtlQueryTagHeap @ 0x180141AE0 (RtlQueryTagHeap.c)
 *     RtlZeroHeap @ 0x180143F70 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180144A24 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180144B18 (RtlDebugQueryTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180144C14 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x1801480C0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x180148300 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1801483E0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x180148460 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x1801484B0 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x18015C218 (EtwpBufferingModeFlush.c)
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x180013580 (RtlpEnterCriticalSectionContended.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlEnterCriticalSection(__int64 a1)
{
  struct _TEB *v1; // r9
  char *v2; // rbx
  char *SchedulerSharedDataSlot; // r8
  __int64 i; // rcx
  char *v6; // rdx
  signed __int8 v7; // cf
  void *UniqueThread; // rax
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = NtCurrentTeb();
  v2 = 0LL;
  SchedulerSharedDataSlot = (char *)v1->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v6 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v6 )
      {
        v2 = &SchedulerSharedDataSlot[8 * i];
        if ( v6 )
          *(_QWORD *)v6 = a1;
        break;
      }
    }
  }
  v7 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 8), 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 16) = UniqueThread;
    result = 0LL;
    *(_DWORD *)(a1 + 12) = 1;
  }
  else if ( *(void **)(a1 + 16) == UniqueThread )
  {
    if ( v2 )
    {
      *v2 |= 2u;
      if ( v2[7] < 0 )
      {
        v10[1] = 0LL;
        v10[0] = (v2 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
        NtSetInformationThread(-2LL, 56LL, v10);
      }
      *(_QWORD *)v2 = 0LL;
    }
    ++*(_DWORD *)(a1 + 12);
    return 0LL;
  }
  else
  {
    return RtlpEnterCriticalSectionContended((volatile signed __int32 *)a1);
  }
  return result;
}
