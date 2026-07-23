/*
 * XREFs of RtlEnterCriticalSection @ 0x1800412F0
 * Callers:
 *     RtlAcquirePebLock @ 0x180001100 (RtlAcquirePebLock.c)
 *     RtlCreateEnvironmentEx @ 0x180004BD0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180004ED0 (RtlSetEnvironmentVar.c)
 *     RtlpComputePath @ 0x180006610 (RtlpComputePath.c)
 *     RtlQueryEnvironmentVariable @ 0x180007080 (RtlQueryEnvironmentVariable.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180007A4C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpActivateLowFragmentationHeap @ 0x18000BFB0 (RtlpActivateLowFragmentationHeap.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18000F8D0 (RtlSetProcessPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180011370 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180011550 (RtlpCreateProcessRegistryInfo.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180011A20 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x180015F40 (RtlpQueryDefaultUILanguage.c)
 *     RtlpSetProcUserMachineLangList @ 0x180016B90 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     EtwpSwitchBuffer @ 0x18001D9B0 (EtwpSwitchBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x18001E738 (EtwpAllocateFreeBuffers.c)
 *     RtlDebugAllocateHeap @ 0x18001F7A4 (RtlDebugAllocateHeap.c)
 *     RtlSetUserValueHeap @ 0x18001FB40 (RtlSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x18001FFC0 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x180020100 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x180020A10 (RtlLockHeap.c)
 *     RtlDebugFreeHeap @ 0x180022020 (RtlDebugFreeHeap.c)
 *     RtlCreateTagHeap @ 0x180022EE0 (RtlCreateTagHeap.c)
 *     RtlTlsFree @ 0x1800269C0 (RtlTlsFree.c)
 *     RtlpAcquireHeapListLock @ 0x18002AAB4 (RtlpAcquireHeapListLock.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18002B720 (RtlpSetRequestedFrontEndHeap.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDynamicShimModule @ 0x18003257C (LdrpDynamicShimModule.c)
 *     RtlSleepConditionVariableCS @ 0x18003FD30 (RtlSleepConditionVariableCS.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180040ED0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 *     LdrpAcquireLoaderLock @ 0x180049720 (LdrpAcquireLoaderLock.c)
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 *     TppWorkpExecuteCallback @ 0x18004F5B0 (TppWorkpExecuteCallback.c)
 *     RtlpAllocateNTHeapInternal @ 0x180054DA0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800554A0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x180058350 (RtlpFreeUserBlock.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180079B70 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x180079D70 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180079FB0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x18007A2FC (LdrpGetLoadAsEntry.c)
 *     LdrpSendPostSnapNotifications @ 0x18008D080 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18008DBC4 (LdrpSendDllNotifications.c)
 *     LdrpCheckForRetryLoading @ 0x18008EC2C (LdrpCheckForRetryLoading.c)
 *     RtlpReferenceCurrentDirectory @ 0x180094BF0 (RtlpReferenceCurrentDirectory.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800A6CEC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     EtwpFlushActiveBuffers @ 0x1800A9D24 (EtwpFlushActiveBuffers.c)
 *     RtlExitUserProcess @ 0x1800AAE10 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x1800AB0D0 (LdrShutdownThread.c)
 *     LdrpDrainWorkQueue @ 0x1800AB680 (LdrpDrainWorkQueue.c)
 *     RtlLockProcessHeapOnProcessTerminate @ 0x1800AB850 (RtlLockProcessHeapOnProcessTerminate.c)
 *     LdrpDropLastInProgressCount @ 0x1800ACA84 (LdrpDropLastInProgressCount.c)
 *     LdrpCorInitialize @ 0x1800ACFF8 (LdrpCorInitialize.c)
 *     LdrpLoadShimEngine @ 0x1800AD9B0 (LdrpLoadShimEngine.c)
 *     RtlTlsAlloc @ 0x1800B1410 (RtlTlsAlloc.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800CC36C (RtlUpdateProcessRegistryInfo.c)
 *     LdrpQueueWork @ 0x1800D20D4 (LdrpQueueWork.c)
 *     LdrpObtainLockedEnclave @ 0x1800D40D0 (LdrpObtainLockedEnclave.c)
 *     RtlpSetupExtendedBlock @ 0x1800DA200 (RtlpSetupExtendedBlock.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E1EE0 (RtlCreateProcessParametersInternal.c)
 *     RtlGetUserInfoHeap @ 0x1800E63B0 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800E66BC (RtlDebugGetUserInfoHeap.c)
 *     LdrpWorkCallback @ 0x1800E6AB0 (LdrpWorkCallback.c)
 *     AVrfDllLoadNotification @ 0x1800E7434 (AVrfDllLoadNotification.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x1800E8454 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     RtlSetCurrentDirectory_U @ 0x1800F58F0 (RtlSetCurrentDirectory_U.c)
 *     LdrRegisterDllNotification @ 0x180105BE0 (LdrRegisterDllNotification.c)
 *     RtlpSetProcMergedLangList @ 0x1801061B4 (RtlpSetProcMergedLangList.c)
 *     RtlCompactHeap @ 0x180106E40 (RtlCompactHeap.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1801080D0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180108FCC (RtlDebugSetUserFlagsHeap.c)
 *     RtlSetUserFlagsHeap @ 0x180109150 (RtlSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x18010C554 (RtlDebugSetUserValueHeap.c)
 *     LdrUnregisterDllNotification @ 0x18010C8A0 (LdrUnregisterDllNotification.c)
 *     LdrpCreateSoftwareEnclave @ 0x18010CFE4 (LdrpCreateSoftwareEnclave.c)
 *     RtlSetCurrentEnvironment @ 0x18010DDD0 (RtlSetCurrentEnvironment.c)
 *     RtlSetEnvironmentStrings @ 0x18010E140 (RtlSetEnvironmentStrings.c)
 *     AVrfDllUnloadNotification @ 0x180113F70 (AVrfDllUnloadNotification.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180114970 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x18011CE28 (RtlDebugCompactHeap.c)
 *     AVrfInternalHeapFreeNotification @ 0x18012FF70 (AVrfInternalHeapFreeNotification.c)
 *     LdrDeleteEnclave @ 0x180130E90 (LdrDeleteEnclave.c)
 *     RtlpCleanupRegistryKeys @ 0x18013D760 (RtlpCleanupRegistryKeys.c)
 *     RtlQueryTagHeap @ 0x18013FCC0 (RtlQueryTagHeap.c)
 *     RtlZeroHeap @ 0x180142320 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180142DD4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180142EC8 (RtlDebugQueryTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180142FC4 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x180146470 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1801466B0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x180146790 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x180146810 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x180146860 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x18015A5D8 (EtwpBufferingModeFlush.c)
 *     RtlCloneUserProcess @ 0x18015D630 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015DAF0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x18003FF80 (RtlpEnterCriticalSectionContended.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
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
