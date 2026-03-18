/*
 * XREFs of NtSetSystemInformation @ 0x140AE1300
 * Callers:
 *     WmipRegisterFirmwareProviders @ 0x140C3CB5C (WmipRegisterFirmwareProviders.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExpUpdateTimerConfiguration @ 0x140338FA4 (ExpUpdateTimerConfiguration.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     KeModifySystemAllowedCpuSets @ 0x1403C6548 (KeModifySystemAllowedCpuSets.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     MiGetThreadPartition @ 0x1404385D0 (MiGetThreadPartition.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     RtlCheckTokenMembership @ 0x140471820 (RtlCheckTokenMembership.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404AA1D4 (ExCpuSetResourceManagerAccessCheck.c)
 *     VslProvisionDumpEncryption @ 0x14058DA34 (VslProvisionDumpEncryption.c)
 *     IoConfigureCrashDump @ 0x140590DB4 (IoConfigureCrashDump.c)
 *     IoProvisionCrashDumpKey @ 0x140591CF0 (IoProvisionCrashDumpKey.c)
 *     KdUpdateTimeSlipEvent @ 0x1405AFC1C (KdUpdateTimeSlipEvent.c)
 *     KeProcessorProfileControlArea @ 0x1405B07FC (KeProcessorProfileControlArea.c)
 *     KeUpdateDpcWatchdogConfiguration @ 0x1405B4998 (KeUpdateDpcWatchdogConfiguration.c)
 *     KeSetTagCpuSets @ 0x1405BFDEC (KeSetTagCpuSets.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x1405C418C (KeIntSteerAssignCpuSetForGsiv.c)
 *     PsSetCpuQuotaInformation @ 0x1405E4F54 (PsSetCpuQuotaInformation.c)
 *     PsSetExeModerationState @ 0x1405E5400 (PsSetExeModerationState.c)
 *     VfVolatileApplyDifVerification @ 0x140614864 (VfVolatileApplyDifVerification.c)
 *     VfVolatileClearDifRuleClass @ 0x1406148D0 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileRemoveDifVerification @ 0x1406149E0 (VfVolatileRemoveDifVerification.c)
 *     VfVolatileSetDifRuleClass @ 0x140614A94 (VfVolatileSetDifRuleClass.c)
 *     ExpSetBootLoaderMetadata @ 0x140652FC8 (ExpSetBootLoaderMetadata.c)
 *     ExpSetSoftRebootFlags @ 0x14065310C (ExpSetSoftRebootFlags.c)
 *     ExPoolSetLimit @ 0x140654500 (ExPoolSetLimit.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwLoadDriver @ 0x1406A85D0 (ZwLoadDriver.c)
 *     ZwSetSystemInformation @ 0x1406A9B90 (ZwSetSystemInformation.c)
 *     ZwUnloadDriver @ 0x1406A9F30 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     HvlQuerySetBootPagesInfo @ 0x14070EAFC (HvlQuerySetBootPagesInfo.c)
 *     VslRelaxQuotas @ 0x140710214 (VslRelaxQuotas.c)
 *     PnpIommuBlockUnblockDevice @ 0x1407361B8 (PnpIommuBlockUnblockDevice.c)
 *     KeInitializeEntropySystem @ 0x14073D5FC (KeInitializeEntropySystem.c)
 *     ObSetRefTraceInformation @ 0x140744B14 (ObSetRefTraceInformation.c)
 *     ExpQueryElamCertInfo @ 0x1407B4C04 (ExpQueryElamCertInfo.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1407B5650 (ExpRegisterFirmwareTableInformationHandler.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x1407B57DC (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     ExpSetTimeZoneInformation @ 0x1407B5844 (ExpSetTimeZoneInformation.c)
 *     ExpUpdateComPlusPackage @ 0x1407B5B84 (ExpUpdateComPlusPackage.c)
 *     ExSetLeapSecondEnabled @ 0x1407B5FFC (ExSetLeapSecondEnabled.c)
 *     WheaCrashDumpInitializationComplete @ 0x1407C878C (WheaCrashDumpInitializationComplete.c)
 *     CmSetRegistryQuotaInformation @ 0x1407D21FC (CmSetRegistryQuotaInformation.c)
 *     CmUpdateFeatureConfiguration @ 0x1407D5C24 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x1407D5E8C (CmUpdateFeatureUsageSubscription.c)
 *     CmReconcileAndValidateAllHives @ 0x1407D7E5C (CmReconcileAndValidateAllHives.c)
 *     MmCreateMirror @ 0x1407EBEC0 (MmCreateMirror.c)
 *     MmIssueMemoryListCommand @ 0x1407EDC20 (MmIssueMemoryListCommand.c)
 *     MmScrubMemory @ 0x1407FDC70 (MmScrubMemory.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 *     PfSnSetPrefetcherInformation @ 0x14096308C (PfSnSetPrefetcherInformation.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409B1FC0 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409B2024 (ExReleaseTimeRefreshLockExclusive.c)
 *     PsInvokeWin32Callout @ 0x1409BADD0 (PsInvokeWin32Callout.c)
 *     MmLoadSystemImage @ 0x1409C7FC0 (MmLoadSystemImage.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x140A03AB4 (KeSynchronizeWithDynamicProcessors.c)
 *     sub_140A03EB0 @ 0x140A03EB0 (sub_140A03EB0.c)
 *     PsLookupProcessThreadByCid @ 0x140A2C7F0 (PsLookupProcessThreadByCid.c)
 *     PsChangeQuantumTable @ 0x140A32230 (PsChangeQuantumTable.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A440A4 (EtwSetPerformanceTraceInformation.c)
 *     SmSetStoreInformation @ 0x140A5F8F0 (SmSetStoreInformation.c)
 *     DbgkRegisterErrorPort @ 0x140A852C4 (DbgkRegisterErrorPort.c)
 *     MmUnloadSystemImage @ 0x140A8AD10 (MmUnloadSystemImage.c)
 *     ExpInitializeSessionDriver @ 0x140A8E460 (ExpInitializeSessionDriver.c)
 *     MiCombineIdenticalPages @ 0x140A9C0E0 (MiCombineIdenticalPages.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     VfFreeCapturedUnicodeString @ 0x140B82E64 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140B82FCC (VfProbeAndCaptureUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140B83008 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     VfPtGenerateTraceInformation @ 0x140B8BF6C (VfPtGenerateTraceInformation.c)
 *     VfFaultsSetParameters @ 0x140B967F4 (VfFaultsSetParameters.c)
 *     VfAddVerifierEntry @ 0x140B9C32C (VfAddVerifierEntry.c)
 *     VfRemoveVerifierEntry @ 0x140B9C4D4 (VfRemoveVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140B9C4FC (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x140B9C634 (VfSetVerifierInformationEx.c)
 *     BgkSetBootGraphicsInformation @ 0x140BB0424 (BgkSetBootGraphicsInformation.c)
 */

__int64 __fastcall NtSetSystemInformation(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  size_t v3; // r15
  unsigned __int64 v4; // r14
  int v5; // ebx
  ULONG_PTR v6; // rsi
  int v7; // r13d
  __int64 v8; // r9
  char PreviousMode; // r12
  __int64 v10; // rax
  ULONG updated; // edi
  ULONG ActiveProcessorCount; // eax
  __int64 *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  char v16; // cl
  unsigned __int64 v17; // r9
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 result; // rax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  int v30; // ecx
  int v31; // ecx
  PVOID v32; // rcx
  int v33; // ebx
  ULONG v34; // eax
  int v35; // ebx
  char v36; // r15
  int SystemImage; // eax
  unsigned __int64 v38; // rbx
  __int64 v39; // r12
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // ebx
  int v45; // ebx
  int v46; // ebx
  int v47; // ebx
  int v48; // ebx
  _KPROCESS *v49; // rcx
  __int16 v50; // ax
  __int64 v51; // rax
  __int64 v52; // r8
  _KPROCESS *v53; // rbx
  int v54; // ebx
  int v55; // ebx
  int v56; // ebx
  int v57; // ebx
  int v58; // ebx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // ebx
  __m128i *v64; // rcx
  int v65; // ebx
  int v66; // ebx
  int v67; // ebx
  int v68; // ebx
  int v69; // ebx
  int v70; // ebx
  int v71; // ebx
  __int64 ThreadPartition; // rax
  __int64 v73; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rdi
  int v78; // ebx
  int v79; // ebx
  int v80; // ebx
  int v81; // ebx
  int v82; // r15d
  char v83; // bl
  struct _LIST_ENTRY **p_Blink; // rdi
  unsigned __int16 v85; // bx
  const void *v86; // rdi
  char *v87; // rcx
  void *Pool2; // rax
  void *v89; // r14
  __int64 v90; // r8
  int v91; // r15d
  int v92; // r9d
  _BYTE *v93; // rdx
  unsigned int v94; // r15d
  __int64 v95; // rbx
  _KPROCESS *Process; // rbx
  unsigned int v97; // r15d
  unsigned __int64 v98; // rbx
  int v99; // ebx
  __int64 v100; // rcx
  int v101; // ebx
  int v102; // ebx
  int v103; // ebx
  char Object; // [rsp+20h] [rbp-4D8h]
  char v105[10]; // [rsp+30h] [rbp-4C8h] BYREF
  char v106[30]; // [rsp+3Ah] [rbp-4BEh] BYREF
  LUID PrivilegeValue; // [rsp+58h] [rbp-4A0h]
  int SessionId; // [rsp+64h] [rbp-494h] BYREF
  void *Buf1[2]; // [rsp+68h] [rbp-490h] BYREF
  PVOID v111; // [rsp+78h] [rbp-480h] BYREF
  int v112; // [rsp+80h] [rbp-478h]
  unsigned __int64 v113; // [rsp+88h] [rbp-470h] BYREF
  int v114; // [rsp+90h] [rbp-468h]
  int v115; // [rsp+94h] [rbp-464h]
  unsigned __int64 v116; // [rsp+98h] [rbp-460h] BYREF
  __int64 v117; // [rsp+A0h] [rbp-458h] BYREF
  PVOID v118; // [rsp+A8h] [rbp-450h] BYREF
  __int64 v119; // [rsp+B0h] [rbp-448h] BYREF
  __int64 v120; // [rsp+B8h] [rbp-440h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+C0h] [rbp-438h] BYREF
  void *Src[2]; // [rsp+D0h] [rbp-428h]
  int v123; // [rsp+E4h] [rbp-414h]
  HANDLE v124; // [rsp+F0h] [rbp-408h]
  __int64 v125; // [rsp+F8h] [rbp-400h]
  int v126; // [rsp+104h] [rbp-3F4h]
  __int128 v127; // [rsp+110h] [rbp-3E8h]
  __int128 v128; // [rsp+120h] [rbp-3D8h] BYREF
  _KPROCESS *v129; // [rsp+130h] [rbp-3C8h]
  UNICODE_STRING v130; // [rsp+138h] [rbp-3C0h] BYREF
  HANDLE v131; // [rsp+148h] [rbp-3B0h]
  unsigned __int64 v132; // [rsp+170h] [rbp-388h]
  __m128i v133; // [rsp+178h] [rbp-380h] BYREF
  __int128 v134; // [rsp+188h] [rbp-370h] BYREF
  __int128 v135; // [rsp+198h] [rbp-360h]
  _BYTE v136[256]; // [rsp+1B0h] [rbp-348h] BYREF
  _BYTE v137[256]; // [rsp+2B0h] [rbp-248h] BYREF
  _BYTE v138[256]; // [rsp+3B0h] [rbp-148h] BYREF

  v3 = (unsigned int)a3;
  v4 = a2;
  v5 = a1;
  v130 = 0LL;
  v6 = 0LL;
  v105[0] = 0;
  *(_OWORD *)Buf1 = 0LL;
  v116 = 0LL;
  v7 = 1;
  v8 = 1LL;
  v120 = 0LL;
  v119 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  v113 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v105[9] = PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)a1 == 89 )
    {
      v10 = 1LL;
    }
    else if ( (_DWORD)a1 != 151 || (v10 = 0LL, (_DWORD)a3 != 1) )
    {
      v10 = 3LL;
    }
    if ( (_DWORD)a3 )
    {
      if ( (v10 & a2) != 0 )
        ExRaiseDatatypeMisalignment();
      a1 = a2 + (unsigned int)a3;
    }
  }
  updated = 0;
  if ( v5 > 113 )
  {
    if ( v5 > 194 )
    {
      if ( v5 > 223 )
      {
        if ( v5 > 233 )
        {
          v101 = v5 - 235;
          if ( !v101 )
            return (unsigned int)HvlQuerySetBootPagesInfo((_DWORD *)a2, a3, PreviousMode, 0, 0LL);
          v102 = v101 - 8;
          if ( !v102 )
            return (ULONG)-1073741637;
          v103 = v102 - 2;
          if ( v103 )
          {
            if ( v103 == 1 )
            {
              if ( (_DWORD)a3 == 4 )
              {
                if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                {
                  PspBreakOnContextUnwindFailure = *(_DWORD *)v4;
                  return 0;
                }
                return 3221225569LL;
              }
              return 3221225476LL;
            }
            return (ULONG)-1073741821;
          }
          if ( (_DWORD)a3 != 4 )
            return (ULONG)-1073741820;
          if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          {
            ExResourceTimeoutCount = (*(_DWORD *)v4 + 3999) / 0xFA0u;
            return updated;
          }
          return (ULONG)-1073741727;
        }
        if ( v5 == 233 )
          return (unsigned int)PnpIommuBlockUnblockDevice(a2, a3);
        if ( v5 != 224 && v5 != 225 )
        {
          if ( v5 != 226 )
          {
            if ( (unsigned int)(v5 - 228) <= 1 )
            {
              v105[1] = 0;
              RtlCheckTokenMembership(0LL, SeAliasAdminsSid);
              return 3221225569LL;
            }
            return (ULONG)-1073741821;
          }
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return 3221225569LL;
          LOBYTE(v100) = (_DWORD)v3 == 0;
          return (unsigned int)VfPtGenerateTraceInformation(v100);
        }
      }
      else
      {
        if ( v5 == 223 )
          return (unsigned int)ExPoolSetLimit((void *)a2, (unsigned int)a3, PreviousMode);
        if ( v5 > 212 )
        {
          if ( v5 == 217 )
          {
            if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return 3221225506LL;
            return (unsigned int)VfVolatileSetDifRuleClass((void *)v4, (unsigned int)v3);
          }
          else
          {
            if ( v5 != 218 )
            {
              if ( (unsigned int)(v5 - 219) > 1 )
                return (ULONG)-1073741821;
              if ( (_DWORD)a3 != 16 )
                return 3221225476LL;
              if ( !PreviousMode )
                goto LABEL_413;
              if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                return 3221225569LL;
              result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
              if ( (int)result < 0 )
                return result;
              v4 = (unsigned __int64)Buf1;
              if ( LOWORD(Buf1[0]) )
              {
LABEL_413:
                v99 = v5 - 219;
                if ( !v99 )
                {
                  v34 = VfVolatileApplyDifVerification(v4);
                  goto LABEL_418;
                }
                if ( v99 == 1 )
                {
                  v34 = VfVolatileRemoveDifVerification((const UNICODE_STRING *)v4);
                  goto LABEL_418;
                }
                goto LABEL_415;
              }
              return 3221225711LL;
            }
            if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return 3221225506LL;
            return (unsigned int)VfVolatileClearDifRuleClass();
          }
        }
        if ( v5 == 212 )
          return (unsigned int)CmUpdateFeatureUsageSubscription((void *)a2, (unsigned int)a3, PreviousMode);
        if ( v5 != 199 )
        {
          if ( v5 != 204 )
          {
            if ( v5 == 206 )
            {
              if ( (_DWORD)a3 != 8 )
                return 3221225476LL;
              if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
                return 3221225569LL;
              if ( !PsIsCurrentThreadInServerSilo() )
              {
                v105[0] = (unsigned __int8)*(_QWORD *)v4 != 0;
                result = ExSetLeapSecondEnabled(v105[0]);
                updated = result;
                if ( (int)result < 0 )
                  return result;
                *(_BYTE *)ExLeapSecondData = v105[0];
                return updated;
              }
              return 3221225506LL;
            }
            if ( v5 == 207 )
            {
              if ( (_DWORD)a3 != 4 )
                return 3221225476LL;
              if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                return 3221225506LL;
              v112 = 0;
              if ( (*(_DWORD *)v4 & 0x2018) == 0 )
              {
                NtGlobalFlag2 = NtGlobalFlag2 & 0x2018 | *(_DWORD *)v4;
                *(_DWORD *)v4 = NtGlobalFlag2;
                return updated;
              }
              return 3221225485LL;
            }
            if ( v5 != 210 )
              return (ULONG)-1073741821;
            return (unsigned int)CmUpdateFeatureConfiguration((void *)a2, (unsigned int)a3, PreviousMode);
          }
          v125 = 0LL;
          if ( (unsigned int)a3 < 8 )
            return 3221225476LL;
          v97 = a3 - 8;
          if ( (((_BYTE)a3 - 8) & 7) != 0 || v97 > 0x100 )
            return 3221225476LL;
          v98 = *(_QWORD *)a2;
          memmove(v138, (const void *)(a2 + 8), v97);
          if ( v98 >= 2 )
            return 3221225485LL;
          updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( (updated & 0x80000000) != 0 )
            return updated;
          v91 = v97 >> 3;
          v92 = v98;
          v93 = v138;
          return (unsigned int)KeModifySystemAllowedCpuSets(v91, (int)v93, v90, v92, Object);
        }
      }
    }
    else
    {
      if ( v5 == 194 )
      {
        if ( !(_DWORD)a3 )
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return 3221225569LL;
          updated = VslProvisionDumpEncryption();
          if ( (updated & 0x80000000) != 0 )
            return updated;
          return (unsigned int)IoProvisionCrashDumpKey();
        }
        return (ULONG)-1073741811;
      }
      if ( v5 <= 155 )
      {
        if ( v5 == 155 )
          return (unsigned int)CmReconcileAndValidateAllHives();
        if ( v5 > 132 )
        {
          v78 = v5 - 134;
          if ( !v78 )
          {
            if ( (_DWORD)a3 != 32 )
              return 3221225476LL;
            return (unsigned int)sub_140A03EB0(a1, a2);
          }
          v79 = v78 - 8;
          if ( !v79 )
          {
            *(_OWORD *)Src = 0LL;
            p_Blink = &PsGetCurrentServerSiloGlobals()[85].Blink;
            PrivilegeValue = (LUID)p_Blink;
            if ( (_DWORD)v3 == 48 )
            {
              if ( SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
              {
                v133 = *(__m128i *)v4;
                v134 = *(_OWORD *)(v4 + 16);
                v135 = *(_OWORD *)(v4 + 32);
                if ( _InterlockedCompareExchange((volatile signed __int32 *)p_Blink, _mm_cvtsi128_si32(v133), 0) )
                  return 0LL;
                *(_OWORD *)Src = v134;
                v134 = 0LL;
                v85 = _mm_cvtsi128_si32(*(__m128i *)Src);
                if ( v85 && (v85 & 1) == 0 )
                {
                  v86 = Src[1];
                  if ( ((__int64)Src[1] & 1) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v87 = (char *)Src[1] + v85;
                  if ( (unsigned __int64)v87 > 0x7FFFFFFF0000LL || v87 < Src[1] )
                  {
                    v86 = Src[1];
                    v85 = (unsigned __int16)Src[0];
                  }
                  Pool2 = (void *)ExAllocatePool2(0x101uLL);
                  v89 = Pool2;
                  if ( Pool2 )
                  {
                    memmove(Pool2, v86, v85);
                    *((_QWORD *)&v134 + 1) = v89;
                    LOWORD(v134) = v85;
                    WORD1(v134) = v85;
                  }
                  p_Blink = (struct _LIST_ENTRY **)PrivilegeValue;
                }
                *(__m128i *)p_Blink = v133;
                *((_OWORD *)p_Blink + 1) = v134;
                *((_OWORD *)p_Blink + 2) = v135;
                return 0;
              }
              return 3221225569LL;
            }
            return 3221225476LL;
          }
          v80 = v79 - 8;
          if ( !v80 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              return 3221225569LL;
            return (unsigned int)ExpSetBootLoaderMetadata((void *)v4, (unsigned int)v3);
          }
          v81 = v80 - 1;
          if ( !v81 )
          {
            PrivilegeValue = (LUID)19LL;
            if ( !SeSinglePrivilegeCheck((LUID)19LL, PreviousMode) )
              return 3221225569LL;
            v82 = v3 - 1;
            if ( v82 )
            {
              if ( v82 != 3 )
                return 3221225476LL;
              v7 = *(_DWORD *)v4;
              v123 = *(_DWORD *)v4;
            }
            else
            {
              v83 = *(_BYTE *)v4;
              if ( *(_BYTE *)v4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                return 3221225569LL;
              if ( !v83 )
                v7 = 5;
            }
            return (unsigned int)ExpSetSoftRebootFlags(v7);
          }
          if ( v81 != 1 )
            return (ULONG)-1073741821;
          if ( (_DWORD)a3 != 8 )
            return 3221225476LL;
          if ( PreviousMode )
            return (unsigned int)ExpQueryElamCertInfo(*(_QWORD *)a2, a2);
          return 3221225485LL;
        }
        if ( v5 == 132 )
        {
          if ( (_DWORD)a3 != 4 )
            return 3221225476LL;
          *(_QWORD *)&DriverServiceName.Length = 7733364LL;
          DriverServiceName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\condrv";
          if ( *(_BYTE *)a2 & 1 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v75 = KeAbPreAcquire((__int64)&ExpConDrvLoadLock, 0LL);
            v76 = v75;
            if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpConDrvLoadLock, 0LL) )
              ExfAcquirePushLockExclusiveEx(&ExpConDrvLoadLock, (__int64)v75, (__int64)&ExpConDrvLoadLock);
            if ( v76 )
              *((_BYTE *)v76 + 10) = 1;
            updated = ZwLoadDriver(&DriverServiceName);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpConDrvLoadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&ExpConDrvLoadLock);
            KeAbPostRelease((ULONG_PTR)&ExpConDrvLoadLock);
            KeLeaveCriticalRegion();
            return updated;
          }
          if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
            return 3221225569LL;
          return (ULONG)ZwUnloadDriver(&DriverServiceName);
        }
        else
        {
          v68 = v5 - 126;
          if ( v68 )
          {
            v69 = v68 - 1;
            if ( !v69 )
            {
              if ( (_DWORD)a3 == 16 )
              {
                if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
                {
                  v124 = *(HANDLE *)v4;
                  updated = MmScrubMemory(v73, (ULONG_PTR)v124, &v120);
                  PrivilegeValue.LowPart = updated;
                  *(_QWORD *)(v4 + 8) = v120;
                  return updated;
                }
                return 3221225569LL;
              }
              return 3221225476LL;
            }
            v70 = v69 - 2;
            if ( v70 )
            {
              v71 = v70 - 1;
              if ( !v71 )
              {
                if ( (((_DWORD)a3 - 16) & 0xFFFFFFE7) == 0 && (_DWORD)a3 != 40 )
                {
                  if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
                  {
                    memmove(&v133, (const void *)v4, v3);
                    if ( (_DWORD)v3 == 32 )
                      v6 = *((_QWORD *)&v134 + 1);
                    ThreadPartition = MiGetThreadPartition((__int64)KeGetCurrentThread());
                    updated = MiCombineIdenticalPages(
                                ThreadPartition,
                                v133.m128i_u64[0],
                                v134,
                                v6,
                                KeGetCurrentThread()->PreviousMode,
                                &v119);
                    PrivilegeValue.LowPart = updated;
                    *(_QWORD *)(v4 + 8) = v119;
                    return updated;
                  }
                  return 3221225569LL;
                }
                return 3221225476LL;
              }
              if ( v71 != 1 )
                return (ULONG)-1073741821;
              if ( PreviousMode )
                return 3221225506LL;
              if ( (_DWORD)a3 != 24 )
                return 3221225476LL;
              return (unsigned int)KeInitializeEntropySystem(
                                     *(_QWORD *)a2,
                                     *(_QWORD *)(a2 + 8),
                                     *(_QWORD *)(a2 + 16),
                                     1LL);
            }
            else
            {
              return (unsigned int)KeProcessorProfileControlArea(a2, a3, PreviousMode);
            }
          }
          else
          {
            if ( PreviousMode )
              return 3221225569LL;
            if ( (_DWORD)a3 != 32 )
              return (ULONG)-1073741820;
            return (unsigned int)BgkSetBootGraphicsInformation(a1, a2, a3, 1LL);
          }
        }
      }
      if ( v5 > 176 )
      {
        if ( v5 == 177 )
        {
          v128 = 0LL;
          v129 = 0LL;
          if ( (_DWORD)a3 != 8 )
          {
            if ( (_DWORD)a3 )
              return 3221225476LL;
            updated = 0;
            Process = KeGetCurrentThread()->ApcState.Process;
            SessionId = PsGetSessionIdEx((__int64)Process);
            if ( SessionId == -1 )
              return updated;
            v129 = Process;
            return (unsigned int)PsInvokeWin32Callout(32, &v128, 1, (__int64)&SessionId);
          }
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return 3221225569LL;
          v131 = *(HANDLE *)v4;
          v111 = 0LL;
          updated = ObReferenceObjectByHandle(v131, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v111, 0LL);
          if ( (updated & 0x80000000) != 0 )
            return updated;
          v53 = (_KPROCESS *)v111;
          SessionId = PsGetSessionIdEx((__int64)v111);
          if ( SessionId != -1 )
          {
            v129 = v53;
            updated = PsInvokeWin32Callout(32, &v128, 1, (__int64)&SessionId);
          }
          goto LABEL_214;
        }
        if ( v5 == 187 )
        {
          if ( (_DWORD)a3 != 24 )
            return 3221225476LL;
          v133 = *(__m128i *)a2;
          *(_QWORD *)&v134 = *(_QWORD *)(a2 + 16);
          result = VfProbeAndCaptureUnicodeStringBuffer(&v133, 1LL, a3, 1LL);
          if ( (int)result < 0 )
            return result;
          updated = PsSetExeModerationState((__int64)&v133, v134, DWORD1(v134));
          v64 = &v133;
          goto LABEL_421;
        }
        if ( v5 != 190 )
        {
          if ( v5 != 191 )
            return (ULONG)-1073741821;
          if ( !(_DWORD)a3 )
          {
            if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
              return 3221225569LL;
            return (unsigned int)VslRelaxQuotas();
          }
          return (ULONG)-1073741811;
        }
      }
      else
      {
        switch ( v5 )
        {
          case 176:
            if ( (unsigned int)a3 < 8 )
              return 3221225476LL;
            v94 = a3 - 8;
            if ( (((_BYTE)a3 - 8) & 7) != 0 || v94 > 0x100 )
              return 3221225476LL;
            v95 = *(_QWORD *)a2;
            v132 = *(_QWORD *)a2;
            memmove(v137, (const void *)(a2 + 8), v94);
            updated = ExCpuSetResourceManagerAccessCheck(PreviousMode);
            if ( (updated & 0x80000000) != 0 )
              return updated;
            return (unsigned int)KeSetTagCpuSets(v94 >> 3, (__int64)v137, v95);
          case 159:
            return (ULONG)-1073741637;
          case 161:
            if ( PreviousMode )
              return 3221225506LL;
            if ( (_DWORD)a3 != 8 )
              return 3221225476LL;
            return (unsigned int)KdInitialize(3LL, a2, &KdpContext, 1LL);
        }
        if ( v5 != 164 )
        {
          if ( v5 != 168 )
          {
            if ( v5 != 170 )
              return (ULONG)-1073741821;
            v127 = 0LL;
            if ( (_DWORD)a3 != 16 )
              return 3221225476LL;
            if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
              return 3221225569LL;
            return (unsigned int)KeIntSteerAssignCpuSetForGsiv(*(_OWORD *)v4, WORD2(*(_QWORD *)v4), *(_QWORD *)(v4 + 8));
          }
          if ( (a3 & 7) != 0 || (unsigned int)a3 > 0x100 )
            return 3221225476LL;
          memmove(v136, (const void *)a2, (unsigned int)a3);
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( (int)result < 0 )
            return result;
          v91 = (unsigned int)v3 >> 3;
          v92 = 0;
          v93 = v136;
          return (unsigned int)KeModifySystemAllowedCpuSets(v91, (int)v93, v90, v92, Object);
        }
      }
    }
    if ( qword_140F04920 )
      return (unsigned int)guard_dispatch_icall_no_overrides((unsigned int)v5, a2, (unsigned int)a3, 1LL);
    return (ULONG)-1073741637;
  }
  if ( v5 == 113 )
    return (unsigned int)PsSetCpuQuotaInformation(a2, a3, PreviousMode);
  if ( v5 > 71 )
  {
    if ( v5 <= 92 )
    {
      if ( v5 == 92 )
      {
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return 3221225506LL;
        if ( (_DWORD)v3 != 40 )
          return 3221225476LL;
        return (unsigned int)VfSetVerifierInformationEx(v4);
      }
      if ( v5 <= 81 )
      {
        if ( v5 == 81 )
        {
LABEL_175:
          v106[0] = 0;
          if ( (unsigned int)a3 < 0x40 )
            return 3221225476LL;
          if ( v5 == 21 )
          {
            v44 = 0;
            v115 = 0;
          }
          else
          {
            v115 = *(_DWORD *)(a2 + 60);
            v44 = v115;
            if ( (v115 & 0xFFFFFFF0) != 0 || (v115 & 0xC) == 0xC || (v115 & 3) == 3 )
              return 3221225712LL;
          }
          if ( SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
            return MmAdjustWorkingSetSizeEx(*(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 32), 1u, 1, v44, v106);
          return 3221225506LL;
        }
        if ( v5 != 72 )
        {
          switch ( v5 )
          {
            case 'J':
              return 3221225474LL;
            case 'K':
              return (unsigned int)ExpRegisterFirmwareTableInformationHandler(a2, a3, PreviousMode);
            case 'O':
              return (unsigned int)PfSetSuperfetchInformation(79LL, (__int128 *)a2, a3, PreviousMode);
            case 'P':
              if ( (unsigned int)a3 < 4 )
                return (ULONG)-1073741820;
              v114 = 6;
              return (unsigned int)MmIssueMemoryListCommand(*(_DWORD *)a2, PreviousMode, -1LL);
            default:
              return (ULONG)-1073741821;
          }
        }
        if ( PreviousMode || !a2 || (_DWORD)a3 != 8 )
          return 3221225485LL;
        if ( !*(_DWORD *)a2 )
          return (ULONG)-1073741637;
        v42 = (unsigned int)(*(_DWORD *)a2 - 1);
        if ( *(_DWORD *)a2 == 1
          || (v42 = (unsigned int)(*(_DWORD *)a2 - 2), *(_DWORD *)a2 == 2)
          || (v42 = (unsigned int)(*(_DWORD *)a2 - 3), *(_DWORD *)a2 == 3) )
        {
          guard_dispatch_icall_no_overrides(v42, a2, a3, 1LL);
          return 0;
        }
        if ( *(_DWORD *)a2 == 4 )
          return (ULONG)-1073741637;
        v43 = (unsigned int)(*(_DWORD *)a2 - 6);
        if ( *(_DWORD *)a2 == 6 )
        {
          LODWORD(v43) = 1;
          return (unsigned int)guard_dispatch_icall_no_overrides(v43, a2, a3, 1LL);
        }
        if ( *(_DWORD *)a2 == 7 )
        {
          updated = 0;
          if ( off_140E00B18[0] == xKdEnumerateDebuggingDevices )
            return (ULONG)-1073741822;
          return updated;
        }
        return (ULONG)-1073741811;
      }
      v45 = v5 - 82;
      if ( v45 )
      {
        v46 = v45 - 4;
        if ( !v46 )
          return (unsigned int)ObSetRefTraceInformation((_BYTE *)a2, a3);
        v47 = v46 - 1;
        if ( !v47 )
        {
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return (ULONG)-1073741790;
          if ( (_DWORD)v3 == 8 )
          {
            v51 = *(_QWORD *)v4;
            MmSpecialPoolTag = *(_QWORD *)v4;
            MmSpecialPoolCatchOverruns = BYTE4(v51) & 1;
            return updated;
          }
          return (ULONG)-1073741820;
        }
        v48 = v47 - 2;
        if ( v48 )
        {
          if ( v48 != 2 )
            return (ULONG)-1073741821;
          if ( !PreviousMode )
          {
            if ( (_DWORD)a3 )
              return (ULONG)-1073741584;
            else
              return HvlHypervisorConnected == 0 ? 0xC0351000 : 0;
          }
          return (ULONG)-1073741790;
        }
        if ( PreviousMode != 1 )
          return (ULONG)-1073741637;
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
        {
          v49 = KeGetCurrentThread()->ApcState.Process;
          if ( !v49[1].ReadyTime )
            return (unsigned int)DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
          v50 = WORD2(v49[3].PerProcessorCycleTimes);
          if ( v50 != 332 && v50 != 452 )
            LOBYTE(v7) = 0;
          if ( !(_BYTE)v7 )
            return (unsigned int)DbgkRegisterErrorPort((void *)v4, (unsigned int)v3);
          return (ULONG)-1073741637;
        }
        return (ULONG)-1073741727;
      }
      if ( (unsigned int)a3 < 0x18 )
        return 3221225476LL;
      if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, PreviousMode) )
        return 3221225569LL;
      if ( PreviousMode )
      {
        v133 = *(__m128i *)v4;
        *(_QWORD *)&v134 = *(_QWORD *)(v4 + 16);
        v4 = (unsigned __int64)&v133;
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 0x1E )
        return 3221225485LL;
      v130 = *(UNICODE_STRING *)v4;
      updated = PsLookupProcessThreadByCid((__int64)&v130, 0LL, &v118);
      if ( (updated & 0x80000000) != 0 )
        return updated;
      v53 = (_KPROCESS *)v118;
      if ( *((_BYTE *)v118 + 4) )
      {
        updated = -1073741749;
      }
      else
      {
        KeSetActualBasePriorityThread((ULONG_PTR)v118, *(_DWORD *)(v4 + 16), v52);
        updated = 259;
      }
LABEL_214:
      ObfDereferenceObject(v53);
      return updated;
    }
    if ( v5 > 104 )
    {
      v65 = v5 - 106;
      if ( !v65 )
        return (ULONG)-1073741821;
      v66 = v65 - 3;
      if ( v66 )
      {
        v67 = v66 - 1;
        if ( !v67 )
          return (ULONG)-1073741822;
        if ( v67 != 1 )
          return (ULONG)-1073741821;
        if ( (_DWORD)a3 != 4 )
          return 3221225476LL;
        if ( SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, PreviousMode) )
        {
          *(_DWORD *)(MmWriteableSharedUserData + 584) = *(_DWORD *)v4;
          return 0;
        }
        return 3221225506LL;
      }
      return (unsigned int)SmSetStoreInformation(a1, a2, a3, PreviousMode);
    }
    if ( v5 == 104 )
      return (unsigned int)ExpSetProcessorMicrocodeUpdateInformation((unsigned int *)a2, a3);
    v54 = v5 - 93;
    if ( !v54 )
    {
      v58 = 172;
LABEL_226:
      if ( (_DWORD)a3 != v58 )
        return 3221225476LL;
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeTimeZonePrivilege, PreviousMode) )
        return 3221225569LL;
      return (ULONG)ExpSetTimeZoneInformation((_OWORD *)v4, v58);
    }
    v55 = v54 - 1;
    if ( !v55 )
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return (ULONG)-1073741790;
      if ( (_DWORD)v3 == 8 )
      {
        v133.m128i_i64[0] = *(_QWORD *)v4;
        _InterlockedOr((volatile signed __int32 *)(MmWriteableSharedUserData + 928), v133.m128i_u32[0]);
        _InterlockedAnd((volatile signed __int32 *)(MmWriteableSharedUserData + 928), ~v133.m128i_i32[1]);
        return updated;
      }
      return (ULONG)-1073741820;
    }
    v56 = v55 - 1;
    if ( !v56 )
      return 3221225659LL;
    v57 = v56 - 2;
    if ( v57 )
    {
      if ( v57 != 5 )
        return (ULONG)-1073741821;
      v58 = 432;
      goto LABEL_226;
    }
    if ( (_DWORD)a3 != 40 )
      return 3221225476LL;
    if ( PreviousMode )
    {
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225569LL;
      v133 = *(__m128i *)v4;
      v134 = *(_OWORD *)(v4 + 16);
      *(_QWORD *)&v135 = *(_QWORD *)(v4 + 32);
      result = VfProbeAndCaptureUnicodeStringBuffer(&v133.m128i_u64[1], 1LL, v59, v60);
      if ( (int)result < 0 )
        return result;
      v63 = VfProbeAndCaptureUnicodeStringBuffer((char *)&v134 + 8, 1LL, v61, v62);
      if ( v63 < 0 )
      {
        VfFreeCapturedUnicodeString(&v133.m128i_u64[1]);
        return (unsigned int)v63;
      }
      v4 = (unsigned __int64)&v133;
    }
    updated = VfFaultsSetParameters(v4, a2, a3, v8);
    if ( !PreviousMode )
      return updated;
    VfFreeCapturedUnicodeString(v4 + 8);
    v64 = (__m128i *)(v4 + 24);
LABEL_421:
    VfFreeCapturedUnicodeString(v64);
    return updated;
  }
  if ( v5 == 71 )
    return 3221225659LL;
  if ( v5 > 39 )
  {
    if ( v5 <= 51 )
    {
      if ( v5 != 51 )
      {
        if ( v5 != 40 && v5 != 41 )
        {
          if ( v5 == 46 )
          {
            if ( (_DWORD)a3 != 8 )
              return 3221225476LL;
            if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
              return 3221225569LL;
            if ( !PsIsCurrentThreadInServerSilo() )
            {
              v124 = *(HANDLE *)v4;
              if ( v124 )
              {
                v111 = 0LL;
                updated = ObReferenceObjectByHandle(v124, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v111, 0LL);
                v32 = v111;
                if ( (updated & 0x80000000) != 0 )
                  return updated;
              }
              else
              {
                v32 = 0LL;
                updated = 0;
              }
              KdUpdateTimeSlipEvent(v32);
              return updated;
            }
            return 3221225506LL;
          }
          if ( (unsigned int)(v5 - 47) >= 2 )
            return (ULONG)-1073741821;
          return 3221225474LL;
        }
        if ( (_DWORD)a3 != 16 )
          return 3221225476LL;
        if ( !PreviousMode )
          goto LABEL_115;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return 3221225569LL;
        result = VfProbeAndCaptureUnicodeString(Buf1, v4, 1LL);
        if ( (int)result < 0 )
          return result;
        v4 = (unsigned __int64)Buf1;
        if ( LOWORD(Buf1[0]) )
        {
LABEL_115:
          v33 = v5 - 40;
          if ( !v33 )
          {
            v34 = VfAddVerifierEntry((PCUNICODE_STRING)v4);
            goto LABEL_418;
          }
          if ( v33 == 1 )
          {
            v34 = VfRemoveVerifierEntry(v4, a2, a3, v8);
LABEL_418:
            updated = v34;
            goto LABEL_419;
          }
LABEL_415:
          updated = -1073741821;
LABEL_419:
          if ( !PreviousMode )
            return updated;
          v64 = (__m128i *)v4;
          goto LABEL_421;
        }
        return 3221225711LL;
      }
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        return 3221225506LL;
      return (unsigned int)VfSetVerifierInformation(v4, (unsigned int)v3, 0LL);
    }
    switch ( v5 )
    {
      case '6':
        LODWORD(v8) = 0;
        goto LABEL_131;
      case '8':
        return (unsigned int)PfSnSetPrefetcherInformation(a1, (__int128 *)a2, a3, PreviousMode);
      case ';':
        if ( (_DWORD)a3 == 4 )
        {
          v35 = *(_DWORD *)a2;
          updated = ExpUpdateComPlusPackage(*(_DWORD *)a2);
          if ( (updated & 0x80000000) == 0 )
            *(_DWORD *)(MmWriteableSharedUserData + 736) = v35;
          return updated;
        }
        return 3221225476LL;
    }
    if ( v5 != 69 )
      return (ULONG)-1073741821;
    return (ULONG)-1073741637;
  }
  if ( v5 == 39 )
  {
    if ( (_DWORD)a3 == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        PsChangeQuantumTable(1, *(_DWORD *)v4);
        return 0;
      }
      return 3221225569LL;
    }
    return 3221225476LL;
  }
  if ( v5 <= 28 )
  {
    if ( v5 != 28 )
    {
      if ( v5 != 9 )
      {
        if ( v5 != 21 )
        {
          if ( v5 == 24 )
          {
            if ( (_DWORD)a3 == 20 )
            {
              if ( !PreviousMode || SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
              {
                v133 = *(__m128i *)v4;
                LODWORD(v134) = *(_DWORD *)(v4 + 16);
                KiMinimumDpcRate = v133.m128i_i32[2];
                KiMaximumDpcQueueDepth = v133.m128i_i32[1];
                KiAdjustDpcThreshold = v133.m128i_i32[3];
                KiIdealDpcRate = v134;
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
              return 3221225569LL;
            }
            return 3221225476LL;
          }
          if ( v5 != 26 )
          {
            if ( v5 == 27 )
            {
              if ( (_DWORD)a3 == 8 )
              {
                if ( !PreviousMode )
                {
                  MmUnloadSystemImage(*(_QWORD *)a2);
                  return 0;
                }
                return 3221225569LL;
              }
              return 3221225476LL;
            }
            return (ULONG)-1073741821;
          }
LABEL_131:
          if ( (_DWORD)a3 == 48 )
          {
            v36 = 0;
          }
          else
          {
            if ( (_DWORD)a3 != 56 )
              return 3221225476LL;
            v36 = 1;
          }
          if ( !PreviousMode )
          {
            *(_OWORD *)Buf1 = *(_OWORD *)a2;
            SystemImage = MmLoadSystemImage((int)Buf1, 0, 0, v8, (__int64)&v117, (__int64)&v116);
            updated = SystemImage;
            if ( SystemImage < 0 )
            {
              if ( SystemImage == -1073741411 )
                return (ULONG)-1073741554;
            }
            else
            {
              v38 = v116;
              if ( v36 )
                v39 = RtlImageDirectoryEntryToData(v116, 1, 0, &v111);
              else
                v39 = 0LL;
              v40 = RtlImageNtHeader(v38);
              v41 = v38 + *(unsigned int *)(v40 + 40);
              *(_QWORD *)(v4 + 16) = v38;
              *(_QWORD *)(v4 + 24) = v117;
              *(_QWORD *)(v4 + 32) = v41;
              if ( v36 )
              {
                *(_QWORD *)(v4 + 40) = v39;
                *(_DWORD *)(v4 + 48) = *(_DWORD *)(v40 + 80);
              }
              else
              {
                *(_DWORD *)(v4 + 40) = *(_DWORD *)(v40 + 80);
              }
            }
            return updated;
          }
          return 3221225569LL;
        }
        goto LABEL_175;
      }
      if ( (_DWORD)a3 == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          NtGlobalFlag = NtGlobalFlag & 0x6DCE640F | *(_DWORD *)v4 & 0x92319BF0;
          *(_DWORD *)v4 = NtGlobalFlag;
          return updated;
        }
        return (ULONG)-1073741790;
      }
      return (ULONG)-1073741820;
    }
    if ( (((_DWORD)a3 - 8) & 0xFFFFFFF7) != 0 )
      return 3221225476LL;
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemtimePrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
    {
      if ( (_DWORD)v3 == 16 )
      {
        v16 = *(_BYTE *)(v4 + 8);
        v105[0] = v16;
        v113 = *(_QWORD *)v4;
      }
      else
      {
        v16 = *(_BYTE *)(v4 + 4);
        v105[0] = v16;
        v17 = *(unsigned int *)v4;
        v113 = v17;
        if ( v17 )
          v113 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)(unsigned int)KeMaximumIncrement / v17;
      }
      if ( v16 )
        v113 = MEMORY[0xFFFFF78000000300];
      ExAcquireTimeRefreshLockExclusive();
      updated = ExpUpdateTimerConfiguration(0LL, (__int64)&v113, (__int64)v105);
      ExReleaseTimeRefreshLockExclusive();
      return updated;
    }
    return 3221225506LL;
  }
  v18 = v5 - 30;
  if ( !v18 )
    return (ULONG)MmCreateMirror();
  v19 = v18 - 1;
  if ( !v19 )
    return (unsigned int)EtwSetPerformanceTraceInformation((unsigned __int8 *)a2, (unsigned int)a3, PreviousMode);
  v20 = v19 - 3;
  if ( !v20 )
  {
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) || PsIsCurrentThreadInServerSilo() )
      return 3221225569LL;
    if ( (_DWORD)v3 != 4 )
      goto LABEL_78;
    if ( PreviousMode )
    {
      if ( (v4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v30 = *(_DWORD *)v4;
      v126 = *(_DWORD *)v4;
    }
    else
    {
      v30 = *(_DWORD *)v4;
    }
    if ( !v30 )
    {
      v29 = 0LL;
      return (unsigned int)IoConfigureCrashDump(v29, 0LL, v27, v28);
    }
    v31 = v30 - 1;
    if ( !v31 )
    {
LABEL_78:
      v29 = 1LL;
      return (unsigned int)IoConfigureCrashDump(v29, 0LL, v27, v28);
    }
    if ( v31 == 1 )
      return (unsigned int)WheaCrashDumpInitializationComplete();
    return 3221225485LL;
  }
  v21 = v20 - 3;
  if ( !v21 )
  {
    if ( (_DWORD)a3 != 16 )
      return 3221225476LL;
    if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
      return 3221225569LL;
    return (unsigned int)CmSetRegistryQuotaInformation((unsigned int *)v4);
  }
  if ( v21 != 1 )
    return (ULONG)-1073741821;
  if ( (_DWORD)a3 != 16 )
    return 3221225476LL;
  if ( !PreviousMode )
  {
    *(_OWORD *)Buf1 = *(_OWORD *)a2;
    if ( !memcmp(*(const void **)(a2 + 8), L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
    {
      v24 = *(_QWORD *)(PsWin32kDataTableEntry + 48);
      v25 = RtlImageNtHeader(v24);
      if ( !v25 )
      {
        MmUnloadSystemImage(PsWin32kDataTableEntry);
        return 3221225595LL;
      }
      updated = ExpInitializeSessionDriver(v24 + *(unsigned int *)(v25 + 40), v24);
      if ( (updated & 0x80000000) != 0
        && !(unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) )
      {
        MmUnloadSystemImage(PsWin32kDataTableEntry);
      }
      return updated;
    }
    return 3221225659LL;
  }
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[4].IdealProcessorAssignmentBlock) & 8) == 0
    || !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, 1) )
  {
    return 3221225569LL;
  }
  v22 = 0x7FFFFFFF0000LL;
  if ( v4 < 0x7FFFFFFF0000LL )
    v22 = v4;
  LODWORD(Buf1[0]) = *(_DWORD *)v22;
  Buf1[1] = *(void **)(v22 + 8);
  if ( LOWORD(Buf1[0]) != 62 )
    return 3221225569LL;
  if ( memcmp(Buf1[1], L"\\SystemRoot\\System32\\win32k.sys", 0x3EuLL) )
    return 3221225569LL;
  Buf1[1] = L"\\SystemRoot\\System32\\win32k.sys";
  WORD1(Buf1[0]) = 62;
  return ZwSetSystemInformation(38LL, (__int64)Buf1);
}
