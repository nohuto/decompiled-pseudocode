/*
 * XREFs of SeSinglePrivilegeCheck @ 0x140858330
 * Callers:
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140292108 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     EtwpUpdateSelectedGroupMasks @ 0x1404904F4 (EtwpUpdateSelectedGroupMasks.c)
 *     SepLinkLogonSessions @ 0x1404A1A1C (SepLinkLogonSessions.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404A9208 (ExCpuSetResourceManagerAccessCheck.c)
 *     IopLoadDriverImage @ 0x1404E6A70 (IopLoadDriverImage.c)
 *     PsQueryCpuQuotaInformation @ 0x1405D8E80 (PsQueryCpuQuotaInformation.c)
 *     PsSetCpuQuotaInformation @ 0x1405D8FB8 (PsSetCpuQuotaInformation.c)
 *     SepOneWayLinkLogonSessions @ 0x1405FC0DC (SepOneWayLinkLogonSessions.c)
 *     EtwpGetPmcOwnership @ 0x1406408E0 (EtwpGetPmcOwnership.c)
 *     NtDrawText @ 0x140647B40 (NtDrawText.c)
 *     NtShutdownSystem @ 0x140647CC0 (NtShutdownSystem.c)
 *     ExPoolQueryLimits @ 0x140648408 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140648600 (ExPoolSetLimit.c)
 *     NtReplacePartitionUnit @ 0x140696650 (NtReplacePartitionUnit.c)
 *     VslTransformDumpKey @ 0x1407045EC (VslTransformDumpKey.c)
 *     NtSetInformationSymbolicLink @ 0x140738010 (NtSetInformationSymbolicLink.c)
 *     ObSetRefTraceInformation @ 0x140738AF4 (ObSetRefTraceInformation.c)
 *     NtInitiatePowerAction @ 0x140748B20 (NtInitiatePowerAction.c)
 *     PspApplyIFEOPerfOptions @ 0x140766EB8 (PspApplyIFEOPerfOptions.c)
 *     PsCreatePartition @ 0x14076AEE0 (PsCreatePartition.c)
 *     SmProcessConfigRequest @ 0x140788894 (SmProcessConfigRequest.c)
 *     SmProcessStatsRequest @ 0x1407892C8 (SmProcessStatsRequest.c)
 *     EtwpSetMark @ 0x14079ABA4 (EtwpSetMark.c)
 *     NtSetSystemTime @ 0x1407A7750 (NtSetSystemTime.c)
 *     NtDisplayString @ 0x1407A83C0 (NtDisplayString.c)
 *     ExpSetBootEntry @ 0x1407ACEAC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407AD5A4 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1407AE0E0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407AE270 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407AE400 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407AE860 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407AEB10 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407AEDE0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootOptions @ 0x1407AF0E0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407AF2C0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407AF480 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407AF7C0 (NtSetSystemEnvironmentValueEx.c)
 *     NtSetDefaultHardErrorPort @ 0x1407B0BC0 (NtSetDefaultHardErrorPort.c)
 *     ExpProfileCreate @ 0x1407B1E2C (ExpProfileCreate.c)
 *     NtSetIntervalProfile @ 0x1407B25E0 (NtSetIntervalProfile.c)
 *     NtFlushInstallUILanguage @ 0x1407B4A60 (NtFlushInstallUILanguage.c)
 *     NtCompactKeys @ 0x1407C0060 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407C02F0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x1407C04F0 (NtFreezeRegistry.c)
 *     NtInitializeRegistry @ 0x1407C05B0 (NtInitializeRegistry.c)
 *     NtQueryOpenSubKeysEx @ 0x1407C0AA0 (NtQueryOpenSubKeysEx.c)
 *     NtReplaceKey @ 0x1407C1280 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407C15D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407C1980 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x1407C1C30 (NtThawRegistry.c)
 *     MmCreateMirror @ 0x1407DC020 (MmCreateMirror.c)
 *     MmIssueMemoryListCommand @ 0x1407DDD80 (MmIssueMemoryListCommand.c)
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 *     MiAllocateAweInfo @ 0x1407E8328 (MiAllocateAweInfo.c)
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     MmManagePartitionCharges @ 0x1407ECBEC (MmManagePartitionCharges.c)
 *     MmManagePartitionCreateLargePages @ 0x1407ECE40 (MmManagePartitionCreateLargePages.c)
 *     MmManagePartitionMoveMemory @ 0x1407ED034 (MmManagePartitionMoveMemory.c)
 *     MmManagePartitionUpdateAttributes @ 0x1407ED3E4 (MmManagePartitionUpdateAttributes.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407EE868 (MiOpenSpecialPurposeMemory.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x1408198E4 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140819C24 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     NtDisableLastKnownGood @ 0x14081A9C0 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x14081AAE0 (NtEnableLastKnownGood.c)
 *     NtSerializeBoot @ 0x14081ADA0 (NtSerializeBoot.c)
 *     NtSetDebugFilterState @ 0x14081ADF0 (NtSetDebugFilterState.c)
 *     NtSetBootEntryOrder @ 0x140820520 (NtSetBootEntryOrder.c)
 *     NtTranslateFilePath @ 0x140820680 (NtTranslateFilePath.c)
 *     NtEnumerateBootEntries @ 0x140820970 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140821260 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140821EF0 (NtQuerySystemEnvironmentValueEx.c)
 *     PfSnSetPrefetcherInformation @ 0x140828AD0 (PfSnSetPrefetcherInformation.c)
 *     PsOpenThread @ 0x1408430F0 (PsOpenThread.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 *     NtCreateWnfStateName @ 0x1408973D0 (NtCreateWnfStateName.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     CmpCreateKeyBody @ 0x14089EB50 (CmpCreateKeyBody.c)
 *     NtCreateSemaphore @ 0x14089F4E0 (NtCreateSemaphore.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     PspSetProcessPriorityClass @ 0x1408BA140 (PspSetProcessPriorityClass.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     NtPlugPlayControl @ 0x1408CD560 (NtPlugPlayControl.c)
 *     PfpPrivSourceEnum @ 0x1408DED60 (PfpPrivSourceEnum.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1408E6080 (ExpWnfCheckCrossScopeAccess.c)
 *     SmSetStoreInformation @ 0x1408E8E30 (SmSetStoreInformation.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 *     MiMapViewOfSection @ 0x1408FC9F0 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     PfQuerySuperfetchInformation @ 0x140932B10 (PfQuerySuperfetchInformation.c)
 *     MiCreatePagingFileMap @ 0x14093E008 (MiCreatePagingFileMap.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14094ACCC (VrpHandleIoctlLoadDifferencingHive.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     NtCreateTokenEx @ 0x1409974A0 (NtCreateTokenEx.c)
 *     NtGetNextThread @ 0x1409BA4F0 (NtGetNextThread.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     SmProcessCreateRequest @ 0x1409C16A4 (SmProcessCreateRequest.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1409D1878 (MiIsUserQueryVmCallerTrusted.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     MiLockUnlockCommon @ 0x1409EAC40 (MiLockUnlockCommon.c)
 *     NtSetInformationVirtualMemory @ 0x1409FCFF0 (NtSetInformationVirtualMemory.c)
 *     NtSetInformationObject @ 0x1409FE700 (NtSetInformationObject.c)
 *     ExIsRestrictedCaller @ 0x140A0AFF8 (ExIsRestrictedCaller.c)
 *     SmQueryStoreInformation @ 0x140A122F8 (SmQueryStoreInformation.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     NtManageHotPatch @ 0x140A1D5D0 (NtManageHotPatch.c)
 *     NtGetNextProcess @ 0x140A32180 (NtGetNextProcess.c)
 *     PfSnQueryPrefetcherInformation @ 0x140A3F3AC (PfSnQueryPrefetcherInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 *     MmProcessWorkingSetControl @ 0x140A4A36C (MmProcessWorkingSetControl.c)
 *     ExpRaiseHardError @ 0x140A4C224 (ExpRaiseHardError.c)
 *     NtSystemDebugControl @ 0x140A53910 (NtSystemDebugControl.c)
 *     NtSaveKeyEx @ 0x140A6BD80 (NtSaveKeyEx.c)
 *     NtMakePermanentObject @ 0x140A7D110 (NtMakePermanentObject.c)
 *     NtQueryBootOptions @ 0x140A937F0 (NtQueryBootOptions.c)
 *     IopUnloadDriver @ 0x140AA3F28 (IopUnloadDriver.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 *     NtFilterBootOption @ 0x140ACE260 (NtFilterBootOption.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 *     NtSetSystemPowerState @ 0x140B4F250 (NtSetSystemPowerState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x140400B10 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14089FC40 (SepAdtPrivilegedServiceAuditAlarm.c)
 */

BOOLEAN __stdcall SeSinglePrivilegeCheck(LUID PrivilegeValue, KPROCESSOR_MODE PreviousMode)
{
  _QWORD **ClientToken; // rbx
  unsigned int v5; // esi
  char v6; // al
  char v7; // r14
  __int64 PrimaryToken; // rdi
  _QWORD **v9; // rcx
  void *v10; // r15
  _KPROCESS *Process; // rdx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v13; // rtt
  PSE_EXPORTS v15; // r13
  int v16; // r10d
  LUID *v17; // r8
  __int64 v18; // r9
  __int64 **v19; // rcx
  __int64 *v20; // rax
  LUID *v21; // rcx
  __int64 v22; // r8
  LUID **v23; // rdx
  LUID *v24; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+48h] [rbp-9h] BYREF
  _DWORD v26[2]; // [rsp+68h] [rbp+17h] BYREF
  LUID v27; // [rsp+70h] [rbp+1Fh] BYREF
  int v28; // [rsp+78h] [rbp+27h]

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  v27 = PrivilegeValue;
  ClientToken = (_QWORD **)SubjectContext.ClientToken;
  v5 = 1;
  v26[0] = 1;
  v26[1] = 1;
  v28 = 0;
  if ( !PreviousMode )
  {
    PrimaryToken = (__int64)SubjectContext.PrimaryToken;
    v7 = 1;
    goto LABEL_8;
  }
  if ( SubjectContext.ClientToken )
  {
    if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
    {
      v7 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    ClientToken = (_QWORD **)SubjectContext.PrimaryToken;
  }
  v6 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v27, 1u, 1, PreviousMode);
  ClientToken = (_QWORD **)SubjectContext.ClientToken;
  v7 = v6;
  v5 = v26[0];
LABEL_5:
  PrimaryToken = (__int64)SubjectContext.PrimaryToken;
  v9 = (_QWORD **)SubjectContext.PrimaryToken;
  if ( ClientToken )
    v9 = ClientToken;
  v10 = (void *)*v9[19];
  if ( !RtlEqualSid(SeLocalSystemSid, v10) )
  {
    v15 = SeExports;
    if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v10) && !RtlEqualSid(v15->SeLocalServiceSid, v10) )
      goto LABEL_19;
    v16 = 0;
    if ( v5 )
    {
      v17 = &v27;
      v18 = v5;
      do
      {
        v19 = SepFilterPrivileges;
        v20 = *SepFilterPrivileges;
        while ( v17->LowPart != *(_DWORD *)v20 || v17->HighPart != *((_DWORD *)v20 + 1) )
        {
          v20 = v19[1];
          ++v19;
          if ( !v20 )
            goto LABEL_31;
        }
        ++v16;
LABEL_31:
        v17 = (LUID *)((char *)v17 + 12);
        --v18;
      }
      while ( v18 );
      v21 = &v27;
      v22 = v5;
      do
      {
        v23 = &SepServicesFilterPrivileges;
        v24 = SepServicesFilterPrivileges;
        while ( v21->LowPart != v24->LowPart || v21->HighPart != v24->HighPart )
        {
          v24 = v23[1];
          ++v23;
          if ( !v24 )
            goto LABEL_36;
        }
        ++v16;
LABEL_36:
        v21 = (LUID *)((char *)v21 + 12);
        --v22;
      }
      while ( v22 );
      if ( v16 != v5 )
      {
LABEL_19:
        SepAdtPrivilegedServiceAuditAlarm(
          (unsigned int)&SubjectContext,
          (unsigned int)&SeSubsystemName,
          0,
          (_DWORD)ClientToken,
          PrimaryToken,
          (__int64)v26,
          v7);
        PrimaryToken = (__int64)SubjectContext.PrimaryToken;
        ClientToken = (_QWORD **)SubjectContext.ClientToken;
      }
    }
  }
LABEL_8:
  if ( SeTokenLeakTracking )
  {
    if ( PrimaryToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(PrimaryToken + 1144) + 284LL));
      PrimaryToken = (__int64)SubjectContext.PrimaryToken;
      if ( SubjectContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
      ClientToken = (_QWORD **)SubjectContext.ClientToken;
    }
    if ( ClientToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)ClientToken[143] + 71);
      if ( SubjectContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
      PrimaryToken = (__int64)SubjectContext.PrimaryToken;
    }
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&Process[1].ActiveProcessors);
  ActiveProcessors = (signed __int64)Process[1].ActiveProcessors;
  do
  {
    if ( (PrimaryToken ^ (unsigned __int64)ActiveProcessors) >= 0xF )
    {
      ObfDereferenceObjectWithTag((PVOID)PrimaryToken, 0x75536553u);
      goto LABEL_14;
    }
    v13 = ActiveProcessors;
    ActiveProcessors = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&Process[1].ActiveProcessors,
                         ActiveProcessors + 1,
                         ActiveProcessors);
  }
  while ( v13 != ActiveProcessors );
  if ( ObpTraceFlags )
    ObpPushStackInfo(PrimaryToken - 48, 0, 1u, 0x75536553u);
LABEL_14:
  SubjectContext.PrimaryToken = 0LL;
  if ( SubjectContext.ClientToken )
    ObfDereferenceObjectWithTag(SubjectContext.ClientToken, 0x75536553u);
  return v7;
}
