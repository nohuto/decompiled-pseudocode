/*
 * XREFs of RtlLeaveCriticalSection @ 0x1800413F0
 * Callers:
 *     RtlReleasePebLock @ 0x180001120 (RtlReleasePebLock.c)
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
 *     RtlUnlockHeap @ 0x180020820 (RtlUnlockHeap.c)
 *     RtlDebugFreeHeap @ 0x180022020 (RtlDebugFreeHeap.c)
 *     RtlCreateTagHeap @ 0x180022EE0 (RtlCreateTagHeap.c)
 *     RtlTlsFree @ 0x1800269C0 (RtlTlsFree.c)
 *     RtlpReleaseHeapListLock @ 0x18002AA6C (RtlpReleaseHeapListLock.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18002B720 (RtlpSetRequestedFrontEndHeap.c)
 *     LdrpReleaseLoaderLock @ 0x180031810 (LdrpReleaseLoaderLock.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDynamicShimModule @ 0x18003257C (LdrpDynamicShimModule.c)
 *     RtlSleepConditionVariableCS @ 0x18003FD30 (RtlSleepConditionVariableCS.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180049230 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DA30 (RtlpWnfWalkUserSubscriptionList.c)
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 *     TppWorkpExecuteCallback @ 0x18004F5B0 (TppWorkpExecuteCallback.c)
 *     TppCallbackEpilog @ 0x1800512E0 (TppCallbackEpilog.c)
 *     RtlpAllocateNTHeapInternal @ 0x180054DA0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800554A0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x180058350 (RtlpFreeUserBlock.c)
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18005B780 (RtlpReAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180071600 (RtlGetFullPathName_Ustr.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180079B70 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x180079D70 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180079FB0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x18007A2FC (LdrpGetLoadAsEntry.c)
 *     LdrpSendPostSnapNotifications @ 0x18008D080 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18008DBC4 (LdrpSendDllNotifications.c)
 *     LdrpCheckForRetryLoading @ 0x18008EC2C (LdrpCheckForRetryLoading.c)
 *     RtlpCheckForSameCurdir @ 0x180094920 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x180094A20 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x180094BF0 (RtlpReferenceCurrentDirectory.c)
 *     RtlpFlushHeap @ 0x1800A05AC (RtlpFlushHeap.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800A6CEC (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     EtwpFlushActiveBuffers @ 0x1800A9D24 (EtwpFlushActiveBuffers.c)
 *     RtlUserThreadStart @ 0x1800AAD40 (RtlUserThreadStart.c)
 *     RtlExitUserProcess @ 0x1800AAE10 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x1800AB0D0 (LdrShutdownThread.c)
 *     LdrpDrainWorkQueue @ 0x1800AB680 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800ACA84 (LdrpDropLastInProgressCount.c)
 *     LdrpCorInitialize @ 0x1800ACFF8 (LdrpCorInitialize.c)
 *     LdrpLoadShimEngine @ 0x1800AD9B0 (LdrpLoadShimEngine.c)
 *     RtlTlsAlloc @ 0x1800B1410 (RtlTlsAlloc.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800CC36C (RtlUpdateProcessRegistryInfo.c)
 *     LdrpQueueWork @ 0x1800D20D4 (LdrpQueueWork.c)
 *     LdrpObtainLockedEnclave @ 0x1800D40D0 (LdrpObtainLockedEnclave.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D41F0 (LdrpUnlockAndDereferenceEnclave.c)
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
 *     RtlpQueryExtendedInformationHeap @ 0x180114970 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x18011CE28 (RtlDebugCompactHeap.c)
 *     AVrfInternalHeapFreeNotification @ 0x18012FF70 (AVrfInternalHeapFreeNotification.c)
 *     LdrDeleteEnclave @ 0x180130E90 (LdrDeleteEnclave.c)
 *     RtlpCleanupRegistryKeys @ 0x18013D760 (RtlpCleanupRegistryKeys.c)
 *     RtlQueryTagHeap @ 0x18013FCC0 (RtlQueryTagHeap.c)
 *     RtlpUnlockHeapForClone @ 0x180140FBC (RtlpUnlockHeapForClone.c)
 *     RtlZeroHeap @ 0x180142320 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180142DD4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180142EC8 (RtlDebugQueryTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180142FC4 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x180146470 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1801466B0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x180146790 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x180146840 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x180146860 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x18015A5D8 (EtwpBufferingModeFlush.c)
 *     RtlCloneUserProcess @ 0x18015D630 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015D940 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015DAF0 (RtlPrepareForProcessCloning.c)
 *     LdrpCompleteProcessCloning @ 0x18015EF08 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlpNotOwnerCriticalSection @ 0x180041700 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlpWakeByAddress @ 0x180041860 (RtlpWakeByAddress.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwCreateEvent @ 0x180160950 (ZwCreateEvent.c)
 *     ZwSetEventEx @ 0x180163460 (ZwSetEventEx.c)
 */

NTSTATUS __cdecl RtlLeaveCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  signed __int64 v3; // rbp
  signed __int32 LockCount; // r14d
  char *SchedulerSharedDataSlot; // rdx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rbx
  char *v8; // rdi
  void *LockSemaphore; // rdi
  unsigned int v10; // ecx
  NTSTATUS v11; // eax
  char *v13; // rdx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rbx
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int i; // r8d
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD ThreadInformation[7]; // [rsp+30h] [rbp-38h] BYREF
  HANDLE EventHandle; // [rsp+80h] [rbp+18h] BYREF

  if ( CriticalSection->RecursionCount-- != 1 )
    return 0;
  v3 = -1LL;
  CriticalSection->OwningThread = 0LL;
  LockCount = _InterlockedCompareExchange(&CriticalSection->LockCount, -1, -2);
  if ( LockCount == -2 )
  {
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      v6 = 0;
      v7 = (unsigned __int64)CriticalSection & 0x7FFFFFFFFFFFFFFCLL;
      while ( v6 < 8 )
      {
        v8 = &SchedulerSharedDataSlot[8 * v6];
        if ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) == v7 )
        {
          if ( !v8 )
            return 0;
          *v8 |= 2u;
          if ( v8[7] >= 0 )
            goto LABEL_46;
          goto LABEL_45;
        }
        ++v6;
      }
    }
    return 0;
  }
  if ( (CriticalSection->LockCount & 1) != 0 )
    RtlpNotOwnerCriticalSection(CriticalSection);
  LockSemaphore = CriticalSection->LockSemaphore;
  if ( !LockSemaphore )
  {
    EventHandle = (HANDLE)-1LL;
    if ( RtlpForceCSToUseEvents )
    {
      if ( ZwCreateEvent(&EventHandle, 0x100003u, 0LL, SynchronizationEvent, 0) >= 0 )
        v3 = (signed __int64)EventHandle;
      else
        EventHandle = (HANDLE)-1LL;
    }
    LockSemaphore = (void *)_InterlockedCompareExchange64(
                              (volatile signed __int64 *)&CriticalSection->LockSemaphore,
                              v3,
                              0LL);
    if ( LockSemaphore )
    {
      if ( EventHandle != (HANDLE)-1LL )
        NtClose(EventHandle);
      EventHandle = LockSemaphore;
    }
    else
    {
      LockSemaphore = EventHandle;
    }
  }
  v10 = 0;
  while ( LockCount != _InterlockedCompareExchange(
                         &CriticalSection->LockCount,
                         (LockCount & 2 | 1) + LockCount,
                         LockCount) )
  {
    v16 = v10;
    if ( v10 )
    {
      if ( v10 < 0x1FFF )
        v16 = 2 * v10;
    }
    else
    {
      if ( NtCurrentTeb()->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
        goto LABEL_38;
      v16 = 64;
    }
    v10 = v16;
    v17 = __rdtsc();
    v18 = 10 * (((v16 - 1) & (unsigned int)v17) + v16) / MEMORY[0x7FFE02D6];
    for ( i = 0; i < v18; ++i )
      _mm_pause();
LABEL_38:
    _m_prefetchw(&CriticalSection->LockCount);
    LockCount = CriticalSection->LockCount;
  }
  if ( (LockCount & 2) != 0 )
  {
    if ( LockSemaphore == (void *)-1LL )
    {
      _InterlockedOr(v20, 0);
      RtlpWakeByAddress(&CriticalSection->LockCount, 0LL, CriticalSection);
    }
    else
    {
      v11 = ZwSetEventEx(LockSemaphore, 0LL, CriticalSection);
      if ( v11 < 0 )
        RtlRaiseStatus(v11);
    }
  }
  v13 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v13 )
  {
    v14 = 0;
    v15 = (unsigned __int64)CriticalSection & 0x7FFFFFFFFFFFFFFCLL;
    while ( v14 < 8 )
    {
      v8 = &v13[8 * v14];
      if ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) == v15 )
      {
        if ( v8 )
        {
          *v8 |= 2u;
          if ( v8[7] < 0 )
          {
LABEL_45:
            ThreadInformation[1] = 0LL;
            ThreadInformation[0] = (v8 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUpdateLockOwnership, ThreadInformation, 0x10u);
          }
LABEL_46:
          *(_QWORD *)v8 = 0LL;
        }
        return 0;
      }
      ++v14;
    }
  }
  return 0;
}
