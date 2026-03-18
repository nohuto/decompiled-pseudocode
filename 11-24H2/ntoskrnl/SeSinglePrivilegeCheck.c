/*
 * XREFs of SeSinglePrivilegeCheck @ 0x140853E90
 * Callers:
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140355988 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     EtwpUpdateSelectedGroupMasks @ 0x14048FBCC (EtwpUpdateSelectedGroupMasks.c)
 *     SepLinkLogonSessions @ 0x1404A1250 (SepLinkLogonSessions.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404AA1D4 (ExCpuSetResourceManagerAccessCheck.c)
 *     IopLoadDriverImage @ 0x1404E691C (IopLoadDriverImage.c)
 *     PsQueryCpuQuotaInformation @ 0x1405E4E1C (PsQueryCpuQuotaInformation.c)
 *     PsSetCpuQuotaInformation @ 0x1405E4F54 (PsSetCpuQuotaInformation.c)
 *     SepOneWayLinkLogonSessions @ 0x1406083E4 (SepOneWayLinkLogonSessions.c)
 *     EtwpGetPmcOwnership @ 0x14064C900 (EtwpGetPmcOwnership.c)
 *     NtDrawText @ 0x140653A40 (NtDrawText.c)
 *     NtShutdownSystem @ 0x140653BC0 (NtShutdownSystem.c)
 *     ExPoolQueryLimits @ 0x140654308 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140654500 (ExPoolSetLimit.c)
 *     NtReplacePartitionUnit @ 0x1406A1830 (NtReplacePartitionUnit.c)
 *     VslTransformDumpKey @ 0x1407106EC (VslTransformDumpKey.c)
 *     NtSetInformationSymbolicLink @ 0x140744030 (NtSetInformationSymbolicLink.c)
 *     ObSetRefTraceInformation @ 0x140744B14 (ObSetRefTraceInformation.c)
 *     NtInitiatePowerAction @ 0x140754BF0 (NtInitiatePowerAction.c)
 *     PspApplyIFEOPerfOptions @ 0x140776888 (PspApplyIFEOPerfOptions.c)
 *     PsCreatePartition @ 0x14077AA80 (PsCreatePartition.c)
 *     SmProcessConfigRequest @ 0x140797C64 (SmProcessConfigRequest.c)
 *     SmProcessStatsRequest @ 0x140798698 (SmProcessStatsRequest.c)
 *     EtwpSetMark @ 0x1407A9F74 (EtwpSetMark.c)
 *     NtSetSystemTime @ 0x1407B6BF0 (NtSetSystemTime.c)
 *     NtDisplayString @ 0x1407B7870 (NtDisplayString.c)
 *     ExpSetBootEntry @ 0x1407BC32C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCA24 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1407BD8B0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407BDA40 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407BDBD0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407BE030 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407BE2E0 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BE5B0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootOptions @ 0x1407BE8B0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407BEA90 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407BEC50 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407BEF90 (NtSetSystemEnvironmentValueEx.c)
 *     NtSetDefaultHardErrorPort @ 0x1407C0390 (NtSetDefaultHardErrorPort.c)
 *     NtFlushInstallUILanguage @ 0x1407C2F70 (NtFlushInstallUILanguage.c)
 *     ExpProfileCreate @ 0x1407C3C30 (ExpProfileCreate.c)
 *     NtSetIntervalProfile @ 0x1407C43E0 (NtSetIntervalProfile.c)
 *     NtCompactKeys @ 0x1407CF750 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407CF9F0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x1407CFBF0 (NtFreezeRegistry.c)
 *     NtInitializeRegistry @ 0x1407CFCB0 (NtInitializeRegistry.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D01B0 (NtQueryOpenSubKeysEx.c)
 *     NtReplaceKey @ 0x1407D0990 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407D0CE0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407D1090 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x1407D1340 (NtThawRegistry.c)
 *     MmCreateMirror @ 0x1407EBEC0 (MmCreateMirror.c)
 *     MmIssueMemoryListCommand @ 0x1407EDC20 (MmIssueMemoryListCommand.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     MiAllocateAweInfo @ 0x1407F81B8 (MiAllocateAweInfo.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     MmManagePartitionCharges @ 0x1407FCA7C (MmManagePartitionCharges.c)
 *     MmManagePartitionCreateLargePages @ 0x1407FCCD0 (MmManagePartitionCreateLargePages.c)
 *     MmManagePartitionMoveMemory @ 0x1407FCEC4 (MmManagePartitionMoveMemory.c)
 *     MmManagePartitionUpdateAttributes @ 0x1407FD274 (MmManagePartitionUpdateAttributes.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407FE6F8 (MiOpenSpecialPurposeMemory.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x1408296E4 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140829A24 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     NtDisableLastKnownGood @ 0x14082A700 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x14082A820 (NtEnableLastKnownGood.c)
 *     NtSerializeBoot @ 0x14082AAE0 (NtSerializeBoot.c)
 *     NtSetDebugFilterState @ 0x14082AB30 (NtSetDebugFilterState.c)
 *     NtCreateWnfStateName @ 0x140836950 (NtCreateWnfStateName.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083DDC0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083E100 (CmpCreateKeyBody.c)
 *     NtCreateMutant @ 0x14083E8C0 (NtCreateMutant.c)
 *     PsOpenThread @ 0x14083F680 (PsOpenThread.c)
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1408AE824 (ExpWnfCheckCrossScopeAccess.c)
 *     NtPlugPlayControl @ 0x1408CFA10 (NtPlugPlayControl.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 *     NtGetNextProcess @ 0x1408EFDC0 (NtGetNextProcess.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     PspSetProcessPriorityClass @ 0x140913B0C (PspSetProcessPriorityClass.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14092A298 (VrpHandleIoctlLoadDifferencingHive.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 *     PfQuerySuperfetchInformation @ 0x140933148 (PfQuerySuperfetchInformation.c)
 *     NtCreateTokenEx @ 0x140936AB0 (NtCreateTokenEx.c)
 *     NtGetNextThread @ 0x14093B590 (NtGetNextThread.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PfSnSetPrefetcherInformation @ 0x14096308C (PfSnSetPrefetcherInformation.c)
 *     NtSetBootEntryOrder @ 0x140964DF0 (NtSetBootEntryOrder.c)
 *     NtTranslateFilePath @ 0x140964F50 (NtTranslateFilePath.c)
 *     NtEnumerateBootEntries @ 0x140965240 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140965B30 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1409667C0 (NtQuerySystemEnvironmentValueEx.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140987584 (MiIsUserQueryVmCallerTrusted.c)
 *     PspSetQuotaLimits @ 0x1409AFD58 (PspSetQuotaLimits.c)
 *     MiLockUnlockCommon @ 0x1409E3730 (MiLockUnlockCommon.c)
 *     NtSetInformationVirtualMemory @ 0x1409E8FB0 (NtSetInformationVirtualMemory.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     NtSetInformationObject @ 0x1409FB980 (NtSetInformationObject.c)
 *     ExIsRestrictedCaller @ 0x140A14B1C (ExIsRestrictedCaller.c)
 *     SmQueryStoreInformation @ 0x140A18DA0 (SmQueryStoreInformation.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     SmProcessCreateRequest @ 0x140A42DD4 (SmProcessCreateRequest.c)
 *     PfSnQueryPrefetcherInformation @ 0x140A43C78 (PfSnQueryPrefetcherInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 *     MmProcessWorkingSetControl @ 0x140A4C914 (MmProcessWorkingSetControl.c)
 *     ExpRaiseHardError @ 0x140A4E894 (ExpRaiseHardError.c)
 *     NtSystemDebugControl @ 0x140A571F0 (NtSystemDebugControl.c)
 *     SmSetStoreInformation @ 0x140A5F8F0 (SmSetStoreInformation.c)
 *     NtSaveKeyEx @ 0x140A6DF30 (NtSaveKeyEx.c)
 *     NtMakePermanentObject @ 0x140A80770 (NtMakePermanentObject.c)
 *     NtQueryBootOptions @ 0x140A97A60 (NtQueryBootOptions.c)
 *     IopUnloadDriver @ 0x140AA8FB8 (IopUnloadDriver.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 *     NtFilterBootOption @ 0x140AD8E50 (NtFilterBootOption.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 *     NtManageHotPatch @ 0x140AE7000 (NtManageHotPatch.c)
 *     NtSetSystemPowerState @ 0x140B5F390 (NtSetSystemPowerState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x140403670 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140853560 (SepAdtPrivilegedServiceAuditAlarm.c)
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
  unsigned int v26[2]; // [rsp+68h] [rbp+17h] BYREF
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
          &SubjectContext,
          &SeSubsystemName,
          0LL,
          (__int64)ClientToken,
          PrimaryToken,
          v26,
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
