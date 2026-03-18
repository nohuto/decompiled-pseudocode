/*
 * XREFs of ExpQuerySystemInformation @ 0x140ADC240
 * Callers:
 *     NtQuerySystemInformation @ 0x140AE0FD0 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x140AE1180 (NtQuerySystemInformationEx.c)
 * Callees:
 *     KeQueryLogicalProcessorRelationship @ 0x140206A10 (KeQueryLogicalProcessorRelationship.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402088E0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     ExUnlockUserBuffer @ 0x14026893C (ExUnlockUserBuffer.c)
 *     VslGetNestedPageProtectionFlags @ 0x14027BE44 (VslGetNestedPageProtectionFlags.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MmLockLoadedDataTableEntryShared @ 0x1402C85E8 (MmLockLoadedDataTableEntryShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PoGetIdleTimes @ 0x140351EF0 (PoGetIdleTimes.c)
 *     KeFlushProcessWriteBuffers @ 0x1403AFA9C (KeFlushProcessWriteBuffers.c)
 *     MmQueryMemoryListInformation @ 0x1403D447C (MmQueryMemoryListInformation.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x14041DF40 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140434F50 (PoGetPerfStateAndParkingInfo.c)
 *     ExGetBigPoolInfo @ 0x140440530 (ExGetBigPoolInfo.c)
 *     PoEnergyEstimationEnabled @ 0x140448760 (PoEnergyEstimationEnabled.c)
 *     ExpGetSystemBasicInformation @ 0x1404505D4 (ExpGetSystemBasicInformation.c)
 *     KeIsKernelCetEnabled @ 0x1404566A0 (KeIsKernelCetEnabled.c)
 *     ExpGetSystemProcessorInformation @ 0x14045B258 (ExpGetSystemProcessorInformation.c)
 *     MmGetNumberOfPhysicalPages @ 0x14045F260 (MmGetNumberOfPhysicalPages.c)
 *     MmGetAvailablePages @ 0x140462128 (MmGetAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x140462E54 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x140463210 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x14046329C (MmGetPeakCommitment.c)
 *     MmGetResidentAvailablePages @ 0x140463D00 (MmGetResidentAvailablePages.c)
 *     KeQueryGroupAffinity @ 0x140467A20 (KeQueryGroupAffinity.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14046ABE4 (ExpGetSystemEmulationBasicInformation.c)
 *     MmGetHighestPhysicalPage @ 0x14046DA3C (MmGetHighestPhysicalPage.c)
 *     MmGetSharedCommit @ 0x14046FD14 (MmGetSharedCommit.c)
 *     MmGetProcessPartitionId @ 0x14046FF78 (MmGetProcessPartitionId.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14046FF88 (MmQuerySystemWorkingSetInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x140477728 (ExpGetSystemEmulationProcessorInformation.c)
 *     MmGetLowestPhysicalPage @ 0x1404778F8 (MmGetLowestPhysicalPage.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x14047B760 (KeQueryCycleTimeStatsProcessor.c)
 *     PpmCapturePerformanceDistribution @ 0x14047F450 (PpmCapturePerformanceDistribution.c)
 *     KeQueryActiveGroupCount @ 0x140481460 (KeQueryActiveGroupCount.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x1404882E0 (KeGetRecommendedSharedDataAlignment.c)
 *     KeQueryBootTimeValues @ 0x14049462C (KeQueryBootTimeValues.c)
 *     KeIsUserCetAllowed @ 0x140497634 (KeIsUserCetAllowed.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404AA1D4 (ExCpuSetResourceManagerAccessCheck.c)
 *     VslIsTrustletRunning @ 0x1404B3B78 (VslIsTrustletRunning.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x1404B4344 (MmUnlockLoadedDataTableEntryShared.c)
 *     VslIsSecureKernelRunning @ 0x1404BC594 (VslIsSecureKernelRunning.c)
 *     KeIsCetCapable @ 0x1404BECAC (KeIsCetCapable.c)
 *     KeIsKernelCetAuditModeEnabled @ 0x1404C9258 (KeIsKernelCetAuditModeEnabled.c)
 *     ExpGetLookasideInformation @ 0x1404D7E9C (ExpGetLookasideInformation.c)
 *     HvlQueryActiveProcessors @ 0x140583470 (HvlQueryActiveProcessors.c)
 *     HvlQueryMinrootInfo @ 0x140583540 (HvlQueryMinrootInfo.c)
 *     HvlQueryProcessorTopologyCount @ 0x1405837E0 (HvlQueryProcessorTopologyCount.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058DC54 (VslQuerySecureKernelProfileInformation.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x1405B4764 (KeQueryDpcWatchdogConfiguration.c)
 *     KeQuerySecureSpeculationInformation @ 0x1405BD610 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1405C40C0 (KeGetAffinitizedInterruptsInfo.c)
 *     PsQueryCpuQuotaInformation @ 0x1405E4E1C (PsQueryCpuQuotaInformation.c)
 *     PsQueryActivityModerationUserSettings @ 0x1405E5354 (PsQueryActivityModerationUserSettings.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140609254 (SeQueryTrustedPlatformModuleInformation.c)
 *     VfGetVerifierInformation @ 0x1406147B4 (VfGetVerifierInformation.c)
 *     ExpQueryBootLoaderMetadata @ 0x140652EBC (ExpQueryBootLoaderMetadata.c)
 *     ExPoolQueryLimits @ 0x140654308 (ExPoolQueryLimits.c)
 *     ExpGetOriginalImageVersion @ 0x14065B0F4 (ExpGetOriginalImageVersion.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     ZwFilterBootOption @ 0x1406A8190 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExQueryBootEntropyInformation @ 0x1406F9784 (ExQueryBootEntropyInformation.c)
 *     CmQuerySingleFeatureConfiguration @ 0x1406FA258 (CmQuerySingleFeatureConfiguration.c)
 *     HvlQueryDetailInfo @ 0x14070E95C (HvlQueryDetailInfo.c)
 *     HvlQueryEnlightenmentInfo @ 0x14070EA78 (HvlQueryEnlightenmentInfo.c)
 *     HvlQuerySetBootPagesInfo @ 0x14070EAFC (HvlQuerySetBootPagesInfo.c)
 *     VslTransformDumpKey @ 0x1407106EC (VslTransformDumpKey.c)
 *     KeQueryKvaShadowInformation @ 0x14073C9A0 (KeQueryKvaShadowInformation.c)
 *     ObQueryRefTraceInformation @ 0x140744838 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x1407722B0 (PsRootSiloInformation.c)
 *     SeSecurityModelQueryInformation @ 0x14078FD1C (SeSecurityModelQueryInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1407B42C0 (ExpGetSystemPlatformBinary.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x1407B4778 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407B47A8 (ExpGetSystemWriteConstraintInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x1407B4EE4 (ExpQueryInterruptSteeringInformation.c)
 *     ExpQueryLegacyDriverInformation @ 0x1407B4FE8 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryModuleInformationEx @ 0x1407B50AC (ExpQueryModuleInformationEx.c)
 *     ExpQueryNumaAvailableMemory @ 0x1407B5140 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProximityNode @ 0x1407B52C0 (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407B53A4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQueryRuntimeAttestationReport @ 0x1407B5580 (ExpQueryRuntimeAttestationReport.c)
 *     ExpQuerySystemMemoryNumaInformation @ 0x1407C5A30 (ExpQuerySystemMemoryNumaInformation.c)
 *     ExpQuerySystemMemoryNumaPerformanceInformation @ 0x1407C5B7C (ExpQuerySystemMemoryNumaPerformanceInformation.c)
 *     WheaQuerySystemInformation @ 0x1407C6750 (WheaQuerySystemInformation.c)
 *     MmEnumerateBadPages @ 0x1407ED198 (MmEnumerateBadPages.c)
 *     IoQueryVhdBootInformation @ 0x140829CBC (IoQueryVhdBootInformation.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14085D348 (ExpGetSystemFirmwareTableInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     PsGetSupportedProcessorArchitectures @ 0x1408FAF40 (PsGetSupportedProcessorArchitectures.c)
 *     sub_1408FC220 @ 0x1408FC220 (sub_1408FC220.c)
 *     PfQuerySuperfetchInformation @ 0x140933148 (PfQuerySuperfetchInformation.c)
 *     EtwTiLogSyscallUsage @ 0x140934948 (EtwTiLogSyscallUsage.c)
 *     ExpSnapShotHandleTables @ 0x14094D7D0 (ExpSnapShotHandleTables.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 *     ExpGetDeviceDataInformation @ 0x14095B9D4 (ExpGetDeviceDataInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 *     ExLockUserBuffer @ 0x140966B28 (ExLockUserBuffer.c)
 *     ObGetObjectInformation @ 0x1409D5F50 (ObGetObjectInformation.c)
 *     PsQueryFullProcessImageName @ 0x1409FFC00 (PsQueryFullProcessImageName.c)
 *     ExGetPoolTagInfo @ 0x140A03AF8 (ExGetPoolTagInfo.c)
 *     sub_140A03EB0 @ 0x140A03EB0 (sub_140A03EB0.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A13A50 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A13ABC (ExReleaseTimeRefreshLockShared.c)
 *     ExIsRestrictedCaller @ 0x140A14B1C (ExIsRestrictedCaller.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x140A16BC4 (KeBuildLogicalProcessorSystemInformation.c)
 *     SmQueryStoreInformation @ 0x140A18DA0 (SmQueryStoreInformation.c)
 *     CmQueryFeatureConfigurationSections @ 0x140A25CAC (CmQueryFeatureConfigurationSections.c)
 *     PfSnQueryPrefetcherInformation @ 0x140A43C78 (PfSnQueryPrefetcherInformation.c)
 *     ExpGetSystemFlushInformation @ 0x140A43F14 (ExpGetSystemFlushInformation.c)
 *     SiGetSystemDeviceName @ 0x140A44DA8 (SiGetSystemDeviceName.c)
 *     ExpQueryNumaProcessorMap @ 0x140A49FC0 (ExpQueryNumaProcessorMap.c)
 *     CmQueryBuildVersionInformation @ 0x140A4A2E0 (CmQueryBuildVersionInformation.c)
 *     IopRetrieveSystemDeviceName @ 0x140A550C8 (IopRetrieveSystemDeviceName.c)
 *     SeSecureBootQueryInformation @ 0x140A55A9C (SeSecureBootQueryInformation.c)
 *     ExpQueryChannelInformation @ 0x140A5A018 (ExpQueryChannelInformation.c)
 *     MmGetPageFileInformation @ 0x140A5CA68 (MmGetPageFileInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x140A6BA40 (ExpQueryMemoryTopologyInformation.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6E09C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     KeQueryCpuSetInformation @ 0x140A76E8C (KeQueryCpuSetInformation.c)
 *     HvlQueryVsmProtectionInfo @ 0x140A7FC98 (HvlQueryVsmProtectionInfo.c)
 *     IoQueryLowPriorityIoInformation @ 0x140A800D4 (IoQueryLowPriorityIoInformation.c)
 *     ExpQueryModuleInformation @ 0x140A84B58 (ExpQueryModuleInformation.c)
 *     CmQueryRegistryQuotaInformation @ 0x140A88610 (CmQueryRegistryQuotaInformation.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x140A92EF4 (ExpConvertLdrEntryToModuleInfo.c)
 *     KeQuerySpeculationControlInformation @ 0x140AC3E38 (KeQuerySpeculationControlInformation.c)
 *     ExpGetProcessInformation @ 0x140ADAE00 (ExpGetProcessInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE0850 (ExpQuerySystemPerformanceInformation.c)
 *     SeQueryHSTIResults @ 0x140AE89C8 (SeQueryHSTIResults.c)
 *     ExQuerySystemLockInformation @ 0x140B6A1BC (ExQuerySystemLockInformation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfGetVerifierInformationEx @ 0x140B9C48C (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x140BB0064 (BgkQueryBootGraphicsInformation.c)
 */

int __fastcall ExpQuerySystemInformation(
        unsigned int a1,
        void *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Length,
        unsigned int *a6)
{
  PVOID v8; // rsi
  unsigned __int8 PreviousMode; // r13
  unsigned int v10; // r14d
  ULONG v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int16 v14; // r12
  __int64 v15; // r8
  unsigned int v16; // r11d
  USHORT v17; // cx
  ULONG ActiveProcessorCount; // eax
  size_t v19; // rdx
  int *v20; // r10
  __int64 v21; // rcx
  int SystemBasicInformation; // eax
  unsigned __int16 v23; // di
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // cx
  struct _LIST_ENTRY *v28; // rcx
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *v30; // rax
  unsigned __int16 v31; // di
  unsigned __int16 v32; // cx
  unsigned __int16 ProcessPartitionId; // ax
  unsigned __int16 v34; // cx
  unsigned __int16 v35; // cx
  unsigned __int16 v36; // cx
  struct _LIST_ENTRY *v37; // rcx
  unsigned int v38; // esi
  unsigned int v39; // r8d
  unsigned int v40; // edx
  unsigned int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rdx
  int v45; // esi
  void *v46; // rdi
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // r8
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v52; // rsi
  char v53; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v55; // rdx
  NTSTATUS v56; // edi
  bool v57; // zf
  $81B80DCEA5A02D890AB7B2872B48AC01 *v58; // rcx
  int result; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rdi
  _WORD *v64; // rbx
  int v65; // eax
  int v66; // ebx
  int v67; // eax
  _DWORD *v68; // r8
  int v69; // ebx
  int v70; // eax
  _DWORD *v71; // r8
  int v72; // ebx
  int v73; // eax
  int ObjectInformation; // ebx
  unsigned int v75; // eax
  __int64 v76; // rcx
  int v77; // ecx
  int v78; // edx
  __int64 *v79; // r14
  __int64 v80; // r8
  unsigned int v81; // ecx
  __int64 *v82; // r14
  __int64 v83; // rcx
  unsigned int i; // edx
  __int64 v85; // rax
  _DWORD *v86; // rcx
  struct _LIST_ENTRY *v87; // rdi
  struct _LIST_ENTRY *v88; // rdi
  struct _LIST_ENTRY *p_Src; // rax
  __int64 v90; // r12
  __int64 v91; // rcx
  struct _LIST_ENTRY *v92; // rax
  signed __int32 v93; // r12d
  __int64 *v94; // r14
  __int64 v95; // rcx
  __int64 v96; // r8
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v97; // r12
  unsigned int v98; // eax
  struct _PROCESSOR_NUMBER *p_ProcNumber; // r13
  unsigned int v100; // r8d
  int v101; // r9d
  int v102; // edx
  int v103; // r10d
  unsigned int v104; // r9d
  bool v105; // cf
  int v106; // edi
  unsigned int v107; // eax
  ULONG v108; // edx
  __int64 v109; // rax
  __int64 v110; // rcx
  _QWORD *v111; // rax
  unsigned int v112; // eax
  int v113; // ecx
  unsigned int v114; // eax
  bool v115; // cf
  unsigned int v116; // eax
  __int64 v117; // rax
  __int64 v118; // rcx
  _QWORD *v119; // rax
  int SystemDeviceName; // eax
  int v121; // ebx
  unsigned int v122; // ebx
  void *Pool2; // rax
  void *v124; // r14
  int v125; // ecx
  _DWORD *v126; // rdi
  int v127; // eax
  int v128; // ecx
  int v129; // edx
  struct _LIST_ENTRY *v130; // rax
  __int64 v131; // r8
  __int64 v132; // r9
  PVOID v133; // rdi
  __int64 v134; // rax
  __int64 v135; // rax
  int v136; // ecx
  unsigned __int64 v137; // r8
  __int64 *v138; // rdx
  __int64 *j; // rcx
  __int64 v140; // rax
  void *v141; // rcx
  unsigned int v142; // eax
  bool v143; // cf
  unsigned int v144; // r11d
  unsigned int v145; // r10d
  __int64 v146; // rax
  int v147; // r10d
  char v148; // cl
  int NestedPageProtectionFlags; // edi
  char v150; // cl
  char v151; // cl
  char v152; // cl
  bool IsUserCetAllowed; // al
  int v154; // ecx
  int v155; // edi
  bool IsKernelCetAuditModeEnabled; // al
  int v157; // edx
  struct _KAFFINITY_EX *v158; // rax
  struct _KAFFINITY_EX *v159; // rdi
  struct _KAFFINITY_EX *v160; // rax
  __int64 v161; // rcx
  void *v162; // r14
  struct _MDL *v163; // rax
  struct _MDL *v164; // rsi
  int v165; // eax
  __int64 v166; // rax
  unsigned int OriginalImageVersion; // ecx
  int v168; // eax
  unsigned __int64 v169; // rdx
  int ModuleInformation; // [rsp+40h] [rbp-518h]
  unsigned int Size; // [rsp+44h] [rbp-514h] BYREF
  int Size_4; // [rsp+48h] [rbp-510h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+4Ch] [rbp-50Ch] BYREF
  USHORT v174; // [rsp+50h] [rbp-508h]
  size_t v175; // [rsp+54h] [rbp-504h] BYREF
  unsigned int v176; // [rsp+5Ch] [rbp-4FCh] BYREF
  char v177[8]; // [rsp+60h] [rbp-4F8h] BYREF
  void *v178; // [rsp+68h] [rbp-4F0h]
  ULONG v179; // [rsp+70h] [rbp-4E8h]
  PVOID v180; // [rsp+78h] [rbp-4E0h]
  unsigned int *v181; // [rsp+80h] [rbp-4D8h]
  char v182; // [rsp+B8h] [rbp-4A0h]
  unsigned __int16 v183; // [rsp+100h] [rbp-458h]
  _QWORD *v184; // [rsp+110h] [rbp-448h]
  unsigned int v185; // [rsp+11Ch] [rbp-43Ch]
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+120h] [rbp-438h]
  unsigned int v187; // [rsp+124h] [rbp-434h] BYREF
  PEPROCESS Process; // [rsp+128h] [rbp-430h] BYREF
  int v189; // [rsp+130h] [rbp-428h]
  unsigned int v190; // [rsp+134h] [rbp-424h] BYREF
  int v191; // [rsp+138h] [rbp-420h] BYREF
  unsigned int v192; // [rsp+13Ch] [rbp-41Ch] BYREF
  unsigned int v193; // [rsp+140h] [rbp-418h] BYREF
  unsigned int v194; // [rsp+144h] [rbp-414h] BYREF
  int v195; // [rsp+148h] [rbp-410h] BYREF
  int v196; // [rsp+14Ch] [rbp-40Ch] BYREF
  ULONG ResultLength; // [rsp+150h] [rbp-408h] BYREF
  PVOID P; // [rsp+158h] [rbp-400h] BYREF
  _QWORD *v199; // [rsp+160h] [rbp-3F8h] BYREF
  __int64 v200; // [rsp+168h] [rbp-3F0h]
  HANDLE Handle; // [rsp+170h] [rbp-3E8h]
  HANDLE ProcessId[2]; // [rsp+178h] [rbp-3E0h]
  void *v203; // [rsp+188h] [rbp-3D0h]
  HANDLE KeyHandle; // [rsp+190h] [rbp-3C8h] BYREF
  __int64 v205; // [rsp+198h] [rbp-3C0h] BYREF
  PVOID v206; // [rsp+1A0h] [rbp-3B8h] BYREF
  _DWORD *v207; // [rsp+1A8h] [rbp-3B0h] BYREF
  PVOID v208; // [rsp+1B0h] [rbp-3A8h] BYREF
  _QWORD *v209; // [rsp+1B8h] [rbp-3A0h] BYREF
  PVOID v210; // [rsp+1C0h] [rbp-398h] BYREF
  __int64 v211; // [rsp+1C8h] [rbp-390h] BYREF
  PVOID v212; // [rsp+1D0h] [rbp-388h] BYREF
  __int64 v213; // [rsp+1D8h] [rbp-380h] BYREF
  PVOID Object; // [rsp+1E0h] [rbp-378h] BYREF
  __int64 v215; // [rsp+1E8h] [rbp-370h]
  PVOID v216; // [rsp+1F0h] [rbp-368h] BYREF
  __int64 v217; // [rsp+1F8h] [rbp-360h] BYREF
  __int128 v218; // [rsp+200h] [rbp-358h] BYREF
  unsigned int v219; // [rsp+210h] [rbp-348h]
  int v220; // [rsp+218h] [rbp-340h]
  unsigned int *v221; // [rsp+228h] [rbp-330h]
  __int128 v222; // [rsp+240h] [rbp-318h] BYREF
  __int128 v223; // [rsp+250h] [rbp-308h]
  __int128 v224; // [rsp+260h] [rbp-2F8h]
  __int128 v225; // [rsp+270h] [rbp-2E8h]
  __int128 v226; // [rsp+280h] [rbp-2D8h]
  __int128 v227; // [rsp+290h] [rbp-2C8h]
  __int64 v228; // [rsp+2A0h] [rbp-2B8h]
  __int128 KeyValueInformation; // [rsp+2B0h] [rbp-2A8h] BYREF
  int v230; // [rsp+2C0h] [rbp-298h]
  struct _LIST_ENTRY Src; // [rsp+2D0h] [rbp-288h] BYREF
  struct _LIST_ENTRY v232; // [rsp+2E0h] [rbp-278h]
  struct _LIST_ENTRY v233; // [rsp+2F0h] [rbp-268h] BYREF
  struct _LIST_ENTRY v234; // [rsp+300h] [rbp-258h]
  struct _LIST_ENTRY v235; // [rsp+310h] [rbp-248h]
  struct _LIST_ENTRY v236; // [rsp+320h] [rbp-238h]
  struct _LIST_ENTRY v237; // [rsp+330h] [rbp-228h]
  struct _LIST_ENTRY v238; // [rsp+340h] [rbp-218h]
  struct _LIST_ENTRY v239; // [rsp+350h] [rbp-208h]
  struct _LIST_ENTRY v240; // [rsp+360h] [rbp-1F8h]
  struct _LIST_ENTRY *Flink; // [rsp+370h] [rbp-1E8h]
  int v242; // [rsp+378h] [rbp-1E0h]
  __int128 v243; // [rsp+480h] [rbp-D8h] BYREF
  __int64 v244; // [rsp+490h] [rbp-C8h]
  __int128 v245; // [rsp+4A0h] [rbp-B8h] BYREF
  __int128 v246; // [rsp+4B0h] [rbp-A8h]
  __int128 v247; // [rsp+4C0h] [rbp-98h]
  __int128 v248; // [rsp+4D0h] [rbp-88h]
  __int128 v249; // [rsp+4E0h] [rbp-78h]
  __int128 v250; // [rsp+4F0h] [rbp-68h]
  __int64 v251; // [rsp+500h] [rbp-58h]

  v175 = a3;
  v178 = a2;
  v185 = a1;
  v181 = a6;
  v8 = 0LL;
  v176 = 0;
  v217 = 0LL;
  v194 = 0;
  v195 = 0;
  Size_4 = 0;
  v191 = 0;
  v183 = 0;
  v174 = 0;
  v218 = 0LL;
  Process = 0LL;
  ProcNumber = 0;
  v199 = 0LL;
  P = 0LL;
  v189 = 0;
  v213 = 0LL;
  v243 = 0LL;
  v244 = 0LL;
  memset_0(&Src, 0, 0x1B0uLL);
  ModuleInformation = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    switch ( a1 )
    {
      case 0xCu:
        v11 = 8;
        goto LABEL_6;
      case 0x23u:
      case 0x91u:
      case 0x93u:
      case 0x95u:
      case 0x9Eu:
      case 0xA3u:
      case 0xA9u:
      case 0xCAu:
      case 0xE3u:
        v10 = 1;
        v11 = 1;
        break;
      default:
        v11 = 4;
LABEL_6:
        v10 = 1;
        break;
    }
    ProbeForWrite((volatile void *)a4, Length, v11);
    if ( a6 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a6;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v10 = 1;
  }
  Size = 0;
  RelationshipType = RelationAll;
  v13 = 0LL;
  v179 = 0;
  v14 = 0;
  v174 = 0;
  v183 = 0;
  v200 = 0LL;
  Handle = 0LL;
  v215 = 0LL;
  v15 = 9LL;
  LODWORD(v180) = 9;
  v189 = 9;
  v16 = v185;
  switch ( v185 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v14 = -1;
      v174 = -1;
      v17 = -1;
      goto LABEL_15;
    case 8u:
    case 0x17u:
    case 0x2Au:
    case 0x3Du:
    case 0x49u:
    case 0x53u:
    case 0x64u:
    case 0x6Cu:
    case 0x8Du:
    case 0xA0u:
      if ( (unsigned int)v175 < 2 )
        return -1073741811;
      v174 = *(_WORD *)v178;
      v14 = v174;
      if ( v174 >= KeQueryActiveGroupCount() )
        return -1073741811;
      v17 = v174;
LABEL_15:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v17);
      v13 = ActiveProcessorCount;
      v179 = ActiveProcessorCount;
      v15 = (unsigned int)v180;
      v16 = v185;
LABEL_36:
      v19 = (unsigned int)v175;
      goto LABEL_37;
    case 0x48u:
      v19 = (unsigned int)v175;
      if ( (_DWORD)v175 != 4 )
        return -1073741811;
      v20 = (int *)v178;
      v15 = *(unsigned int *)v178;
      v189 = *(_DWORD *)v178;
      goto LABEL_38;
    case 0x6Bu:
      v19 = (unsigned int)v175;
      if ( (unsigned int)v175 < 4 )
        return -1073741811;
      v20 = (int *)v178;
      RelationshipType = *(_DWORD *)v178;
      goto LABEL_38;
    case 0x79u:
      v19 = (unsigned int)v175;
      if ( (unsigned int)v175 >= 2 )
      {
        v20 = (int *)v178;
        v183 = *(_WORD *)v178;
        if ( v183 < (unsigned __int16)KeNumberNodes )
          goto LABEL_38;
      }
      return -1073741811;
    case 0xA5u:
      v19 = (unsigned int)v175;
      if ( (_DWORD)v175 )
      {
        if ( (_DWORD)v175 != 8 )
          return -1073741811;
        v20 = (int *)v178;
        v200 = *(_QWORD *)v178;
      }
      else
      {
        v200 = 0LL;
LABEL_37:
        v20 = (int *)v178;
      }
LABEL_38:
      v21 = 0x140000000uLL;
      switch ( v16 )
      {
        case 0u:
        case 0x72u:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemBasicInformation(a4);
            Size = 64;
            goto LABEL_820;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 1u:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemProcessorInformation(a4);
            Size = 12;
            goto LABEL_820;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 2u:
          if ( Length < 0x138 )
          {
            if ( a6 )
              *a6 = 376;
            return -1073741820;
          }
          v38 = 376;
          if ( Length <= 0x178 )
            v38 = Length;
          ExpQuerySystemPerformanceInformation((unsigned int)v13, a4, v38);
          Size = v38;
          goto LABEL_821;
        case 3u:
          if ( Length <= 0x30 )
          {
            KeQueryBootTimeValues(&Src.Blink, (LARGE_INTEGER *)&Src, &v233);
            Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
            v232.Flink = Blink[27].Blink;
            LODWORD(v232.Blink) = Blink[27].Flink;
            v233.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF780000003B0];
            memmove((void *)a4, &Src, Length);
            goto LABEL_140;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 4u:
        case 0xAu:
        case 0x19u:
        case 0x1Du:
        case 0x60u:
          return -1073741822;
        case 5u:
        case 0x39u:
        case 0x94u:
        case 0xFCu:
        case 0xFDu:
          SystemBasicInformation = ExpGetProcessInformation((unsigned int *)a4, Length, &Size, 0LL, v16);
          goto LABEL_820;
        case 6u:
        case 0x5Fu:
          return -1073741637;
        case 7u:
          if ( Length == 24 )
          {
            *(_DWORD *)a4 = dword_140FD7828;
            *(_DWORD *)(a4 + 4) = dword_140FD782C;
            *(_DWORD *)(a4 + 8) = dword_140FD7830;
            *(_DWORD *)(a4 + 12) = dword_140FD7834;
            *(_DWORD *)(a4 + 16) = dword_140FD783C;
            *(_DWORD *)(a4 + 20) = dword_140FD7840;
            goto LABEL_69;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 8u:
        case 0x8Du:
          v39 = 48;
          if ( v16 != 8 )
            v39 = 72;
          LODWORD(v180) = v39;
          if ( Length && !(Length % v39) )
          {
            v40 = 0;
            v41 = 0;
            while ( 1 )
            {
              Size_4 = v41;
              v184 = (_QWORD *)a4;
              if ( v41 >= (unsigned int)v13 )
                break;
              ProcNumber.Group = v14;
              ProcNumber.Number = v41;
              ProcNumber.Reserved = 0;
              if ( v14 || (_BYTE)v41 )
              {
                if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v41 >= 0x40u )
                {
                  v42 = 0xFFFFFFFFLL;
                }
                else
                {
                  v42 = *((unsigned int *)qword_140F21E78 + 64 * (unsigned __int64)v14 + (unsigned __int8)v41);
                  if ( !(_DWORD)v42 )
                    v42 = 0xFFFFFFFFLL;
                }
              }
              else
              {
                v42 = 0LL;
              }
              v178 = (void *)KiProcessorBlock[v42];
              if ( Length < v39 + v40 )
                break;
              LODWORD(v175) = v39 + v40;
              PoGetIdleTimes(&ProcNumber, 0LL, (__int64)&Src);
              v43 = (unsigned int)KeMaximumIncrement;
              v44 = v178;
              *(_QWORD *)(a4 + 16) = (unsigned int)KeMaximumIncrement * (unsigned __int64)*((unsigned int *)v178 + 8594);
              *(_QWORD *)(a4 + 8) = v43 * HIDWORD(Src.Flink);
              *(_QWORD *)(a4 + 24) = v43 * (unsigned int)v44[8595];
              *(_QWORD *)(a4 + 32) = v43 * (unsigned int)v44[8596];
              *(_QWORD *)a4 = v43 * LODWORD(Src.Flink);
              *(_DWORD *)(a4 + 40) = v44[8592];
              if ( v185 == 141 )
              {
                *(_QWORD *)(a4 + 48) = v43 * (unsigned int)v44[8603];
                *(_DWORD *)(a4 + 44) = 0;
                *(_QWORD *)(a4 + 56) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
              }
              v39 = (unsigned int)v180;
              a4 += (unsigned int)v180;
              v41 = Size_4 + 1;
              LODWORD(v13) = v179;
              v40 = v175;
            }
            Size = v40;
            goto LABEL_821;
          }
          if ( a6 )
            *a6 = v39 * v13;
          return -1073741820;
        case 9u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag;
            goto LABEL_184;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xBu:
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v175 + 1) )
            return -1073741790;
          ModuleInformation = ExpQueryModuleInformation(SHIDWORD(v175), (_DWORD *)a4, Length, (int *)&Size);
          EtwTiLogSyscallUsage(ModuleInformation, 0);
          goto LABEL_821;
        case 0xCu:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v175 + 1) )
            return -1073741790;
          v205 = 0LL;
          v206 = 0LL;
          v65 = ExLockUserBuffer(
                  a4,
                  Length,
                  KeGetCurrentThread()->PreviousMode,
                  IoWriteAccess,
                  &v205,
                  (struct _MDL **)&v206);
          if ( v65 >= 0 )
          {
            v66 = ExQuerySystemLockInformation(HIDWORD(v175), v205, Length, &Size);
            ExUnlockUserBuffer((struct _MDL *)v206);
            ModuleInformation = v66;
            EtwTiLogSyscallUsage(v66, 2u);
          }
          else
          {
            ModuleInformation = v65;
            EtwTiLogSyscallUsage(v65, 2u);
          }
          goto LABEL_821;
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x13u:
          ModuleInformation = -1073741822;
          goto LABEL_821;
        case 0x10u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v175 + 1) )
          {
            v207 = 0LL;
            v208 = 0LL;
            v67 = ExLockUserBuffer(
                    a4,
                    Length,
                    KeGetCurrentThread()->PreviousMode,
                    IoWriteAccess,
                    &v207,
                    (struct _MDL **)&v208);
            if ( v67 >= 0 )
            {
              v192 = 0;
              v68 = v207;
              *v207 = 0;
              v69 = ExpSnapShotHandleTables(
                      (__int64 (__fastcall *)(int, int, int, int, __int64, int, __int64))ObpCaptureHandleInformation,
                      HIDWORD(v175),
                      v68,
                      Length,
                      (int *)&v192,
                      0);
              Size = v192;
              ExUnlockUserBuffer((struct _MDL *)v208);
              ModuleInformation = v69;
              EtwTiLogSyscallUsage(v69, 4u);
            }
            else
            {
              ModuleInformation = v67;
              EtwTiLogSyscallUsage(v67, 4u);
            }
            goto LABEL_821;
          }
          return -1073741790;
        case 0x11u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v175 + 1) )
            return -1073741790;
          v211 = 0LL;
          v212 = 0LL;
          v73 = ExLockUserBuffer(
                  a4,
                  Length,
                  KeGetCurrentThread()->PreviousMode,
                  IoWriteAccess,
                  &v211,
                  (struct _MDL **)&v212);
          if ( v73 >= 0 )
          {
            ObjectInformation = ObGetObjectInformation(SHIDWORD(v175), a4, v211, Length, &Size);
            ExUnlockUserBuffer((struct _MDL *)v212);
            ModuleInformation = ObjectInformation;
            EtwTiLogSyscallUsage(ObjectInformation, 6u);
          }
          else
          {
            ModuleInformation = v73;
            EtwTiLogSyscallUsage(v73, 6u);
          }
          goto LABEL_821;
        case 0x12u:
        case 0x90u:
          v75 = 32;
          if ( v16 != 18 )
            v75 = 40;
          Size = v75;
          if ( Length >= v75 )
          {
            Size = 0;
            LOBYTE(v8) = v16 == 144;
            SystemBasicInformation = MmGetPageFileInformation(40LL, (_DWORD *)a4, Length, (int)v8, &Size);
            goto LABEL_820;
          }
          if ( a6 )
            *a6 = v75;
          return -1073741820;
        case 0x15u:
        case 0x51u:
        case 0x77u:
        case 0x78u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          if ( v16 == 119 )
          {
            v76 = 2LL;
          }
          else
          {
            if ( v16 == 120 )
              v10 = 3;
            v76 = v10;
          }
          MmQuerySystemWorkingSetInformation(v76, &Src);
          *(struct _LIST_ENTRY *)a4 = Src;
          *(_DWORD *)(a4 + 16) = v232.Flink;
          Size_4 = 64;
          *(_QWORD *)(a4 + 24) = v232.Blink;
          *(struct _LIST_ENTRY *)(a4 + 32) = v233;
          *(struct _LIST_ENTRY *)(a4 + 48) = v234;
          Size = 64;
          goto LABEL_821;
        case 0x16u:
          if ( Length >= 0x30 )
          {
            SystemBasicInformation = ExGetPoolTagInfo((_DWORD *)a4, Length, (int *)&Size);
            goto LABEL_820;
          }
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x17u:
          Size = 24 * v13;
          if ( Length < 24 * (int)v13 )
          {
            if ( a6 )
              *a6 = 24 * v13;
            return -1073741820;
          }
          for ( i = 0; ; ++i )
          {
            Size_4 = i;
            v184 = (_QWORD *)a4;
            if ( i >= (unsigned int)v13 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = i;
            ProcNumber.Reserved = 0;
            if ( v14 || (_BYTE)i )
            {
              if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)i >= 0x40u )
              {
                v85 = 0xFFFFFFFFLL;
              }
              else
              {
                v85 = *((unsigned int *)qword_140F21E78 + 64 * (unsigned __int64)v14 + (unsigned __int8)i);
                if ( !(_DWORD)v85 )
                  v85 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v85 = 0LL;
            }
            v86 = (_DWORD *)KiProcessorBlock[v85];
            *(_DWORD *)a4 = v86[2895];
            *(_DWORD *)(a4 + 4) = v86[3607];
            *(_DWORD *)(a4 + 8) = v86[3627];
            *(_DWORD *)(a4 + 12) = KeTimeIncrement;
            *(_DWORD *)(a4 + 16) = 0;
            *(_DWORD *)(a4 + 20) = 0;
            a4 += 24LL;
          }
          goto LABEL_200;
        case 0x18u:
          if ( Length == 20 )
          {
            *(_DWORD *)(a4 + 4) = KiMaximumDpcQueueDepth;
            *(_DWORD *)(a4 + 8) = KiMinimumDpcRate;
            *(_DWORD *)(a4 + 12) = KiAdjustDpcThreshold;
            *(_DWORD *)(a4 + 16) = KiIdealDpcRate;
            goto LABEL_296;
          }
          if ( a6 )
            *a6 = 20;
          return -1073741820;
        case 0x1Cu:
          if ( Length != 12 && Length != 24 )
          {
            if ( a6 )
              *a6 = 12;
            return -1073741820;
          }
          ExAcquireTimeRefreshLockShared();
          v52 = KeTimeAdjustmentFrequency;
          v53 = KeTimeSynchronization;
          ExReleaseTimeRefreshLockShared();
          if ( Length == 24 )
          {
            *(_QWORD *)a4 = v52;
            *(_QWORD *)(a4 + 8) = MEMORY[0xFFFFF78000000300];
            *(_BYTE *)(a4 + 16) = v53;
          }
          else
          {
            *(_DWORD *)a4 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)(unsigned int)KeMaximumIncrement / v52;
            *(_DWORD *)(a4 + 4) = KeMaximumIncrement;
            *(_BYTE *)(a4 + 8) = v53;
          }
LABEL_140:
          Size = Length;
          goto LABEL_821;
        case 0x1Fu:
          SystemBasicInformation = EtwQueryPerformanceTraceInformation(a4, Length, PreviousMode, &Size);
          goto LABEL_820;
        case 0x21u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          Size = 16;
          v77 = 0;
          v78 = 0;
          if ( (_DWORD)v13 )
          {
            v79 = KiProcessorBlock;
            v80 = (unsigned int)v13;
            Size_4 = v13;
            do
            {
              v77 += *(_DWORD *)(*v79 + 35768);
              v78 += *(_DWORD *)(*v79++ + 34416);
              --v80;
            }
            while ( v80 );
          }
          *(_DWORD *)a4 = v77;
          *(_DWORD *)(a4 + 4) = v78;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = 0;
          goto LABEL_821;
        case 0x23u:
          if ( Length >= 2 )
          {
            *(_BYTE *)a4 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerNotPresent;
            v81 = 2;
            goto LABEL_268;
          }
          if ( a6 )
            *a6 = 2;
          return -1073741820;
        case 0x24u:
          if ( Length < 0x30 )
          {
            if ( a6 )
              *a6 = 48;
            return -1073741820;
          }
          if ( (_DWORD)v13 )
          {
            v82 = KiProcessorBlock;
            v83 = (unsigned int)v13;
            Size_4 = v13;
            do
            {
              LODWORD(v8) = *(_DWORD *)(*v82++ + 11580) + (_DWORD)v8;
              --v83;
            }
            while ( v83 );
          }
          *(_DWORD *)a4 = (_DWORD)v8;
          *(_DWORD *)(a4 + 4) = KeThreadSwitchCounters;
          *(_DWORD *)(a4 + 8) = dword_140F21FE8;
          *(_DWORD *)(a4 + 12) = dword_140F21FE4;
          *(_DWORD *)(a4 + 16) = dword_140F21FEC;
          *(_DWORD *)(a4 + 20) = dword_140F21FF0;
          *(_DWORD *)(a4 + 24) = dword_140F21FF8;
          *(_DWORD *)(a4 + 28) = dword_140F21FF4;
          *(_DWORD *)(a4 + 32) = dword_140F21FFC;
          *(_DWORD *)(a4 + 36) = dword_140F22000;
          *(_DWORD *)(a4 + 40) = dword_140F22004;
          *(_DWORD *)(a4 + 44) = dword_140F22008;
          Size = 48;
          goto LABEL_821;
        case 0x25u:
          if ( Length >= 0x10 )
          {
            SystemBasicInformation = CmQueryRegistryQuotaInformation();
            Size = 16;
            goto LABEL_820;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x2Au:
          Size = 48 * v13;
          if ( Length < 48 * (int)v13 )
            goto LABEL_113;
          while ( 1 )
          {
            Size_4 = (int)v8;
            v184 = (_QWORD *)a4;
            if ( (unsigned int)v8 >= (unsigned int)v13 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = (unsigned __int8)v8;
            ProcNumber.Reserved = 0;
            PoGetIdleTimes(&ProcNumber, (__int64)&Src, 0LL);
            *(struct _LIST_ENTRY *)a4 = Src;
            *(struct _LIST_ENTRY *)(a4 + 16) = v232;
            *(struct _LIST_ENTRY *)(a4 + 32) = v233;
            a4 += 48LL;
            LODWORD(v8) = (_DWORD)v8 + 1;
            LODWORD(v13) = v179;
          }
          goto LABEL_821;
        case 0x2Bu:
          if ( Length >= 0x18 )
          {
            Size = Length;
            SystemBasicInformation = ExpQueryLegacyDriverInformation(a4, &Size);
            goto LABEL_820;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 0x2Cu:
          if ( Length >= 0xAC )
          {
            v87 = PsGetCurrentServerSiloGlobals()[76].Blink;
            ExAcquireTimeRefreshLockShared();
            Src = *v87;
            v232 = v87[1];
            v233 = v87[2];
            v234 = v87[3];
            v235 = v87[4];
            v236 = v87[5];
            v237 = v87[6];
            v238 = v87[7];
            v239 = v87[8];
            v240 = v87[9];
            Flink = v87[10].Flink;
            v242 = (int)v87[10].Blink;
            ExReleaseTimeRefreshLockShared();
            *(struct _LIST_ENTRY *)a4 = Src;
            *(struct _LIST_ENTRY *)(a4 + 16) = v232;
            *(struct _LIST_ENTRY *)(a4 + 32) = v233;
            *(struct _LIST_ENTRY *)(a4 + 48) = v234;
            *(struct _LIST_ENTRY *)(a4 + 64) = v235;
            *(struct _LIST_ENTRY *)(a4 + 80) = v236;
            *(struct _LIST_ENTRY *)(a4 + 96) = v237;
            *(struct _LIST_ENTRY *)(a4 + 112) = v238;
            *(struct _LIST_ENTRY *)(a4 + 128) = v239;
            *(struct _LIST_ENTRY *)(a4 + 144) = v240;
            *(_QWORD *)(a4 + 160) = Flink;
            *(_DWORD *)(a4 + 168) = v242;
            Size = 172;
            ModuleInformation = 0;
            goto LABEL_821;
          }
          if ( a6 )
            *a6 = 172;
          return -1073741820;
        case 0x2Du:
          SystemBasicInformation = ExpGetLookasideInformation(a4, Length, &Size);
          goto LABEL_820;
        case 0x32u:
          if ( Length == 8 )
          {
            *(_QWORD *)a4 = 0xFFFF800000000000uLL;
            goto LABEL_135;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 0x33u:
          if ( !PreviousMode )
            return -1073741637;
          if ( Length >= 0x90 )
          {
            SystemBasicInformation = VfGetVerifierInformation((void *)a4, Length, &Size, 0);
            goto LABEL_820;
          }
          if ( a6 )
            *a6 = 144;
          return -1073741820;
        case 0x35u:
          if ( Length >= 0x10 )
          {
            v191 = *(_DWORD *)a4;
            v221 = *(unsigned int **)(a4 + 8);
            v219 = *(_DWORD *)(a4 + 4);
            ProbeForWrite(v221, v219, 4u);
            SystemBasicInformation = ExpGetProcessInformation(v221, v219, &Size, &v191, 5);
            goto LABEL_820;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x37u:
          SystemBasicInformation = ExpQueryNumaProcessorMap((_DWORD *)a4, Length, &Size);
          goto LABEL_820;
        case 0x38u:
          SystemBasicInformation = PfSnQueryPrefetcherInformation(
                                     0x140000000LL,
                                     (__int128 *)a4,
                                     Length,
                                     PreviousMode,
                                     &Size);
          goto LABEL_820;
        case 0x3Au:
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = KeGetRecommendedSharedDataAlignment();
            goto LABEL_184;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x3Bu:
          if ( Length != 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( MEMORY[0xFFFFF780000002E0] != -1 )
            goto LABEL_374;
          KeyValueInformation = 0LL;
          v230 = 0;
          ResultLength = 0;
          KeyHandle = 0LL;
          v93 = 0;
          v56 = ZwOpenKey(&KeyHandle, 1u, &stru_140E09268);
          if ( v56 >= 0 )
          {
            v56 = ZwQueryValueKey(
                    KeyHandle,
                    &stru_140E09258,
                    KeyValuePartialInformation,
                    &KeyValueInformation,
                    0x14u,
                    &ResultLength);
            if ( v56 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
              v93 = HIDWORD(KeyValueInformation);
            ZwClose(KeyHandle);
          }
          _InterlockedCompareExchange((volatile signed __int32 *)(MmWriteableSharedUserData + 736), v93, -1);
          if ( (int)(v56 + 0x80000000) < 0 || v56 == -1073741772 )
            v56 = 0;
          ModuleInformation = v56;
          if ( v56 >= 0 )
          {
LABEL_374:
            *(_DWORD *)a4 = MEMORY[0xFFFFF780000002E0];
            goto LABEL_184;
          }
          return v56;
        case 0x3Cu:
          SystemBasicInformation = ExpQueryNumaAvailableMemory(a4);
          goto LABEL_820;
        case 0x3Du:
          Size = 80 * v13;
          if ( Length < 80 * (int)v13 )
            goto LABEL_113;
          v184 = (_QWORD *)a4;
          v47 = 0;
          while ( 1 )
          {
            Size_4 = v47;
            if ( v47 >= (unsigned int)v13 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = v47;
            ProcNumber.Reserved = 0;
            if ( v14 || (_BYTE)v47 )
            {
              if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v47 >= 0x40u )
              {
                v48 = 0xFFFFFFFFLL;
              }
              else
              {
                v48 = *((unsigned int *)qword_140F21E78 + 64 * (unsigned __int64)v14 + (unsigned __int8)v47);
                if ( !(_DWORD)v48 )
                  v48 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v48 = 0LL;
            }
            v178 = (void *)KiProcessorBlock[v48];
            PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)&Src, 0LL, &v217);
            *(_OWORD *)a4 = 0LL;
            *(_OWORD *)(a4 + 16) = 0LL;
            *(_OWORD *)(a4 + 32) = 0LL;
            *(_OWORD *)(a4 + 48) = 0LL;
            *(_OWORD *)(a4 + 64) = 0LL;
            v49 = (unsigned int)KeMaximumIncrement;
            v50 = v178;
            *(_QWORD *)(a4 + 40) = (unsigned int)KeMaximumIncrement
                                 * (unsigned __int64)(unsigned int)(*((_DWORD *)v178 + 8593) + *((_DWORD *)v178 + 8594));
            *(_QWORD *)(a4 + 48) = v49 * *(unsigned int *)(v50[3] + 652LL);
            if ( BYTE4(v232.Blink) )
            {
              *(_BYTE *)a4 = Src.Blink;
              *(_BYTE *)(a4 + 7) = BYTE4(Src.Blink);
              *(_BYTE *)(a4 + 8) = v232.Flink;
              *(_DWORD *)(a4 + 12) = 1;
            }
            *(_QWORD *)(a4 + 72) = v217;
            a4 += 80LL;
            v184 = (_QWORD *)a4;
            v47 = Size_4 + 1;
            LODWORD(v13) = v179;
          }
          goto LABEL_821;
        case 0x3Eu:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemEmulationBasicInformation(a4);
            Size = 64;
            goto LABEL_820;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 0x3Fu:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(a4);
            Size = 12;
            goto LABEL_820;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 0x40u:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v175 + 1) )
          {
            v209 = 0LL;
            v210 = 0LL;
            v70 = ExLockUserBuffer(
                    a4,
                    Length,
                    KeGetCurrentThread()->PreviousMode,
                    IoWriteAccess,
                    &v209,
                    (struct _MDL **)&v210);
            if ( v70 >= 0 )
            {
              v193 = 0;
              v71 = v209;
              *v209 = 0LL;
              v72 = ExpSnapShotHandleTables(
                      (__int64 (__fastcall *)(int, int, int, int, __int64, int, __int64))ObpCaptureHandleInformationEx,
                      HIDWORD(v175),
                      v71,
                      Length,
                      (int *)&v193,
                      1);
              Size = v193;
              ExUnlockUserBuffer((struct _MDL *)v210);
              ModuleInformation = v72;
              EtwTiLogSyscallUsage(v72, 5u);
            }
            else
            {
              ModuleInformation = v70;
              EtwTiLogSyscallUsage(v70, 5u);
            }
            goto LABEL_821;
          }
          return -1073741790;
        case 0x41u:
          if ( Length < 4 )
          {
            if ( a6 )
              *a6 = 4;
            return -1073741820;
          }
          if ( (_DWORD)v13 )
          {
            v94 = KiProcessorBlock;
            v95 = (unsigned int)v13;
            Size_4 = v13;
            do
            {
              LODWORD(v8) = *(_DWORD *)(*v94++ + 34812) + (_DWORD)v8;
              --v95;
            }
            while ( v95 );
          }
          *(_DWORD *)a4 = (_DWORD)v8;
          goto LABEL_184;
        case 0x42u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v175 + 1) )
            return -1073741790;
          ModuleInformation = ExGetBigPoolInfo(SHIDWORD(v175), (_DWORD *)a4, Length, &Size);
          EtwTiLogSyscallUsage(ModuleInformation, 7u);
          goto LABEL_821;
        case 0x45u:
        case 0xE8u:
        case 0xECu:
        case 0xEDu:
          goto LABEL_507;
        case 0x46u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = ObpObjectSecurityMode;
            goto LABEL_184;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x48u:
          if ( Length != 8 )
            return -1073741811;
          v96 = (unsigned int)(v15 - 7);
          if ( (_DWORD)v96 )
          {
            if ( (_DWORD)v96 != 1 )
              return -1073741637;
            *(_DWORD *)a4 = 8;
            *(_DWORD *)(a4 + 4) = (unsigned __int8)guard_dispatch_icall_no_overrides(0x140000000uLL, v19, v96, v13);
          }
          else
          {
            *(_DWORD *)a4 = 7;
            LOBYTE(v8) = off_140E00B18[0] != xKdEnumerateDebuggingDevices;
            *(_DWORD *)(a4 + 4) = (_DWORD)v8;
          }
          goto LABEL_135;
        case 0x49u:
          ModuleInformation = KeBuildLogicalProcessorSystemInformation(v14, a4, Length, &Size);
          goto LABEL_821;
        case 0x4Cu:
          ModuleInformation = ExpGetSystemFirmwareTableInformation((char *)a4, PreviousMode, Length, &Size);
          EtwTiLogSyscallUsage(ModuleInformation, 0xEu);
          goto LABEL_821;
        case 0x4Du:
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v175 + 1) )
            return -1073741790;
          LOBYTE(v8) = SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) == 0;
          ModuleInformation = ExpQueryModuleInformationEx(SHIDWORD(v175), (_WORD *)a4, Length, (int)v8, (int *)&Size);
          EtwTiLogSyscallUsage(ModuleInformation, 1u);
          goto LABEL_821;
        case 0x4Fu:
          SystemBasicInformation = PfQuerySuperfetchInformation(
                                     0x140000000LL,
                                     (__int128 *)a4,
                                     Length,
                                     PreviousMode,
                                     &Size);
          goto LABEL_820;
        case 0x50u:
          SystemBasicInformation = MmQueryMemoryListInformation(
                                     (ULONG **)0xFFFFFFFFFFFFFFFFLL,
                                     (_OWORD *)a4,
                                     Length,
                                     v13,
                                     &Size);
          goto LABEL_820;
        case 0x53u:
          v104 = 8 * v13;
          Size = v104;
          if ( Length < 8 )
            goto LABEL_441;
          v105 = Length < v104;
          if ( Length < v104 )
          {
            v179 = Length >> 3;
            v105 = Length < v104;
          }
          v106 = v105 ? 0xC0000004 : 0;
          v184 = (_QWORD *)a4;
          LOBYTE(v21) = 1;
          KeFlushProcessWriteBuffers(v21);
          v107 = 0;
          v108 = v179;
          while ( 1 )
          {
            Size_4 = v107;
            if ( v107 >= v108 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = v107;
            ProcNumber.Reserved = 0;
            if ( v14 || (_BYTE)v107 )
            {
              if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v107 >= 0x40u )
              {
                v109 = 0xFFFFFFFFLL;
              }
              else
              {
                v109 = *((unsigned int *)qword_140F21E78 + 64 * (unsigned __int64)v14 + (unsigned __int8)v107);
                if ( !(_DWORD)v109 )
                  v109 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v109 = 0LL;
            }
            v110 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[v109] + 24) + 72LL);
            v111 = v184;
            *v184 = v110;
            v184 = v111 + 1;
            v107 = Size_4 + 1;
            v14 = v174;
          }
LABEL_491:
          ModuleInformation = v106;
          goto LABEL_821;
        case 0x56u:
          SystemBasicInformation = ObQueryRefTraceInformation((char *)a4, Length, &Size);
          goto LABEL_820;
        case 0x57u:
          Size = 8;
          if ( Length == 8 )
          {
            *(_DWORD *)a4 = MmSpecialPoolTag;
            LOBYTE(v8) = MmSpecialPoolCatchOverruns != 0;
            *(_DWORD *)(a4 + 4) = (_DWORD)v8;
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0x58u:
          *(_OWORD *)ProcessId = 0LL;
          v203 = 0LL;
          Size = 24;
          if ( Length != 24 )
          {
            ModuleInformation = -1073741820;
            goto LABEL_821;
          }
          *(_OWORD *)ProcessId = *(_OWORD *)a4;
          v203 = *(void **)(a4 + 16);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            return -1073741811;
          if ( PreviousMode && WORD1(ProcessId[1]) && ((unsigned __int8)v203 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          CurrentThread = KeGetCurrentThread();
          v190 = WORD1(ProcessId[1]);
          --CurrentThread->KernelApcDisable;
          v56 = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( v56 >= 0 )
          {
            ModuleInformation = PsQueryFullProcessImageName((__int64)Process, (_OWORD *)(a4 + 8), v203, &v190);
            ObfDereferenceObjectWithTag(Process, 0x746C6644u);
            v57 = CurrentThread->KernelApcDisable++ == -1;
            if ( v57
              && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
              && !CurrentThread->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery(v61, v60);
            }
            if ( ModuleInformation == -1073741820 )
              *(_WORD *)(a4 + 10) = v190;
            goto LABEL_821;
          }
          v57 = CurrentThread->KernelApcDisable++ == -1;
          if ( v57 )
          {
            v58 = &CurrentThread->152;
            if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v58->ApcState.ApcListHead[0].Flink != v58
              && !CurrentThread->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery((__int64)v58, v55);
            }
          }
          return v56;
        case 0x5Au:
          Size = 32;
          if ( Length < 0x14 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          *(_OWORD *)a4 = *(_OWORD *)&ExpBootEnvironmentInformation;
          *(_DWORD *)(a4 + 16) = dword_140EFEAF0;
          if ( Length < Size )
LABEL_296:
            Size = 20;
          else
            *(_QWORD *)(a4 + 24) = qword_140EFEAF8;
          goto LABEL_821;
        case 0x5Bu:
          SystemBasicInformation = HvlQueryEnlightenmentInfo((_OWORD *)a4, Length, v15, &Size);
          goto LABEL_820;
        case 0x5Cu:
          if ( !PreviousMode )
            return -1073741637;
          if ( Length == 40 )
          {
            ModuleInformation = VfGetVerifierInformationEx(a4, v19, v15, v13);
            Size = ((ModuleInformation >> 31) & 0xFFFFFFD8) + 40;
            goto LABEL_821;
          }
          if ( a6 )
            *a6 = 40;
          return -1073741820;
        case 0x62u:
          v106 = IopRetrieveSystemDeviceName((__int64)SyspartDirectGetSystemPartition, a4, Length, &Size);
          if ( v106 == -1073740718 && IopAmbiguousSystemDisk )
          {
            v187 = 0;
            SystemDeviceName = SiGetSystemDeviceName((__int64)SiGetSystemDisk, 0LL, 0, &v187);
            v121 = SystemDeviceName;
            if ( SystemDeviceName == -1073741789 )
            {
              v122 = v187;
              Pool2 = (void *)ExAllocatePool2(0x100uLL);
              v124 = Pool2;
              if ( Pool2 )
              {
                v121 = SiGetSystemDeviceName((__int64)SiGetSystemDisk, Pool2, v122, &v187);
                if ( v121 >= 0 )
                  v8 = v124;
                else
                  ExFreePoolWithTag(v124, 0);
              }
              else
              {
                v121 = -1073741670;
              }
            }
            else if ( SystemDeviceName >= 0 )
            {
              v121 = -1073741595;
            }
            if ( v121 >= 0 )
              ExFreePoolWithTag(v8, 0);
            if ( v121 == -1073740718 )
              v106 = -1073740719;
          }
          goto LABEL_491;
        case 0x63u:
          SystemBasicInformation = IopRetrieveSystemDeviceName((__int64)SyspartDirectGetSystemDisk, a4, Length, &Size);
          if ( SystemBasicInformation == -1073740718 && IopAmbiguousSystemDisk )
            SystemBasicInformation = -1073740719;
          goto LABEL_820;
        case 0x64u:
          WORD4(v218) = v14;
          *(_QWORD *)&v218 = KeQueryGroupAffinity(v14);
          v45 = __popcnt(v218);
          ModuleInformation = PpmCapturePerformanceDistribution(0LL, 0, v45, (__int64)&v218, &v176);
          if ( ModuleInformation == -1073741820 )
          {
            if ( v176 <= Length )
            {
              v46 = (void *)ExAllocatePool2(0x40uLL);
              v180 = v46;
              if ( v46 )
              {
                ModuleInformation = PpmCapturePerformanceDistribution(
                                      (unsigned __int64)v46,
                                      v176,
                                      v45,
                                      (__int64)&v218,
                                      &Size);
                if ( ModuleInformation >= 0 )
                  memmove((void *)a4, v46, Size);
                ExFreePoolWithTag(v46, 0x744D5050u);
              }
              else
              {
                ModuleInformation = -1073741670;
              }
            }
            else
            {
              ModuleInformation = -1073741820;
              Size = v176;
            }
          }
          goto LABEL_821;
        case 0x65u:
          SystemBasicInformation = ExpQueryNumaProximityNode((unsigned int *)a4, Length, &Size);
          goto LABEL_820;
        case 0x66u:
          if ( Length >= 0x1B0 )
          {
            v88 = PsGetCurrentServerSiloGlobals()[76].Blink;
            ExAcquireTimeRefreshLockShared();
            p_Src = &Src;
            v90 = 3LL;
            v91 = 3LL;
            do
            {
              *p_Src = *v88;
              p_Src[1] = v88[1];
              p_Src[2] = v88[2];
              p_Src[3] = v88[3];
              p_Src[4] = v88[4];
              p_Src[5] = v88[5];
              p_Src[6] = v88[6];
              p_Src += 8;
              p_Src[-1] = v88[7];
              v88 += 8;
              --v91;
            }
            while ( v91 );
            *p_Src = *v88;
            p_Src[1] = v88[1];
            p_Src[2] = v88[2];
            ExReleaseTimeRefreshLockShared();
            v92 = &Src;
            do
            {
              *(struct _LIST_ENTRY *)a4 = *v92;
              *(struct _LIST_ENTRY *)(a4 + 16) = v92[1];
              *(struct _LIST_ENTRY *)(a4 + 32) = v92[2];
              *(struct _LIST_ENTRY *)(a4 + 48) = v92[3];
              *(struct _LIST_ENTRY *)(a4 + 64) = v92[4];
              *(struct _LIST_ENTRY *)(a4 + 80) = v92[5];
              *(struct _LIST_ENTRY *)(a4 + 96) = v92[6];
              a4 += 128LL;
              *(struct _LIST_ENTRY *)(a4 - 16) = v92[7];
              v92 += 8;
              --v90;
            }
            while ( v90 );
            *(struct _LIST_ENTRY *)a4 = *v92;
            *(struct _LIST_ENTRY *)(a4 + 16) = v92[1];
            *(struct _LIST_ENTRY *)(a4 + 32) = v92[2];
            Size = 432;
            ModuleInformation = 0;
            goto LABEL_821;
          }
          if ( a6 )
            *a6 = 432;
          return -1073741820;
        case 0x67u:
          if ( qword_140F04898 )
          {
            v125 = (unsigned __int8)SeILSigningPolicy;
            if ( !SeILSigningPolicy )
              v125 = (unsigned __int8)SeILSigningPolicyRuntime;
            LOBYTE(v15) = v125 != 0;
            SystemBasicInformation = guard_dispatch_icall_no_overrides(a4, Length, v15, &Size);
          }
          else
          {
            SystemBasicInformation = -1073741823;
          }
          goto LABEL_820;
        case 0x69u:
          ModuleInformation = guard_dispatch_icall_no_overrides(23LL, 0LL, 0LL, &v176);
          if ( ModuleInformation != -1073741820 )
            goto LABEL_507;
          v81 = v176;
          if ( Length < v176 || !a4 )
            goto LABEL_268;
          if ( PreviousMode )
          {
            v126 = (_DWORD *)ExAllocatePool2(0x101uLL);
            v180 = v126;
            if ( !v126 )
            {
              ModuleInformation = -1073741670;
              goto LABEL_821;
            }
            v81 = v176;
          }
          else
          {
            v126 = (_DWORD *)a4;
            v180 = (PVOID)a4;
          }
          v127 = guard_dispatch_icall_no_overrides(23LL, v81, v126, &Size);
          ModuleInformation = v127;
          if ( !PreviousMode )
            goto LABEL_821;
          if ( v127 >= 0 )
            goto LABEL_517;
          goto LABEL_518;
        case 0x6Au:
          ModuleInformation = -1073741821;
          goto LABEL_821;
        case 0x6Bu:
        case 0xE7u:
          v97 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)&Src;
          v180 = &Src;
          v98 = 80;
          v176 = 80;
          if ( Length < 0x50 )
          {
            v98 = Length;
            v176 = Length;
          }
          Size = v98;
          p_ProcNumber = &ProcNumber;
          if ( v16 != 231 )
            p_ProcNumber = 0LL;
          while ( 2 )
          {
            ModuleInformation = KeQueryLogicalProcessorRelationship(p_ProcNumber, RelationshipType, v97, &Size);
            if ( ModuleInformation < 0 )
            {
              if ( ModuleInformation == -1073741820 )
              {
                if ( Size <= Length )
                {
                  if ( v97 && v97 != (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)&Src )
                    ExFreePoolWithTag(v97, 0);
                  v97 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(0x101uLL);
                  v180 = v97;
                  if ( v97 )
                  {
                    v176 = Size;
                    continue;
                  }
                  ModuleInformation = -1073741670;
                }
                else
                {
                  ModuleInformation = -1073741820;
                }
              }
            }
            else
            {
              memmove((void *)a4, v97, Size);
              ModuleInformation = 0;
            }
            break;
          }
          if ( v97 && v97 != (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)&Src )
            goto LABEL_402;
          goto LABEL_821;
        case 0x6Cu:
          v114 = 8 * v13;
          Size = 8 * v13;
          if ( Length < 8 )
            goto LABEL_441;
          v115 = Length < v114;
          if ( Length < v114 )
          {
            LODWORD(v13) = Length >> 3;
            v115 = Length < v114;
          }
          v184 = (_QWORD *)a4;
          v116 = 0;
          while ( 1 )
          {
            Size_4 = v116;
            if ( v116 >= (unsigned int)v13 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = v116;
            ProcNumber.Reserved = 0;
            if ( v14 || (_BYTE)v116 )
            {
              if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v116 >= 0x40u )
              {
                v117 = 0xFFFFFFFFLL;
              }
              else
              {
                v117 = *((unsigned int *)qword_140F21E78 + 64 * (unsigned __int64)v14 + (unsigned __int8)v116);
                if ( !(_DWORD)v117 )
                  v117 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v117 = 0LL;
            }
            v118 = *(_QWORD *)(KiProcessorBlock[v117] + 34680);
            v119 = v184;
            *v184 = v118;
            v184 = v119 + 1;
            v116 = Size_4 + 1;
            v14 = v174;
          }
          ModuleInformation = v115 ? 0xC0000004 : 0;
          goto LABEL_821;
        case 0x6Du:
          SystemBasicInformation = SmQueryStoreInformation(0x140000000LL, a4, Length, PreviousMode, &Size);
          goto LABEL_820;
        case 0x70u:
          SystemBasicInformation = IoQueryVhdBootInformation(0x140000000LL, (void *)a4, Length, &Size);
          goto LABEL_820;
        case 0x71u:
          SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)a4, Length, PreviousMode, &Size);
          goto LABEL_820;
        case 0x73u:
          if ( (_DWORD)v19 )
          {
            ModuleInformation = -1073741820;
          }
          else
          {
            Size = 8;
            if ( Length >= 8 )
            {
              *(_DWORD *)a4 = DbgkErrorPortStartTimeout;
              *(_DWORD *)(a4 + 4) = DbgkErrorPortCommTimeout;
            }
            else
            {
              ModuleInformation = -1073741820;
            }
          }
          goto LABEL_821;
        case 0x74u:
          SystemBasicInformation = IoQueryLowPriorityIoInformation(0x140000000LL, (_DWORD *)a4, Length, &Size);
          goto LABEL_820;
        case 0x75u:
          Size = 1096;
          if ( Length != 1096 )
          {
            ModuleInformation = -1073741820;
            goto LABEL_821;
          }
          if ( PreviousMode )
            return -1073741790;
          SystemBasicInformation = ExQueryBootEntropyInformation(a4);
          goto LABEL_820;
        case 0x76u:
          if ( !PreviousMode )
            return -1073741637;
          if ( Length >= 0x110 )
          {
            SystemBasicInformation = VfGetVerifierInformation((void *)a4, Length, &Size, 1);
            goto LABEL_820;
          }
          if ( a6 )
            *a6 = 272;
          return -1073741820;
        case 0x79u:
          Size = 4 * (unsigned __int16)KeNumberNodes;
          if ( Length >= Size )
          {
            Size_4 = 0;
            v100 = 0;
            v101 = 0;
            v102 = 0;
            v103 = v183;
            while ( (unsigned int)v8 < (unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(a4 + 4LL * v100) = *((_DWORD *)KeNodeDistance
                                             + v102
                                             + v103 * (unsigned int)(unsigned __int16)KeNumberNodes);
              v100 = v101 + 1;
              v102 = v101 + 1;
              Size_4 = v101 + 1;
              LODWORD(v8) = ++v101;
            }
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0x7Au:
          Size = 8;
          if ( Length != 8 || !a4 )
            goto LABEL_113;
          v126 = (_DWORD *)ExAllocatePool2(0x101uLL);
          v178 = v126;
          if ( !v126 )
          {
            ModuleInformation = -1073741670;
            goto LABEL_821;
          }
          ModuleInformation = guard_dispatch_icall_no_overrides(26LL, 8LL, v126, &Size);
          if ( ModuleInformation >= 0 )
          {
            *(_DWORD *)a4 = *v126;
            v128 = *(_DWORD *)(a4 + 4) ^ (v126[1] ^ *(_DWORD *)(a4 + 4)) & 1;
            *(_DWORD *)(a4 + 4) = v128;
            v129 = v128 ^ (v126[1] ^ v128) & 2;
            *(_DWORD *)(a4 + 4) = v129;
            *(_DWORD *)(a4 + 4) = v129 ^ (v126[1] ^ v129) & 4;
          }
          goto LABEL_518;
        case 0x7Bu:
          if ( Length != 32 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
          Src.Flink = (struct _LIST_ENTRY *)MmGetAvailablePages(ProcessPartitionId);
          Src.Blink = (struct _LIST_ENTRY *)MmGetTotalCommittedPages(v34);
          v232.Flink = (struct _LIST_ENTRY *)MmGetTotalCommitLimit(v35);
          v232.Blink = (struct _LIST_ENTRY *)MmGetPeakCommitment(v36);
          v37 = v232.Blink;
          if ( v232.Blink < Src.Blink )
            v37 = Src.Blink;
          v232.Blink = v37;
          *(struct _LIST_ENTRY *)a4 = Src;
          *(struct _LIST_ENTRY *)(a4 + 16) = v232;
          goto LABEL_631;
        case 0x7Cu:
          Size = 12;
          if ( Length >= 4 )
          {
            v220 = *(_DWORD *)a4;
            if ( v220 == 1 )
            {
              if ( Length >= 0xC )
              {
                *(_DWORD *)(a4 + 8) = 0;
                *(_DWORD *)(a4 + 4) = 0;
                *(_DWORD *)(a4 + 8) = 1;
                *(_DWORD *)(a4 + 4) = 1;
                if ( MEMORY[0xFFFFF780000003C6] )
                  *(_DWORD *)(a4 + 4) &= ~1u;
              }
              else
              {
                ModuleInformation = -1073741820;
              }
            }
            else
            {
              ModuleInformation = -1073741637;
            }
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0x7Eu:
          Size = 32;
          if ( Length == 32 )
          {
            ModuleInformation = BgkQueryBootGraphicsInformation(0LL, &Src, v15, v13);
            if ( ModuleInformation >= 0 )
            {
              v130 = Src.Flink;
              if ( PreviousMode )
                v130 = 0LL;
              Src.Flink = v130;
              memmove((void *)a4, &Src, Size);
            }
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0x80u:
        case 0xF4u:
          if ( (_DWORD)v19 )
          {
            ModuleInformation = -1073741820;
          }
          else
          {
            v136 = MmEnumerateBadPages(&v199);
            v137 = 0LL;
            v97 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)v199;
            if ( v199 )
            {
              v137 = *v199 & 0xFFFFFFFFFFFFFLL;
              if ( v137 <= 0x1FFFFFFF )
              {
                Size = 8 * *(_DWORD *)v199;
                LODWORD(v8) = 8 * v137;
              }
              else
              {
                v136 = -1073741820;
              }
            }
            if ( Length < (unsigned int)v8 )
              v136 = -1073741820;
            ModuleInformation = v136;
            if ( v199 )
            {
              if ( v136 >= 0 )
              {
                if ( v185 == 128 )
                {
                  v138 = v199 + 1;
                  for ( j = v199 + 1; v137; --v137 )
                  {
                    if ( (*v138 & 0x4000000000000000LL) == 0 )
                    {
                      v140 = *v138 & 0x7FFFFFFFFFFFFFFFLL;
                      *v138 = v140;
                      *j++ = v140;
                    }
                    ++v138;
                  }
                  Size = 8 * (((char *)j - (char *)v97 - 8) >> 3);
                }
                memmove((void *)a4, &v97->Processor, Size);
              }
LABEL_402:
              ExFreePoolWithTag(v97, 0);
            }
          }
          goto LABEL_821;
        case 0x85u:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          ModuleInformation = ExpGetSystemPlatformBinary(a4, Length, PreviousMode);
          EtwTiLogSyscallUsage(ModuleInformation, 0xDu);
          goto LABEL_821;
        case 0x86u:
          Size = 32;
          if ( Length != 32 )
          {
            ModuleInformation = -1073741820;
            goto LABEL_821;
          }
          SystemBasicInformation = sub_140A03EB0(0x140000000LL, a4);
          goto LABEL_820;
        case 0x87u:
          Size = 8;
          if ( Length >= 8 )
          {
            if ( (unsigned int)HvlQueryActiveProcessors(&v194, 0LL) )
            {
              ModuleInformation = -1073741637;
            }
            else
            {
              ModuleInformation = HvlQueryProcessorTopologyCount(0LL, &v195);
              if ( ModuleInformation )
              {
                ModuleInformation = -1073741637;
              }
              else
              {
                *(_DWORD *)a4 = v194;
                *(_DWORD *)(a4 + 4) = v195;
              }
            }
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0x88u:
        case 0x89u:
          if ( Length == 48 )
            return ExpGetDeviceDataInformation(v16, a4, 48);
          if ( a6 )
            *a6 = 48;
          return -1073741820;
        case 0x8Au:
          ModuleInformation = ExpQueryMemoryTopologyInformation((void *)a4, Length, &Size);
          EtwTiLogSyscallUsage(ModuleInformation, 0xAu);
          goto LABEL_821;
        case 0x8Bu:
          ModuleInformation = ExpQueryChannelInformation((unsigned int *)a4, Length, &Size);
          EtwTiLogSyscallUsage(ModuleInformation, 0xBu);
          goto LABEL_821;
        case 0x8Cu:
          if ( a6 || Length >= 8 )
          {
            ModuleInformation = BgkQueryBootGraphicsInformation(2LL, &Size, v15, v13);
            if ( ModuleInformation >= 0 )
            {
              if ( Size )
              {
                if ( Length >= Size )
                {
                  ModuleInformation = BgkQueryBootGraphicsInformation(1LL, &P, v131, v132);
                  if ( ModuleInformation >= 0 )
                  {
                    v133 = P;
                    if ( P )
                    {
                      memmove((void *)a4, P, Size);
                      ExFreePoolWithTag(v133, 0x4B494742u);
                    }
                    else
                    {
                      ModuleInformation = -1073741670;
                    }
                  }
                }
                else
                {
                  ModuleInformation = -1073741789;
                }
              }
              else
              {
                ModuleInformation = -1073741670;
              }
            }
          }
          else
          {
            ModuleInformation = -1073741811;
          }
          goto LABEL_821;
        case 0x8Fu:
        case 0x91u:
        case 0xABu:
        case 0xB3u:
          SystemBasicInformation = SeSecureBootQueryInformation(v16, a4, Length, &Size);
          goto LABEL_820;
        case 0x93u:
          SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation((bool *)a4, Length, &Size);
          goto LABEL_820;
        case 0x95u:
          if ( Length >= 3 )
          {
            *(_BYTE *)a4 = KdpBootedNodebug == 0;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
            Size = 3;
            goto LABEL_821;
          }
          if ( a6 )
            *a6 = 3;
          return -1073741820;
        case 0x96u:
          if ( a4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          ModuleInformation = ExpQueryBootLoaderMetadata((void *)a4, Length, &Size);
          EtwTiLogSyscallUsage(ModuleInformation, 0xFu);
          goto LABEL_821;
        case 0x97u:
          Size = 4;
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = ExSoftRebootFlags;
            goto LABEL_821;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x99u:
          if ( (_DWORD)v19 )
          {
            ModuleInformation = -1073741820;
          }
          else
          {
            Size = 32;
            if ( Length < 0x20 )
            {
              if ( Length < 0xC )
              {
                ModuleInformation = -1073741820;
              }
              else
              {
                Size = 12;
                *(_QWORD *)a4 = PoOffCrashConfigTable;
                *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
              }
            }
            else
            {
              *(_QWORD *)a4 = PoOffCrashConfigTable;
              *(_DWORD *)(a4 + 8) = DWORD2(PoOffCrashConfigTable);
              *(_QWORD *)(a4 + 16) = xmmword_140F0E3F0;
              *(_DWORD *)(a4 + 24) = DWORD2(xmmword_140F0E3F0);
            }
          }
          goto LABEL_821;
        case 0x9Au:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          ModuleInformation = ExpGetSystemProcessorFeaturesInformation((_QWORD *)a4);
LABEL_631:
          Size = 32;
          goto LABEL_821;
        case 0x9Cu:
          Size = 128;
          if ( Length == 128 )
          {
            ModuleInformation = BgkQueryBootGraphicsInformation(3LL, &Src, v15, v13);
            if ( ModuleInformation >= 0 )
              memmove((void *)a4, &Src, Size);
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0x9Du:
          Size = WORD5(ExpManufacturingInformation) + 24;
          if ( Length >= Size )
          {
            v141 = (void *)(a4 + 24);
            *(_OWORD *)a4 = 0LL;
            *(_QWORD *)(a4 + 16) = 0LL;
            *(_DWORD *)a4 = ExpManufacturingInformation;
            *(_DWORD *)(a4 + 8) = DWORD2(ExpManufacturingInformation);
            if ( WORD4(ExpManufacturingInformation) )
            {
              *(_QWORD *)(a4 + 16) = v141;
              memmove(v141, qword_140EFEB10, WORD5(ExpManufacturingInformation));
            }
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0x9Eu:
          Size = 1;
          if ( Length )
          {
            *(_BYTE *)a4 = PoEnergyEstimationEnabled();
            goto LABEL_821;
          }
          if ( a6 )
            *a6 = 1;
          goto LABEL_113;
        case 0x9Fu:
          SystemBasicInformation = HvlQueryDetailInfo((_OWORD *)a4, Length, v15, &Size);
          goto LABEL_820;
        case 0xA0u:
          v142 = (_DWORD)v13 << 6;
          Size = (_DWORD)v13 << 6;
          if ( Length < 0x40 )
            goto LABEL_441;
          v143 = Length < v142;
          if ( Length < v142 )
          {
            LODWORD(v13) = Length >> 6;
            v179 = Length >> 6;
            v143 = Length < v142;
          }
          v144 = v143 ? 0xC0000004 : 0;
          v184 = (_QWORD *)a4;
          v145 = 0;
          Size_4 = 0;
          while ( v145 < (unsigned int)v13 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v145;
            ProcNumber.Reserved = 0;
            if ( v14 || (_BYTE)v145 )
            {
              if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v145 >= 0x40u )
              {
                v146 = 0xFFFFFFFFLL;
              }
              else
              {
                v146 = *((unsigned int *)qword_140F21E78 + 64 * (unsigned __int64)v14 + (unsigned __int8)v145);
                if ( !(_DWORD)v146 )
                  v146 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v146 = 0LL;
            }
            KeQueryCycleTimeStatsProcessor(KiProcessorBlock[v146], (_QWORD *)a4);
            a4 += 64LL;
            v184 = (_QWORD *)a4;
            v145 = v147 + 1;
            Size_4 = v145;
            LODWORD(v13) = v179;
          }
          ModuleInformation = v144;
          goto LABEL_821;
        case 0xA2u:
          SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((int *)a4, Length, &Size);
          goto LABEL_820;
        case 0xA3u:
          if ( Length )
          {
            *(_BYTE *)a4 = KdIgnoreUmExceptions;
            Size = 1;
            goto LABEL_821;
          }
          if ( a6 )
            *a6 = 1;
          return -1073741820;
        case 0xA4u:
        case 0xACu:
        case 0xBDu:
        case 0xBEu:
        case 0xC7u:
        case 0xD1u:
        case 0xF1u:
        case 0x100u:
          if ( qword_140F04908 )
            SystemBasicInformation = guard_dispatch_icall_no_overrides(v16, v20, (unsigned int)v19, a4);
          else
            SystemBasicInformation = -1073741823;
          goto LABEL_820;
        case 0xA5u:
          Size = 16;
          if ( Length != 16 )
          {
            if ( a6 )
              *a6 = 16;
            goto LABEL_113;
          }
          LOBYTE(Src.Flink) = (__int64)Src.Flink & 0xEF | (16 * (ExpFirmwarePageProtectionSupported & 1));
          if ( VslIsSecureKernelRunning() )
          {
            v177[0] = 0;
            LOBYTE(Src.Flink) = v148 | 1;
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags(0LL);
            v150 = (char)Src.Flink;
            if ( (NestedPageProtectionFlags & 2) != 0 )
            {
              v150 = LOBYTE(Src.Flink) | 2;
              LOBYTE(Src.Flink) |= 2u;
            }
            if ( (NestedPageProtectionFlags & 0x20) != 0 )
            {
              v150 |= 4u;
              LOBYTE(Src.Flink) = v150;
            }
            if ( (NestedPageProtectionFlags & 0x10) != 0 )
              LOBYTE(Src.Flink) = v150 | 8;
            v151 = BYTE1(Src.Flink);
            if ( (NestedPageProtectionFlags & 0x200) != 0 )
            {
              v151 = BYTE1(Src.Flink) | 2;
              BYTE1(Src.Flink) |= 2u;
            }
            if ( v200 )
            {
              ModuleInformation = VslIsTrustletRunning(v200, v177);
              v151 = v177[0] & 1 | BYTE1(Src.Flink) & 0xFE;
              BYTE1(Src.Flink) = v151;
            }
            if ( (NestedPageProtectionFlags & 0x800) != 0 )
            {
              v151 |= 4u;
              BYTE1(Src.Flink) = v151;
            }
            if ( (NestedPageProtectionFlags & 0x1000) != 0 )
            {
              v151 |= 8u;
              BYTE1(Src.Flink) = v151;
            }
            if ( (NestedPageProtectionFlags & 0x2000) != 0 )
            {
              v151 |= 0x10u;
              BYTE1(Src.Flink) = v151;
            }
            if ( (NestedPageProtectionFlags & 0x10000) != 0 )
            {
              v151 |= 0x20u;
              BYTE1(Src.Flink) = v151;
            }
            if ( (NestedPageProtectionFlags & 0x40000) != 0 )
              BYTE1(Src.Flink) = v151 | 0x40;
            if ( (NestedPageProtectionFlags & 0x80000) != 0 )
              BYTE2(Src.Flink) |= 1u;
            v245 = 0LL;
            v246 = 0LL;
            v247 = 0LL;
            v248 = 0LL;
            v249 = 0LL;
            v250 = 0LL;
            v251 = 0LL;
            if ( (int)VslpEnterIumSecureMode(2u, 36LL, 0, (__int64)&v245) >= 0 && (_QWORD)v246 )
              v152 = 32;
            else
              v152 = 0;
            LOBYTE(Src.Flink) = v152 | (__int64)Src.Flink & 0xDF;
          }
          *(struct _LIST_ENTRY *)a4 = Src;
          goto LABEL_821;
        case 0xA6u:
          SystemBasicInformation = SeQueryHSTIResults((void *)a4);
          goto LABEL_820;
        case 0xA7u:
          if ( PreviousMode )
          {
            ModuleInformation = -1073741790;
          }
          else if ( Length >= 0x148 )
          {
            v62 = MmLockLoadedDataTableEntryShared(*(_QWORD *)a4);
            v63 = v62;
            if ( v62 )
            {
              v64 = (_WORD *)(a4 + 8);
              *v64 = 0;
              ExpConvertLdrEntryToModuleInfo(0, v62, 0, 0, (__int64)v64);
              MmUnlockLoadedDataTableEntryShared(v63);
              Size = 328;
LABEL_200:
              ModuleInformation = 0;
            }
            else
            {
              ModuleInformation = -1073741275;
            }
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0xA9u:
          SystemBasicInformation = HvlQueryVsmProtectionInfo((void *)a4, Length, &Size);
          goto LABEL_820;
        case 0xADu:
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          ModuleInformation = result;
          if ( result < 0 )
            return result;
          Size = 264;
          if ( Length != 264 )
          {
            ModuleInformation = -1073741820;
            goto LABEL_821;
          }
          v158 = (struct _KAFFINITY_EX *)ExAllocatePool2(0x100uLL);
          v159 = v158;
          v180 = v158;
          if ( !v158 )
            return -1073741670;
          v158->Count = 1;
          v158->Size = 32;
          v158->Reserved = 0;
          memset_0(&v158->8, 0, sizeof(v158->8));
          KeGetAffinitizedInterruptsInfo(v159);
          v160 = v159;
          v161 = 2LL;
          do
          {
            *(_OWORD *)a4 = *(_OWORD *)&v160->Count;
            *(_OWORD *)(a4 + 16) = *(_OWORD *)&v160->StaticBitmap[1];
            *(_OWORD *)(a4 + 32) = *(_OWORD *)&v160->StaticBitmap[3];
            *(_OWORD *)(a4 + 48) = *(_OWORD *)&v160->StaticBitmap[5];
            *(_OWORD *)(a4 + 64) = *(_OWORD *)&v160->StaticBitmap[7];
            *(_OWORD *)(a4 + 80) = *(_OWORD *)&v160->StaticBitmap[9];
            *(_OWORD *)(a4 + 96) = *(_OWORD *)&v160->StaticBitmap[11];
            a4 += 128LL;
            *(_OWORD *)(a4 - 16) = *(_OWORD *)&v160->StaticBitmap[13];
            v160 = (struct _KAFFINITY_EX *)((char *)v160 + 128);
            --v161;
          }
          while ( v161 );
          *(_QWORD *)a4 = *(_QWORD *)&v160->Count;
          ExFreePoolWithTag(v159, 0);
          goto LABEL_821;
        case 0xAEu:
          SystemBasicInformation = PsRootSiloInformation((_DWORD *)a4, Length, &Size);
          goto LABEL_820;
        case 0xAFu:
          if ( Handle )
          {
            Object = 0LL;
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &Object, 0LL);
            v162 = Object;
            Process = (PEPROCESS)Object;
            if ( result < 0 )
              return result;
            v8 = Object;
          }
          else
          {
            v162 = Process;
          }
          ModuleInformation = KeQueryCpuSetInformation((void *)a4, Length, (__int64)&Size, (__int64)v162);
          if ( v8 )
            goto LABEL_714;
          goto LABEL_821;
        case 0xB2u:
          if ( !Length )
          {
            ModuleInformation = -1073741789;
            goto LABEL_821;
          }
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
            return -1073741727;
          v163 = (struct _MDL *)ExAllocatePool2(0x41uLL);
          v164 = v163;
          v180 = v163;
          if ( v163 )
          {
            ModuleInformation = VslQuerySecureKernelProfileInformation(v215, v163, Length, &Size);
            if ( ModuleInformation >= 0 )
              memmove((void *)a4, v164, Size);
            ExFreePoolWithTag(v164, 0x6F666E49u);
          }
          else
          {
            ModuleInformation = -1073741670;
          }
          goto LABEL_821;
        case 0xB4u:
          SystemBasicInformation = ExpQueryInterruptSteeringInformation(v20, v19, (_DWORD *)a4, Length, &Size);
          goto LABEL_820;
        case 0xB5u:
        case 0xE6u:
          if ( Handle )
          {
            v216 = 0LL;
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v216, 0LL);
            v162 = v216;
            Process = (PEPROCESS)v216;
            if ( result < 0 )
              return result;
            v8 = v216;
          }
          else
          {
            v162 = Process;
          }
          ModuleInformation = PsGetSupportedProcessorArchitectures((_DWORD *)a4, v19, Length, &Size, (__int64)v162);
          if ( v8 )
LABEL_714:
            ObfDereferenceObject(v162);
          goto LABEL_821;
        case 0xB6u:
          if ( Length != 56 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          v23 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
          Src.Flink = (struct _LIST_ENTRY *)(MmGetNumberOfPhysicalPages(v23) << 12);
          Src.Blink = (struct _LIST_ENTRY *)(MmGetAvailablePages(v23) << 12);
          v232.Flink = (struct _LIST_ENTRY *)(MmGetResidentAvailablePages(v24) << 12);
          v232.Blink = (struct _LIST_ENTRY *)(MmGetTotalCommittedPages(v25) << 12);
          v233.Blink = (struct _LIST_ENTRY *)(MmGetTotalCommitLimit(v26) << 12);
          v234.Flink = (struct _LIST_ENTRY *)(MmGetPeakCommitment(v27) << 12);
          v233.Flink = (struct _LIST_ENTRY *)(MmGetSharedCommit() << 12);
          v28 = Src.Flink;
          if ( Src.Flink < Src.Blink )
            v28 = Src.Blink;
          Src.Flink = v28;
          v29 = v233.Blink;
          if ( v233.Blink < v232.Blink )
            v29 = v232.Blink;
          v233.Blink = v29;
          v30 = v234.Flink;
          if ( v234.Flink < v232.Blink )
            v30 = v232.Blink;
          v234.Flink = v30;
          *(struct _LIST_ENTRY *)a4 = Src;
          *(struct _LIST_ENTRY *)(a4 + 16) = v232;
          *(struct _LIST_ENTRY *)(a4 + 32) = v233;
          *(_QWORD *)(a4 + 48) = v234.Flink;
          Size = 56;
          goto LABEL_821;
        case 0xB7u:
          if ( Length != 16 )
            return -1073741820;
          SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo(*(_QWORD *)a4, *(unsigned int *)(a4 + 8));
          goto LABEL_820;
        case 0xB8u:
          if ( Length != 24 )
          {
            if ( a6 )
              *a6 = 24;
            return -1073741820;
          }
          v31 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
          Src.Flink = (struct _LIST_ENTRY *)(MmGetNumberOfPhysicalPages(v31) << 12);
          Src.Blink = (struct _LIST_ENTRY *)(MmGetLowestPhysicalPage(v31) << 12);
          v232.Flink = (struct _LIST_ENTRY *)((MmGetHighestPhysicalPage(v32) << 12) + 4095);
          *(struct _LIST_ENTRY *)a4 = Src;
          *(_QWORD *)(a4 + 16) = v232.Flink;
LABEL_69:
          Size = 24;
          goto LABEL_821;
        case 0xB9u:
          SystemBasicInformation = sub_1408FC220((void *)a4, Length);
          goto LABEL_820;
        case 0xBAu:
          if ( !Length )
          {
            v182 = 1;
            return ZwFilterBootOption(1LL, 270532611LL);
          }
          if ( a6 )
            *a6 = 0;
          return -1073741820;
        case 0xBCu:
          if ( Length != 8 )
            return -1073741820;
          ModuleInformation = PsQueryActivityModerationUserSettings(&Src);
          if ( ModuleInformation >= 0 )
            *(_QWORD *)a4 = Src.Flink;
          goto LABEL_821;
        case 0xC0u:
          if ( Length >= 0x20 )
          {
            ModuleInformation = ExpGetSystemFlushInformation(a4);
            Size = 32;
            goto LABEL_821;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0xC1u:
          v112 = 8 * KeQueryActiveGroupCount();
          Size = v112;
          if ( Length >= v112 )
          {
            memset_0((void *)a4, 0, v112);
            Size_4 = 0;
            v113 = 0;
            while ( (unsigned int)v8 < (unsigned __int16)KeNumberNodes )
            {
              KeInitializeSchedulerSubNodeEnumerationContext(&v243, KeNodeBlock[v113]);
              while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v243, &v213) )
              {
                v174 = *(_WORD *)(v213 + 136);
                *(_QWORD *)(a4 + 8LL * v174) |= *(_QWORD *)(v213 + 16);
              }
              v113 = Size_4 + 1;
              Size_4 = v113;
              LODWORD(v8) = v113;
            }
          }
          else
          {
LABEL_441:
            ModuleInformation = -1073741789;
          }
          goto LABEL_821;
        case 0xC2u:
          SystemBasicInformation = VslTransformDumpKey(v20, v19, (void *)a4, Length, &Size, PreviousMode);
          goto LABEL_820;
        case 0xC3u:
          if ( Length >= 8 )
          {
            SystemBasicInformation = ExpGetSystemWriteConstraintInformation((_QWORD *)a4);
            Size = 8;
            goto LABEL_820;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 0xC4u:
          SystemBasicInformation = KeQueryKvaShadowInformation((BOOL *)a4, Length, &Size);
          goto LABEL_820;
        case 0xC5u:
          Size = 8;
          if ( Length >= 8 )
          {
            v166 = qword_140E2DA78;
            *(_QWORD *)a4 = 0LL;
            *(_QWORD *)a4 = v166;
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0xC6u:
          ModuleInformation = guard_dispatch_icall_no_overrides(34LL, 0LL, 0LL, &v176);
          if ( ModuleInformation != -1073741820 )
            return -1073741637;
          v81 = v176;
          if ( Length < v176 || !a4 )
          {
LABEL_268:
            Size = v81;
            goto LABEL_821;
          }
          if ( PreviousMode )
          {
            v126 = (_DWORD *)ExAllocatePool2(0x101uLL);
            v180 = v126;
            if ( !v126 )
            {
              ModuleInformation = -1073741670;
              goto LABEL_821;
            }
            v81 = v176;
          }
          else
          {
            v126 = (_DWORD *)a4;
            v180 = (PVOID)a4;
          }
          v165 = guard_dispatch_icall_no_overrides(34LL, v81, v126, &Size);
          ModuleInformation = v165;
          if ( PreviousMode )
          {
            if ( v165 >= 0 )
LABEL_517:
              memmove((void *)a4, v126, Size);
LABEL_518:
            ExFreePoolWithTag(v126, 0x6F666E49u);
          }
          goto LABEL_821;
        case 0xC8u:
          SystemBasicInformation = IopRetrieveSystemDeviceName(
                                     (__int64)SyspartDirectGetFirmwareSystemPartition,
                                     a4,
                                     Length,
                                     &Size);
          goto LABEL_820;
        case 0xC9u:
          SystemBasicInformation = KeQuerySpeculationControlInformation((void *)a4, Length, &Size);
          goto LABEL_820;
        case 0xCAu:
          Size = 1;
          if ( Length != 1 )
          {
            if ( a6 )
              *a6 = 1;
            goto LABEL_113;
          }
          v196 = 0;
          ModuleInformation = guard_dispatch_icall_no_overrides(48LL, 1LL, &Src, &v196);
          if ( ModuleInformation >= 0 && v196 == 1 )
            *(_BYTE *)a4 = Src.Flink;
          else
LABEL_507:
            ModuleInformation = -1073741637;
          goto LABEL_821;
        case 0xCEu:
          if ( Length != 8 )
          {
            if ( a6 )
              *a6 = 8;
            return -1073741820;
          }
          *(_BYTE *)a4 = *(_BYTE *)ExLeapSecondData != 0;
          *(_DWORD *)(a4 + 4) = 0;
LABEL_135:
          Size = 8;
          goto LABEL_821;
        case 0xCFu:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag2;
            goto LABEL_184;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xD0u:
          SystemBasicInformation = SeSecurityModelQueryInformation((_DWORD *)a4, Length);
          goto LABEL_820;
        case 0xD2u:
          SystemBasicInformation = CmQuerySingleFeatureConfiguration((__int64 *)v20, v19, a4, Length, &Size);
          goto LABEL_820;
        case 0xD3u:
          SystemBasicInformation = CmQueryFeatureConfigurationSections(
                                     (__int128 *)v20,
                                     v19,
                                     a4,
                                     Length,
                                     &Size,
                                     KeGetCurrentThread()->PreviousMode);
          goto LABEL_820;
        case 0xD5u:
          SystemBasicInformation = KeQuerySecureSpeculationInformation((unsigned int *)a4, Length, &Size);
          goto LABEL_820;
        case 0xD6u:
          if ( PreviousMode )
            return -1073741727;
          if ( ExpSpacesBootInformation )
          {
            v134 = *(_QWORD *)ExpSpacesBootInformation;
            if ( *(_QWORD *)ExpSpacesBootInformation )
            {
              Size = *(_QWORD *)ExpSpacesBootInformation;
              if ( a4 )
              {
                if ( Length >= (unsigned int)v134 )
                  memmove((void *)a4, (const void *)(ExpSpacesBootInformation + 8), (unsigned int)v134);
                else
                  ModuleInformation = -1073741820;
              }
            }
          }
          goto LABEL_821;
        case 0xD7u:
          if ( PreviousMode )
          {
            ModuleInformation = -1073741727;
          }
          else
          {
            v135 = ExpFwRamdiskInfo;
            if ( ExpFwRamdiskInfo )
            {
              Size = 24;
              if ( Length >= 0x18 )
              {
                *(_OWORD *)a4 = *(_OWORD *)ExpFwRamdiskInfo;
                *(_QWORD *)(a4 + 16) = *(_QWORD *)(v135 + 16);
              }
              else
              {
                ModuleInformation = -1073741820;
              }
            }
            else
            {
              ModuleInformation = -1073741810;
            }
          }
          goto LABEL_821;
        case 0xD8u:
          Size = 32;
          if ( Length == 32 )
          {
            ModuleInformation = WheaQuerySystemInformation();
            EtwTiLogSyscallUsage(ModuleInformation, 0x10u);
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0xDDu:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = 0;
            *(_DWORD *)a4 = KeIsCetCapable();
            IsUserCetAllowed = KeIsUserCetAllowed();
            v155 = v154 ^ ((unsigned __int8)v154 ^ (unsigned __int8)(2 * IsUserCetAllowed)) & 2;
            *(_DWORD *)a4 = v155;
            *(_DWORD *)a4 = v155 | (KeIsKernelCetEnabled() << 8);
            IsKernelCetAuditModeEnabled = KeIsKernelCetAuditModeEnabled();
            *(_DWORD *)a4 = v157 | (IsKernelCetAuditModeEnabled << 9);
LABEL_184:
            Size = 4;
            goto LABEL_821;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xDEu:
          SystemBasicInformation = CmQueryBuildVersionInformation(v20, v19, (_WORD *)a4, Length, &Size);
          goto LABEL_820;
        case 0xDFu:
          if ( !v20 )
            return -1073741821;
          ModuleInformation = ExPoolQueryLimits(v20, v19, (void *)a4, Length, KeGetCurrentThread()->PreviousMode);
          if ( ModuleInformation >= 0 )
            Size = v175;
          goto LABEL_821;
        case 0xE3u:
          Size = 1;
          if ( Length == 1 )
          {
            *(_BYTE *)a4 = 1;
          }
          else
          {
            if ( a6 )
              *a6 = 1;
LABEL_113:
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0xE4u:
        case 0xE5u:
          Size = Length;
          SystemBasicInformation = KeQueryDpcWatchdogConfiguration((void *)a4, Length, v16);
          goto LABEL_820;
        case 0xEAu:
          Size = 17048;
          if ( Length >= 0x4298 )
          {
            SystemBasicInformation = HvlQueryMinrootInfo((_DWORD *)a4, Length, &Size);
LABEL_820:
            ModuleInformation = SystemBasicInformation;
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0xEBu:
          SystemBasicInformation = HvlQuerySetBootPagesInfo((_DWORD *)a4, Length, PreviousMode, 1, &Size);
          goto LABEL_820;
        case 0xEEu:
          if ( KeGetCurrentThread()->PreviousMode )
          {
            ModuleInformation = -1073741790;
            goto LABEL_821;
          }
          if ( !v20 || (unsigned int)v19 < 0x14 )
            goto LABEL_796;
          if ( *v20 != 1 )
            LODWORD(v8) = -1073741811;
          if ( (int)v8 >= 0 )
          {
            Size = 5;
            if ( !a4 || Length < 5 )
            {
              ModuleInformation = -1073741820;
              goto LABEL_821;
            }
            memset_0((void *)a4, 0, Length);
            *(_DWORD *)a4 = 1;
            OriginalImageVersion = ExpGetOriginalImageVersion();
            if ( OriginalImageVersion >= 0xA00000C && *((_DWORD *)v178 + 4) <= OriginalImageVersion )
            {
              *(_BYTE *)(a4 + 4) = 1;
              ModuleInformation = (int)v8;
              goto LABEL_821;
            }
          }
          else
          {
LABEL_796:
            LODWORD(v8) = -1073741811;
          }
          ModuleInformation = (int)v8;
LABEL_821:
          if ( a6 )
            *a6 = Size;
          result = ModuleInformation;
          break;
        case 0xEFu:
          SystemBasicInformation = ExpQuerySystemMemoryNumaInformation((__int64 *)v20, v19, (_OWORD *)a4, Length, &Size);
          goto LABEL_820;
        case 0xF0u:
          SystemBasicInformation = ExpQuerySystemMemoryNumaPerformanceInformation(
                                     (__int128 *)v20,
                                     v19,
                                     (void *)a4,
                                     Length,
                                     &Size);
          goto LABEL_820;
        case 0xF3u:
          Size = 16;
          if ( Length >= 0x10 )
          {
            v222 = 0LL;
            v223 = 0LL;
            v224 = 0LL;
            v225 = 0LL;
            v226 = 0LL;
            v227 = 0LL;
            v228 = 0LL;
            v168 = VslpEnterIumSecureMode(2u, 53LL, 0, (__int64)&v222);
            v169 = (unsigned __int64)Src.Flink;
            if ( v168 >= 0 )
            {
              v169 = v223 & 1 | (unsigned __int64)Src.Flink & 0xFFFFFFFFFFFFFFFEuLL;
              Src.Flink = (struct _LIST_ENTRY *)v169;
              Src.Blink = (struct _LIST_ENTRY *)*((_QWORD *)&v223 + 1);
            }
            ModuleInformation = v168;
            if ( v168 < 0 )
            {
              Src.Flink = (struct _LIST_ENTRY *)(v169 & 0xFFFFFFFFFFFFFFFEuLL);
              ModuleInformation = 0;
            }
            *(struct _LIST_ENTRY *)a4 = Src;
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0xF7u:
          if ( PreviousMode )
          {
            ModuleInformation = -1073741727;
          }
          else if ( ExpOslRamdiskInfo )
          {
            Size = 24 * *((_DWORD *)ExpOslRamdiskInfo + 1) + 8;
            if ( Length >= Size )
              memmove((void *)a4, ExpOslRamdiskInfo, Size);
            else
              ModuleInformation = -1073741820;
          }
          else
          {
            ModuleInformation = -1073741810;
          }
          goto LABEL_821;
        case 0xFAu:
          Size = 16;
          if ( Length >= 0x10 )
          {
            if ( (Length & 7) != 0 )
              ModuleInformation = -1073741820;
            else
              *(_OWORD *)a4 = KeProcessorFeaturesBuffer;
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_821;
        case 0xFEu:
          SystemBasicInformation = ExpQueryRuntimeAttestationReport(v20, v19, (void *)a4, Length, &Size, PreviousMode);
          goto LABEL_820;
        default:
          return -1073741821;
      }
      return result;
    case 0xAFu:
    case 0xB5u:
    case 0xE6u:
      v19 = (unsigned int)v175;
      if ( (_DWORD)v175 != 8 )
        return -1073741811;
      v20 = (int *)v178;
      Handle = *(HANDLE *)v178;
      goto LABEL_38;
    case 0xB2u:
      v19 = (unsigned int)v175;
      if ( (_DWORD)v175 != 8 )
        return -1073741811;
      v20 = (int *)v178;
      v215 = *(_QWORD *)v178;
      goto LABEL_38;
    case 0xE7u:
      v19 = (unsigned int)v175;
      if ( (unsigned int)v175 < 8 )
        return -1073741811;
      v20 = (int *)v178;
      ProcNumber = (struct _PROCESSOR_NUMBER)*((_DWORD *)v178 + 1);
      RelationshipType = *(_DWORD *)v178;
      goto LABEL_38;
    default:
      goto LABEL_36;
  }
}
