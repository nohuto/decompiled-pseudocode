/*
 * XREFs of RtlLeaveCriticalSection @ 0x1800149F0
 * Callers:
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     RtlUserThreadStart @ 0x180004250 (RtlUserThreadStart.c)
 *     RtlExitUserProcess @ 0x180004320 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 *     LdrpReleaseLoaderLock @ 0x180004E10 (LdrpReleaseLoaderLock.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDynamicShimModule @ 0x180005B7C (LdrpDynamicShimModule.c)
 *     RtlSleepConditionVariableCS @ 0x180013330 (RtlSleepConditionVariableCS.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18001C830 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180021030 (RtlpWnfWalkUserSubscriptionList.c)
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     TppWorkpExecuteCallback @ 0x180022BB0 (TppWorkpExecuteCallback.c)
 *     TppCallbackEpilog @ 0x1800248E0 (TppCallbackEpilog.c)
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
 *     RtlUnlockHeap @ 0x18003FEF0 (RtlUnlockHeap.c)
 *     RtlDebugFreeHeap @ 0x18004178C (RtlDebugFreeHeap.c)
 *     RtlGetUserInfoHeap @ 0x1800423E0 (RtlGetUserInfoHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800426EC (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800428AC (RtlDebugSetUserValueHeap.c)
 *     RtlCompactHeap @ 0x180043EC0 (RtlCompactHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800446C4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800463B0 (RtlQueryProcessHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x1800469B0 (RtlpEnumProcessHeaps.c)
 *     RtlpHpHeapWalk @ 0x180047C00 (RtlpHpHeapWalk.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x18005BA20 (RtlGetFullPathName_Ustr.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180063F90 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x180064190 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800643D0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x18006471C (LdrpGetLoadAsEntry.c)
 *     LdrpCorInitialize @ 0x180065128 (LdrpCorInitialize.c)
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     LdrpSendPostSnapNotifications @ 0x1800707A0 (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x1800712E4 (LdrpSendDllNotifications.c)
 *     LdrpCheckForRetryLoading @ 0x18007234C (LdrpCheckForRetryLoading.c)
 *     RtlpCheckForSameCurdir @ 0x180078040 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x180078140 (RtlGetCurrentDirectory_U.c)
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
 *     RtlpFlushHeap @ 0x180095D3C (RtlpFlushHeap.c)
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
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D8E80 (LdrpUnlockAndDereferenceEnclave.c)
 *     RtlpSetupExtendedBlock @ 0x1800DF090 (RtlpSetupExtendedBlock.c)
 *     RtlCreateProcessParametersInternal @ 0x1800E6A30 (RtlCreateProcessParametersInternal.c)
 *     LdrpWorkCallback @ 0x1800EAD70 (LdrpWorkCallback.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800EAE54 (RtlUpdateProcessRegistryInfo.c)
 *     AVrfDllLoadNotification @ 0x1800EC804 (AVrfDllLoadNotification.c)
 *     RtlReleasePebLock @ 0x1800F4720 (RtlReleasePebLock.c)
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
 *     RtlUnlockHeapManagerForCloning @ 0x180141CA0 (RtlUnlockHeapManagerForCloning.c)
 *     RtlpUnlockHeapForClone @ 0x180142C0C (RtlpUnlockHeapForClone.c)
 *     RtlZeroHeap @ 0x180143F70 (RtlZeroHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180144A24 (RtlDebugCreateTagHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180144B18 (RtlDebugQueryTagHeap.c)
 *     RtlDebugZeroHeap @ 0x180144C14 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x1801480C0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x180148300 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1801483E0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x180148490 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1801484B0 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x18015C218 (EtwpBufferingModeFlush.c)
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015F580 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 *     LdrpCompleteProcessCloning @ 0x180160B48 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlpNotOwnerCriticalSection @ 0x180014D00 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlpWakeByAddress @ 0x180014E60 (RtlpWakeByAddress.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwCreateEvent @ 0x180162590 (ZwCreateEvent.c)
 *     ZwSetEventEx @ 0x1801650A0 (ZwSetEventEx.c)
 */

__int64 __fastcall RtlLeaveCriticalSection(__int64 a1)
{
  signed __int64 v3; // rbp
  signed __int32 v4; // r14d
  char *SchedulerSharedDataSlot; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rbx
  char *v8; // rdi
  HANDLE v9; // rdi
  unsigned int v10; // ecx
  int v11; // eax
  char *v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rbx
  int v16; // r8d
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int i; // r8d
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  int v21; // [rsp+20h] [rbp-48h]
  _QWORD v22[7]; // [rsp+30h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 12))-- != 1 )
    return 0LL;
  v3 = -1LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), -1, -2);
  if ( v4 == -2 )
  {
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      v6 = 0;
      v7 = a1 & 0x7FFFFFFFFFFFFFFCLL;
      while ( v6 < 8 )
      {
        v8 = &SchedulerSharedDataSlot[8 * v6];
        if ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) == v7 )
        {
          if ( !v8 )
            return 0LL;
          *v8 |= 2u;
          if ( v8[7] >= 0 )
            goto LABEL_46;
          goto LABEL_45;
        }
        ++v6;
      }
    }
    return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    RtlpNotOwnerCriticalSection(a1);
  v9 = *(HANDLE *)(a1 + 24);
  if ( !v9 )
  {
    Handle = (HANDLE)-1LL;
    if ( RtlpForceCSToUseEvents )
    {
      LOBYTE(v21) = 0;
      if ( (int)ZwCreateEvent(&Handle, 1048579LL, 0LL, 1LL, v21) >= 0 )
        v3 = (signed __int64)Handle;
      else
        Handle = (HANDLE)-1LL;
    }
    v9 = (HANDLE)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3, 0LL);
    if ( v9 )
    {
      if ( Handle != (HANDLE)-1LL )
        NtClose(Handle);
      Handle = v9;
    }
    else
    {
      v9 = Handle;
    }
  }
  v10 = 0;
  while ( v4 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), (v4 & 2 | 1) + v4, v4) )
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
    _m_prefetchw((const void *)(a1 + 8));
    v4 = *(_DWORD *)(a1 + 8);
  }
  if ( (v4 & 2) != 0 )
  {
    if ( v9 == (HANDLE)-1LL )
    {
      _InterlockedOr(v20, 0);
      RtlpWakeByAddress(a1 + 8, 0LL, a1);
    }
    else
    {
      v11 = ZwSetEventEx(v9, 0LL, a1);
      if ( v11 < 0 )
        RtlRaiseStatus((unsigned int)v11);
    }
  }
  v13 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v13 )
  {
    v14 = 0;
    v15 = a1 & 0x7FFFFFFFFFFFFFFCLL;
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
            v22[1] = 0LL;
            v22[0] = (v8 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
            NtSetInformationThread(-2LL, 56LL, v22);
          }
LABEL_46:
          *(_QWORD *)v8 = 0LL;
        }
        return 0LL;
      }
      ++v14;
    }
  }
  return 0LL;
}
