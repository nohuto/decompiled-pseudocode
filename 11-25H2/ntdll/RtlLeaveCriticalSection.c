/*
 * XREFs of RtlLeaveCriticalSection @ 0x18007C000
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x18000116C (RtlSetHeapDebuggingInformation.c)
 *     RtlpFlushHeap @ 0x18000123C (RtlpFlushHeap.c)
 *     RtlSetHeapInformation @ 0x1800024D0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180002714 (RtlpSetRequestedFrontEndHeap.c)
 *     LdrpReleaseLoaderLock @ 0x180007A00 (LdrpReleaseLoaderLock.c)
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDynamicShimModule @ 0x18000876C (LdrpDynamicShimModule.c)
 *     RtlUserThreadStart @ 0x180008D70 (RtlUserThreadStart.c)
 *     RtlExitUserProcess @ 0x180008E40 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180009100 (LdrShutdownThread.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
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
 *     RtlpWnfWalkUserSubscriptionList @ 0x180042A00 (RtlpWnfWalkUserSubscriptionList.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180046370 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x1800465A0 (LdrpUnloadNode.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
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
 *     TppWorkpExecuteCallback @ 0x18007CF90 (TppWorkpExecuteCallback.c)
 *     TppCallbackEpilog @ 0x18007ECC0 (TppCallbackEpilog.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180086FD0 (RtlUpdateProcessRegistryInfo.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18008B390 (RtlSetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x18008B8E0 (LdrpSetThreadPreferredLangList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpQueryDefaultUILanguage @ 0x18008D650 (RtlpQueryDefaultUILanguage.c)
 *     EtwpSwitchBuffer @ 0x180091120 (EtwpSwitchBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x180091EA8 (EtwpAllocateFreeBuffers.c)
 *     RtlDebugSizeHeap @ 0x180093080 (RtlDebugSizeHeap.c)
 *     RtlValidateHeap @ 0x1800931C0 (RtlValidateHeap.c)
 *     RtlUnlockHeap @ 0x1800938E0 (RtlUnlockHeap.c)
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
 *     RtlpCheckForSameCurdir @ 0x1800A1460 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A1560 (RtlGetCurrentDirectory_U.c)
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
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D8E20 (LdrpUnlockAndDereferenceEnclave.c)
 *     RtlpSetupExtendedBlock @ 0x1800DCB90 (RtlpSetupExtendedBlock.c)
 *     RtlReleasePebLock @ 0x1800E1E60 (RtlReleasePebLock.c)
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
 *     RtlUnlockHeapManagerForCloning @ 0x180143390 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpUnlockHeapForClone @ 0x1801442FC (RtlpUnlockHeapForClone.c)
 *     RtlZeroHeap @ 0x1801454E0 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180145F94 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180146088 (RtlDebugQueryTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180146184 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x180149670 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1801498B0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x180149990 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x180149A40 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x180149A60 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x18015D778 (EtwpBufferingModeFlush.c)
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x180160A90 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x180160C40 (RtlPrepareForProcessCloning.c)
 *     LdrpCompleteProcessCloning @ 0x1801620DC (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlpNotOwnerCriticalSection @ 0x18007C310 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlpWakeByAddress @ 0x18007C470 (RtlpWakeByAddress.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwCreateEvent @ 0x180163B20 (ZwCreateEvent.c)
 *     ZwSetEventEx @ 0x180166630 (ZwSetEventEx.c)
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
