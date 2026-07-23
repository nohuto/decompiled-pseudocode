/*
 * XREFs of RtlEnterCriticalSection @ 0x18007BF00
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x18000116C (RtlSetHeapDebuggingInformation.c)
 *     RtlSetHeapInformation @ 0x1800024D0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180002714 (RtlpSetRequestedFrontEndHeap.c)
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDynamicShimModule @ 0x18000876C (LdrpDynamicShimModule.c)
 *     RtlExitUserProcess @ 0x180008E40 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180009100 (LdrShutdownThread.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001FBF0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x18001FDF0 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180020030 (LdrRemoveLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x18002037C (LdrpGetLoadAsEntry.c)
 *     RtlProtectHeap @ 0x180024F60 (RtlProtectHeap.c)
 *     RtlDebugAllocateHeap @ 0x180025BE0 (RtlDebugAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18002B9EC (RtlDebugReAllocateHeap.c)
 *     RtlCreateTagHeap @ 0x1800341B0 (RtlCreateTagHeap.c)
 *     RtlpProcessHeapsInsert @ 0x180037A58 (RtlpProcessHeapsInsert.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180037C0C (RtlpActivateLowFragmentationHeap.c)
 *     LdrpQueueWork @ 0x18003E480 (LdrpQueueWork.c)
 *     LdrpUnloadNode @ 0x1800465A0 (LdrpUnloadNode.c)
 *     LdrpAcquireLoaderLock @ 0x180046860 (LdrpAcquireLoaderLock.c)
 *     RtlpAllocateNTHeapInternal @ 0x180050E70 (RtlpAllocateNTHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180051570 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x180054420 (RtlpFreeUserBlock.c)
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180059D10 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x18005D1B0 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpWorkCallback @ 0x18006F910 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     LdrpProcessWork @ 0x18006FC70 (LdrpProcessWork.c)
 *     LdrpSendPostSnapNotifications @ 0x1800713A0 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x180071EE4 (LdrpSendDllNotifications.c)
 *     LdrpCheckForRetryLoading @ 0x180072F4C (LdrpCheckForRetryLoading.c)
 *     RtlSleepConditionVariableCS @ 0x18007ADC0 (RtlSleepConditionVariableCS.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x18007BAE0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     TppWorkpExecuteCallback @ 0x18007CF90 (TppWorkpExecuteCallback.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180086FD0 (RtlUpdateProcessRegistryInfo.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18008B390 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x18008B8E0 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpQueryDefaultUILanguage @ 0x18008D650 (RtlpQueryDefaultUILanguage.c)
 *     EtwpSwitchBuffer @ 0x180091120 (EtwpSwitchBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x180091EA8 (EtwpAllocateFreeBuffers.c)
 *     RtlDebugSizeHeap @ 0x180093080 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x1800931C0 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x180093AD0 (RtlLockHeap.c)
 *     RtlDebugFreeHeap @ 0x18009517C (RtlDebugFreeHeap.c)
 *     RtlGetUserInfoHeap @ 0x180095DD0 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800960DC (RtlDebugGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x1800962A0 (RtlSetUserValueHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180096590 (RtlDebugSetUserValueHeap.c)
 *     RtlCompactHeap @ 0x180097BA0 (RtlCompactHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800983A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x18009A090 (RtlQueryProcessHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 *     RtlpHpHeapWalk @ 0x18009B8E0 (RtlpHpHeapWalk.c)
 *     RtlSetCurrentDirectory_U @ 0x1800A11C0 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A1730 (RtlpReferenceCurrentDirectory.c)
 *     RtlCreateEnvironmentEx @ 0x1800AB0E0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x1800AB3E0 (RtlSetEnvironmentVar.c)
 *     RtlpComputePath @ 0x1800ACAF0 (RtlpComputePath.c)
 *     RtlQueryEnvironmentVariable @ 0x1800AD560 (RtlQueryEnvironmentVariable.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x1800ADF2C (RtlpQueryPseudoEnvironmentVariable.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800B41BC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     EtwpFlushActiveBuffers @ 0x1800B7104 (EtwpFlushActiveBuffers.c)
 *     RtlTlsFree @ 0x1800B8370 (RtlTlsFree.c)
 *     RtlpProcessHeapsRemove @ 0x1800B9024 (RtlpProcessHeapsRemove.c)
 *     LdrpCorInitialize @ 0x1800D0840 (LdrpCorInitialize.c)
 *     LdrpLoadShimEngine @ 0x1800D1760 (LdrpLoadShimEngine.c)
 *     LdrpObtainLockedEnclave @ 0x1800D8D00 (LdrpObtainLockedEnclave.c)
 *     RtlpSetupExtendedBlock @ 0x1800DCB90 (RtlpSetupExtendedBlock.c)
 *     RtlAcquirePebLock @ 0x1800E1E40 (RtlAcquirePebLock.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E5B00 (RtlCreateProcessParametersInternal.c)
 *     AVrfDllLoadNotification @ 0x1800ECFE4 (AVrfDllLoadNotification.c)
 *     LdrpDropLastInProgressCount @ 0x1800F05A0 (LdrpDropLastInProgressCount.c)
 *     RtlTlsAlloc @ 0x1800F2250 (RtlTlsAlloc.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800F6C40 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     LdrRegisterDllNotification @ 0x18010D5A0 (LdrRegisterDllNotification.c)
 *     RtlpSetProcMergedLangList @ 0x18010DAB4 (RtlpSetProcMergedLangList.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18010FB40 (RtlGetProcessPreferredUILanguages.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180110BBC (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180110D40 (RtlSetUserFlagsHeap.c)
 *     LdrUnregisterDllNotification @ 0x180114590 (LdrUnregisterDllNotification.c)
 *     LdrpCreateSoftwareEnclave @ 0x180114CD4 (LdrpCreateSoftwareEnclave.c)
 *     RtlSetCurrentEnvironment @ 0x180115850 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x180115E10 (RtlSetEnvironmentStrings.c)
 *     AVrfDllUnloadNotification @ 0x18011BEB0 (AVrfDllUnloadNotification.c)
 *     RtlDebugCompactHeap @ 0x1801204C8 (RtlDebugCompactHeap.c)
 *     AVrfInternalHeapFreeNotification @ 0x180133820 (AVrfInternalHeapFreeNotification.c)
 *     LdrDeleteEnclave @ 0x180134740 (LdrDeleteEnclave.c)
 *     RtlpCleanupRegistryKeys @ 0x180140C60 (RtlpCleanupRegistryKeys.c)
 *     RtlLockHeapManagerForCloning @ 0x180143040 (RtlLockHeapManagerForCloning.c)
 *     RtlQueryTagHeap @ 0x1801431D0 (RtlQueryTagHeap.c)
 *     RtlZeroHeap @ 0x1801454E0 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180145F94 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180146088 (RtlDebugQueryTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180146184 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x180149670 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1801498B0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x180149990 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x180149A10 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x180149A60 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x18015D778 (EtwpBufferingModeFlush.c)
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x180160C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x18007C690 (RtlpEnterCriticalSectionContended.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 */

NTSTATUS __cdecl RtlEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // r9
  char *v2; // rbx
  char *SchedulerSharedDataSlot; // r8
  __int64 i; // rcx
  PRTL_CRITICAL_SECTION *v6; // rdx
  signed __int8 v7; // cf
  void *UniqueThread; // rax
  NTSTATUS result; // eax
  _QWORD ThreadInformation[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = NtCurrentTeb();
  v2 = 0LL;
  SchedulerSharedDataSlot = (char *)v1->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v6 = (PRTL_CRITICAL_SECTION *)&SchedulerSharedDataSlot[8 * i];
      if ( !*v6 )
      {
        v2 = &SchedulerSharedDataSlot[8 * i];
        if ( v6 )
          *v6 = CriticalSection;
        break;
      }
    }
  }
  v7 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v7 )
  {
    CriticalSection->OwningThread = UniqueThread;
    result = 0;
    CriticalSection->RecursionCount = 1;
  }
  else if ( CriticalSection->OwningThread == UniqueThread )
  {
    if ( v2 )
    {
      *v2 |= 2u;
      if ( v2[7] < 0 )
      {
        ThreadInformation[1] = 0LL;
        ThreadInformation[0] = (v2 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
      }
      *(_QWORD *)v2 = 0LL;
    }
    ++CriticalSection->RecursionCount;
    return 0;
  }
  else
  {
    return RtlpEnterCriticalSectionContended(CriticalSection);
  }
  return result;
}
