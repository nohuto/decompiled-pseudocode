/*
 * XREFs of NtSetSystemInformation @ 0x140AE2BE0
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140C3ECAC (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B5184 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlCheckTokenMembership @ 0x1403B5750 (RtlCheckTokenMembership.c)
 *     ExpUpdateTimerConfiguration @ 0x14041131C (ExpUpdateTimerConfiguration.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     MiGetThreadPartition @ 0x14042B190 (MiGetThreadPartition.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     KeModifySystemAllowedCpuSets @ 0x14048B4B0 (KeModifySystemAllowedCpuSets.c)
 *     VslProvisionDumpEncryption @ 0x14058AD8C (VslProvisionDumpEncryption.c)
 *     IoConfigureCrashDump @ 0x14058DDD4 (IoConfigureCrashDump.c)
 *     IoProvisionCrashDumpKey @ 0x14058ED10 (IoProvisionCrashDumpKey.c)
 *     KdUpdateTimeSlipEvent @ 0x1405ACB8C (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x1405AD76C (KeProcessorProfileControlArea.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405B191C (KeUpdateDpcWatchdogConfiguration.c)
 *     KeSetTagCpuSets @ 0x1405BD41C (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x1405C17B0 (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x1405E247C (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x1405E2938 (PsSetExeModerationState.c)
 *     VfVolatileApplyDifVerification @ 0x140612E24 (VfVolatileApplyDifVerification.c)
 *     VfVolatileClearDifRuleClass @ 0x140612E90 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileRemoveDifVerification @ 0x140612FA0 (VfVolatileRemoveDifVerification.c)
 *     VfVolatileSetDifRuleClass @ 0x140613054 (VfVolatileSetDifRuleClass.c)
 *     ExpSetBootLoaderMetadata @ 0x140651728 (ExpSetBootLoaderMetadata.c)
 *     ExpSetSoftRebootFlags @ 0x14065186C (ExpSetSoftRebootFlags.c)
 *     ExPoolSetLimit @ 0x140652BF8 (ExPoolSetLimit.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwLoadDriver @ 0x1406A9570 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x1406AAB30 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x1406AAED0 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     HvlQuerySetBootPagesInfo @ 0x14070C68C (HvlQuerySetBootPagesInfo.c)
 *     VslRelaxQuotas @ 0x14070DDA4 (VslRelaxQuotas.c)
 *     PnpIommuBlockUnblockDevice @ 0x1407340E8 (PnpIommuBlockUnblockDevice.c)
 *     KeInitializeEntropySystem @ 0x14073B52C (KeInitializeEntropySystem.c)
 *     ObSetRefTraceInformation @ 0x140742E04 (ObSetRefTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x1407B5054 (ExpQueryElamCertInfo.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407B5AA0 (ExpRegisterFirmwareTableInformationHandler.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x1407B5C2C (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1407B5C94 (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x1407B5FD4 (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x1407B644C (ExSetLeapSecondEnabled.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407C8C7C (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x1407D26EC (CmSetRegistryQuotaInformation.c)
 *     CmUpdateFeatureConfiguration @ 0x1407D6120 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x1407D6388 (CmUpdateFeatureUsageSubscription.c)
 *     CmReconcileAndValidateAllHives @ 0x1407D83B0 (CmReconcileAndValidateAllHives.c)
 *     MmCreateMirror @ 0x1407EC490 (MmCreateMirror.c)
 *     MmIssueMemoryListCommand @ 0x1407EE1F0 (MmIssueMemoryListCommand.c)
 *     MmScrubMemory @ 0x1407FE3E0 (MmScrubMemory.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x14094AB4C (PfSnSetPrefetcherInformation.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409A9310 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409A9374 (ExReleaseTimeRefreshLockExclusive.c)
 *     MmLoadSystemImage @ 0x1409B8990 (MmLoadSystemImage.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1409FFFE4 (KeSynchronizeWithDynamicProcessors.c)
 *     sub_140A003E0 @ 0x140A003E0 (sub_140A003E0.c)
 *     PsLookupProcessThreadByCid @ 0x140A21230 (PsLookupProcessThreadByCid.c)
 *     PsChangeQuantumTable @ 0x140A261A0 (PsChangeQuantumTable.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 *     SmSetStoreInformation @ 0x140A57E40 (SmSetStoreInformation.c)
 *     DbgkRegisterErrorPort @ 0x140A7FE04 (DbgkRegisterErrorPort.c)
 *     MmUnloadSystemImage @ 0x140A87050 (MmUnloadSystemImage.c)
 *     ExpInitializeSessionDriver @ 0x140A8AA30 (ExpInitializeSessionDriver.c)
 *     MiCombineIdenticalPages @ 0x140A97650 (MiCombineIdenticalPages.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     VfFreeCapturedUnicodeString @ 0x140B84E64 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140B84FCC (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140B85008 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfPtGenerateTraceInformation @ 0x140B8DF6C (VfPtGenerateTraceInformation.c)
 *     VfFaultsSetParameters @ 0x140B987F4 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x140B9E32C (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x140B9E4D4 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140B9E4FC (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140B9E634 (VfSetVerifierInformationEx.c)
 *     BgkSetBootGraphicsInformation @ 0x140BB2424 (BgkSetBootGraphicsInformation.c)
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
  ULONG_PTR v6; // rsi
  int v7; // r13d
  __int64 v8; // r9
  BOOLEAN PreviousMode; // r12
  __int64 v10; // rax
  int updated; // edi
  ULONG ActiveProcessorCount; // eax
  __int64 *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  char v16; // cl
  unsigned __int64 v17; // r9
  __int32 v18; // ebx
  __int32 v19; // ebx
  __int32 v20; // ebx
  int v21; // ebx
  __int64 v22; // rcx
  NTSTATUS result; // eax
  void *v24; // rbx
  PIMAGE_NT_HEADERS v25; // rax
  __int64 v27; // rcx
  int v28; // ecx
  int v29; // ecx
  PVOID v30; // rcx
  __int32 v31; // ebx
  int v32; // eax
  int v33; // ebx
  char v34; // r15
  int v35; // eax
  char *v36; // rbx
  PVOID v37; // r12
  PIMAGE_NT_HEADERS v38; // rax
  char *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // ebx
  __int32 v43; // ebx
  __int32 v44; // ebx
  __int32 v45; // ebx
  int v46; // ebx
  _KPROCESS *v47; // rcx
  __int16 v48; // ax
  __int64 v49; // rax
  _KPROCESS *v50; // rbx
  __int32 v51; // ebx
  __int32 v52; // ebx
  __int32 v53; // ebx
  int v54; // ebx
  int v55; // ebx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // r9
  NTSTATUS v60; // ebx
  __m128i *v61; // rcx
  __int32 v62; // ebx
  __int32 v63; // ebx
  __int32 v64; // ebx
  __int32 v65; // ebx
  __int32 v66; // ebx
  __int32 v67; // ebx
  int v68; // ebx
  __int64 ThreadPartition; // rax
  __int64 v70; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v72; // rax
  char *v73; // rdi
  __int32 v75; // ebx
  __int32 v76; // ebx
  __int32 v77; // ebx
  int v78; // ebx
  int v79; // r15d
  char v80; // bl
  struct _LIST_ENTRY **p_Blink; // rdi
  unsigned __int16 v82; // bx
  const void *v83; // rdi
  char *v84; // rcx
  void *Pool2; // rax
  void *v86; // r14
  __int64 v87; // r8
  int v88; // r15d
  int v89; // r9d
  _BYTE *v90; // rdx
  ULONG v91; // r15d
  __int64 v92; // rbx
  _KPROCESS *Process; // rbx
  ULONG v94; // r15d
  unsigned __int64 v95; // rbx
  __int32 v96; // ebx
  __int64 v97; // rcx
  __int32 v98; // ebx
  __int32 v99; // ebx
  __int32 v100; // ebx
  char Object; // [rsp+20h] [rbp-4D8h]
  char v102; // [rsp+30h] [rbp-4C8h] BYREF
  BOOLEAN IsMember[9]; // [rsp+31h] [rbp-4C7h] BYREF
  char v104[30]; // [rsp+3Ah] [rbp-4BEh] BYREF
  LUID PrivilegeValue; // [rsp+58h] [rbp-4A0h]
  int SessionId; // [rsp+64h] [rbp-494h] BYREF
  void *Buf1[2]; // [rsp+68h] [rbp-490h] BYREF
  PVOID v109; // [rsp+78h] [rbp-480h] BYREF
  int v110; // [rsp+80h] [rbp-478h]
  unsigned __int64 v111; // [rsp+88h] [rbp-470h] BYREF
  int v112; // [rsp+90h] [rbp-468h]
  int v113; // [rsp+94h] [rbp-464h]
  PVOID BaseOfImage; // [rsp+98h] [rbp-460h] BYREF
  __int64 v115; // [rsp+A0h] [rbp-458h] BYREF
  PVOID v116; // [rsp+A8h] [rbp-450h] BYREF
  __int64 v117; // [rsp+B0h] [rbp-448h] BYREF
  __int64 v118; // [rsp+B8h] [rbp-440h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+C0h] [rbp-438h] BYREF
  void *Src[2]; // [rsp+D0h] [rbp-428h]
  int v121; // [rsp+E4h] [rbp-414h]
  HANDLE v122; // [rsp+F0h] [rbp-408h]
  __int64 v123; // [rsp+F8h] [rbp-400h]
  int v124; // [rsp+104h] [rbp-3F4h]
  __int128 v125; // [rsp+110h] [rbp-3E8h]
  __int128 v126; // [rsp+120h] [rbp-3D8h] BYREF
  _KPROCESS *v127; // [rsp+130h] [rbp-3C8h]
  UNICODE_STRING v128; // [rsp+138h] [rbp-3C0h] BYREF
  HANDLE v129; // [rsp+148h] [rbp-3B0h]
  __int64 v130; // [rsp+170h] [rbp-388h]
  __m128i v131; // [rsp+178h] [rbp-380h] BYREF
  __int128 v132; // [rsp+188h] [rbp-370h] BYREF
  __int128 v133; // [rsp+198h] [rbp-360h]
  _BYTE v134[256]; // [rsp+1B0h] [rbp-348h] BYREF
  _BYTE v135[256]; // [rsp+2B0h] [rbp-248h] BYREF
  _BYTE v136[256]; // [rsp+3B0h] [rbp-148h] BYREF

  v3 = SystemInformationLength;
  v4 = (unsigned __int64)SystemInformation;
  v5 = SystemInformationClass;
  v128 = 0LL;
  v6 = 0LL;
  v102 = 0;
  *(_OWORD *)Buf1 = 0LL;
  BaseOfImage = 0LL;
  v7 = 1;
  v8 = 1LL;
  v118 = 0LL;
  v117 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v111 = 0LL;
  v131 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  IsMember[8] = PreviousMode;
  if ( PreviousMode )
  {
    if ( SystemInformationClass == SystemErrorPortInformation )
    {
      v10 = 1LL;
    }
    else if ( SystemInformationClass != SystemSoftRebootInformation || (v10 = 0LL, SystemInformationLength != 1) )
    {
      v10 = 3LL;
    }
    if ( SystemInformationLength )
    {
      if ( (v10 & (unsigned __int64)SystemInformation) != 0 )
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
          v98 = v5 - 235;
          if ( !v98 )
            return HvlQuerySetBootPagesInfo(SystemInformation, SystemInformationLength, PreviousMode, 0, 0LL);
          v99 = v98 - 8;
          if ( !v99 )
            return -1073741637;
          v100 = v99 - 2;
          if ( v100 )
          {
            if ( v100 == 1 )
            {
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
            return -1073741821;
          }
          if ( SystemInformationLength != 4 )
            return -1073741820;
          if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          {
            ExResourceTimeoutCount = (*(_DWORD *)v4 + 3999) / 0xFA0u;
            return updated;
          }
          return -1073741727;
        }
        if ( v5 == SystemIommuStateInformation )
          return PnpIommuBlockUnblockDevice((__int64)SystemInformation, SystemInformationLength);
        if ( v5 != SystemCodeIntegrityAddDynamicStore && v5 != SystemCodeIntegrityClearDynamicStores )
        {
          if ( v5 == SystemDifPoolTrackingInformation )
          {
            if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return -1073741727;
            LOBYTE(v97) = (_DWORD)v3 == 0;
            return VfPtGenerateTraceInformation(v97);
          }
          else
          {
            if ( (unsigned int)(v5 - 228) > 1 )
              return -1073741821;
            IsMember[0] = 0;
            if ( RtlCheckTokenMembership(0LL, SeAliasAdminsSid, IsMember) < 0 || !IsMember[0] )
              return -1073741727;
            return KeUpdateDpcWatchdogConfiguration((void *)v4, (unsigned int)v3);
          }
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
            if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return -1073741790;
            return VfVolatileSetDifRuleClass((void *)v4, (unsigned int)v3);
          }
          else
          {
            if ( v5 != SystemDifClearRuleClassInformation )
            {
              if ( (unsigned int)(v5 - 219) > 1 )
                return -1073741821;
              if ( SystemInformationLength != 16 )
                return -1073741820;
              if ( !PreviousMode )
                goto LABEL_413;
              if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                return -1073741727;
              result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
              if ( result < 0 )
                return result;
              v4 = (unsigned __int64)Buf1;
              if ( LOWORD(Buf1[0]) )
              {
LABEL_413:
                v96 = v5 - 219;
                if ( !v96 )
                {
                  v32 = VfVolatileApplyDifVerification(v4);
                  goto LABEL_418;
                }
                if ( v96 == 1 )
                {
                  v32 = VfVolatileRemoveDifVerification((const UNICODE_STRING *)v4);
                  goto LABEL_418;
                }
                goto LABEL_415;
              }
              return -1073741585;
            }
            if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return -1073741790;
            return VfVolatileClearDifRuleClass();
          }
        }
        if ( v5 == SystemFeatureUsageSubscriptionInformation )
          return CmUpdateFeatureUsageSubscription(SystemInformation, SystemInformationLength, PreviousMode);
        if ( v5 != SystemCodeIntegrityVerificationInformation )
        {
          if ( v5 != SystemWorkloadAllowedCpuSetsInformation )
          {
            if ( v5 == SystemLeapSecondInformation )
            {
              if ( SystemInformationLength != 8 )
                return -1073741820;
              if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
                return -1073741727;
              if ( !PsIsCurrentThreadInServerSilo() )
              {
                v102 = (unsigned __int8)*(_QWORD *)v4 != 0;
                result = ExSetLeapSecondEnabled(v102);
                updated = result;
                if ( result < 0 )
                  return result;
                *(_BYTE *)ExLeapSecondData = v102;
                return updated;
              }
              return -1073741790;
            }
            if ( v5 == SystemFlags2Information )
            {
              if ( SystemInformationLength != 4 )
                return -1073741820;
              if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                return -1073741790;
              v110 = 0;
              if ( (*(_DWORD *)v4 & 0x2018) == 0 )
              {
                NtGlobalFlag2 = NtGlobalFlag2 & 0x2018 | *(_DWORD *)v4;
                *(_DWORD *)v4 = NtGlobalFlag2;
                return updated;
              }
              return -1073741811;
            }
            if ( v5 != SystemFeatureConfigurationInformation )
              return -1073741821;
            return CmUpdateFeatureConfiguration(SystemInformation, SystemInformationLength, PreviousMode);
          }
          v123 = 0LL;
          if ( SystemInformationLength < 8 )
            return -1073741820;
          v94 = SystemInformationLength - 8;
          if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v94 > 0x100 )
            return -1073741820;
          v95 = *(_QWORD *)SystemInformation;
          memmove(v136, (char *)SystemInformation + 8, v94);
          if ( v95 >= 2 )
            return -1073741811;
          updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( updated < 0 )
            return updated;
          v88 = v94 >> 3;
          v89 = v95;
          v90 = v136;
          return KeModifySystemAllowedCpuSets(v88, (int)v90, v87, v89, Object);
        }
      }
    }
    else
    {
      if ( v5 == SystemSecureDumpEncryptionInformation )
      {
        if ( !SystemInformationLength )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          updated = VslProvisionDumpEncryption();
          if ( updated < 0 )
            return updated;
          return IoProvisionCrashDumpKey();
        }
        return -1073741811;
      }
      if ( v5 <= SystemRegistryReconciliationInformation )
      {
        if ( v5 == SystemRegistryReconciliationInformation )
          return CmReconcileAndValidateAllHives();
        if ( v5 > SystemConsoleInformation )
        {
          v75 = v5 - 134;
          if ( !v75 )
          {
            if ( SystemInformationLength != 32 )
              return -1073741820;
            return sub_140A003E0(*(__int64 *)&SystemInformationClass, (unsigned __int64)SystemInformation);
          }
          v76 = v75 - 8;
          if ( !v76 )
          {
            *(_OWORD *)Src = 0LL;
            p_Blink = &PsGetCurrentServerSiloGlobals()[85].Blink;
            PrivilegeValue = (LUID)p_Blink;
            if ( (_DWORD)v3 == 48 )
            {
              if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
              {
                v131 = *(__m128i *)v4;
                v132 = *(_OWORD *)(v4 + 16);
                v133 = *(_OWORD *)(v4 + 32);
                if ( _InterlockedCompareExchange((volatile signed __int32 *)p_Blink, _mm_cvtsi128_si32(v131), 0) )
                  return 0;
                *(_OWORD *)Src = v132;
                v132 = 0LL;
                v82 = _mm_cvtsi128_si32(*(__m128i *)Src);
                if ( v82 && (v82 & 1) == 0 )
                {
                  v83 = Src[1];
                  if ( ((__int64)Src[1] & 1) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v84 = (char *)Src[1] + v82;
                  if ( (unsigned __int64)v84 > 0x7FFFFFFF0000LL || v84 < Src[1] )
                  {
                    v83 = Src[1];
                    v82 = (unsigned __int16)Src[0];
                  }
                  Pool2 = (void *)ExAllocatePool2(0x101uLL, v82, 0x50535845u);
                  v86 = Pool2;
                  if ( Pool2 )
                  {
                    memmove(Pool2, v83, v82);
                    *((_QWORD *)&v132 + 1) = v86;
                    LOWORD(v132) = v82;
                    WORD1(v132) = v82;
                  }
                  p_Blink = (struct _LIST_ENTRY **)PrivilegeValue;
                }
                *(__m128i *)p_Blink = v131;
                *((_OWORD *)p_Blink + 1) = v132;
                *((_OWORD *)p_Blink + 2) = v133;
                return 0;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          v77 = v76 - 8;
          if ( !v77 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return -1073741727;
            return ExpSetBootLoaderMetadata((void *)v4, (unsigned int)v3);
          }
          v78 = v77 - 1;
          if ( !v78 )
          {
            PrivilegeValue = (LUID)19LL;
            if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
              return -1073741727;
            v79 = v3 - 1;
            if ( v79 )
            {
              if ( v79 != 3 )
                return -1073741820;
              v7 = *(_DWORD *)v4;
              v121 = *(_DWORD *)v4;
            }
            else
            {
              v80 = *(_BYTE *)v4;
              if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return -1073741727;
              if ( !v80 )
                v7 = 5;
            }
            return ExpSetSoftRebootFlags(v7);
          }
          if ( v78 != 1 )
            return -1073741821;
          if ( SystemInformationLength != 8 )
            return -1073741820;
          if ( PreviousMode )
            return ExpQueryElamCertInfo(*(_QWORD *)SystemInformation, (__int64)SystemInformation);
          return -1073741811;
        }
        if ( v5 == SystemConsoleInformation )
        {
          if ( SystemInformationLength != 4 )
            return -1073741820;
          *(_QWORD *)&DriverServiceName.Length = 7733364LL;
          DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
          if ( *(_BYTE *)SystemInformation & 1 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v72 = (char *)KeAbPreAcquire((__int64)&ExpConDrvLoadLock, 0LL);
            v73 = v72;
            if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpConDrvLoadLock, 0LL) )
              ExfAcquirePushLockExclusiveEx(&ExpConDrvLoadLock, v72, (__int64)&ExpConDrvLoadLock);
            if ( v73 )
              v73[10] = 1;
            updated = ZwLoadDriver(&DriverServiceName);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
            KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
            KeLeaveCriticalRegion();
            return updated;
          }
          if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            return -1073741727;
          return ZwUnloadDriver(&DriverServiceName);
        }
        else
        {
          v65 = v5 - 126;
          if ( v65 )
          {
            v66 = v65 - 1;
            if ( !v66 )
            {
              if ( SystemInformationLength == 16 )
              {
                if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
                {
                  v122 = *(HANDLE *)v4;
                  updated = MmScrubMemory(v70, (ULONG_PTR)v122, &v118);
                  PrivilegeValue.LowPart = updated;
                  *(_QWORD *)(v4 + 8) = v118;
                  return updated;
                }
                return -1073741727;
              }
              return -1073741820;
            }
            v67 = v66 - 2;
            if ( v67 )
            {
              v68 = v67 - 1;
              if ( !v68 )
              {
                if ( ((SystemInformationLength - 16) & 0xFFFFFFE7) == 0 && SystemInformationLength != 40 )
                {
                  if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
                  {
                    memmove(&v131, (const void *)v4, v3);
                    if ( (_DWORD)v3 == 32 )
                      v6 = *((_QWORD *)&v132 + 1);
                    ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
                    updated = MiCombineIdenticalPages(
                                ThreadPartition,
                                v131.m128i_u64[0],
                                v132,
                                v6,
                                KeGetCurrentThread()->PreviousMode,
                                &v117);
                    PrivilegeValue.LowPart = updated;
                    *(_QWORD *)(v4 + 8) = v117;
                    return updated;
                  }
                  return -1073741727;
                }
                return -1073741820;
              }
              if ( v68 != 1 )
                return -1073741821;
              if ( PreviousMode )
                return -1073741790;
              if ( SystemInformationLength != 24 )
                return -1073741820;
              return KeInitializeEntropySystem(*(_QWORD *)SystemInformation);
            }
            else
            {
              return KeProcessorProfileControlArea((__int64)SystemInformation, SystemInformationLength, PreviousMode);
            }
          }
          else
          {
            if ( PreviousMode )
              return -1073741727;
            if ( SystemInformationLength != 32 )
              return -1073741820;
            return BgkSetBootGraphicsInformation(
                     *(_QWORD *)&SystemInformationClass,
                     SystemInformation,
                     SystemInformationLength,
                     1LL);
          }
        }
      }
      if ( v5 > SystemCpuSetTagInformation )
      {
        if ( v5 == SystemWin32WerStartCallout )
        {
          v126 = 0LL;
          v127 = 0LL;
          if ( SystemInformationLength != 8 )
          {
            if ( SystemInformationLength )
              return -1073741820;
            updated = 0;
            Process = KeGetCurrentThread()->ApcState.Process;
            SessionId = PsGetSessionIdEx((__int64)Process);
            if ( SessionId == -1 )
              return updated;
            v127 = Process;
            return PsInvokeWin32Callout(32, &v126, 1, (__int64)&SessionId);
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          v129 = *(HANDLE *)v4;
          v109 = 0LL;
          updated = ObReferenceObjectByHandle(v129, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v109, 0LL);
          if ( updated < 0 )
            return updated;
          v50 = (_KPROCESS *)v109;
          SessionId = PsGetSessionIdEx((__int64)v109);
          if ( SessionId != -1 )
          {
            v127 = v50;
            updated = PsInvokeWin32Callout(32, &v126, 1, (__int64)&SessionId);
          }
          goto LABEL_214;
        }
        if ( v5 == SystemActivityModerationExeState )
        {
          if ( SystemInformationLength != 24 )
            return -1073741820;
          v131 = *(__m128i *)SystemInformation;
          *(_QWORD *)&v132 = *((_QWORD *)SystemInformation + 2);
          result = VfProbeAndCaptureUnicodeStringBuffer(&v131, 1LL, SystemInformationLength, 1LL);
          if ( result < 0 )
            return result;
          updated = PsSetExeModerationState((__int64)&v131, v132);
          v61 = &v131;
          goto LABEL_421;
        }
        if ( v5 != SystemCodeIntegrityUnlockInformation )
        {
          if ( v5 != SystemIntegrityQuotaInformation )
            return -1073741821;
          if ( !SystemInformationLength )
          {
            if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return -1073741727;
            return VslRelaxQuotas();
          }
          return -1073741811;
        }
      }
      else
      {
        switch ( v5 )
        {
          case SystemCpuSetTagInformation:
            if ( SystemInformationLength < 8 )
              return -1073741820;
            v91 = SystemInformationLength - 8;
            if ( (((_BYTE)SystemInformationLength - 8) & 7) != 0 || v91 > 0x100 )
              return -1073741820;
            v92 = *(_QWORD *)SystemInformation;
            v130 = *(_QWORD *)SystemInformation;
            memmove(v135, (char *)SystemInformation + 8, v91);
            updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            if ( updated < 0 )
              return updated;
            return KeSetTagCpuSets(v91 >> 3, (__int64)v135, v92);
          case SystemHypervisorDetailInformation:
            return -1073741637;
          case SystemVmGenerationCountInformation:
            if ( PreviousMode )
              return -1073741790;
            if ( SystemInformationLength != 8 )
              return -1073741820;
            return KdInitialize(3LL, SystemInformation, &KdpContext, 1LL);
        }
        if ( v5 != SystemCodeIntegrityPolicyInformation )
        {
          if ( v5 != SystemAllowedCpuSetsInformation )
          {
            if ( v5 != SystemInterruptCpuSetsInformation )
              return -1073741821;
            v125 = 0LL;
            if ( SystemInformationLength != 16 )
              return -1073741820;
            if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
              return -1073741727;
            return KeIntSteerAssignCpuSetForGsiv(*(_OWORD *)v4, WORD2(*(_QWORD *)v4), *(_QWORD *)(v4 + 8));
          }
          if ( (SystemInformationLength & 7) != 0 || SystemInformationLength > 0x100 )
            return -1073741820;
          memmove(v134, SystemInformation, SystemInformationLength);
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( result < 0 )
            return result;
          v88 = (unsigned int)v3 >> 3;
          v89 = 0;
          v90 = v134;
          return KeModifySystemAllowedCpuSets(v88, (int)v90, v87, v89, Object);
        }
      }
    }
    if ( qword_140F04BC0 )
      return guard_dispatch_icall_no_overrides((unsigned int)v5, SystemInformation);
    return -1073741637;
  }
  if ( v5 == SystemCpuQuotaInformation )
    return PsSetCpuQuotaInformation((__int64)SystemInformation, SystemInformationLength, PreviousMode);
  if ( v5 > SystemWatchdogTimerHandler )
  {
    if ( v5 <= SystemVerifierInformationEx )
    {
      if ( v5 == SystemVerifierInformationEx )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741790;
        if ( (_DWORD)v3 != 40 )
          return -1073741820;
        return VfSetVerifierInformationEx(v4);
      }
      if ( v5 <= SystemFileCacheInformationEx )
      {
        if ( v5 == SystemFileCacheInformationEx )
        {
LABEL_175:
          v104[0] = 0;
          if ( SystemInformationLength < 0x40 )
            return -1073741820;
          if ( v5 == SystemFileCacheInformation )
          {
            v42 = 0;
            v113 = 0;
          }
          else
          {
            v113 = *((_DWORD *)SystemInformation + 15);
            v42 = v113;
            if ( (v113 & 0xFFFFFFF0) != 0 || (v113 & 0xC) == 0xC || (v113 & 3) == 3 )
              return -1073741584;
          }
          if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
            return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 1, 1, v42, v104);
          return -1073741790;
        }
        if ( v5 != SystemWatchdogTimerInformation )
        {
          switch ( v5 )
          {
            case SystemWow64SharedInformationObsolete:
              return -1073741822;
            case SystemRegisterFirmwareTableInformationHandler:
              return ExpRegisterFirmwareTableInformationHandler(
                       (__int64)SystemInformation,
                       SystemInformationLength,
                       PreviousMode);
            case SystemSuperfetchInformation:
              return PfSetSuperfetchInformation(
                       79LL,
                       (__int128 *)SystemInformation,
                       SystemInformationLength,
                       PreviousMode);
          }
          if ( v5 != SystemMemoryListInformation )
            return -1073741821;
          if ( SystemInformationLength < 4 )
            return -1073741820;
          v112 = 6;
          return MmIssueMemoryListCommand(*(_DWORD *)SystemInformation, PreviousMode, -1LL);
        }
        if ( PreviousMode || !SystemInformation || SystemInformationLength != 8 )
          return -1073741811;
        if ( !*(_DWORD *)SystemInformation )
          return -1073741637;
        v40 = (unsigned int)(*(_DWORD *)SystemInformation - 1);
        if ( *(_DWORD *)SystemInformation == 1
          || (v40 = (unsigned int)(*(_DWORD *)SystemInformation - 2), *(_DWORD *)SystemInformation == 2)
          || (v40 = (unsigned int)(*(_DWORD *)SystemInformation - 3), *(_DWORD *)SystemInformation == 3) )
        {
          guard_dispatch_icall_no_overrides(v40, SystemInformation);
          return 0;
        }
        if ( *(_DWORD *)SystemInformation == 4 )
          return -1073741637;
        v41 = (unsigned int)(*(_DWORD *)SystemInformation - 6);
        if ( *(_DWORD *)SystemInformation == 6 )
        {
          LODWORD(v41) = 1;
          return guard_dispatch_icall_no_overrides(v41, SystemInformation);
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
      v43 = v5 - 82;
      if ( v43 )
      {
        v44 = v43 - 4;
        if ( !v44 )
          return ObSetRefTraceInformation(SystemInformation, SystemInformationLength);
        v45 = v44 - 1;
        if ( !v45 )
        {
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741790;
          if ( (_DWORD)v3 == 8 )
          {
            v49 = *(_QWORD *)v4;
            MmSpecialPoolTag = *(_QWORD *)v4;
            MmSpecialPoolCatchOverruns = BYTE4(v49) & 1;
            return updated;
          }
          return -1073741820;
        }
        v46 = v45 - 2;
        if ( v46 )
        {
          if ( v46 != 2 )
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
          v47 = KeGetCurrentThread()->ApcState.Process;
          if ( !v47[1].ReadyTime )
            return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
          v48 = WORD2(v47[3].PerProcessorCycleTimes);
          if ( v48 != 332 && v48 != 452 )
            LOBYTE(v7) = 0;
          if ( !(_BYTE)v7 )
            return DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
          return -1073741637;
        }
        return -1073741727;
      }
      if ( SystemInformationLength < 0x18 )
        return -1073741820;
      if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
        return -1073741727;
      if ( PreviousMode )
      {
        v131 = *(__m128i *)v4;
        *(_QWORD *)&v132 = *(_QWORD *)(v4 + 16);
        v4 = (unsigned __int64)&v131;
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
        return -1073741811;
      v128 = *(UNICODE_STRING *)v4;
      updated = PsLookupProcessThreadByCid((__int64)&v128, 0LL, &v116);
      if ( updated < 0 )
        return updated;
      v50 = (_KPROCESS *)v116;
      if ( *((_BYTE *)v116 + 4) )
      {
        updated = -1073741749;
      }
      else
      {
        KeSetActualBasePriorityThread((ULONG_PTR)v116, *(_DWORD *)(v4 + 16));
        updated = 259;
      }
LABEL_214:
      ObfDereferenceObject(v50);
      return updated;
    }
    if ( v5 > SystemProcessorMicrocodeUpdateInformation )
    {
      v62 = v5 - 106;
      if ( !v62 )
        return -1073741821;
      v63 = v62 - 3;
      if ( v63 )
      {
        v64 = v63 - 1;
        if ( !v64 )
          return -1073741822;
        if ( v64 != 1 )
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
      return SmSetStoreInformation(
               *(__int64 *)&SystemInformationClass,
               (__int64)SystemInformation,
               SystemInformationLength,
               PreviousMode);
    }
    if ( v5 == SystemProcessorMicrocodeUpdateInformation )
      return ExpSetProcessorMicrocodeUpdateInformation((unsigned int *)SystemInformation, SystemInformationLength);
    v51 = v5 - 93;
    if ( !v51 )
    {
      v55 = 172;
LABEL_226:
      if ( SystemInformationLength != v55 )
        return -1073741820;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
        return -1073741727;
      return ExpSetTimeZoneInformation((_OWORD *)v4, v55);
    }
    v52 = v51 - 1;
    if ( !v52 )
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741790;
      if ( (_DWORD)v3 == 8 )
      {
        v131.m128i_i64[0] = *(_QWORD *)v4;
        _InterlockedOr((volatile signed __int32 *)(MmWriteableSharedUserData + 928), v131.m128i_u32[0]);
        _InterlockedAnd((volatile signed __int32 *)(MmWriteableSharedUserData + 928), ~v131.m128i_i32[1]);
        return updated;
      }
      return -1073741820;
    }
    v53 = v52 - 1;
    if ( !v53 )
      return -1073741637;
    v54 = v53 - 2;
    if ( v54 )
    {
      if ( v54 != 5 )
        return -1073741821;
      v55 = 432;
      goto LABEL_226;
    }
    if ( SystemInformationLength != 40 )
      return -1073741820;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741727;
      v131 = *(__m128i *)v4;
      v132 = *(_OWORD *)(v4 + 16);
      *(_QWORD *)&v133 = *(_QWORD *)(v4 + 32);
      result = VfProbeAndCaptureUnicodeStringBuffer(&v131.m128i_u64[1], 1LL, v56, v57);
      if ( result < 0 )
        return result;
      v60 = VfProbeAndCaptureUnicodeStringBuffer((char *)&v132 + 8, 1LL, v58, v59);
      if ( v60 < 0 )
      {
        VfFreeCapturedUnicodeString(&v131.m128i_u64[1]);
        return v60;
      }
      v4 = (unsigned __int64)&v131;
    }
    updated = VfFaultsSetParameters(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(v4 + 8);
    v61 = (__m128i *)(v4 + 24);
LABEL_421:
    VfFreeCapturedUnicodeString(v61);
    return updated;
  }
  if ( v5 == SystemWatchdogTimerHandler )
    return -1073741637;
  if ( v5 > SystemPrioritySeperation )
  {
    if ( v5 <= SystemVerifierInformation )
    {
      if ( v5 != SystemVerifierInformation )
      {
        if ( v5 != SystemVerifierAddDriverInformation && v5 != SystemVerifierRemoveDriverInformation )
        {
          if ( v5 == SystemTimeSlipNotification )
          {
            if ( SystemInformationLength != 8 )
              return -1073741820;
            if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
              return -1073741727;
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              v122 = *(HANDLE *)v4;
              if ( v122 )
              {
                v109 = 0LL;
                updated = ObReferenceObjectByHandle(v122, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v109, 0LL);
                v30 = v109;
                if ( updated < 0 )
                  return updated;
              }
              else
              {
                v30 = 0LL;
                updated = 0;
              }
              KdUpdateTimeSlipEvent(v30);
              return updated;
            }
            return -1073741790;
          }
          if ( (unsigned int)(v5 - 47) >= 2 )
            return -1073741821;
          return -1073741822;
        }
        if ( SystemInformationLength != 16 )
          return -1073741820;
        if ( !PreviousMode )
          goto LABEL_115;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
        if ( result < 0 )
          return result;
        v4 = (unsigned __int64)Buf1;
        if ( LOWORD(Buf1[0]) )
        {
LABEL_115:
          v31 = v5 - 40;
          if ( !v31 )
          {
            v32 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
            goto LABEL_418;
          }
          if ( v31 == 1 )
          {
            v32 = VfRemoveVerifierEntry(v4, SystemInformation, *(_QWORD *)&SystemInformationLength, v8);
LABEL_418:
            updated = v32;
            goto LABEL_419;
          }
LABEL_415:
          updated = -1073741821;
LABEL_419:
          if ( !PreviousMode )
            return updated;
          v61 = (__m128i *)v4;
          goto LABEL_421;
        }
        return -1073741585;
      }
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return -1073741790;
      return VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
    }
    switch ( v5 )
    {
      case SystemLoadGdiDriverInSystemSpace:
        LODWORD(v8) = 0;
        goto LABEL_131;
      case SystemPrefetcherInformation:
        return PfSnSetPrefetcherInformation(
                 *(__int64 *)&SystemInformationClass,
                 (__int128 *)SystemInformation,
                 SystemInformationLength,
                 PreviousMode);
      case SystemComPlusPackage:
        if ( SystemInformationLength == 4 )
        {
          v33 = *(_DWORD *)SystemInformation;
          updated = ExpUpdateComPlusPackage(*(_DWORD *)SystemInformation);
          if ( updated >= 0 )
            *(_DWORD *)(MmWriteableSharedUserData + 736) = v33;
          return updated;
        }
        return -1073741820;
    }
    if ( v5 != SystemHotpatchInformation )
      return -1073741821;
    return -1073741637;
  }
  if ( v5 == SystemPrioritySeperation )
  {
    if ( SystemInformationLength == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        PsChangeQuantumTable(1, *(_DWORD *)v4);
        return 0;
      }
      return -1073741727;
    }
    return -1073741820;
  }
  if ( v5 <= SystemTimeAdjustmentInformation )
  {
    if ( v5 != SystemTimeAdjustmentInformation )
    {
      if ( v5 != SystemFlagsInformation )
      {
        if ( v5 != SystemFileCacheInformation )
        {
          if ( v5 == SystemDpcBehaviorInformation )
          {
            if ( SystemInformationLength == 20 )
            {
              if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
              {
                v131 = *(__m128i *)v4;
                LODWORD(v132) = *(_DWORD *)(v4 + 16);
                KiMinimumDpcRate = v131.m128i_i32[2];
                KiMaximumDpcQueueDepth = v131.m128i_i32[1];
                KiAdjustDpcThreshold = v131.m128i_i32[3];
                KiIdealDpcRate = v132;
                KeSynchronizeWithDynamicProcessors();
                ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
                if ( ActiveProcessorCount )
                {
                  v13 = KiProcessorBlock;
                  v14 = ActiveProcessorCount;
                  do
                  {
                    v15 = *v13;
                    *(_DWORD *)(v15 + 14504) = KiMaximumDpcQueueDepth;
                    *(_DWORD *)(v15 + 14512) = KiMinimumDpcRate;
                    ++v13;
                    --v14;
                  }
                  while ( v14 );
                }
                return updated;
              }
              return -1073741727;
            }
            return -1073741820;
          }
          if ( v5 != SystemLoadGdiDriverInformation )
          {
            if ( v5 == SystemUnloadGdiDriverInformation )
            {
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
            return -1073741821;
          }
LABEL_131:
          if ( SystemInformationLength == 48 )
          {
            v34 = 0;
          }
          else
          {
            if ( SystemInformationLength != 56 )
              return -1073741820;
            v34 = 1;
          }
          if ( !PreviousMode )
          {
            *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
            v35 = MmLoadSystemImage((__int64)Buf1, 0LL, 0LL, v8, &v115, &BaseOfImage);
            updated = v35;
            if ( v35 < 0 )
            {
              if ( v35 == -1073741411 )
                return -1073741554;
            }
            else
            {
              v36 = (char *)BaseOfImage;
              if ( v34 )
                v37 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, (PULONG)&v109);
              else
                v37 = 0LL;
              v38 = RtlImageNtHeader(v36);
              v39 = &v36[v38->OptionalHeader.AddressOfEntryPoint];
              *(_QWORD *)(v4 + 16) = v36;
              *(_QWORD *)(v4 + 24) = v115;
              *(_QWORD *)(v4 + 32) = v39;
              if ( v34 )
              {
                *(_QWORD *)(v4 + 40) = v37;
                *(_DWORD *)(v4 + 48) = v38->OptionalHeader.SizeOfImage;
              }
              else
              {
                *(_DWORD *)(v4 + 40) = v38->OptionalHeader.SizeOfImage;
              }
            }
            return updated;
          }
          return -1073741727;
        }
        goto LABEL_175;
      }
      if ( SystemInformationLength == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          NtGlobalFlag = NtGlobalFlag & 0x6DCE640F | *(_DWORD *)v4 & 0x92319BF0;
          *(_DWORD *)v4 = NtGlobalFlag;
          return updated;
        }
        return -1073741790;
      }
      return -1073741820;
    }
    if ( ((SystemInformationLength - 8) & 0xFFFFFFF7) != 0 )
      return -1073741820;
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
      return -1073741727;
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      if ( (_DWORD)v3 == 16 )
      {
        v16 = *(_BYTE *)(v4 + 8);
        v102 = v16;
        v111 = *(_QWORD *)v4;
      }
      else
      {
        v16 = *(_BYTE *)(v4 + 4);
        v102 = v16;
        v17 = *(unsigned int *)v4;
        v111 = v17;
        if ( v17 )
          v111 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v17;
      }
      if ( v16 )
        v111 = MEMORY[0xFFFFF78000000300];
      ExAcquireTimeRefreshLockExclusive();
      updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v111, (__int64)&v102);
      ExReleaseTimeRefreshLockExclusive();
      return updated;
    }
    return -1073741790;
  }
  v18 = v5 - 30;
  if ( !v18 )
    return MmCreateMirror();
  v19 = v18 - 1;
  if ( !v19 )
    return EtwSetPerformanceTraceInformation(
             (unsigned __int8 *)SystemInformation,
             SystemInformationLength,
             PreviousMode);
  v20 = v19 - 3;
  if ( !v20 )
  {
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
      return -1073741727;
    if ( (_DWORD)v3 != 4 )
      goto LABEL_78;
    if ( PreviousMode )
    {
      if ( (v4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v28 = *(_DWORD *)v4;
      v124 = *(_DWORD *)v4;
    }
    else
    {
      v28 = *(_DWORD *)v4;
    }
    if ( !v28 )
    {
      v27 = 0LL;
      return IoConfigureCrashDump(v27, 0);
    }
    v29 = v28 - 1;
    if ( !v29 )
    {
LABEL_78:
      v27 = 1LL;
      return IoConfigureCrashDump(v27, 0);
    }
    if ( v29 == 1 )
      return WheaCrashDumpInitializationComplete();
    return -1073741811;
  }
  v21 = v20 - 3;
  if ( !v21 )
  {
    if ( SystemInformationLength != 16 )
      return -1073741820;
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
      return -1073741727;
    return CmSetRegistryQuotaInformation((unsigned int *)v4);
  }
  if ( v21 != 1 )
    return -1073741821;
  if ( SystemInformationLength != 16 )
    return -1073741820;
  if ( !PreviousMode )
  {
    *(_OWORD *)Buf1 = *(_OWORD *)SystemInformation;
    if ( !memcmp(*((const void **)SystemInformation + 1), L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
    {
      v24 = *(void **)(PsWin32kDataTableEntry + 48);
      v25 = RtlImageNtHeader(v24);
      if ( !v25 )
      {
        MmUnloadSystemImage(PsWin32kDataTableEntry);
        return -1073741701;
      }
      updated = ExpInitializeSessionDriver((__int64)v24 + v25->OptionalHeader.AddressOfEntryPoint, (__int64)v24);
      if ( updated < 0 && !(unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) )
        MmUnloadSystemImage(PsWin32kDataTableEntry);
      return updated;
    }
    return -1073741637;
  }
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[4].IdealProcessorAssignmentBlock) & 8) == 0
    || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
  {
    return -1073741727;
  }
  v22 = 0x7FFFFFFF0000LL;
  if ( v4 < 0x7FFFFFFF0000LL )
    v22 = v4;
  LODWORD(Buf1[0]) = *(_DWORD *)v22;
  Buf1[1] = *(void **)(v22 + 8);
  if ( LOWORD(Buf1[0]) != 62 )
    return -1073741727;
  if ( memcmp(Buf1[1], L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
    return -1073741727;
  Buf1[1] = L"\\SystemRoot\\System32\\win32k.sys";
  WORD1(Buf1[0]) = 62;
  return ZwSetSystemInformation(SystemExtendServiceTableInformation, Buf1, 0x10u);
}
