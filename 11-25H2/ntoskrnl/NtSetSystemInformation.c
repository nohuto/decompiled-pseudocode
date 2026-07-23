/*
 * XREFs of NtSetSystemInformation @ 0x1408E97E0
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140C2B87C (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ExpUpdateTimerConfiguration @ 0x1402772AC (ExpUpdateTimerConfiguration.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     MiGetThreadPartition @ 0x14043B2D0 (MiGetThreadPartition.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     RtlCheckTokenMembership @ 0x140472D90 (RtlCheckTokenMembership.c)
 *     KeModifySystemAllowedCpuSets @ 0x14049176C (KeModifySystemAllowedCpuSets.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404A9208 (ExCpuSetResourceManagerAccessCheck.c)
 *     VslProvisionDumpEncryption @ 0x14058A314 (VslProvisionDumpEncryption.c)
 *     IoConfigureCrashDump @ 0x14058D584 (IoConfigureCrashDump.c)
 *     IoProvisionCrashDumpKey @ 0x14058E4C0 (IoProvisionCrashDumpKey.c)
 *     KdUpdateTimeSlipEvent @ 0x1405AC28C (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x1405ACE6C (KeProcessorProfileControlArea.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405B0FEC (KeUpdateDpcWatchdogConfiguration.c)
 *     KeSetTagCpuSets @ 0x1405BBEBC (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x1405C0100 (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x1405D8FB8 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x1405D9420 (PsSetExeModerationState.c)
 *     VfVolatileApplyDifVerification @ 0x1406088A4 (VfVolatileApplyDifVerification.c)
 *     VfVolatileClearDifRuleClass @ 0x140608910 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileRemoveDifVerification @ 0x140608A20 (VfVolatileRemoveDifVerification.c)
 *     VfVolatileSetDifRuleClass @ 0x140608AD4 (VfVolatileSetDifRuleClass.c)
 *     ExpSetBootLoaderMetadata @ 0x1406470C8 (ExpSetBootLoaderMetadata.c)
 *     ExpSetSoftRebootFlags @ 0x14064720C (ExpSetSoftRebootFlags.c)
 *     ExPoolSetLimit @ 0x140648600 (ExPoolSetLimit.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwLoadDriver @ 0x14069D300 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x14069E8C0 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x14069EC60 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     HvlQuerySetBootPagesInfo @ 0x140702C1C (HvlQuerySetBootPagesInfo.c)
 *     VslRelaxQuotas @ 0x140704114 (VslRelaxQuotas.c)
 *     PnpIommuBlockUnblockDevice @ 0x140729F28 (PnpIommuBlockUnblockDevice.c)
 *     KeInitializeEntropySystem @ 0x1407315DC (KeInitializeEntropySystem.c)
 *     ObSetRefTraceInformation @ 0x140738AF4 (ObSetRefTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x1407A5834 (ExpQueryElamCertInfo.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407A61B0 (ExpRegisterFirmwareTableInformationHandler.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x1407A633C (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1407A63A4 (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x1407A66E4 (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x1407A6B5C (ExSetLeapSecondEnabled.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407B8FBC (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x1407C2ABC (CmSetRegistryQuotaInformation.c)
 *     CmUpdateFeatureConfiguration @ 0x1407C64D0 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x1407C6738 (CmUpdateFeatureUsageSubscription.c)
 *     CmReconcileAndValidateAllHives @ 0x1407C86CC (CmReconcileAndValidateAllHives.c)
 *     MmCreateMirror @ 0x1407DC020 (MmCreateMirror.c)
 *     MmIssueMemoryListCommand @ 0x1407DDD80 (MmIssueMemoryListCommand.c)
 *     MmScrubMemory @ 0x1407EDDE0 (MmScrubMemory.c)
 *     PfSnSetPrefetcherInformation @ 0x140828AD0 (PfSnSetPrefetcherInformation.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SmSetStoreInformation @ 0x1408E8E30 (SmSetStoreInformation.c)
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 *     PsInvokeWin32Callout @ 0x140961150 (PsInvokeWin32Callout.c)
 *     MmLoadSystemImage @ 0x1409AFC50 (MmLoadSystemImage.c)
 *     PsChangeQuantumTable @ 0x1409C0FF8 (PsChangeQuantumTable.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409CCD20 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409CCD84 (ExReleaseTimeRefreshLockExclusive.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140A04848 (KeSynchronizeWithDynamicProcessors.c)
 *     sub_140A048EC @ 0x140A048EC (sub_140A048EC.c)
 *     PsLookupProcessThreadByCid @ 0x140A231A0 (PsLookupProcessThreadByCid.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A3F778 (EtwSetPerformanceTraceInformation.c)
 *     DbgkRegisterErrorPort @ 0x140A80BEC (DbgkRegisterErrorPort.c)
 *     MmUnloadSystemImage @ 0x140A86260 (MmUnloadSystemImage.c)
 *     ExpInitializeSessionDriver @ 0x140A89438 (ExpInitializeSessionDriver.c)
 *     MiCombineIdenticalPages @ 0x140A961D0 (MiCombineIdenticalPages.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     VfFreeCapturedUnicodeString @ 0x140B72E84 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140B72FEC (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140B73028 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfPtGenerateTraceInformation @ 0x140B7BF8C (VfPtGenerateTraceInformation.c)
 *     VfFaultsSetParameters @ 0x140B86814 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x140B8C34C (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x140B8C4F4 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140B8C51C (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140B8C654 (VfSetVerifierInformationEx.c)
 *     BgkSetBootGraphicsInformation @ 0x140BA0424 (BgkSetBootGraphicsInformation.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  size_t v3; // r15
  unsigned __int64 v4; // r14
  SYSTEM_INFORMATION_CLASS v5; // ebx
  __int64 v6; // rsi
  int v7; // r13d
  __int64 v8; // r9
  BOOLEAN PreviousMode; // r12
  int updated; // edi
  NTSTATUS result; // eax
  __int64 v13; // rax
  int v14; // ebx
  __int32 v15; // ebx
  __int32 v16; // ebx
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  int v20; // ebx
  __int32 v21; // ebx
  __int32 v22; // ebx
  __int32 v23; // ebx
  int v24; // ebx
  int v25; // ebx
  ULONG ActiveProcessorCount; // eax
  __int64 *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // r9
  __int32 v33; // ebx
  __int32 v34; // ebx
  __int32 v35; // ebx
  int v36; // ebx
  __int64 v37; // rcx
  char *v38; // rbx
  PIMAGE_NT_HEADERS v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // ecx
  __int64 v43; // rcx
  int v44; // ecx
  __int64 v45; // rcx
  PVOID v46; // rcx
  __int32 v47; // ebx
  int v48; // eax
  int v49; // ebx
  char v50; // r15
  int SystemImage; // eax
  char *v52; // rbx
  PVOID v53; // r12
  PIMAGE_NT_HEADERS v54; // rax
  char *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  _KPROCESS *v58; // rcx
  __int16 v59; // ax
  __int64 v60; // rax
  _KPROCESS *v61; // rbx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r8
  __int64 v65; // r9
  NTSTATUS v66; // ebx
  __m128i *v67; // rcx
  __int32 v68; // ebx
  __int32 v69; // ebx
  __int32 v70; // ebx
  __int32 v71; // ebx
  int v72; // ebx
  __int64 ThreadPartition; // rax
  __int64 v74; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v76; // rax
  __int64 *v77; // rdi
  __int32 v79; // ebx
  __int32 v80; // ebx
  __int32 v81; // ebx
  int v82; // ebx
  int v83; // r15d
  char v84; // bl
  struct _LIST_ENTRY **p_Blink; // rdi
  unsigned __int16 v86; // bx
  const void *v87; // rdi
  char *v88; // rcx
  void *Pool2; // rax
  void *v90; // r14
  __int64 v91; // r8
  int v92; // r15d
  int v93; // r9d
  _BYTE *v94; // rdx
  ULONG v95; // r15d
  __int64 v96; // rbx
  _KPROCESS *Process; // rbx
  ULONG v98; // r15d
  unsigned __int64 v99; // rbx
  __int32 v100; // ebx
  __int64 v101; // rcx
  __int32 v102; // ebx
  __int32 v103; // ebx
  __int32 v104; // ebx
  char Object; // [rsp+20h] [rbp-5C8h]
  char v106; // [rsp+30h] [rbp-5B8h] BYREF
  BOOLEAN IsMember[9]; // [rsp+31h] [rbp-5B7h] BYREF
  char v108[30]; // [rsp+3Ah] [rbp-5AEh] BYREF
  LUID PrivilegeValue; // [rsp+58h] [rbp-590h]
  int SessionId; // [rsp+64h] [rbp-584h] BYREF
  void *Buf1[2]; // [rsp+68h] [rbp-580h] BYREF
  PVOID v113; // [rsp+78h] [rbp-570h] BYREF
  int v114; // [rsp+80h] [rbp-568h]
  int v115; // [rsp+84h] [rbp-564h]
  unsigned __int64 v116; // [rsp+88h] [rbp-560h] BYREF
  int v117; // [rsp+90h] [rbp-558h]
  PVOID BaseOfImage; // [rsp+98h] [rbp-550h] BYREF
  __int64 v119; // [rsp+A0h] [rbp-548h] BYREF
  PVOID v120; // [rsp+A8h] [rbp-540h] BYREF
  __int64 v121; // [rsp+B0h] [rbp-538h] BYREF
  __int64 v122; // [rsp+B8h] [rbp-530h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+C0h] [rbp-528h] BYREF
  void *Src[2]; // [rsp+D0h] [rbp-518h]
  int v125; // [rsp+E0h] [rbp-508h]
  int v126; // [rsp+E4h] [rbp-504h]
  int v127; // [rsp+ECh] [rbp-4FCh]
  HANDLE v128; // [rsp+158h] [rbp-490h]
  __int64 v129; // [rsp+1D0h] [rbp-418h]
  __int128 v130; // [rsp+1F0h] [rbp-3F8h]
  __int128 v131; // [rsp+218h] [rbp-3D0h] BYREF
  _KPROCESS *v132; // [rsp+228h] [rbp-3C0h]
  UNICODE_STRING v133; // [rsp+230h] [rbp-3B8h] BYREF
  HANDLE v134; // [rsp+240h] [rbp-3A8h]
  __int64 v135; // [rsp+268h] [rbp-380h]
  __m128i v136; // [rsp+270h] [rbp-378h] BYREF
  __int128 v137; // [rsp+280h] [rbp-368h] BYREF
  __int128 v138; // [rsp+290h] [rbp-358h]
  _BYTE v139[256]; // [rsp+2A0h] [rbp-348h] BYREF
  _BYTE v140[256]; // [rsp+3A0h] [rbp-248h] BYREF
  _BYTE v141[256]; // [rsp+4A0h] [rbp-148h] BYREF

  v3 = SystemInformationLength;
  v4 = (unsigned __int64)SystemInformation;
  v5 = SystemInformationClass;
  v133 = 0LL;
  v6 = 0LL;
  v106 = 0;
  *(_OWORD *)Buf1 = 0LL;
  BaseOfImage = 0LL;
  v7 = 1;
  v8 = 1LL;
  v122 = 0LL;
  v121 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v116 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  IsMember[8] = PreviousMode;
  if ( PreviousMode )
  {
    if ( SystemInformationClass == SystemErrorPortInformation )
    {
      v13 = 1LL;
    }
    else if ( SystemInformationClass != SystemSoftRebootInformation || (v13 = 0LL, SystemInformationLength != 1) )
    {
      v13 = 3LL;
    }
    if ( SystemInformationLength )
    {
      if ( ((unsigned __int64)SystemInformation & v13) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_QWORD *)&SystemInformationClass = (char *)SystemInformation + SystemInformationLength;
    }
  }
  updated = 0;
  if ( v5 > SystemCpuQuotaInformation )
  {
    if ( v5 > SystemSecureDumpEncryptionInformation )
    {
      if ( v5 > SystemPoolLimitInformation )
      {
        if ( v5 > SystemIommuStateInformation )
        {
          v102 = v5 - 235;
          if ( !v102 )
            return HvlQuerySetBootPagesInfo(SystemInformation, SystemInformationLength, PreviousMode, 0, 0LL);
          v103 = v102 - 8;
          if ( !v103 )
            return -1073741637;
          v104 = v103 - 2;
          if ( !v104 )
          {
            if ( SystemInformationLength != 4 )
              return -1073741820;
            if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            {
              ExResourceTimeoutCount = (*(_DWORD *)v4 + 3999) / 0xFA0u;
              return updated;
            }
            return -1073741727;
          }
          if ( v104 != 1 )
            return -1073741821;
          if ( SystemInformationLength == 4 )
          {
            if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            {
              PspBreakOnContextUnwindFailure = *(_DWORD *)v4;
              return 0;
            }
            return -1073741727;
          }
          return -1073741820;
        }
        if ( v5 == SystemIommuStateInformation )
          return PnpIommuBlockUnblockDevice((__int64)SystemInformation, SystemInformationLength);
        if ( v5 != SystemCodeIntegrityAddDynamicStore && v5 != SystemCodeIntegrityClearDynamicStores )
        {
          if ( v5 == SystemDifPoolTrackingInformation )
          {
            if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            {
              LOBYTE(v101) = (_DWORD)v3 == 0;
              return VfPtGenerateTraceInformation(v101);
            }
          }
          else
          {
            if ( (unsigned int)(v5 - 228) > 1 )
              return -1073741821;
            IsMember[0] = 0;
            if ( RtlCheckTokenMembership(0LL, SeAliasAdminsSid, IsMember) >= 0 && IsMember[0] )
              return KeUpdateDpcWatchdogConfiguration((void *)v4, (unsigned int)v3);
          }
          return -1073741727;
        }
      }
      else
      {
        if ( v5 == SystemPoolLimitInformation )
          return ExPoolSetLimit(SystemInformation, SystemInformationLength, PreviousMode);
        if ( v5 > SystemFeatureUsageSubscriptionInformation )
        {
          if ( v5 == SystemDifSetRuleClassInformation )
          {
            if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return VfVolatileSetDifRuleClass((void *)v4, (unsigned int)v3);
            return -1073741790;
          }
          if ( v5 == SystemDifClearRuleClassInformation )
          {
            if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return VfVolatileClearDifRuleClass();
            return -1073741790;
          }
          if ( (unsigned int)(v5 - 219) > 1 )
            return -1073741821;
          if ( SystemInformationLength != 16 )
            return -1073741820;
          if ( !PreviousMode )
            goto LABEL_429;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
          if ( result < 0 )
            return result;
          v4 = (unsigned __int64)Buf1;
          if ( LOWORD(Buf1[0]) )
          {
LABEL_429:
            v100 = v5 - 219;
            if ( !v100 )
            {
              v48 = VfVolatileApplyDifVerification(v4);
              goto LABEL_434;
            }
            if ( v100 == 1 )
            {
              v48 = VfVolatileRemoveDifVerification((const UNICODE_STRING *)v4);
              goto LABEL_434;
            }
            goto LABEL_432;
          }
          return -1073741585;
        }
        if ( v5 == SystemFeatureUsageSubscriptionInformation )
          return CmUpdateFeatureUsageSubscription(SystemInformation, SystemInformationLength, PreviousMode);
        if ( v5 != SystemCodeIntegrityVerificationInformation )
        {
          if ( v5 != SystemWorkloadAllowedCpuSetsInformation )
          {
            if ( v5 != SystemLeapSecondInformation )
            {
              if ( v5 != SystemFlags2Information )
              {
                if ( v5 == SystemFeatureConfigurationInformation )
                  return CmUpdateFeatureConfiguration(SystemInformation, SystemInformationLength, PreviousMode);
                return -1073741821;
              }
              if ( SystemInformationLength != 4 )
                return -1073741820;
              if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              {
                v115 = 0;
                if ( (*(_DWORD *)v4 & 0x2018) == 0 )
                {
                  NtGlobalFlag2 = NtGlobalFlag2 & 0x2018 | *(_DWORD *)v4;
                  *(_DWORD *)v4 = NtGlobalFlag2;
                  return updated;
                }
                return -1073741811;
              }
              return -1073741790;
            }
            if ( SystemInformationLength != 8 )
              return -1073741820;
            if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
              return -1073741727;
            if ( PsIsCurrentThreadInServerSilo() )
              return -1073741790;
            v106 = (unsigned __int8)*(_QWORD *)v4 != 0;
            result = ExSetLeapSecondEnabled(v106);
            updated = result;
            if ( result >= 0 )
            {
              *(_BYTE *)ExLeapSecondData = v106;
              return updated;
            }
            return result;
          }
          v129 = 0LL;
          if ( SystemInformationLength < 8 )
            return -1073741820;
          v98 = SystemInformationLength - 8;
          if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v98 > 0x100 )
            return -1073741820;
          v99 = *(_QWORD *)SystemInformation;
          memmove(v141, (char *)SystemInformation + 8, v98);
          if ( v99 >= 2 )
            return -1073741811;
          updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( updated < 0 )
            return updated;
          v92 = v98 >> 3;
          v93 = v99;
          v94 = v141;
          return KeModifySystemAllowedCpuSets(v92, (int)v94, v91, v93, Object);
        }
      }
    }
    else
    {
      if ( v5 == SystemSecureDumpEncryptionInformation )
      {
        if ( SystemInformationLength )
          return -1073741811;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          updated = VslProvisionDumpEncryption();
          if ( updated < 0 )
            return updated;
          return IoProvisionCrashDumpKey();
        }
        return -1073741727;
      }
      if ( v5 <= SystemRegistryReconciliationInformation )
      {
        if ( v5 == SystemRegistryReconciliationInformation )
          return CmReconcileAndValidateAllHives();
        if ( v5 <= SystemConsoleInformation )
        {
          if ( v5 == SystemConsoleInformation )
          {
            if ( SystemInformationLength == 4 )
            {
              *(_QWORD *)&DriverServiceName.Length = 7733364LL;
              DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
              if ( *(_BYTE *)SystemInformation & 1 )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                v76 = KeAbPreAcquire((__int64)&ExpConDrvLoadLock, 0LL);
                v77 = v76;
                if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpConDrvLoadLock, 0LL) )
                  ExfAcquirePushLockExclusiveEx(&ExpConDrvLoadLock, v76, (__int64)&ExpConDrvLoadLock);
                if ( v77 )
                  *((_BYTE *)v77 + 10) = 1;
                updated = ZwLoadDriver(&DriverServiceName);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
                KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
                KeLeaveCriticalRegion();
                return updated;
              }
              if ( SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
                return ZwUnloadDriver(&DriverServiceName);
              return -1073741727;
            }
            return -1073741820;
          }
          v69 = v5 - 126;
          if ( !v69 )
          {
            if ( !PreviousMode )
            {
              if ( SystemInformationLength == 32 )
                return BgkSetBootGraphicsInformation(
                         *(_QWORD *)&SystemInformationClass,
                         SystemInformation,
                         SystemInformationLength,
                         1LL);
              return -1073741820;
            }
            return -1073741727;
          }
          v70 = v69 - 1;
          if ( !v70 )
          {
            if ( SystemInformationLength == 16 )
            {
              if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
              {
                v128 = *(HANDLE *)v4;
                updated = MmScrubMemory(v74, (ULONG_PTR)v128, &v122);
                PrivilegeValue.LowPart = updated;
                *(_QWORD *)(v4 + 8) = v122;
                return updated;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          v71 = v70 - 2;
          if ( !v71 )
            return KeProcessorProfileControlArea((__int64)SystemInformation, SystemInformationLength, PreviousMode);
          v72 = v71 - 1;
          if ( !v72 )
          {
            if ( ((SystemInformationLength - 16) & 0xFFFFFFE7) == 0 && SystemInformationLength != 40 )
            {
              if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
              {
                memmove(&v136, (const void *)v4, v3);
                if ( (_DWORD)v3 == 32 )
                  v6 = *((_QWORD *)&v137 + 1);
                ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
                updated = MiCombineIdenticalPages(
                            ThreadPartition,
                            v136.m128i_i64[0],
                            (unsigned int)v137,
                            v6,
                            KeGetCurrentThread()->PreviousMode,
                            &v121);
                PrivilegeValue.LowPart = updated;
                *(_QWORD *)(v4 + 8) = v121;
                return updated;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          if ( v72 != 1 )
            return -1073741821;
          if ( !PreviousMode )
          {
            if ( SystemInformationLength == 24 )
              return KeInitializeEntropySystem(*(_QWORD *)SystemInformation);
            return -1073741820;
          }
          return -1073741790;
        }
        v79 = v5 - 134;
        if ( v79 )
        {
          v80 = v79 - 8;
          if ( v80 )
          {
            v81 = v80 - 8;
            if ( !v81 )
            {
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return ExpSetBootLoaderMetadata((void *)v4, (unsigned int)v3);
              return -1073741727;
            }
            v82 = v81 - 1;
            if ( !v82 )
            {
              PrivilegeValue = (LUID)19LL;
              if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
                return -1073741727;
              v83 = v3 - 1;
              if ( v83 )
              {
                if ( v83 != 3 )
                  return -1073741820;
                v7 = *(_DWORD *)v4;
                v127 = *(_DWORD *)v4;
              }
              else
              {
                v84 = *(_BYTE *)v4;
                if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  return -1073741727;
                if ( !v84 )
                  v7 = 5;
              }
              return ExpSetSoftRebootFlags(v7);
            }
            if ( v82 != 1 )
              return -1073741821;
            if ( SystemInformationLength == 8 )
            {
              if ( PreviousMode )
                return ExpQueryElamCertInfo(*(_QWORD *)SystemInformation, (__int64)SystemInformation);
              return -1073741811;
            }
          }
          else
          {
            *(_OWORD *)Src = 0LL;
            p_Blink = &PsGetCurrentServerSiloGlobals()[85].Blink;
            PrivilegeValue = (LUID)p_Blink;
            if ( (_DWORD)v3 == 48 )
            {
              if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
              {
                v136 = *(__m128i *)v4;
                v137 = *(_OWORD *)(v4 + 16);
                v138 = *(_OWORD *)(v4 + 32);
                if ( _InterlockedCompareExchange((volatile signed __int32 *)p_Blink, _mm_cvtsi128_si32(v136), 0) )
                  return 0;
                *(_OWORD *)Src = v137;
                v137 = 0LL;
                v86 = _mm_cvtsi128_si32(*(__m128i *)Src);
                if ( v86 && (v86 & 1) == 0 )
                {
                  v87 = Src[1];
                  if ( ((__int64)Src[1] & 1) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v88 = (char *)Src[1] + v86;
                  if ( (unsigned __int64)v88 > 0x7FFFFFFF0000LL || v88 < Src[1] )
                  {
                    v87 = Src[1];
                    v86 = (unsigned __int16)Src[0];
                  }
                  Pool2 = (void *)ExAllocatePool2(0x101uLL);
                  v90 = Pool2;
                  if ( Pool2 )
                  {
                    memmove(Pool2, v87, v86);
                    *((_QWORD *)&v137 + 1) = v90;
                    LOWORD(v137) = v86;
                    WORD1(v137) = v86;
                  }
                  p_Blink = (struct _LIST_ENTRY **)PrivilegeValue;
                }
                *(__m128i *)p_Blink = v136;
                *((_OWORD *)p_Blink + 1) = v137;
                *((_OWORD *)p_Blink + 2) = v138;
                return 0;
              }
              return -1073741727;
            }
          }
        }
        else if ( SystemInformationLength == 32 )
        {
          return sub_140A048EC(*(_QWORD *)&SystemInformationClass, SystemInformation, SystemInformationLength, 1LL);
        }
        return -1073741820;
      }
      if ( v5 > SystemCpuSetTagInformation )
      {
        if ( v5 == SystemWin32WerStartCallout )
        {
          v131 = 0LL;
          v132 = 0LL;
          if ( SystemInformationLength == 8 )
          {
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            {
              v134 = *(HANDLE *)v4;
              v113 = 0LL;
              updated = ObReferenceObjectByHandle(v134, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v113, 0LL);
              if ( updated < 0 )
                return updated;
              v61 = (_KPROCESS *)v113;
              SessionId = PsGetSessionIdEx((__int64)v113);
              if ( SessionId != -1 )
              {
                v132 = v61;
                updated = PsInvokeWin32Callout(32LL, &v131, 1LL, &SessionId);
              }
              goto LABEL_244;
            }
            return -1073741727;
          }
          if ( !SystemInformationLength )
          {
            updated = 0;
            Process = KeGetCurrentThread()->ApcState.Process;
            SessionId = PsGetSessionIdEx((__int64)Process);
            if ( SessionId == -1 )
              return updated;
            v132 = Process;
            return PsInvokeWin32Callout(32LL, &v131, 1LL, &SessionId);
          }
          return -1073741820;
        }
        if ( v5 == SystemActivityModerationExeState )
        {
          if ( SystemInformationLength != 24 )
            return -1073741820;
          v136 = *(__m128i *)SystemInformation;
          *(_QWORD *)&v137 = *((_QWORD *)SystemInformation + 2);
          result = VfProbeAndCaptureUnicodeStringBuffer(&v136, 1LL, SystemInformationLength, 1LL);
          if ( result >= 0 )
          {
            updated = PsSetExeModerationState((__int64)&v136);
            v67 = &v136;
            goto LABEL_437;
          }
          return result;
        }
        if ( v5 != SystemCodeIntegrityUnlockInformation )
        {
          if ( v5 != SystemIntegrityQuotaInformation )
            return -1073741821;
          if ( SystemInformationLength )
            return -1073741811;
          if ( !PreviousMode || SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return VslRelaxQuotas();
          return -1073741727;
        }
      }
      else
      {
        switch ( v5 )
        {
          case SystemCpuSetTagInformation:
            if ( SystemInformationLength >= 8 )
            {
              v95 = SystemInformationLength - 8;
              if ( (((_BYTE)SystemInformationLength - 8) & 7) == 0 && v95 <= 0x100 )
              {
                v96 = *(_QWORD *)SystemInformation;
                v135 = *(_QWORD *)SystemInformation;
                memmove(v140, (char *)SystemInformation + 8, v95);
                updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
                if ( updated < 0 )
                  return updated;
                return KeSetTagCpuSets(v95 >> 3, (__int64)v140, v96);
              }
            }
            return -1073741820;
          case SystemHypervisorDetailInformation:
            return -1073741637;
          case SystemVmGenerationCountInformation:
            if ( !PreviousMode )
            {
              if ( SystemInformationLength == 8 )
                return KdInitialize(3LL, SystemInformation, &KdpContext, 1LL);
              return -1073741820;
            }
            return -1073741790;
        }
        if ( v5 != SystemCodeIntegrityPolicyInformation )
        {
          if ( v5 != SystemAllowedCpuSetsInformation )
          {
            if ( v5 != SystemInterruptCpuSetsInformation )
              return -1073741821;
            v130 = 0LL;
            if ( SystemInformationLength == 16 )
            {
              if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
                return KeIntSteerAssignCpuSetForGsiv(*(_OWORD *)v4, WORD2(*(_QWORD *)v4), *(_QWORD *)(v4 + 8));
              return -1073741727;
            }
            return -1073741820;
          }
          if ( (SystemInformationLength & 7) != 0 || SystemInformationLength > 0x100 )
            return -1073741820;
          memmove(v139, SystemInformation, SystemInformationLength);
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( result < 0 )
            return result;
          v92 = (unsigned int)v3 >> 3;
          v93 = 0;
          v94 = v139;
          return KeModifySystemAllowedCpuSets(v92, (int)v94, v91, v93, Object);
        }
      }
    }
    if ( qword_140F04540 )
      return guard_dispatch_icall_no_overrides((unsigned int)v5);
    return -1073741637;
  }
  if ( v5 == SystemCpuQuotaInformation )
    return PsSetCpuQuotaInformation((__int64)SystemInformation, SystemInformationLength, PreviousMode);
  if ( v5 <= SystemWatchdogTimerHandler )
  {
    if ( v5 == SystemWatchdogTimerHandler )
      return -1073741637;
    if ( v5 > SystemPrioritySeperation )
    {
      if ( v5 <= SystemVerifierInformation )
      {
        if ( v5 == SystemVerifierInformation )
        {
          if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
          return -1073741790;
        }
        if ( v5 != SystemVerifierAddDriverInformation && v5 != SystemVerifierRemoveDriverInformation )
        {
          if ( v5 != SystemTimeSlipNotification )
          {
            if ( (unsigned int)(v5 - 47) > 1 )
              return -1073741821;
            return -1073741822;
          }
          if ( SystemInformationLength != 8 )
            return -1073741820;
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
            return -1073741727;
          if ( !PsIsCurrentThreadInServerSilo() )
          {
            v128 = *(HANDLE *)v4;
            if ( v128 )
            {
              v113 = 0LL;
              updated = ObReferenceObjectByHandle(v128, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v113, 0LL);
              v46 = v113;
              if ( updated < 0 )
                return updated;
            }
            else
            {
              v46 = 0LL;
              updated = 0;
            }
            KdUpdateTimeSlipEvent(v46);
            return updated;
          }
          return -1073741790;
        }
        if ( SystemInformationLength != 16 )
          return -1073741820;
        if ( !PreviousMode )
          goto LABEL_178;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
        if ( result < 0 )
          return result;
        v4 = (unsigned __int64)Buf1;
        if ( LOWORD(Buf1[0]) )
        {
LABEL_178:
          v47 = v5 - 40;
          if ( !v47 )
          {
            v48 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
            goto LABEL_434;
          }
          if ( v47 == 1 )
          {
            v48 = VfRemoveVerifierEntry(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
LABEL_434:
            updated = v48;
            goto LABEL_435;
          }
LABEL_432:
          updated = -1073741821;
LABEL_435:
          if ( !PreviousMode )
            return updated;
          v67 = (__m128i *)v4;
          goto LABEL_437;
        }
        return -1073741585;
      }
      if ( v5 == SystemPrefetcherInformation )
        return PfSnSetPrefetcherInformation(
                 *(__int64 *)&SystemInformationClass,
                 (__int128 *)SystemInformation,
                 SystemInformationLength,
                 PreviousMode);
      if ( v5 != SystemLoadGdiDriverInSystemSpace )
      {
        if ( v5 != SystemComPlusPackage )
        {
          if ( v5 != SystemHotpatchInformation )
            return -1073741821;
          return -1073741637;
        }
        if ( SystemInformationLength == 4 )
        {
          v49 = *(_DWORD *)SystemInformation;
          updated = ExpUpdateComPlusPackage(*(_DWORD *)SystemInformation);
          if ( updated >= 0 )
            *(_DWORD *)(MmWriteableSharedUserData + 736) = v49;
          return updated;
        }
        return -1073741820;
      }
      LODWORD(v8) = 0;
LABEL_187:
      if ( SystemInformationLength == 48 )
      {
        v50 = 0;
      }
      else
      {
        if ( SystemInformationLength != 56 )
          return -1073741820;
        v50 = 1;
      }
      if ( !PreviousMode )
      {
        *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
        SystemImage = MmLoadSystemImage((unsigned int)Buf1, 0, 0, v8, (__int64)&v119, (__int64)&BaseOfImage);
        updated = SystemImage;
        if ( SystemImage < 0 )
        {
          if ( SystemImage == -1073741411 )
            return -1073741554;
        }
        else
        {
          v52 = (char *)BaseOfImage;
          if ( v50 )
            v53 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, (PULONG)&v113);
          else
            v53 = 0LL;
          v54 = RtlImageNtHeader(v52);
          v55 = &v52[v54->OptionalHeader.AddressOfEntryPoint];
          *(_QWORD *)(v4 + 16) = v52;
          *(_QWORD *)(v4 + 24) = v119;
          *(_QWORD *)(v4 + 32) = v55;
          if ( v50 )
          {
            *(_QWORD *)(v4 + 40) = v53;
            *(_DWORD *)(v4 + 48) = v54->OptionalHeader.SizeOfImage;
          }
          else
          {
            *(_DWORD *)(v4 + 40) = v54->OptionalHeader.SizeOfImage;
          }
        }
        return updated;
      }
      return -1073741727;
    }
    if ( v5 == SystemPrioritySeperation )
    {
      if ( SystemInformationLength == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          v126 = *(_DWORD *)v4;
          LOBYTE(v45) = 1;
          PsChangeQuantumTable(v45);
          return 0;
        }
        return -1073741727;
      }
      return -1073741820;
    }
    if ( v5 <= SystemTimeAdjustmentInformation )
    {
      switch ( v5 )
      {
        case SystemTimeAdjustmentInformation:
          if ( ((SystemInformationLength - 8) & 0xFFFFFFF7) != 0 )
            return -1073741820;
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
            return -1073741727;
          if ( !PsIsCurrentThreadInServerSilo() )
          {
            if ( (_DWORD)v3 == 16 )
            {
              LOBYTE(v31) = *(_BYTE *)(v4 + 8);
              v106 = v31;
              v116 = *(_QWORD *)v4;
            }
            else
            {
              LOBYTE(v31) = *(_BYTE *)(v4 + 4);
              v106 = v31;
              v32 = *(unsigned int *)v4;
              v116 = v32;
              if ( v32 )
              {
                v30 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement % v32;
                v116 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v32;
              }
            }
            if ( (_BYTE)v31 )
              v116 = MEMORY[0xFFFFF78000000300];
            ExAcquireTimeRefreshLockExclusive(v31, v30);
            updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v116, (__int64)&v106);
            ExReleaseTimeRefreshLockExclusive();
            return updated;
          }
          return -1073741790;
        case SystemFlagsInformation:
          if ( SystemInformationLength != 4 )
            return -1073741820;
          if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          {
            NtGlobalFlag = NtGlobalFlag & 0x6DCE640F | *(_DWORD *)v4 & 0x92319BF0;
            *(_DWORD *)v4 = NtGlobalFlag;
            return updated;
          }
          return -1073741790;
        case SystemFileCacheInformation:
          goto LABEL_36;
        case SystemDpcBehaviorInformation:
          if ( SystemInformationLength == 20 )
          {
            if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            {
              v136 = *(__m128i *)v4;
              LODWORD(v137) = *(_DWORD *)(v4 + 16);
              KiMinimumDpcRate = v136.m128i_i32[2];
              KiMaximumDpcQueueDepth = v136.m128i_i32[1];
              KiAdjustDpcThreshold = v136.m128i_i32[3];
              KiIdealDpcRate = v137;
              KeSynchronizeWithDynamicProcessors(
                (unsigned int)v137,
                SystemInformation,
                *(_QWORD *)&SystemInformationLength,
                v8);
              ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
              if ( ActiveProcessorCount )
              {
                v27 = KiProcessorBlock;
                v28 = ActiveProcessorCount;
                do
                {
                  v29 = *v27;
                  *(_DWORD *)(v29 + 14504) = KiMaximumDpcQueueDepth;
                  *(_DWORD *)(v29 + 14512) = KiMinimumDpcRate;
                  ++v27;
                  --v28;
                }
                while ( v28 );
              }
              return updated;
            }
            return -1073741727;
          }
          return -1073741820;
      }
      if ( v5 != SystemLoadGdiDriverInformation )
      {
        if ( v5 != SystemUnloadGdiDriverInformation )
          return -1073741821;
        if ( SystemInformationLength == 8 )
        {
          if ( !PreviousMode )
          {
            MmUnloadSystemImage(*(_QWORD *)SystemInformation);
            return 0;
          }
          return -1073741727;
        }
        return -1073741820;
      }
      goto LABEL_187;
    }
    v33 = v5 - 30;
    if ( !v33 )
      return MmCreateMirror();
    v34 = v33 - 1;
    if ( !v34 )
      return EtwSetPerformanceTraceInformation(SystemInformation, SystemInformationLength, PreviousMode);
    v35 = v34 - 3;
    if ( v35 )
    {
      v36 = v35 - 3;
      if ( !v36 )
      {
        if ( SystemInformationLength == 16 )
        {
          if ( !PreviousMode || SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
            return CmSetRegistryQuotaInformation((unsigned int *)v4);
          return -1073741727;
        }
        return -1073741820;
      }
      if ( v36 != 1 )
        return -1073741821;
      if ( SystemInformationLength != 16 )
        return -1073741820;
      if ( PreviousMode )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[4].IdealProcessorAssignmentBlock) & 8) == 0
          || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
        {
          return -1073741727;
        }
        v37 = 0x7FFFFFFF0000LL;
        if ( v4 < 0x7FFFFFFF0000LL )
          v37 = v4;
        LODWORD(Buf1[0]) = *(_DWORD *)v37;
        Buf1[1] = *(void **)(v37 + 8);
        if ( LOWORD(Buf1[0]) != 62 )
          return -1073741727;
        if ( memcmp(Buf1[1], L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
          return -1073741727;
        Buf1[1] = L"\\SystemRoot\\System32\\win32k.sys";
        WORD1(Buf1[0]) = 62;
        return ZwSetSystemInformation(SystemExtendServiceTableInformation, Buf1, 0x10u);
      }
      *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
      if ( !memcmp(*((const void **)SystemInformation + 1), L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
      {
        v38 = *(char **)(PsWin32kDataTableEntry + 48);
        v39 = RtlImageNtHeader(v38);
        if ( !v39 )
        {
          MmUnloadSystemImage(PsWin32kDataTableEntry);
          return -1073741701;
        }
        updated = ExpInitializeSessionDriver(&v38[v39->OptionalHeader.AddressOfEntryPoint], v38);
        if ( updated < 0 && !(unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) )
          MmUnloadSystemImage(PsWin32kDataTableEntry);
        return updated;
      }
      return -1073741637;
    }
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
      return -1073741727;
    if ( (_DWORD)v3 == 4 )
    {
      if ( PreviousMode )
      {
        if ( (v4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v42 = *(_DWORD *)v4;
        v125 = *(_DWORD *)v4;
      }
      else
      {
        v42 = *(_DWORD *)v4;
      }
      if ( !v42 )
      {
        v43 = 0LL;
        return IoConfigureCrashDump(v43, 0LL, v40, v41);
      }
      v44 = v42 - 1;
      if ( v44 )
      {
        if ( v44 == 1 )
          return WheaCrashDumpInitializationComplete();
        return -1073741811;
      }
    }
    v43 = 1LL;
    return IoConfigureCrashDump(v43, 0LL, v40, v41);
  }
  if ( v5 <= SystemVerifierInformationEx )
  {
    if ( v5 != SystemVerifierInformationEx )
    {
      if ( v5 != SystemFileCacheInformationEx )
      {
        if ( v5 <= SystemFileCacheInformationEx )
        {
          if ( v5 != SystemWatchdogTimerInformation )
          {
            if ( v5 != SystemWow64SharedInformationObsolete )
            {
              switch ( v5 )
              {
                case SystemRegisterFirmwareTableInformationHandler:
                  return ExpRegisterFirmwareTableInformationHandler(
                           (__int64)SystemInformation,
                           SystemInformationLength,
                           PreviousMode);
                case SystemSuperfetchInformation:
                  LOBYTE(v8) = PreviousMode;
                  return PfSetSuperfetchInformation(79LL, SystemInformation, SystemInformationLength, v8);
                case SystemMemoryListInformation:
                  if ( SystemInformationLength >= 4 )
                  {
                    v114 = 6;
                    return MmIssueMemoryListCommand(*(_DWORD *)SystemInformation, PreviousMode, -1LL);
                  }
                  return -1073741820;
              }
              return -1073741821;
            }
            return -1073741822;
          }
          if ( !PreviousMode && SystemInformation && SystemInformationLength == 8 )
          {
            if ( !*(_DWORD *)SystemInformation )
              return -1073741637;
            v56 = (unsigned int)(*(_DWORD *)SystemInformation - 1);
            if ( *(_DWORD *)SystemInformation != 1 )
            {
              v56 = (unsigned int)(*(_DWORD *)SystemInformation - 2);
              if ( *(_DWORD *)SystemInformation != 2 )
              {
                v56 = (unsigned int)(*(_DWORD *)SystemInformation - 3);
                if ( *(_DWORD *)SystemInformation != 3 )
                {
                  if ( *(_DWORD *)SystemInformation != 4 )
                  {
                    v57 = (unsigned int)(*(_DWORD *)SystemInformation - 6);
                    if ( *(_DWORD *)SystemInformation == 6 )
                    {
                      LODWORD(v57) = 1;
                      return guard_dispatch_icall_no_overrides(v57);
                    }
                    if ( *(_DWORD *)SystemInformation == 7 )
                    {
                      updated = 0;
                      if ( off_140E00B18[0] == xKdEnumerateDebuggingDevices )
                        return -1073741822;
                      return updated;
                    }
                    return -1073741811;
                  }
                  return -1073741637;
                }
              }
            }
            guard_dispatch_icall_no_overrides(v56);
            return 0;
          }
          return -1073741811;
        }
        v17 = v5 - 82;
        if ( v17 )
        {
          v18 = v17 - 4;
          if ( !v18 )
            return ObSetRefTraceInformation(SystemInformation, SystemInformationLength);
          v19 = v18 - 1;
          if ( !v19 )
          {
            if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            {
              if ( (_DWORD)v3 == 8 )
              {
                v60 = *(_QWORD *)v4;
                MmSpecialPoolTag = *(_QWORD *)v4;
                MmSpecialPoolCatchOverruns = BYTE4(v60) & 1;
                return updated;
              }
              return -1073741820;
            }
            return -1073741790;
          }
          v20 = v19 - 2;
          if ( v20 )
          {
            if ( v20 != 2 )
              return -1073741821;
            if ( !PreviousMode )
            {
              if ( SystemInformationLength )
                return -1073741584;
              else
                return HvlHypervisorConnected == 0 ? 0xC0351000 : 0;
            }
            return -1073741790;
          }
          if ( PreviousMode != 1 )
            return -1073741637;
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
          {
            v58 = KeGetCurrentThread()->ApcState.Process;
            if ( !v58[1].ReadyTime )
              return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
            v59 = WORD2(v58[3].PerProcessorCycleTimes);
            if ( v59 != 332 && v59 != 452 )
              LOBYTE(v7) = 0;
            if ( !(_BYTE)v7 )
              return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
            return -1073741637;
          }
          return -1073741727;
        }
        if ( SystemInformationLength >= 0x18 )
        {
          if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
          {
            if ( PreviousMode )
            {
              v136 = *(__m128i *)v4;
              *(_QWORD *)&v137 = *(_QWORD *)(v4 + 16);
              v4 = (unsigned __int64)&v136;
            }
            if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
              return -1073741811;
            v133 = *(UNICODE_STRING *)v4;
            updated = PsLookupProcessThreadByCid(&v133, 0LL, &v120);
            if ( updated < 0 )
              return updated;
            v61 = (_KPROCESS *)v120;
            if ( *((_BYTE *)v120 + 4) )
            {
              updated = -1073741749;
            }
            else
            {
              KeSetActualBasePriorityThread((ULONG_PTR)v120, *(_DWORD *)(v4 + 16));
              updated = 259;
            }
LABEL_244:
            ObfDereferenceObject(v61);
            return updated;
          }
          return -1073741727;
        }
        return -1073741820;
      }
LABEL_36:
      v108[0] = 0;
      if ( SystemInformationLength < 0x40 )
        return -1073741820;
      if ( v5 == SystemFileCacheInformation )
      {
        v14 = 0;
        v117 = 0;
      }
      else
      {
        v117 = *((_DWORD *)SystemInformation + 15);
        v14 = v117;
        if ( (v117 & 0xFFFFFFF0) != 0 || (v117 & 0xC) == 0xC || (v117 & 3) == 3 )
          return -1073741584;
      }
      if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
        return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 1, 1, v14, v108);
      return -1073741790;
    }
    if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    {
      if ( (_DWORD)v3 == 40 )
        return VfSetVerifierInformationEx(v4);
      return -1073741820;
    }
    return -1073741790;
  }
  if ( v5 > SystemProcessorMicrocodeUpdateInformation )
  {
    v15 = v5 - 106;
    if ( !v15 )
      return -1073741821;
    v16 = v15 - 3;
    if ( !v16 )
      return SmSetStoreInformation(
               *(__int64 *)&SystemInformationClass,
               (__int128 *)SystemInformation,
               SystemInformationLength,
               PreviousMode);
    v68 = v16 - 1;
    if ( !v68 )
      return -1073741822;
    if ( v68 != 1 )
      return -1073741821;
    if ( SystemInformationLength != 4 )
      return -1073741820;
    if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
    {
      *(_DWORD *)(MmWriteableSharedUserData + 584) = *(_DWORD *)v4;
      return 0;
    }
    return -1073741790;
  }
  if ( v5 == SystemProcessorMicrocodeUpdateInformation )
    return ExpSetProcessorMicrocodeUpdateInformation((unsigned int *)SystemInformation, SystemInformationLength);
  v21 = v5 - 93;
  if ( !v21 )
  {
    v25 = 172;
    goto LABEL_246;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    {
      if ( (_DWORD)v3 == 8 )
      {
        v136.m128i_i64[0] = *(_QWORD *)v4;
        _InterlockedOr((volatile signed __int32 *)(MmWriteableSharedUserData + 928), v136.m128i_u32[0]);
        _InterlockedAnd((volatile signed __int32 *)(MmWriteableSharedUserData + 928), ~v136.m128i_i32[1]);
        return updated;
      }
      return -1073741820;
    }
    return -1073741790;
  }
  v23 = v22 - 1;
  if ( !v23 )
    return -1073741637;
  v24 = v23 - 2;
  if ( v24 )
  {
    if ( v24 != 5 )
      return -1073741821;
    v25 = 432;
LABEL_246:
    if ( SystemInformationLength == v25 )
    {
      if ( !PreviousMode || SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
        return ExpSetTimeZoneInformation((_OWORD *)v4, v25);
      return -1073741727;
    }
    return -1073741820;
  }
  if ( SystemInformationLength != 40 )
    return -1073741820;
  if ( !PreviousMode )
    goto LABEL_257;
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return -1073741727;
  v136 = *(__m128i *)v4;
  v137 = *(_OWORD *)(v4 + 16);
  *(_QWORD *)&v138 = *(_QWORD *)(v4 + 32);
  result = VfProbeAndCaptureUnicodeStringBuffer(&v136.m128i_u64[1], 1LL, v62, v63);
  if ( result >= 0 )
  {
    v66 = VfProbeAndCaptureUnicodeStringBuffer((char *)&v137 + 8, 1LL, v64, v65);
    if ( v66 < 0 )
    {
      VfFreeCapturedUnicodeString(&v136.m128i_u64[1]);
      return v66;
    }
    v4 = (unsigned __int64)&v136;
LABEL_257:
    updated = VfFaultsSetParameters(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(v4 + 8);
    v67 = (__m128i *)(v4 + 24);
LABEL_437:
    VfFreeCapturedUnicodeString(v67);
    return updated;
  }
  return result;
}
