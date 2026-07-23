/*
 * XREFs of SeSinglePrivilegeCheck @ 0x140850150
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B5184 (ExCpuSetResourceManagerAccessCheck.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140422764 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     EtwpUpdateSelectedGroupMasks @ 0x14048A210 (EtwpUpdateSelectedGroupMasks.c)
 *     SepLinkLogonSessions @ 0x14049BAB0 (SepLinkLogonSessions.c)
 *     IopLoadDriverImage @ 0x1404DD018 (IopLoadDriverImage.c)
 *     PsQueryCpuQuotaInformation @ 0x1405E2344 (PsQueryCpuQuotaInformation.c)
 *     PsSetCpuQuotaInformation @ 0x1405E247C (PsSetCpuQuotaInformation.c)
 *     SepOneWayLinkLogonSessions @ 0x140605AE8 (SepOneWayLinkLogonSessions.c)
 *     EtwpGetPmcOwnership @ 0x14064AF10 (EtwpGetPmcOwnership.c)
 *     NtDrawText @ 0x1406521A0 (NtDrawText.c)
 *     NtShutdownSystem @ 0x140652320 (NtShutdownSystem.c)
 *     ExPoolQueryLimits @ 0x140652A00 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140652BF8 (ExPoolSetLimit.c)
 *     NtReplacePartitionUnit @ 0x1406A2880 (NtReplacePartitionUnit.c)
 *     VslTransformDumpKey @ 0x14070E27C (VslTransformDumpKey.c)
 *     NtSetInformationSymbolicLink @ 0x140741F60 (NtSetInformationSymbolicLink.c)
 *     ObSetRefTraceInformation @ 0x140742E04 (ObSetRefTraceInformation.c)
 *     NtInitiatePowerAction @ 0x140752F10 (NtInitiatePowerAction.c)
 *     PspApplyIFEOPerfOptions @ 0x140776AA8 (PspApplyIFEOPerfOptions.c)
 *     PsCreatePartition @ 0x14077A930 (PsCreatePartition.c)
 *     SmProcessConfigRequest @ 0x140797D74 (SmProcessConfigRequest.c)
 *     SmProcessStatsRequest @ 0x1407987A8 (SmProcessStatsRequest.c)
 *     EtwpSetMark @ 0x1407AA0B4 (EtwpSetMark.c)
 *     NtSetSystemTime @ 0x1407B7040 (NtSetSystemTime.c)
 *     NtDisplayString @ 0x1407B7CC0 (NtDisplayString.c)
 *     ExpSetBootEntry @ 0x1407BC77C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCE74 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1407BDD00 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407BDE90 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x1407BE020 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407BE480 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x1407BE730 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BEA00 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootOptions @ 0x1407BED00 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407BEEE0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407BF0A0 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407BF3E0 (NtSetSystemEnvironmentValueEx.c)
 *     NtSetDefaultHardErrorPort @ 0x1407C07E0 (NtSetDefaultHardErrorPort.c)
 *     ExpProfileCreate @ 0x1407C1A4C (ExpProfileCreate.c)
 *     NtSetIntervalProfile @ 0x1407C2200 (NtSetIntervalProfile.c)
 *     NtFlushInstallUILanguage @ 0x1407C41A0 (NtFlushInstallUILanguage.c)
 *     NtCompactKeys @ 0x1407CFC40 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1407CFEE0 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x1407D00E0 (NtFreezeRegistry.c)
 *     NtInitializeRegistry @ 0x1407D01A0 (NtInitializeRegistry.c)
 *     NtQueryOpenSubKeysEx @ 0x1407D06A0 (NtQueryOpenSubKeysEx.c)
 *     NtReplaceKey @ 0x1407D0E80 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1407D11D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407D1580 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x1407D1830 (NtThawRegistry.c)
 *     MmCreateMirror @ 0x1407EC490 (MmCreateMirror.c)
 *     MmIssueMemoryListCommand @ 0x1407EE1F0 (MmIssueMemoryListCommand.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     MiAllocateAweInfo @ 0x1407F8928 (MiAllocateAweInfo.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     MmManagePartitionCharges @ 0x1407FD1EC (MmManagePartitionCharges.c)
 *     MmManagePartitionCreateLargePages @ 0x1407FD440 (MmManagePartitionCreateLargePages.c)
 *     MmManagePartitionMoveMemory @ 0x1407FD634 (MmManagePartitionMoveMemory.c)
 *     MmManagePartitionUpdateAttributes @ 0x1407FD9E4 (MmManagePartitionUpdateAttributes.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407FEE68 (MiOpenSpecialPurposeMemory.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140829F14 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14082A254 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     NtDisableLastKnownGood @ 0x14082AF30 (NtDisableLastKnownGood.c)
 *     NtEnableLastKnownGood @ 0x14082B050 (NtEnableLastKnownGood.c)
 *     NtSerializeBoot @ 0x14082B310 (NtSerializeBoot.c)
 *     NtSetDebugFilterState @ 0x14082B360 (NtSetDebugFilterState.c)
 *     NtCreateWnfStateName @ 0x1408340B0 (NtCreateWnfStateName.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     NtCreateSemaphore @ 0x14083A3C0 (NtCreateSemaphore.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     NtCreateMutant @ 0x14083AEC0 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x14083B1F0 (NtCreateWaitCompletionPacket.c)
 *     PsOpenThread @ 0x14083B940 (PsOpenThread.c)
 *     PfpPrivSourceEnum @ 0x14085F9A0 (PfpPrivSourceEnum.c)
 *     NtGetNextProcess @ 0x1408615C0 (NtGetNextProcess.c)
 *     MiMapViewOfSection @ 0x1408A2840 (MiMapViewOfSection.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     NtPlugPlayControl @ 0x1408CD400 (NtPlugPlayControl.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     PspSetProcessPriorityClass @ 0x1408EB3D4 (PspSetProcessPriorityClass.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 *     PfQuerySuperfetchInformation @ 0x1408F5C60 (PfQuerySuperfetchInformation.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140904A84 (ExpWnfCheckCrossScopeAccess.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14092C3D8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     PfSnSetPrefetcherInformation @ 0x14094AB4C (PfSnSetPrefetcherInformation.c)
 *     NtSetBootEntryOrder @ 0x14094D880 (NtSetBootEntryOrder.c)
 *     NtTranslateFilePath @ 0x14094D9E0 (NtTranslateFilePath.c)
 *     NtEnumerateBootEntries @ 0x14094DCD0 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x14094E5C0 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14094F250 (NtQuerySystemEnvironmentValueEx.c)
 *     NtCreateTokenEx @ 0x140983E20 (NtCreateTokenEx.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 *     MiLockUnlockCommon @ 0x1409DE190 (MiLockUnlockCommon.c)
 *     NtSetInformationVirtualMemory @ 0x1409E3F70 (NtSetInformationVirtualMemory.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     NtSetInformationObject @ 0x1409F46C0 (NtSetInformationObject.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     ExIsRestrictedCaller @ 0x140A0DA38 (ExIsRestrictedCaller.c)
 *     SmQueryStoreInformation @ 0x140A11F10 (SmQueryStoreInformation.c)
 *     NtGetNextThread @ 0x140A1A3A0 (NtGetNextThread.c)
 *     SmProcessCreateRequest @ 0x140A38664 (SmProcessCreateRequest.c)
 *     PfSnQueryPrefetcherInformation @ 0x140A39508 (PfSnQueryPrefetcherInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 *     MmProcessWorkingSetControl @ 0x140A434A4 (MmProcessWorkingSetControl.c)
 *     ExpRaiseHardError @ 0x140A45514 (ExpRaiseHardError.c)
 *     NtSystemDebugControl @ 0x140A4F080 (NtSystemDebugControl.c)
 *     SmSetStoreInformation @ 0x140A57E40 (SmSetStoreInformation.c)
 *     NtSaveKeyEx @ 0x140A67430 (NtSaveKeyEx.c)
 *     NtMakePermanentObject @ 0x140A7B1D0 (NtMakePermanentObject.c)
 *     NtQueryBootOptions @ 0x140A942B0 (NtQueryBootOptions.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     NtFilterBootOption @ 0x140AD74D0 (NtFilterBootOption.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 *     NtSetSystemPowerState @ 0x140B61410 (NtSetSystemPowerState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x1403FE430 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
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
