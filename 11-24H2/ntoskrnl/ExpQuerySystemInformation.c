/*
 * XREFs of ExpQuerySystemInformation @ 0x140ADDAE0
 * Callers:
 *     NtQuerySystemInformation @ 0x140AE28B0 (NtQuerySystemInformation.c)
 *     NtQuerySystemInformationEx @ 0x140AE2A60 (NtQuerySystemInformationEx.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402313D4 (VslGetNestedPageProtectionFlags.c)
 *     ExUnlockUserBuffer @ 0x14025FDEC (ExUnlockUserBuffer.c)
 *     MmQueryMemoryListInformation @ 0x1402623FC (MmQueryMemoryListInformation.c)
 *     MmLockLoadedDataTableEntryShared @ 0x1402BA46C (MmLockLoadedDataTableEntryShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeQueryLogicalProcessorRelationship @ 0x14032DFF0 (KeQueryLogicalProcessorRelationship.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14032FEC0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PoGetIdleTimes @ 0x14036F560 (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140370500 (PoGetPerfStateAndParkingInfo.c)
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B5184 (ExCpuSetResourceManagerAccessCheck.c)
 *     ExGetBigPoolInfo @ 0x1403E9100 (ExGetBigPoolInfo.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x140412310 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     PoEnergyEstimationEnabled @ 0x140440E80 (PoEnergyEstimationEnabled.c)
 *     ExpGetSystemBasicInformation @ 0x140445844 (ExpGetSystemBasicInformation.c)
 *     KeIsKernelCetEnabled @ 0x14044B670 (KeIsKernelCetEnabled.c)
 *     ExpGetSystemProcessorInformation @ 0x140450658 (ExpGetSystemProcessorInformation.c)
 *     MmGetNumberOfPhysicalPages @ 0x140454120 (MmGetNumberOfPhysicalPages.c)
 *     MmGetAvailablePages @ 0x140457738 (MmGetAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x140458464 (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x1404585C4 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x140459D88 (MmGetPeakCommitment.c)
 *     MmGetResidentAvailablePages @ 0x14045A440 (MmGetResidentAvailablePages.c)
 *     KeQueryGroupAffinity @ 0x14045F4C0 (KeQueryGroupAffinity.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140463660 (ExpGetSystemEmulationBasicInformation.c)
 *     MmGetHighestPhysicalPage @ 0x1404684E4 (MmGetHighestPhysicalPage.c)
 *     MmGetSharedCommit @ 0x14046A274 (MmGetSharedCommit.c)
 *     MmGetProcessPartitionId @ 0x14046A3A0 (MmGetProcessPartitionId.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14046A3B0 (MmQuerySystemWorkingSetInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x140473CC8 (ExpGetSystemEmulationProcessorInformation.c)
 *     MmGetLowestPhysicalPage @ 0x140473EF0 (MmGetLowestPhysicalPage.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x1404773E0 (KeQueryCycleTimeStatsProcessor.c)
 *     PpmCapturePerformanceDistribution @ 0x14047A270 (PpmCapturePerformanceDistribution.c)
 *     KeQueryActiveGroupCount @ 0x14047C720 (KeQueryActiveGroupCount.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x140483430 (KeGetRecommendedSharedDataAlignment.c)
 *     KeQueryBootTimeValues @ 0x14048F0BC (KeQueryBootTimeValues.c)
 *     KeIsUserCetAllowed @ 0x140491FC4 (KeIsUserCetAllowed.c)
 *     VslIsTrustletRunning @ 0x1404AE3AC (VslIsTrustletRunning.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x1404AEB90 (MmUnlockLoadedDataTableEntryShared.c)
 *     VslIsSecureKernelRunning @ 0x1404B76FC (VslIsSecureKernelRunning.c)
 *     KeIsCetCapable @ 0x1404B9E6C (KeIsCetCapable.c)
 *     KeIsKernelCetAuditModeEnabled @ 0x1404C2708 (KeIsKernelCetAuditModeEnabled.c)
 *     ExpGetLookasideInformation @ 0x1404D12E8 (ExpGetLookasideInformation.c)
 *     HvlQueryActiveProcessors @ 0x1405807F0 (HvlQueryActiveProcessors.c)
 *     HvlQueryMinrootInfo @ 0x1405808C0 (HvlQueryMinrootInfo.c)
 *     HvlQueryProcessorTopologyCount @ 0x140580B60 (HvlQueryProcessorTopologyCount.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058AFAC (VslQuerySecureKernelProfileInformation.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x1405B16E8 (KeQueryDpcWatchdogConfiguration.c)
 *     KeQuerySecureSpeculationInformation @ 0x1405BAC40 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1405C16E4 (KeGetAffinitizedInterruptsInfo.c)
 *     PsQueryCpuQuotaInformation @ 0x1405E2344 (PsQueryCpuQuotaInformation.c)
 *     PsQueryActivityModerationUserSettings @ 0x1405E288C (PsQueryActivityModerationUserSettings.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x1406076FC (SeQueryTrustedPlatformModuleInformation.c)
 *     VfGetVerifierInformation @ 0x140612D74 (VfGetVerifierInformation.c)
 *     Feature_3537880376__private_IsEnabledDeviceUsageNoInline @ 0x140650DC0 (Feature_3537880376__private_IsEnabledDeviceUsageNoInline.c)
 *     ExpQueryBootLoaderMetadata @ 0x14065161C (ExpQueryBootLoaderMetadata.c)
 *     ExPoolQueryLimits @ 0x140652A00 (ExPoolQueryLimits.c)
 *     ExpGetOriginalImageVersion @ 0x140659814 (ExpGetOriginalImageVersion.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ZwFilterBootOption @ 0x1406A9130 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExQueryBootEntropyInformation @ 0x1406F73C4 (ExQueryBootEntropyInformation.c)
 *     CmQuerySingleFeatureConfiguration @ 0x1406F7E98 (CmQuerySingleFeatureConfiguration.c)
 *     HvlQueryDetailInfo @ 0x14070C4EC (HvlQueryDetailInfo.c)
 *     HvlQueryEnlightenmentInfo @ 0x14070C608 (HvlQueryEnlightenmentInfo.c)
 *     HvlQuerySetBootPagesInfo @ 0x14070C68C (HvlQuerySetBootPagesInfo.c)
 *     VslTransformDumpKey @ 0x14070E27C (VslTransformDumpKey.c)
 *     KeQueryKvaShadowInformation @ 0x14073A8D0 (KeQueryKvaShadowInformation.c)
 *     ObQueryRefTraceInformation @ 0x140742B28 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x1407724D0 (PsRootSiloInformation.c)
 *     SeSecurityModelQueryInformation @ 0x14078FCEC (SeSecurityModelQueryInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1407B4710 (ExpGetSystemPlatformBinary.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x1407B4BC8 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407B4BF8 (ExpGetSystemWriteConstraintInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x1407B5334 (ExpQueryInterruptSteeringInformation.c)
 *     ExpQueryLegacyDriverInformation @ 0x1407B5438 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryModuleInformationEx @ 0x1407B54FC (ExpQueryModuleInformationEx.c)
 *     ExpQueryNumaAvailableMemory @ 0x1407B5590 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProximityNode @ 0x1407B5710 (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407B57F4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQueryRuntimeAttestationReport @ 0x1407B59D0 (ExpQueryRuntimeAttestationReport.c)
 *     ExpQuerySystemMemoryNumaInformation @ 0x1407C5E90 (ExpQuerySystemMemoryNumaInformation.c)
 *     ExpQuerySystemMemoryNumaPerformanceInformation @ 0x1407C5FDC (ExpQuerySystemMemoryNumaPerformanceInformation.c)
 *     WheaQuerySystemInformation @ 0x1407C6BB0 (WheaQuerySystemInformation.c)
 *     MmEnumerateBadPages @ 0x1407ED768 (MmEnumerateBadPages.c)
 *     IoQueryVhdBootInformation @ 0x14082A4EC (IoQueryVhdBootInformation.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1408590B8 (ExpGetSystemFirmwareTableInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExpSnapShotHandleTables @ 0x1408F1D40 (ExpSnapShotHandleTables.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     PfQuerySuperfetchInformation @ 0x1408F5C60 (PfQuerySuperfetchInformation.c)
 *     EtwTiLogSyscallUsage @ 0x1408F7468 (EtwTiLogSyscallUsage.c)
 *     PsGetSupportedProcessorArchitectures @ 0x14091D820 (PsGetSupportedProcessorArchitectures.c)
 *     sub_14091EB00 @ 0x14091EB00 (sub_14091EB00.c)
 *     ExpGetDeviceDataInformation @ 0x140943494 (ExpGetDeviceDataInformation.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 *     ExLockUserBuffer @ 0x14094F5B8 (ExLockUserBuffer.c)
 *     ObGetObjectInformation @ 0x1409C5D80 (ObGetObjectInformation.c)
 *     PsQueryFullProcessImageName @ 0x1409F8B50 (PsQueryFullProcessImageName.c)
 *     ExGetPoolTagInfo @ 0x140A00028 (ExGetPoolTagInfo.c)
 *     sub_140A003E0 @ 0x140A003E0 (sub_140A003E0.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A0C1B0 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A0C21C (ExReleaseTimeRefreshLockShared.c)
 *     ExIsRestrictedCaller @ 0x140A0DA38 (ExIsRestrictedCaller.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x140A0FDA4 (KeBuildLogicalProcessorSystemInformation.c)
 *     SmQueryStoreInformation @ 0x140A11F10 (SmQueryStoreInformation.c)
 *     CmQueryFeatureConfigurationSections @ 0x140A1A734 (CmQueryFeatureConfigurationSections.c)
 *     PfSnQueryPrefetcherInformation @ 0x140A39508 (PfSnQueryPrefetcherInformation.c)
 *     ExpGetSystemFlushInformation @ 0x140A397A4 (ExpGetSystemFlushInformation.c)
 *     SiGetSystemDeviceName @ 0x140A3A6D8 (SiGetSystemDeviceName.c)
 *     ExpQueryNumaProcessorMap @ 0x140A40CE0 (ExpQueryNumaProcessorMap.c)
 *     CmQueryBuildVersionInformation @ 0x140A41000 (CmQueryBuildVersionInformation.c)
 *     IopRetrieveSystemDeviceName @ 0x140A4D018 (IopRetrieveSystemDeviceName.c)
 *     SeSecureBootQueryInformation @ 0x140A4D9EC (SeSecureBootQueryInformation.c)
 *     ExpQueryChannelInformation @ 0x140A518D8 (ExpQueryChannelInformation.c)
 *     MmGetPageFileInformation @ 0x140A54280 (MmGetPageFileInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x140A64FA0 (ExpQueryMemoryTopologyInformation.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6759C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     KeQueryCpuSetInformation @ 0x140A70FAC (KeQueryCpuSetInformation.c)
 *     HvlQueryVsmProtectionInfo @ 0x140A7A6F8 (HvlQueryVsmProtectionInfo.c)
 *     IoQueryLowPriorityIoInformation @ 0x140A7AB34 (IoQueryLowPriorityIoInformation.c)
 *     ExpQueryModuleInformation @ 0x140A7F698 (ExpQueryModuleInformation.c)
 *     CmQueryRegistryQuotaInformation @ 0x140A84B00 (CmQueryRegistryQuotaInformation.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x140A8F6A4 (ExpConvertLdrEntryToModuleInfo.c)
 *     KeQuerySpeculationControlInformation @ 0x140AC167C (KeQuerySpeculationControlInformation.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AE2138 (ExpQuerySystemPerformanceInformation.c)
 *     SeQueryHSTIResults @ 0x140AEBC6C (SeQueryHSTIResults.c)
 *     ExQuerySystemLockInformation @ 0x140B6B8CC (ExQuerySystemLockInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfGetVerifierInformationEx @ 0x140B9E48C (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x140BB2064 (BgkQueryBootGraphicsInformation.c)
 */

NTSTATUS __fastcall ExpQuerySystemInformation(
        int a1,
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
  NTSTATUS v55; // edi
  bool v56; // zf
  NTSTATUS result; // eax
  __int64 v58; // rax
  __int64 v59; // rdi
  _WORD *v60; // rbx
  int v61; // eax
  int v62; // ebx
  int v63; // eax
  _DWORD *v64; // r8
  int v65; // ebx
  int v66; // eax
  _DWORD *v67; // r8
  int v68; // ebx
  int v69; // eax
  int ObjectInformation; // ebx
  unsigned int v71; // eax
  __int64 v72; // rcx
  int v73; // ecx
  int v74; // edx
  __int64 *v75; // r14
  __int64 v76; // r8
  unsigned int v77; // ecx
  __int64 *v78; // r14
  __int64 v79; // rcx
  unsigned int i; // edx
  __int64 v81; // rax
  _DWORD *v82; // rcx
  struct _LIST_ENTRY *v83; // rdi
  struct _LIST_ENTRY *v84; // rdi
  struct _LIST_ENTRY *p_Src; // rax
  __int64 v86; // r12
  __int64 v87; // rcx
  struct _LIST_ENTRY *v88; // rax
  signed __int32 v89; // r12d
  __int64 *v90; // r14
  __int64 v91; // rcx
  int v92; // r8d
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v93; // r12
  unsigned int v94; // eax
  _PROCESSOR_NUMBER *p_ProcNumber; // r13
  unsigned int v96; // r8d
  int v97; // r9d
  int v98; // edx
  int v99; // r10d
  unsigned int v100; // r9d
  bool v101; // cf
  int SystemDeviceName; // edi
  unsigned int v103; // eax
  ULONG v104; // edx
  __int64 v105; // rax
  __int64 v106; // rcx
  _QWORD *v107; // rax
  unsigned int v108; // eax
  int v109; // ecx
  unsigned int v110; // eax
  bool v111; // cf
  unsigned int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rcx
  _QWORD *v115; // rax
  int v116; // eax
  int v117; // ebx
  unsigned int v118; // ebx
  void *Pool2; // rax
  void *v120; // r14
  _DWORD *v121; // rdi
  int v122; // eax
  int v123; // ecx
  int v124; // edx
  struct _LIST_ENTRY *v125; // rax
  __int64 v126; // r8
  __int64 v127; // r9
  PVOID v128; // rdi
  __int64 v129; // rax
  __int64 v130; // rax
  int v131; // ecx
  unsigned __int64 v132; // r8
  __int64 *v133; // rdx
  __int64 *j; // rcx
  __int64 v135; // rax
  void *v136; // rcx
  unsigned int v137; // eax
  bool v138; // cf
  unsigned int v139; // r11d
  unsigned int v140; // r10d
  __int64 v141; // rax
  int v142; // r10d
  char v143; // cl
  int NestedPageProtectionFlags; // edi
  char v145; // cl
  char v146; // cl
  char v147; // cl
  bool IsUserCetAllowed; // al
  int v149; // ecx
  int v150; // edi
  bool IsKernelCetAuditModeEnabled; // al
  int v152; // edx
  struct _KAFFINITY_EX *v153; // rax
  struct _KAFFINITY_EX *v154; // rdi
  struct _KAFFINITY_EX *v155; // rax
  __int64 v156; // rcx
  void *v157; // r14
  struct _MDL *v158; // rax
  struct _MDL *v159; // rsi
  int v160; // eax
  __int64 v161; // rax
  unsigned int OriginalImageVersion; // ecx
  int v163; // eax
  unsigned __int64 v164; // rdx
  int ModuleInformation; // [rsp+40h] [rbp-518h]
  unsigned int Size; // [rsp+44h] [rbp-514h] BYREF
  int Size_4; // [rsp+48h] [rbp-510h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+4Ch] [rbp-50Ch] BYREF
  USHORT v169; // [rsp+50h] [rbp-508h]
  size_t v170; // [rsp+54h] [rbp-504h] BYREF
  unsigned int v171; // [rsp+5Ch] [rbp-4FCh] BYREF
  char v172[8]; // [rsp+60h] [rbp-4F8h] BYREF
  void *v173; // [rsp+68h] [rbp-4F0h]
  ULONG v174; // [rsp+70h] [rbp-4E8h]
  PVOID v175; // [rsp+78h] [rbp-4E0h]
  unsigned int *v176; // [rsp+80h] [rbp-4D8h]
  char Data[75]; // [rsp+B9h] [rbp-49Fh] BYREF
  unsigned __int16 v178; // [rsp+104h] [rbp-454h]
  int v179; // [rsp+110h] [rbp-448h]
  _QWORD *v180; // [rsp+118h] [rbp-440h]
  unsigned int v181; // [rsp+124h] [rbp-434h] BYREF
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+128h] [rbp-430h]
  PEPROCESS Process; // [rsp+130h] [rbp-428h] BYREF
  unsigned int v184; // [rsp+138h] [rbp-420h] BYREF
  int v185; // [rsp+13Ch] [rbp-41Ch] BYREF
  unsigned int v186; // [rsp+140h] [rbp-418h] BYREF
  unsigned int v187; // [rsp+144h] [rbp-414h] BYREF
  unsigned int v188; // [rsp+148h] [rbp-410h] BYREF
  _DWORD v189[2]; // [rsp+14Ch] [rbp-40Ch] BYREF
  int v190; // [rsp+154h] [rbp-404h]
  ULONG ResultLength; // [rsp+158h] [rbp-400h] BYREF
  PVOID P; // [rsp+160h] [rbp-3F8h] BYREF
  _QWORD *v193; // [rsp+168h] [rbp-3F0h] BYREF
  __int64 v194; // [rsp+170h] [rbp-3E8h]
  HANDLE Handle; // [rsp+178h] [rbp-3E0h]
  HANDLE ProcessId[2]; // [rsp+180h] [rbp-3D8h]
  void *v197; // [rsp+190h] [rbp-3C8h]
  HANDLE KeyHandle; // [rsp+198h] [rbp-3C0h] BYREF
  __int64 v199; // [rsp+1A0h] [rbp-3B8h] BYREF
  PVOID Object; // [rsp+1A8h] [rbp-3B0h] BYREF
  __int64 v201; // [rsp+1B0h] [rbp-3A8h]
  PVOID v202; // [rsp+1B8h] [rbp-3A0h] BYREF
  __int64 v203; // [rsp+1C0h] [rbp-398h] BYREF
  __int64 v204; // [rsp+1C8h] [rbp-390h] BYREF
  PVOID v205; // [rsp+1D0h] [rbp-388h] BYREF
  _DWORD *v206; // [rsp+1D8h] [rbp-380h] BYREF
  PVOID v207; // [rsp+1E0h] [rbp-378h] BYREF
  _QWORD *v208; // [rsp+1E8h] [rbp-370h] BYREF
  PVOID v209; // [rsp+1F0h] [rbp-368h] BYREF
  __int64 v210; // [rsp+1F8h] [rbp-360h] BYREF
  PVOID v211; // [rsp+200h] [rbp-358h] BYREF
  __int128 v212; // [rsp+208h] [rbp-350h] BYREF
  unsigned int v213; // [rsp+218h] [rbp-340h]
  int v214; // [rsp+220h] [rbp-338h]
  unsigned int *v215; // [rsp+230h] [rbp-328h]
  __int128 v216; // [rsp+240h] [rbp-318h] BYREF
  __int128 v217; // [rsp+250h] [rbp-308h]
  __int128 v218; // [rsp+260h] [rbp-2F8h]
  __int128 v219; // [rsp+270h] [rbp-2E8h]
  __int128 v220; // [rsp+280h] [rbp-2D8h]
  __int128 v221; // [rsp+290h] [rbp-2C8h]
  __int64 v222; // [rsp+2A0h] [rbp-2B8h]
  __int128 KeyValueInformation; // [rsp+2B0h] [rbp-2A8h] BYREF
  int v224; // [rsp+2C0h] [rbp-298h]
  struct _LIST_ENTRY Src; // [rsp+2D0h] [rbp-288h] BYREF
  struct _LIST_ENTRY v226; // [rsp+2E0h] [rbp-278h]
  struct _LIST_ENTRY v227; // [rsp+2F0h] [rbp-268h] BYREF
  struct _LIST_ENTRY v228; // [rsp+300h] [rbp-258h]
  struct _LIST_ENTRY v229; // [rsp+310h] [rbp-248h]
  struct _LIST_ENTRY v230; // [rsp+320h] [rbp-238h]
  struct _LIST_ENTRY v231; // [rsp+330h] [rbp-228h]
  struct _LIST_ENTRY v232; // [rsp+340h] [rbp-218h]
  struct _LIST_ENTRY v233; // [rsp+350h] [rbp-208h]
  struct _LIST_ENTRY v234; // [rsp+360h] [rbp-1F8h]
  struct _LIST_ENTRY *Flink; // [rsp+370h] [rbp-1E8h]
  int v236; // [rsp+378h] [rbp-1E0h]
  __int128 v237; // [rsp+480h] [rbp-D8h] BYREF
  __int64 v238; // [rsp+490h] [rbp-C8h]
  __int128 v239; // [rsp+4A0h] [rbp-B8h] BYREF
  __int128 v240; // [rsp+4B0h] [rbp-A8h]
  __int128 v241; // [rsp+4C0h] [rbp-98h]
  __int128 v242; // [rsp+4D0h] [rbp-88h]
  __int128 v243; // [rsp+4E0h] [rbp-78h]
  __int128 v244; // [rsp+4F0h] [rbp-68h]
  __int64 v245; // [rsp+500h] [rbp-58h]

  v170 = a3;
  v173 = a2;
  v179 = a1;
  v176 = a6;
  v8 = 0LL;
  v171 = 0;
  v203 = 0LL;
  v188 = 0;
  v189[0] = 0;
  Size_4 = 0;
  v185 = 0;
  v178 = 0;
  v169 = 0;
  v212 = 0LL;
  Process = 0LL;
  ProcNumber = 0;
  v193 = 0LL;
  P = 0LL;
  v190 = 0;
  v199 = 0LL;
  v237 = 0LL;
  v238 = 0LL;
  memset_0(&Src, 0, 0x1B0uLL);
  ModuleInformation = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    switch ( a1 )
    {
      case 12:
        v11 = 8;
        goto LABEL_6;
      case 35:
      case 145:
      case 147:
      case 149:
      case 158:
      case 163:
      case 169:
      case 202:
      case 227:
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
  v174 = 0;
  v14 = 0;
  v169 = 0;
  v178 = 0;
  v194 = 0LL;
  Handle = 0LL;
  v201 = 0LL;
  v15 = 9LL;
  LODWORD(v175) = 9;
  v190 = 9;
  v16 = v179;
  switch ( v179 )
  {
    case 2:
    case 33:
    case 36:
    case 65:
      v14 = -1;
      v169 = -1;
      v17 = -1;
      goto LABEL_15;
    case 8:
    case 23:
    case 42:
    case 61:
    case 73:
    case 83:
    case 100:
    case 108:
    case 141:
    case 160:
      if ( (unsigned int)v170 < 2 )
        return -1073741811;
      v169 = *(_WORD *)v173;
      v14 = v169;
      if ( v169 >= KeQueryActiveGroupCount() )
        return -1073741811;
      v17 = v169;
LABEL_15:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v17);
      v13 = ActiveProcessorCount;
      v174 = ActiveProcessorCount;
      v16 = v179;
      v15 = (unsigned int)v175;
LABEL_36:
      v19 = (unsigned int)v170;
      goto LABEL_37;
    case 72:
      v19 = (unsigned int)v170;
      if ( (_DWORD)v170 != 4 )
        return -1073741811;
      v20 = (int *)v173;
      v15 = *(unsigned int *)v173;
      v190 = *(_DWORD *)v173;
      goto LABEL_38;
    case 107:
      v19 = (unsigned int)v170;
      if ( (unsigned int)v170 < 4 )
        return -1073741811;
      v20 = (int *)v173;
      RelationshipType = *(_DWORD *)v173;
      goto LABEL_38;
    case 121:
      v19 = (unsigned int)v170;
      if ( (unsigned int)v170 >= 2 )
      {
        v20 = (int *)v173;
        v178 = *(_WORD *)v173;
        if ( v178 < (unsigned __int16)KeNumberNodes )
          goto LABEL_38;
      }
      return -1073741811;
    case 165:
      v19 = (unsigned int)v170;
      if ( (_DWORD)v170 )
      {
        if ( (_DWORD)v170 != 8 )
          return -1073741811;
        v20 = (int *)v173;
        v194 = *(_QWORD *)v173;
      }
      else
      {
        v194 = 0LL;
LABEL_37:
        v20 = (int *)v173;
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
            goto LABEL_822;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 1u:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemProcessorInformation(a4);
            Size = 12;
            goto LABEL_822;
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
          goto LABEL_823;
        case 3u:
          if ( Length <= 0x30 )
          {
            KeQueryBootTimeValues(&Src.Blink, (LARGE_INTEGER *)&Src, &v227);
            Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
            v226.Flink = Blink[27].Blink;
            LODWORD(v226.Blink) = Blink[27].Flink;
            v227.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF780000003B0];
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
          if ( !(unsigned int)Feature_3537880376__private_IsEnabledDeviceUsageNoInline() || v179 != 253 || Length >= 0xC )
          {
            SystemBasicInformation = ExpGetProcessInformation((unsigned int *)a4, Length, &Size, 0LL, v179);
            goto LABEL_822;
          }
          if ( a6 )
            *a6 = 12;
          return -1073741820;
        case 6u:
        case 0x5Fu:
          return -1073741637;
        case 7u:
          if ( Length == 24 )
          {
            *(_DWORD *)a4 = dword_140FD8838;
            *(_DWORD *)(a4 + 4) = dword_140FD883C;
            *(_DWORD *)(a4 + 8) = dword_140FD8840;
            *(_DWORD *)(a4 + 12) = dword_140FD8844;
            *(_DWORD *)(a4 + 16) = dword_140FD884C;
            *(_DWORD *)(a4 + 20) = dword_140FD8850;
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
          LODWORD(v175) = v39;
          if ( Length && !(Length % v39) )
          {
            v40 = 0;
            v41 = 0;
            while ( 1 )
            {
              Size_4 = v41;
              v180 = (_QWORD *)a4;
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
                  v42 = *((unsigned int *)qword_140F22998 + 64 * (unsigned __int64)v14 + (unsigned __int8)v41);
                  if ( !(_DWORD)v42 )
                    v42 = 0xFFFFFFFFLL;
                }
              }
              else
              {
                v42 = 0LL;
              }
              v173 = (void *)KiProcessorBlock[v42];
              if ( Length < v39 + v40 )
                break;
              LODWORD(v170) = v39 + v40;
              PoGetIdleTimes(&ProcNumber, 0LL, (__int64)&Src);
              v43 = KeMaximumIncrement;
              v44 = v173;
              *(_QWORD *)(a4 + 16) = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)v173 + 8594);
              *(_QWORD *)(a4 + 8) = v43 * HIDWORD(Src.Flink);
              *(_QWORD *)(a4 + 24) = v43 * (unsigned int)v44[8595];
              *(_QWORD *)(a4 + 32) = v43 * (unsigned int)v44[8596];
              *(_QWORD *)a4 = v43 * LODWORD(Src.Flink);
              *(_DWORD *)(a4 + 40) = v44[8592];
              if ( v179 == 141 )
              {
                *(_QWORD *)(a4 + 48) = v43 * (unsigned int)v44[8603];
                *(_DWORD *)(a4 + 44) = 0;
                *(_QWORD *)(a4 + 56) = 0LL;
                *(_QWORD *)(a4 + 64) = 0LL;
              }
              v39 = (unsigned int)v175;
              a4 += (unsigned int)v175;
              v41 = Size_4 + 1;
              LODWORD(v13) = v174;
              v40 = v170;
            }
            Size = v40;
            goto LABEL_823;
          }
          if ( a6 )
            *a6 = v13 * v39;
          return -1073741820;
        case 9u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag;
            goto LABEL_189;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xBu:
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v170 + 1) )
            return -1073741790;
          ModuleInformation = ExpQueryModuleInformation(SHIDWORD(v170), (_DWORD *)a4, Length, (int *)&Size);
          EtwTiLogSyscallUsage(ModuleInformation, 0);
          goto LABEL_823;
        case 0xCu:
          if ( Length < 0x38 )
          {
            if ( a6 )
              *a6 = 56;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v170 + 1) )
            return -1073741790;
          v204 = 0LL;
          v205 = 0LL;
          v61 = ExLockUserBuffer(
                  a4,
                  Length,
                  KeGetCurrentThread()->PreviousMode,
                  IoWriteAccess,
                  &v204,
                  (struct _MDL **)&v205);
          if ( v61 >= 0 )
          {
            v62 = ExQuerySystemLockInformation(HIDWORD(v170), v204, Length, &Size);
            ExUnlockUserBuffer((struct _MDL *)v205);
            ModuleInformation = v62;
            EtwTiLogSyscallUsage(v62, 2u);
          }
          else
          {
            ModuleInformation = v61;
            EtwTiLogSyscallUsage(v61, 2u);
          }
          goto LABEL_823;
        case 0xDu:
        case 0xEu:
        case 0xFu:
        case 0x13u:
          ModuleInformation = -1073741822;
          goto LABEL_823;
        case 0x10u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (a4 & 7) != 0 )
            return -2147483646;
          if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v170 + 1) )
          {
            v206 = 0LL;
            v207 = 0LL;
            v63 = ExLockUserBuffer(
                    a4,
                    Length,
                    KeGetCurrentThread()->PreviousMode,
                    IoWriteAccess,
                    &v206,
                    (struct _MDL **)&v207);
            if ( v63 >= 0 )
            {
              v186 = 0;
              v64 = v206;
              *v206 = 0;
              v65 = ExpSnapShotHandleTables(
                      (__int64 (__fastcall *)(int, int, int, int, __int64, int, __int64))ObpCaptureHandleInformation,
                      HIDWORD(v170),
                      v64,
                      Length,
                      (int *)&v186,
                      0);
              Size = v186;
              ExUnlockUserBuffer((struct _MDL *)v207);
              ModuleInformation = v65;
              EtwTiLogSyscallUsage(v65, 4u);
            }
            else
            {
              ModuleInformation = v63;
              EtwTiLogSyscallUsage(v63, 4u);
            }
            goto LABEL_823;
          }
          return -1073741790;
        case 0x11u:
          if ( Length < 0x40 )
          {
            if ( a6 )
              *a6 = 64;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v170 + 1) )
            return -1073741790;
          v210 = 0LL;
          v211 = 0LL;
          v69 = ExLockUserBuffer(
                  a4,
                  Length,
                  KeGetCurrentThread()->PreviousMode,
                  IoWriteAccess,
                  &v210,
                  (struct _MDL **)&v211);
          if ( v69 >= 0 )
          {
            ObjectInformation = ObGetObjectInformation(SHIDWORD(v170), a4, v210, Length, &Size);
            ExUnlockUserBuffer((struct _MDL *)v211);
            ModuleInformation = ObjectInformation;
            EtwTiLogSyscallUsage(ObjectInformation, 6u);
          }
          else
          {
            ModuleInformation = v69;
            EtwTiLogSyscallUsage(v69, 6u);
          }
          goto LABEL_823;
        case 0x12u:
        case 0x90u:
          v71 = 32;
          if ( v16 != 18 )
            v71 = 40;
          Size = v71;
          if ( Length >= v71 )
          {
            Size = 0;
            LOBYTE(v8) = v16 == 144;
            SystemBasicInformation = MmGetPageFileInformation(40LL, (_DWORD *)a4, Length, (int)v8, &Size);
            goto LABEL_822;
          }
          if ( a6 )
            *a6 = v71;
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
            v72 = 2LL;
          }
          else
          {
            if ( v16 == 120 )
              v10 = 3;
            v72 = v10;
          }
          MmQuerySystemWorkingSetInformation(v72, &Src);
          *(struct _LIST_ENTRY *)a4 = Src;
          *(_DWORD *)(a4 + 16) = v226.Flink;
          Size_4 = 64;
          *(_QWORD *)(a4 + 24) = v226.Blink;
          *(struct _LIST_ENTRY *)(a4 + 32) = v227;
          *(struct _LIST_ENTRY *)(a4 + 48) = v228;
          Size = 64;
          goto LABEL_823;
        case 0x16u:
          if ( Length >= 0x30 )
          {
            SystemBasicInformation = ExGetPoolTagInfo((_DWORD *)a4, Length, (int *)&Size);
            goto LABEL_822;
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
            v180 = (_QWORD *)a4;
            if ( i >= (unsigned int)v13 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = i;
            ProcNumber.Reserved = 0;
            if ( v14 || (_BYTE)i )
            {
              if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)i >= 0x40u )
              {
                v81 = 0xFFFFFFFFLL;
              }
              else
              {
                v81 = *((unsigned int *)qword_140F22998 + 64 * (unsigned __int64)v14 + (unsigned __int8)i);
                if ( !(_DWORD)v81 )
                  v81 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v81 = 0LL;
            }
            v82 = (_DWORD *)KiProcessorBlock[v81];
            *(_DWORD *)a4 = v82[2895];
            *(_DWORD *)(a4 + 4) = v82[3607];
            *(_DWORD *)(a4 + 8) = v82[3627];
            *(_DWORD *)(a4 + 12) = KeTimeIncrement;
            *(_DWORD *)(a4 + 16) = 0;
            *(_DWORD *)(a4 + 20) = 0;
            a4 += 24LL;
          }
          goto LABEL_205;
        case 0x18u:
          if ( Length == 20 )
          {
            *(_DWORD *)(a4 + 4) = KiMaximumDpcQueueDepth;
            *(_DWORD *)(a4 + 8) = KiMinimumDpcRate;
            *(_DWORD *)(a4 + 12) = KiAdjustDpcThreshold;
            *(_DWORD *)(a4 + 16) = KiIdealDpcRate;
            goto LABEL_301;
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
            *(_DWORD *)a4 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v52;
            *(_DWORD *)(a4 + 4) = KeMaximumIncrement;
            *(_BYTE *)(a4 + 8) = v53;
          }
LABEL_140:
          Size = Length;
          goto LABEL_823;
        case 0x1Fu:
          SystemBasicInformation = EtwQueryPerformanceTraceInformation(a4, Length, PreviousMode, &Size);
          goto LABEL_822;
        case 0x21u:
          if ( Length < 0x10 )
          {
            if ( a6 )
              *a6 = 16;
            return -1073741820;
          }
          Size = 16;
          v73 = 0;
          v74 = 0;
          if ( (_DWORD)v13 )
          {
            v75 = KiProcessorBlock;
            v76 = (unsigned int)v13;
            Size_4 = v13;
            do
            {
              v73 += *(_DWORD *)(*v75 + 35768);
              v74 += *(_DWORD *)(*v75++ + 34416);
              --v76;
            }
            while ( v76 );
          }
          *(_DWORD *)a4 = v73;
          *(_DWORD *)(a4 + 4) = v74;
          *(_DWORD *)(a4 + 8) = 0;
          *(_DWORD *)(a4 + 12) = 0;
          goto LABEL_823;
        case 0x23u:
          if ( Length >= 2 )
          {
            *(_BYTE *)a4 = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerNotPresent;
            v77 = 2;
            goto LABEL_273;
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
            v78 = KiProcessorBlock;
            v79 = (unsigned int)v13;
            Size_4 = v13;
            do
            {
              LODWORD(v8) = *(_DWORD *)(*v78++ + 11580) + (_DWORD)v8;
              --v79;
            }
            while ( v79 );
          }
          *(_DWORD *)a4 = (_DWORD)v8;
          *(_DWORD *)(a4 + 4) = KeThreadSwitchCounters;
          *(_DWORD *)(a4 + 8) = dword_140F22188;
          *(_DWORD *)(a4 + 12) = dword_140F22184;
          *(_DWORD *)(a4 + 16) = dword_140F2218C;
          *(_DWORD *)(a4 + 20) = dword_140F22190;
          *(_DWORD *)(a4 + 24) = dword_140F22198;
          *(_DWORD *)(a4 + 28) = dword_140F22194;
          *(_DWORD *)(a4 + 32) = dword_140F2219C;
          *(_DWORD *)(a4 + 36) = dword_140F221A0;
          *(_DWORD *)(a4 + 40) = dword_140F221A4;
          *(_DWORD *)(a4 + 44) = dword_140F221A8;
          Size = 48;
          goto LABEL_823;
        case 0x25u:
          if ( Length >= 0x10 )
          {
            SystemBasicInformation = CmQueryRegistryQuotaInformation();
            Size = 16;
            goto LABEL_822;
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
            v180 = (_QWORD *)a4;
            if ( (unsigned int)v8 >= (unsigned int)v13 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = (unsigned __int8)v8;
            ProcNumber.Reserved = 0;
            PoGetIdleTimes(&ProcNumber, (__int64)&Src, 0LL);
            *(struct _LIST_ENTRY *)a4 = Src;
            *(struct _LIST_ENTRY *)(a4 + 16) = v226;
            *(struct _LIST_ENTRY *)(a4 + 32) = v227;
            a4 += 48LL;
            LODWORD(v8) = (_DWORD)v8 + 1;
            LODWORD(v13) = v174;
          }
          goto LABEL_823;
        case 0x2Bu:
          if ( Length >= 0x18 )
          {
            Size = Length;
            SystemBasicInformation = ExpQueryLegacyDriverInformation(a4, &Size);
            goto LABEL_822;
          }
          if ( a6 )
            *a6 = 24;
          return -1073741820;
        case 0x2Cu:
          if ( Length >= 0xAC )
          {
            v83 = PsGetCurrentServerSiloGlobals()[76].Blink;
            ExAcquireTimeRefreshLockShared();
            Src = *v83;
            v226 = v83[1];
            v227 = v83[2];
            v228 = v83[3];
            v229 = v83[4];
            v230 = v83[5];
            v231 = v83[6];
            v232 = v83[7];
            v233 = v83[8];
            v234 = v83[9];
            Flink = v83[10].Flink;
            v236 = (int)v83[10].Blink;
            ExReleaseTimeRefreshLockShared();
            *(struct _LIST_ENTRY *)a4 = Src;
            *(struct _LIST_ENTRY *)(a4 + 16) = v226;
            *(struct _LIST_ENTRY *)(a4 + 32) = v227;
            *(struct _LIST_ENTRY *)(a4 + 48) = v228;
            *(struct _LIST_ENTRY *)(a4 + 64) = v229;
            *(struct _LIST_ENTRY *)(a4 + 80) = v230;
            *(struct _LIST_ENTRY *)(a4 + 96) = v231;
            *(struct _LIST_ENTRY *)(a4 + 112) = v232;
            *(struct _LIST_ENTRY *)(a4 + 128) = v233;
            *(struct _LIST_ENTRY *)(a4 + 144) = v234;
            *(_QWORD *)(a4 + 160) = Flink;
            *(_DWORD *)(a4 + 168) = v236;
            Size = 172;
            ModuleInformation = 0;
            goto LABEL_823;
          }
          if ( a6 )
            *a6 = 172;
          return -1073741820;
        case 0x2Du:
          SystemBasicInformation = ExpGetLookasideInformation(a4, Length, &Size);
          goto LABEL_822;
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
            goto LABEL_822;
          }
          if ( a6 )
            *a6 = 144;
          return -1073741820;
        case 0x35u:
          if ( Length >= 0x10 )
          {
            v185 = *(_DWORD *)a4;
            v215 = *(unsigned int **)(a4 + 8);
            v213 = *(_DWORD *)(a4 + 4);
            ProbeForWrite(v215, v213, 4u);
            SystemBasicInformation = ExpGetProcessInformation(v215, v213, &Size, &v185, 5);
            goto LABEL_822;
          }
          if ( a6 )
            *a6 = 16;
          return -1073741820;
        case 0x37u:
          SystemBasicInformation = ExpQueryNumaProcessorMap((_DWORD *)a4, Length, &Size);
          goto LABEL_822;
        case 0x38u:
          SystemBasicInformation = PfSnQueryPrefetcherInformation(
                                     0x140000000LL,
                                     (__int128 *)a4,
                                     Length,
                                     PreviousMode,
                                     &Size);
          goto LABEL_822;
        case 0x3Au:
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = KeGetRecommendedSharedDataAlignment();
            goto LABEL_189;
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
            goto LABEL_379;
          KeyValueInformation = 0LL;
          v224 = 0;
          ResultLength = 0;
          KeyHandle = 0LL;
          v89 = 0;
          v55 = ZwOpenKey(&KeyHandle, 1u, &stru_140E09308);
          if ( v55 >= 0 )
          {
            v55 = ZwQueryValueKey(
                    KeyHandle,
                    &stru_140E092C8,
                    KeyValuePartialInformation,
                    &KeyValueInformation,
                    0x14u,
                    &ResultLength);
            if ( v55 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
              v89 = HIDWORD(KeyValueInformation);
            ZwClose(KeyHandle);
          }
          _InterlockedCompareExchange((volatile signed __int32 *)(MmWriteableSharedUserData + 736), v89, -1);
          if ( (int)(v55 + 0x80000000) < 0 || v55 == -1073741772 )
            v55 = 0;
          ModuleInformation = v55;
          if ( v55 >= 0 )
          {
LABEL_379:
            *(_DWORD *)a4 = MEMORY[0xFFFFF780000002E0];
            goto LABEL_189;
          }
          return v55;
        case 0x3Cu:
          SystemBasicInformation = ExpQueryNumaAvailableMemory(a4);
          goto LABEL_822;
        case 0x3Du:
          Size = 80 * v13;
          if ( Length < 80 * (int)v13 )
            goto LABEL_113;
          v180 = (_QWORD *)a4;
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
                v48 = *((unsigned int *)qword_140F22998 + 64 * (unsigned __int64)v14 + (unsigned __int8)v47);
                if ( !(_DWORD)v48 )
                  v48 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v48 = 0LL;
            }
            v173 = (void *)KiProcessorBlock[v48];
            PoGetPerfStateAndParkingInfo(&ProcNumber, (__int64)&Src, 0LL, &v203);
            *(_OWORD *)a4 = 0LL;
            *(_OWORD *)(a4 + 16) = 0LL;
            *(_OWORD *)(a4 + 32) = 0LL;
            *(_OWORD *)(a4 + 48) = 0LL;
            *(_OWORD *)(a4 + 64) = 0LL;
            v49 = KeMaximumIncrement;
            v50 = v173;
            *(_QWORD *)(a4 + 40) = KeMaximumIncrement
                                 * (unsigned __int64)(unsigned int)(*((_DWORD *)v173 + 8593) + *((_DWORD *)v173 + 8594));
            *(_QWORD *)(a4 + 48) = v49 * *(unsigned int *)(v50[3] + 652LL);
            if ( BYTE4(v226.Blink) )
            {
              *(_BYTE *)a4 = Src.Blink;
              *(_BYTE *)(a4 + 7) = BYTE4(Src.Blink);
              *(_BYTE *)(a4 + 8) = v226.Flink;
              *(_DWORD *)(a4 + 12) = 1;
            }
            *(_QWORD *)(a4 + 72) = v203;
            a4 += 80LL;
            v180 = (_QWORD *)a4;
            v47 = Size_4 + 1;
            LODWORD(v13) = v174;
          }
          goto LABEL_823;
        case 0x3Eu:
          if ( Length == 64 )
          {
            SystemBasicInformation = ExpGetSystemEmulationBasicInformation(a4);
            Size = 64;
            goto LABEL_822;
          }
          if ( a6 )
            *a6 = 64;
          return -1073741820;
        case 0x3Fu:
          if ( Length >= 0xC )
          {
            SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(a4);
            Size = 12;
            goto LABEL_822;
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
          if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v170 + 1) )
          {
            v208 = 0LL;
            v209 = 0LL;
            v66 = ExLockUserBuffer(
                    a4,
                    Length,
                    KeGetCurrentThread()->PreviousMode,
                    IoWriteAccess,
                    &v208,
                    (struct _MDL **)&v209);
            if ( v66 >= 0 )
            {
              v187 = 0;
              v67 = v208;
              *v208 = 0LL;
              v68 = ExpSnapShotHandleTables(
                      (__int64 (__fastcall *)(int, int, int, int, __int64, int, __int64))ObpCaptureHandleInformationEx,
                      HIDWORD(v170),
                      v67,
                      Length,
                      (int *)&v187,
                      1);
              Size = v187;
              ExUnlockUserBuffer((struct _MDL *)v209);
              ModuleInformation = v68;
              EtwTiLogSyscallUsage(v68, 5u);
            }
            else
            {
              ModuleInformation = v66;
              EtwTiLogSyscallUsage(v66, 5u);
            }
            goto LABEL_823;
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
            v90 = KiProcessorBlock;
            v91 = (unsigned int)v13;
            Size_4 = v13;
            do
            {
              LODWORD(v8) = *(_DWORD *)(*v90++ + 34812) + (_DWORD)v8;
              --v91;
            }
            while ( v91 );
          }
          *(_DWORD *)a4 = (_DWORD)v8;
          goto LABEL_189;
        case 0x42u:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v170 + 1) )
            return -1073741790;
          ModuleInformation = ExGetBigPoolInfo(SHIDWORD(v170), (_DWORD *)a4, Length, &Size);
          EtwTiLogSyscallUsage(ModuleInformation, 7u);
          goto LABEL_823;
        case 0x45u:
        case 0xE8u:
        case 0xECu:
        case 0xEDu:
          goto LABEL_510;
        case 0x46u:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = ObpObjectSecurityMode;
            goto LABEL_189;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0x48u:
          if ( Length != 8 )
            return -1073741811;
          v92 = v15 - 7;
          if ( v92 )
          {
            if ( v92 != 1 )
              return -1073741637;
            *(_DWORD *)a4 = 8;
            *(_DWORD *)(a4 + 4) = (unsigned __int8)guard_dispatch_icall_no_overrides(0x140000000uLL, v19);
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
          goto LABEL_823;
        case 0x4Cu:
          ModuleInformation = ExpGetSystemFirmwareTableInformation((char *)a4, PreviousMode, Length, &Size);
          EtwTiLogSyscallUsage(ModuleInformation, 0xEu);
          goto LABEL_823;
        case 0x4Du:
          if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (_DWORD *)&v170 + 1) )
            return -1073741790;
          LOBYTE(v8) = SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) == 0;
          ModuleInformation = ExpQueryModuleInformationEx(SHIDWORD(v170), (_WORD *)a4, Length, (int)v8, (int *)&Size);
          EtwTiLogSyscallUsage(ModuleInformation, 1u);
          goto LABEL_823;
        case 0x4Fu:
          SystemBasicInformation = PfQuerySuperfetchInformation(
                                     0x140000000LL,
                                     (__int128 *)a4,
                                     Length,
                                     PreviousMode,
                                     &Size);
          goto LABEL_822;
        case 0x50u:
          SystemBasicInformation = MmQueryMemoryListInformation(
                                     (ULONG **)0xFFFFFFFFFFFFFFFFLL,
                                     (_OWORD *)a4,
                                     Length,
                                     v13,
                                     &Size);
          goto LABEL_822;
        case 0x53u:
          v100 = 8 * v13;
          Size = v100;
          if ( Length < 8 )
            goto LABEL_446;
          v101 = Length < v100;
          if ( Length < v100 )
          {
            v174 = Length >> 3;
            v101 = Length < v100;
          }
          SystemDeviceName = v101 ? 0xC0000004 : 0;
          v180 = (_QWORD *)a4;
          LOBYTE(v21) = 1;
          KeFlushProcessWriteBuffers(v21);
          v103 = 0;
          v104 = v174;
          while ( 1 )
          {
            Size_4 = v103;
            if ( v103 >= v104 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = v103;
            ProcNumber.Reserved = 0;
            if ( v14 || (_BYTE)v103 )
            {
              if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v103 >= 0x40u )
              {
                v105 = 0xFFFFFFFFLL;
              }
              else
              {
                v105 = *((unsigned int *)qword_140F22998 + 64 * (unsigned __int64)v14 + (unsigned __int8)v103);
                if ( !(_DWORD)v105 )
                  v105 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v105 = 0LL;
            }
            v106 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[v105] + 24) + 72LL);
            v107 = v180;
            *v180 = v106;
            v180 = v107 + 1;
            v103 = Size_4 + 1;
            v14 = v169;
          }
LABEL_496:
          ModuleInformation = SystemDeviceName;
          goto LABEL_823;
        case 0x56u:
          SystemBasicInformation = ObQueryRefTraceInformation((char *)a4, Length, &Size);
          goto LABEL_822;
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
          goto LABEL_823;
        case 0x58u:
          *(_OWORD *)ProcessId = 0LL;
          v197 = 0LL;
          Size = 24;
          if ( Length != 24 )
          {
            ModuleInformation = -1073741820;
            goto LABEL_823;
          }
          *(_OWORD *)ProcessId = *(_OWORD *)a4;
          v197 = *(void **)(a4 + 16);
          if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
            return -1073741811;
          if ( PreviousMode && WORD1(ProcessId[1]) && ((unsigned __int8)v197 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          CurrentThread = KeGetCurrentThread();
          v184 = WORD1(ProcessId[1]);
          --CurrentThread->KernelApcDisable;
          v55 = PsLookupProcessByProcessId(ProcessId[0], &Process);
          if ( v55 >= 0 )
          {
            ModuleInformation = PsQueryFullProcessImageName((__int64)Process, (_OWORD *)(a4 + 8), v197, &v184);
            ObfDereferenceObjectWithTag(Process, 0x746C6644u);
            v56 = CurrentThread->KernelApcDisable++ == -1;
            if ( v56
              && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
              && !CurrentThread->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            if ( ModuleInformation == -1073741820 )
              *(_WORD *)(a4 + 10) = v184;
            goto LABEL_823;
          }
          v56 = CurrentThread->KernelApcDisable++ == -1;
          if ( v56
            && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          return v55;
        case 0x5Au:
          Size = 32;
          if ( Length < 0x14 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          *(_OWORD *)a4 = *(_OWORD *)&ExpBootEnvironmentInformation;
          *(_DWORD *)(a4 + 16) = dword_140EFEE10;
          if ( Length < Size )
LABEL_301:
            Size = 20;
          else
            *(_QWORD *)(a4 + 24) = qword_140EFEE18;
          goto LABEL_823;
        case 0x5Bu:
          SystemBasicInformation = HvlQueryEnlightenmentInfo((_OWORD *)a4, Length, v15, &Size);
          goto LABEL_822;
        case 0x5Cu:
          if ( !PreviousMode )
            return -1073741637;
          if ( Length == 40 )
          {
            ModuleInformation = VfGetVerifierInformationEx(a4, v19, v15, v13);
            Size = ((ModuleInformation >> 31) & 0xFFFFFFD8) + 40;
            goto LABEL_823;
          }
          if ( a6 )
            *a6 = 40;
          return -1073741820;
        case 0x62u:
          SystemDeviceName = IopRetrieveSystemDeviceName(
                               (__int64)SyspartDirectGetSystemPartition,
                               a4,
                               Length,
                               (int *)&Size);
          if ( SystemDeviceName == -1073740718 && IopAmbiguousSystemDisk )
          {
            v181 = 0;
            v116 = SiGetSystemDeviceName((__int64)SiGetSystemDisk, 0LL, 0, &v181);
            v117 = v116;
            if ( v116 == -1073741789 )
            {
              v118 = v181;
              Pool2 = (void *)ExAllocatePool2(0x100uLL, v181, 0x44536F49u);
              v120 = Pool2;
              if ( Pool2 )
              {
                v117 = SiGetSystemDeviceName((__int64)SiGetSystemDisk, Pool2, v118, &v181);
                if ( v117 >= 0 )
                  v8 = v120;
                else
                  ExFreePoolWithTag(v120, 0);
              }
              else
              {
                v117 = -1073741670;
              }
            }
            else if ( v116 >= 0 )
            {
              v117 = -1073741595;
            }
            if ( v117 >= 0 )
              ExFreePoolWithTag(v8, 0);
            if ( v117 == -1073740718 )
              SystemDeviceName = -1073740719;
          }
          goto LABEL_496;
        case 0x63u:
          SystemBasicInformation = IopRetrieveSystemDeviceName(
                                     (__int64)SyspartDirectGetSystemDisk,
                                     a4,
                                     Length,
                                     (int *)&Size);
          if ( SystemBasicInformation == -1073740718 && IopAmbiguousSystemDisk )
            SystemBasicInformation = -1073740719;
          goto LABEL_822;
        case 0x64u:
          WORD4(v212) = v14;
          *(_QWORD *)&v212 = KeQueryGroupAffinity(v14);
          v45 = __popcnt(v212);
          ModuleInformation = PpmCapturePerformanceDistribution(0LL, 0, v45, (__int64)&v212, &v171);
          if ( ModuleInformation == -1073741820 )
          {
            if ( v171 <= Length )
            {
              v46 = (void *)ExAllocatePool2(0x40uLL, v171, 0x744D5050u);
              v175 = v46;
              if ( v46 )
              {
                ModuleInformation = PpmCapturePerformanceDistribution(
                                      (unsigned __int64)v46,
                                      v171,
                                      v45,
                                      (__int64)&v212,
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
              Size = v171;
            }
          }
          goto LABEL_823;
        case 0x65u:
          SystemBasicInformation = ExpQueryNumaProximityNode((unsigned int *)a4, Length, &Size);
          goto LABEL_822;
        case 0x66u:
          if ( Length >= 0x1B0 )
          {
            v84 = PsGetCurrentServerSiloGlobals()[76].Blink;
            ExAcquireTimeRefreshLockShared();
            p_Src = &Src;
            v86 = 3LL;
            v87 = 3LL;
            do
            {
              *p_Src = *v84;
              p_Src[1] = v84[1];
              p_Src[2] = v84[2];
              p_Src[3] = v84[3];
              p_Src[4] = v84[4];
              p_Src[5] = v84[5];
              p_Src[6] = v84[6];
              p_Src += 8;
              p_Src[-1] = v84[7];
              v84 += 8;
              --v87;
            }
            while ( v87 );
            *p_Src = *v84;
            p_Src[1] = v84[1];
            p_Src[2] = v84[2];
            ExReleaseTimeRefreshLockShared();
            v88 = &Src;
            do
            {
              *(struct _LIST_ENTRY *)a4 = *v88;
              *(struct _LIST_ENTRY *)(a4 + 16) = v88[1];
              *(struct _LIST_ENTRY *)(a4 + 32) = v88[2];
              *(struct _LIST_ENTRY *)(a4 + 48) = v88[3];
              *(struct _LIST_ENTRY *)(a4 + 64) = v88[4];
              *(struct _LIST_ENTRY *)(a4 + 80) = v88[5];
              *(struct _LIST_ENTRY *)(a4 + 96) = v88[6];
              a4 += 128LL;
              *(struct _LIST_ENTRY *)(a4 - 16) = v88[7];
              v88 += 8;
              --v86;
            }
            while ( v86 );
            *(struct _LIST_ENTRY *)a4 = *v88;
            *(struct _LIST_ENTRY *)(a4 + 16) = v88[1];
            *(struct _LIST_ENTRY *)(a4 + 32) = v88[2];
            Size = 432;
            ModuleInformation = 0;
            goto LABEL_823;
          }
          if ( a6 )
            *a6 = 432;
          return -1073741820;
        case 0x67u:
          if ( qword_140F04B38 )
            SystemBasicInformation = guard_dispatch_icall_no_overrides(a4, Length);
          else
            SystemBasicInformation = -1073741823;
          goto LABEL_822;
        case 0x69u:
          ModuleInformation = guard_dispatch_icall_no_overrides(23LL, 0LL);
          if ( ModuleInformation != -1073741820 )
            goto LABEL_510;
          v77 = v171;
          if ( Length < v171 || !a4 )
            goto LABEL_273;
          if ( PreviousMode )
          {
            v121 = (_DWORD *)ExAllocatePool2(0x101uLL, v171, 0x6F666E49u);
            v175 = v121;
            if ( !v121 )
            {
              ModuleInformation = -1073741670;
              goto LABEL_823;
            }
            v77 = v171;
          }
          else
          {
            v121 = (_DWORD *)a4;
            v175 = (PVOID)a4;
          }
          v122 = guard_dispatch_icall_no_overrides(23LL, v77);
          ModuleInformation = v122;
          if ( !PreviousMode )
            goto LABEL_823;
          if ( v122 >= 0 )
            goto LABEL_520;
          goto LABEL_521;
        case 0x6Au:
          ModuleInformation = -1073741821;
          goto LABEL_823;
        case 0x6Bu:
        case 0xE7u:
          v93 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)&Src;
          v175 = &Src;
          v94 = 80;
          v171 = 80;
          if ( Length < 0x50 )
          {
            v94 = Length;
            v171 = Length;
          }
          Size = v94;
          p_ProcNumber = &ProcNumber;
          if ( v16 != 231 )
            p_ProcNumber = 0LL;
          while ( 2 )
          {
            ModuleInformation = KeQueryLogicalProcessorRelationship(p_ProcNumber, RelationshipType, v93, &Size);
            if ( ModuleInformation < 0 )
            {
              if ( ModuleInformation == -1073741820 )
              {
                if ( Size <= Length )
                {
                  if ( v93 && v93 != (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)&Src )
                    ExFreePoolWithTag(v93, 0);
                  v93 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(0x101uLL, Size, 0x6F666E49u);
                  v175 = v93;
                  if ( v93 )
                  {
                    v171 = Size;
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
              memmove((void *)a4, v93, Size);
              ModuleInformation = 0;
            }
            break;
          }
          if ( v93 && v93 != (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)&Src )
            goto LABEL_407;
          goto LABEL_823;
        case 0x6Cu:
          v110 = 8 * v13;
          Size = 8 * v13;
          if ( Length < 8 )
            goto LABEL_446;
          v111 = Length < v110;
          if ( Length < v110 )
          {
            LODWORD(v13) = Length >> 3;
            v111 = Length < v110;
          }
          v180 = (_QWORD *)a4;
          v112 = 0;
          while ( 1 )
          {
            Size_4 = v112;
            if ( v112 >= (unsigned int)v13 )
              break;
            ProcNumber.Group = v14;
            ProcNumber.Number = v112;
            ProcNumber.Reserved = 0;
            if ( v14 || (_BYTE)v112 )
            {
              if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v112 >= 0x40u )
              {
                v113 = 0xFFFFFFFFLL;
              }
              else
              {
                v113 = *((unsigned int *)qword_140F22998 + 64 * (unsigned __int64)v14 + (unsigned __int8)v112);
                if ( !(_DWORD)v113 )
                  v113 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v113 = 0LL;
            }
            v114 = *(_QWORD *)(KiProcessorBlock[v113] + 34680);
            v115 = v180;
            *v180 = v114;
            v180 = v115 + 1;
            v112 = Size_4 + 1;
            v14 = v169;
          }
          ModuleInformation = v111 ? 0xC0000004 : 0;
          goto LABEL_823;
        case 0x6Du:
          SystemBasicInformation = SmQueryStoreInformation(0x140000000LL, a4, Length, PreviousMode, &Size);
          goto LABEL_822;
        case 0x70u:
          SystemBasicInformation = IoQueryVhdBootInformation(0x140000000LL, (void *)a4, Length, &Size);
          goto LABEL_822;
        case 0x71u:
          SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)a4, Length, PreviousMode, &Size);
          goto LABEL_822;
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
          goto LABEL_823;
        case 0x74u:
          SystemBasicInformation = IoQueryLowPriorityIoInformation(0x140000000LL, (_DWORD *)a4, Length, &Size);
          goto LABEL_822;
        case 0x75u:
          Size = 1096;
          if ( Length != 1096 )
          {
            ModuleInformation = -1073741820;
            goto LABEL_823;
          }
          if ( PreviousMode )
            return -1073741790;
          SystemBasicInformation = ExQueryBootEntropyInformation(a4);
          goto LABEL_822;
        case 0x76u:
          if ( !PreviousMode )
            return -1073741637;
          if ( Length >= 0x110 )
          {
            SystemBasicInformation = VfGetVerifierInformation((void *)a4, Length, &Size, 1);
            goto LABEL_822;
          }
          if ( a6 )
            *a6 = 272;
          return -1073741820;
        case 0x79u:
          Size = 4 * (unsigned __int16)KeNumberNodes;
          if ( Length >= Size )
          {
            Size_4 = 0;
            v96 = 0;
            v97 = 0;
            v98 = 0;
            v99 = v178;
            while ( (unsigned int)v8 < (unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(a4 + 4LL * v96) = *((_DWORD *)KeNodeDistance
                                            + v98
                                            + v99 * (unsigned int)(unsigned __int16)KeNumberNodes);
              v96 = v97 + 1;
              v98 = v97 + 1;
              Size_4 = v97 + 1;
              LODWORD(v8) = ++v97;
            }
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_823;
        case 0x7Au:
          Size = 8;
          if ( Length != 8 || !a4 )
            goto LABEL_113;
          v121 = (_DWORD *)ExAllocatePool2(0x101uLL, 8uLL, 0x6F666E49u);
          v173 = v121;
          if ( !v121 )
          {
            ModuleInformation = -1073741670;
            goto LABEL_823;
          }
          ModuleInformation = guard_dispatch_icall_no_overrides(26LL, 8LL);
          if ( ModuleInformation >= 0 )
          {
            *(_DWORD *)a4 = *v121;
            v123 = *(_DWORD *)(a4 + 4) ^ (v121[1] ^ *(_DWORD *)(a4 + 4)) & 1;
            *(_DWORD *)(a4 + 4) = v123;
            v124 = v123 ^ (v121[1] ^ v123) & 2;
            *(_DWORD *)(a4 + 4) = v124;
            *(_DWORD *)(a4 + 4) = v124 ^ (v121[1] ^ v124) & 4;
          }
          goto LABEL_521;
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
          v226.Flink = (struct _LIST_ENTRY *)MmGetTotalCommitLimit(v35);
          v226.Blink = (struct _LIST_ENTRY *)MmGetPeakCommitment(v36);
          v37 = v226.Blink;
          if ( v226.Blink < Src.Blink )
            v37 = Src.Blink;
          v226.Blink = v37;
          *(struct _LIST_ENTRY *)a4 = Src;
          *(struct _LIST_ENTRY *)(a4 + 16) = v226;
          goto LABEL_634;
        case 0x7Cu:
          Size = 12;
          if ( Length >= 4 )
          {
            v214 = *(_DWORD *)a4;
            if ( v214 == 1 )
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
          goto LABEL_823;
        case 0x7Eu:
          Size = 32;
          if ( Length == 32 )
          {
            ModuleInformation = BgkQueryBootGraphicsInformation(0LL, &Src, v15, v13);
            if ( ModuleInformation >= 0 )
            {
              v125 = Src.Flink;
              if ( PreviousMode )
                v125 = 0LL;
              Src.Flink = v125;
              memmove((void *)a4, &Src, Size);
            }
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_823;
        case 0x80u:
        case 0xF4u:
          if ( (_DWORD)v19 )
          {
            ModuleInformation = -1073741820;
          }
          else
          {
            v131 = MmEnumerateBadPages(&v193);
            v132 = 0LL;
            v93 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)v193;
            if ( v193 )
            {
              v132 = *v193 & 0xFFFFFFFFFFFFFLL;
              if ( v132 <= 0x1FFFFFFF )
              {
                Size = 8 * *(_DWORD *)v193;
                LODWORD(v8) = 8 * v132;
              }
              else
              {
                v131 = -1073741820;
              }
            }
            if ( Length < (unsigned int)v8 )
              v131 = -1073741820;
            ModuleInformation = v131;
            if ( v193 )
            {
              if ( v131 >= 0 )
              {
                if ( v179 == 128 )
                {
                  v133 = v193 + 1;
                  for ( j = v193 + 1; v132; --v132 )
                  {
                    if ( (*v133 & 0x4000000000000000LL) == 0 )
                    {
                      v135 = *v133 & 0x7FFFFFFFFFFFFFFFLL;
                      *v133 = v135;
                      *j++ = v135;
                    }
                    ++v133;
                  }
                  Size = 8 * (((char *)j - (char *)v93 - 8) >> 3);
                }
                memmove((void *)a4, &v93->Processor, Size);
              }
LABEL_407:
              ExFreePoolWithTag(v93, 0);
            }
          }
          goto LABEL_823;
        case 0x85u:
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          ModuleInformation = ExpGetSystemPlatformBinary(a4, Length, PreviousMode);
          EtwTiLogSyscallUsage(ModuleInformation, 0xDu);
          goto LABEL_823;
        case 0x86u:
          Size = 32;
          if ( Length != 32 )
          {
            ModuleInformation = -1073741820;
            goto LABEL_823;
          }
          SystemBasicInformation = sub_140A003E0(0x140000000LL, a4);
          goto LABEL_822;
        case 0x87u:
          Size = 8;
          if ( Length >= 8 )
          {
            if ( (unsigned int)HvlQueryActiveProcessors(&v188, 0LL) )
            {
              ModuleInformation = -1073741637;
            }
            else
            {
              ModuleInformation = HvlQueryProcessorTopologyCount(0LL, v189);
              if ( ModuleInformation )
              {
                ModuleInformation = -1073741637;
              }
              else
              {
                *(_DWORD *)a4 = v188;
                *(_DWORD *)(a4 + 4) = v189[0];
              }
            }
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_823;
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
          goto LABEL_823;
        case 0x8Bu:
          ModuleInformation = ExpQueryChannelInformation((unsigned int *)a4, Length, &Size);
          EtwTiLogSyscallUsage(ModuleInformation, 0xBu);
          goto LABEL_823;
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
                  ModuleInformation = BgkQueryBootGraphicsInformation(1LL, &P, v126, v127);
                  if ( ModuleInformation >= 0 )
                  {
                    v128 = P;
                    if ( P )
                    {
                      memmove((void *)a4, P, Size);
                      ExFreePoolWithTag(v128, 0x4B494742u);
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
          goto LABEL_823;
        case 0x8Fu:
        case 0x91u:
        case 0xABu:
        case 0xB3u:
          SystemBasicInformation = SeSecureBootQueryInformation(v16, a4, Length, &Size);
          goto LABEL_822;
        case 0x93u:
          SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation((bool *)a4, Length, &Size);
          goto LABEL_822;
        case 0x95u:
          if ( Length >= 3 )
          {
            *(_BYTE *)a4 = KdpBootedNodebug == 0;
            *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerEnabled;
            *(_BYTE *)(a4 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
            Size = 3;
            goto LABEL_823;
          }
          if ( a6 )
            *a6 = 3;
          return -1073741820;
        case 0x96u:
          if ( a4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          ModuleInformation = ExpQueryBootLoaderMetadata((void *)a4, Length, &Size);
          EtwTiLogSyscallUsage(ModuleInformation, 0xFu);
          goto LABEL_823;
        case 0x97u:
          Size = 4;
          if ( Length >= 4 )
          {
            *(_DWORD *)a4 = ExSoftRebootFlags;
            goto LABEL_823;
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
              *(_QWORD *)(a4 + 16) = xmmword_140F0E630;
              *(_DWORD *)(a4 + 24) = DWORD2(xmmword_140F0E630);
            }
          }
          goto LABEL_823;
        case 0x9Au:
          if ( Length < 0x20 )
          {
            if ( a6 )
              *a6 = 32;
            return -1073741820;
          }
          ModuleInformation = ExpGetSystemProcessorFeaturesInformation((_QWORD *)a4);
LABEL_634:
          Size = 32;
          goto LABEL_823;
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
          goto LABEL_823;
        case 0x9Du:
          Size = WORD5(ExpManufacturingInformation) + 24;
          if ( Length >= Size )
          {
            v136 = (void *)(a4 + 24);
            *(_OWORD *)a4 = 0LL;
            *(_QWORD *)(a4 + 16) = 0LL;
            *(_DWORD *)a4 = ExpManufacturingInformation;
            *(_DWORD *)(a4 + 8) = DWORD2(ExpManufacturingInformation);
            if ( WORD4(ExpManufacturingInformation) )
            {
              *(_QWORD *)(a4 + 16) = v136;
              memmove(v136, ::Data, WORD5(ExpManufacturingInformation));
            }
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_823;
        case 0x9Eu:
          Size = 1;
          if ( Length )
          {
            *(_BYTE *)a4 = PoEnergyEstimationEnabled();
            goto LABEL_823;
          }
          if ( a6 )
            *a6 = 1;
          goto LABEL_113;
        case 0x9Fu:
          SystemBasicInformation = HvlQueryDetailInfo((_OWORD *)a4, Length, v15, &Size);
          goto LABEL_822;
        case 0xA0u:
          v137 = (_DWORD)v13 << 6;
          Size = (_DWORD)v13 << 6;
          if ( Length < 0x40 )
            goto LABEL_446;
          v138 = Length < v137;
          if ( Length < v137 )
          {
            LODWORD(v13) = Length >> 6;
            v174 = Length >> 6;
            v138 = Length < v137;
          }
          v139 = v138 ? 0xC0000004 : 0;
          v180 = (_QWORD *)a4;
          v140 = 0;
          Size_4 = 0;
          while ( v140 < (unsigned int)v13 )
          {
            ProcNumber.Group = v14;
            ProcNumber.Number = v140;
            ProcNumber.Reserved = 0;
            if ( v14 || (_BYTE)v140 )
            {
              if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v140 >= 0x40u )
              {
                v141 = 0xFFFFFFFFLL;
              }
              else
              {
                v141 = *((unsigned int *)qword_140F22998 + 64 * (unsigned __int64)v14 + (unsigned __int8)v140);
                if ( !(_DWORD)v141 )
                  v141 = 0xFFFFFFFFLL;
              }
            }
            else
            {
              v141 = 0LL;
            }
            KeQueryCycleTimeStatsProcessor(KiProcessorBlock[v141], (_QWORD *)a4);
            a4 += 64LL;
            v180 = (_QWORD *)a4;
            v140 = v142 + 1;
            Size_4 = v140;
            LODWORD(v13) = v174;
          }
          ModuleInformation = v139;
          goto LABEL_823;
        case 0xA2u:
          SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((int *)a4, Length, &Size);
          goto LABEL_822;
        case 0xA3u:
          if ( Length )
          {
            *(_BYTE *)a4 = KdIgnoreUmExceptions;
            Size = 1;
            goto LABEL_823;
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
          if ( qword_140F04BA8 )
            SystemBasicInformation = guard_dispatch_icall_no_overrides(v16, v20);
          else
            SystemBasicInformation = -1073741823;
          goto LABEL_822;
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
            v172[0] = 0;
            LOBYTE(Src.Flink) = v143 | 1;
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags(0LL);
            v145 = (char)Src.Flink;
            if ( (NestedPageProtectionFlags & 2) != 0 )
            {
              v145 = LOBYTE(Src.Flink) | 2;
              LOBYTE(Src.Flink) |= 2u;
            }
            if ( (NestedPageProtectionFlags & 0x20) != 0 )
            {
              v145 |= 4u;
              LOBYTE(Src.Flink) = v145;
            }
            if ( (NestedPageProtectionFlags & 0x10) != 0 )
              LOBYTE(Src.Flink) = v145 | 8;
            v146 = BYTE1(Src.Flink);
            if ( (NestedPageProtectionFlags & 0x200) != 0 )
            {
              v146 = BYTE1(Src.Flink) | 2;
              BYTE1(Src.Flink) |= 2u;
            }
            if ( v194 )
            {
              ModuleInformation = VslIsTrustletRunning(v194, v172);
              v146 = v172[0] & 1 | BYTE1(Src.Flink) & 0xFE;
              BYTE1(Src.Flink) = v146;
            }
            if ( (NestedPageProtectionFlags & 0x800) != 0 )
            {
              v146 |= 4u;
              BYTE1(Src.Flink) = v146;
            }
            if ( (NestedPageProtectionFlags & 0x1000) != 0 )
            {
              v146 |= 8u;
              BYTE1(Src.Flink) = v146;
            }
            if ( (NestedPageProtectionFlags & 0x2000) != 0 )
            {
              v146 |= 0x10u;
              BYTE1(Src.Flink) = v146;
            }
            if ( (NestedPageProtectionFlags & 0x10000) != 0 )
            {
              v146 |= 0x20u;
              BYTE1(Src.Flink) = v146;
            }
            if ( (NestedPageProtectionFlags & 0x40000) != 0 )
              BYTE1(Src.Flink) = v146 | 0x40;
            if ( (NestedPageProtectionFlags & 0x80000) != 0 )
              BYTE2(Src.Flink) |= 1u;
            v239 = 0LL;
            v240 = 0LL;
            v241 = 0LL;
            v242 = 0LL;
            v243 = 0LL;
            v244 = 0LL;
            v245 = 0LL;
            if ( (int)VslpEnterIumSecureMode(2u, 0x24u, 0, (__int64)&v239) >= 0 && (_QWORD)v240 )
              v147 = 32;
            else
              v147 = 0;
            LOBYTE(Src.Flink) = v147 | (__int64)Src.Flink & 0xDF;
          }
          *(struct _LIST_ENTRY *)a4 = Src;
          goto LABEL_823;
        case 0xA6u:
          SystemBasicInformation = SeQueryHSTIResults((void *)a4);
          goto LABEL_822;
        case 0xA7u:
          if ( PreviousMode )
          {
            ModuleInformation = -1073741790;
          }
          else if ( Length >= 0x148 )
          {
            v58 = MmLockLoadedDataTableEntryShared(*(_QWORD *)a4);
            v59 = v58;
            if ( v58 )
            {
              v60 = (_WORD *)(a4 + 8);
              *v60 = 0;
              ExpConvertLdrEntryToModuleInfo(0, v58, 0, 0, (__int64)v60);
              MmUnlockLoadedDataTableEntryShared(v59);
              Size = 328;
LABEL_205:
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
          goto LABEL_823;
        case 0xA9u:
          SystemBasicInformation = HvlQueryVsmProtectionInfo((void *)a4, Length, &Size);
          goto LABEL_822;
        case 0xADu:
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          ModuleInformation = result;
          if ( result < 0 )
            return result;
          Size = 264;
          if ( Length != 264 )
          {
            ModuleInformation = -1073741820;
            goto LABEL_823;
          }
          v153 = (struct _KAFFINITY_EX *)ExAllocatePool2(0x100uLL, 0x108uLL, 0x6F666E49u);
          v154 = v153;
          v175 = v153;
          if ( !v153 )
            return -1073741670;
          v153->Count = 1;
          v153->Size = 32;
          v153->Reserved = 0;
          memset_0(&v153->8, 0, sizeof(v153->8));
          KeGetAffinitizedInterruptsInfo(v154);
          v155 = v154;
          v156 = 2LL;
          do
          {
            *(_OWORD *)a4 = *(_OWORD *)&v155->Count;
            *(_OWORD *)(a4 + 16) = *(_OWORD *)&v155->StaticBitmap[1];
            *(_OWORD *)(a4 + 32) = *(_OWORD *)&v155->StaticBitmap[3];
            *(_OWORD *)(a4 + 48) = *(_OWORD *)&v155->StaticBitmap[5];
            *(_OWORD *)(a4 + 64) = *(_OWORD *)&v155->StaticBitmap[7];
            *(_OWORD *)(a4 + 80) = *(_OWORD *)&v155->StaticBitmap[9];
            *(_OWORD *)(a4 + 96) = *(_OWORD *)&v155->StaticBitmap[11];
            a4 += 128LL;
            *(_OWORD *)(a4 - 16) = *(_OWORD *)&v155->StaticBitmap[13];
            v155 = (struct _KAFFINITY_EX *)((char *)v155 + 128);
            --v156;
          }
          while ( v156 );
          *(_QWORD *)a4 = *(_QWORD *)&v155->Count;
          ExFreePoolWithTag(v154, 0);
          goto LABEL_823;
        case 0xAEu:
          SystemBasicInformation = PsRootSiloInformation((_DWORD *)a4, Length, &Size);
          goto LABEL_822;
        case 0xAFu:
          if ( Handle )
          {
            Object = 0LL;
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &Object, 0LL);
            v157 = Object;
            Process = (PEPROCESS)Object;
            if ( result < 0 )
              return result;
            v8 = Object;
          }
          else
          {
            v157 = Process;
          }
          ModuleInformation = KeQueryCpuSetInformation((void *)a4, Length, (__int64)&Size, (__int64)v157);
          if ( v8 )
            goto LABEL_717;
          goto LABEL_823;
        case 0xB2u:
          if ( !Length )
          {
            ModuleInformation = -1073741789;
            goto LABEL_823;
          }
          if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
            return -1073741727;
          v158 = (struct _MDL *)ExAllocatePool2(0x41uLL, Length, 0x6F666E49u);
          v159 = v158;
          v175 = v158;
          if ( v158 )
          {
            ModuleInformation = VslQuerySecureKernelProfileInformation(v201, v158, Length, &Size);
            if ( ModuleInformation >= 0 )
              memmove((void *)a4, v159, Size);
            ExFreePoolWithTag(v159, 0x6F666E49u);
          }
          else
          {
            ModuleInformation = -1073741670;
          }
          goto LABEL_823;
        case 0xB4u:
          SystemBasicInformation = ExpQueryInterruptSteeringInformation(v20, v19, (_DWORD *)a4, Length, &Size);
          goto LABEL_822;
        case 0xB5u:
        case 0xE6u:
          if ( Handle )
          {
            v202 = 0LL;
            result = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v202, 0LL);
            v157 = v202;
            Process = (PEPROCESS)v202;
            if ( result < 0 )
              return result;
            v8 = v202;
          }
          else
          {
            v157 = Process;
          }
          ModuleInformation = PsGetSupportedProcessorArchitectures((_DWORD *)a4, v19, Length, &Size, (__int64)v157);
          if ( v8 )
LABEL_717:
            ObfDereferenceObject(v157);
          goto LABEL_823;
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
          v226.Flink = (struct _LIST_ENTRY *)(MmGetResidentAvailablePages(v24) << 12);
          v226.Blink = (struct _LIST_ENTRY *)(MmGetTotalCommittedPages(v25) << 12);
          v227.Blink = (struct _LIST_ENTRY *)(MmGetTotalCommitLimit(v26) << 12);
          v228.Flink = (struct _LIST_ENTRY *)(MmGetPeakCommitment(v27) << 12);
          v227.Flink = (struct _LIST_ENTRY *)(MmGetSharedCommit() << 12);
          v28 = Src.Flink;
          if ( Src.Flink < Src.Blink )
            v28 = Src.Blink;
          Src.Flink = v28;
          v29 = v227.Blink;
          if ( v227.Blink < v226.Blink )
            v29 = v226.Blink;
          v227.Blink = v29;
          v30 = v228.Flink;
          if ( v228.Flink < v226.Blink )
            v30 = v226.Blink;
          v228.Flink = v30;
          *(struct _LIST_ENTRY *)a4 = Src;
          *(struct _LIST_ENTRY *)(a4 + 16) = v226;
          *(struct _LIST_ENTRY *)(a4 + 32) = v227;
          *(_QWORD *)(a4 + 48) = v228.Flink;
          Size = 56;
          goto LABEL_823;
        case 0xB7u:
          if ( Length != 16 )
            return -1073741820;
          SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo(*(_QWORD *)a4, *(unsigned int *)(a4 + 8));
          goto LABEL_822;
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
          v226.Flink = (struct _LIST_ENTRY *)((MmGetHighestPhysicalPage(v32) << 12) + 4095);
          *(struct _LIST_ENTRY *)a4 = Src;
          *(_QWORD *)(a4 + 16) = v226.Flink;
LABEL_69:
          Size = 24;
          goto LABEL_823;
        case 0xB9u:
          SystemBasicInformation = sub_14091EB00((void *)a4, Length);
          goto LABEL_822;
        case 0xBAu:
          if ( !Length )
          {
            Data[0] = 1;
            return ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
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
          goto LABEL_823;
        case 0xC0u:
          if ( Length >= 0x20 )
          {
            ModuleInformation = ExpGetSystemFlushInformation(a4);
            Size = 32;
            goto LABEL_823;
          }
          if ( a6 )
            *a6 = 32;
          return -1073741820;
        case 0xC1u:
          v108 = 8 * KeQueryActiveGroupCount();
          Size = v108;
          if ( Length >= v108 )
          {
            memset_0((void *)a4, 0, v108);
            Size_4 = 0;
            v109 = 0;
            while ( (unsigned int)v8 < (unsigned __int16)KeNumberNodes )
            {
              KeInitializeSchedulerSubNodeEnumerationContext(&v237, KeNodeBlock[v109]);
              while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v237, &v199) )
              {
                v169 = *(_WORD *)(v199 + 136);
                *(_QWORD *)(a4 + 8LL * v169) |= *(_QWORD *)(v199 + 16);
              }
              v109 = Size_4 + 1;
              Size_4 = v109;
              LODWORD(v8) = v109;
            }
          }
          else
          {
LABEL_446:
            ModuleInformation = -1073741789;
          }
          goto LABEL_823;
        case 0xC2u:
          SystemBasicInformation = VslTransformDumpKey(v20, v19, (void *)a4, Length, &Size, PreviousMode);
          goto LABEL_822;
        case 0xC3u:
          if ( Length >= 8 )
          {
            SystemBasicInformation = ExpGetSystemWriteConstraintInformation((_QWORD *)a4);
            Size = 8;
            goto LABEL_822;
          }
          if ( a6 )
            *a6 = 8;
          return -1073741820;
        case 0xC4u:
          SystemBasicInformation = KeQueryKvaShadowInformation((BOOL *)a4, Length, &Size);
          goto LABEL_822;
        case 0xC5u:
          Size = 8;
          if ( Length >= 8 )
          {
            v161 = qword_140E2DBB8;
            *(_QWORD *)a4 = 0LL;
            *(_QWORD *)a4 = v161;
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_823;
        case 0xC6u:
          ModuleInformation = guard_dispatch_icall_no_overrides(34LL, 0LL);
          if ( ModuleInformation != -1073741820 )
            return -1073741637;
          v77 = v171;
          if ( Length < v171 || !a4 )
          {
LABEL_273:
            Size = v77;
            goto LABEL_823;
          }
          if ( PreviousMode )
          {
            v121 = (_DWORD *)ExAllocatePool2(0x101uLL, v171, 0x6F666E49u);
            v175 = v121;
            if ( !v121 )
            {
              ModuleInformation = -1073741670;
              goto LABEL_823;
            }
            v77 = v171;
          }
          else
          {
            v121 = (_DWORD *)a4;
            v175 = (PVOID)a4;
          }
          v160 = guard_dispatch_icall_no_overrides(34LL, v77);
          ModuleInformation = v160;
          if ( PreviousMode )
          {
            if ( v160 >= 0 )
LABEL_520:
              memmove((void *)a4, v121, Size);
LABEL_521:
            ExFreePoolWithTag(v121, 0x6F666E49u);
          }
          goto LABEL_823;
        case 0xC8u:
          SystemBasicInformation = IopRetrieveSystemDeviceName(
                                     (__int64)SyspartDirectGetFirmwareSystemPartition,
                                     a4,
                                     Length,
                                     (int *)&Size);
          goto LABEL_822;
        case 0xC9u:
          SystemBasicInformation = KeQuerySpeculationControlInformation((void *)a4, Length, &Size);
          goto LABEL_822;
        case 0xCAu:
          Size = 1;
          if ( Length != 1 )
          {
            if ( a6 )
              *a6 = 1;
            goto LABEL_113;
          }
          v189[1] = 0;
          guard_dispatch_icall_no_overrides(48LL, 1LL);
LABEL_510:
          ModuleInformation = -1073741637;
          goto LABEL_823;
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
          goto LABEL_823;
        case 0xCFu:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = NtGlobalFlag2;
            goto LABEL_189;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xD0u:
          SystemBasicInformation = SeSecurityModelQueryInformation((_DWORD *)a4, Length);
          goto LABEL_822;
        case 0xD2u:
          SystemBasicInformation = CmQuerySingleFeatureConfiguration((__int64 *)v20, v19, a4, Length, &Size);
          goto LABEL_822;
        case 0xD3u:
          SystemBasicInformation = CmQueryFeatureConfigurationSections(
                                     (__int128 *)v20,
                                     v19,
                                     a4,
                                     Length,
                                     &Size,
                                     KeGetCurrentThread()->PreviousMode);
          goto LABEL_822;
        case 0xD5u:
          SystemBasicInformation = KeQuerySecureSpeculationInformation((unsigned int *)a4, Length, &Size);
          goto LABEL_822;
        case 0xD6u:
          if ( PreviousMode )
            return -1073741727;
          if ( ExpSpacesBootInformation )
          {
            v129 = *(_QWORD *)ExpSpacesBootInformation;
            if ( *(_QWORD *)ExpSpacesBootInformation )
            {
              Size = *(_QWORD *)ExpSpacesBootInformation;
              if ( a4 )
              {
                if ( Length >= (unsigned int)v129 )
                  memmove((void *)a4, (const void *)(ExpSpacesBootInformation + 8), (unsigned int)v129);
                else
                  ModuleInformation = -1073741820;
              }
            }
          }
          goto LABEL_823;
        case 0xD7u:
          if ( PreviousMode )
          {
            ModuleInformation = -1073741727;
          }
          else
          {
            v130 = ExpFwRamdiskInfo;
            if ( ExpFwRamdiskInfo )
            {
              Size = 24;
              if ( Length >= 0x18 )
              {
                *(_OWORD *)a4 = *(_OWORD *)ExpFwRamdiskInfo;
                *(_QWORD *)(a4 + 16) = *(_QWORD *)(v130 + 16);
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
          goto LABEL_823;
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
          goto LABEL_823;
        case 0xDDu:
          if ( Length == 4 )
          {
            *(_DWORD *)a4 = 0;
            *(_DWORD *)a4 = KeIsCetCapable();
            IsUserCetAllowed = KeIsUserCetAllowed();
            v150 = v149 ^ ((unsigned __int8)v149 ^ (unsigned __int8)(2 * IsUserCetAllowed)) & 2;
            *(_DWORD *)a4 = v150;
            *(_DWORD *)a4 = v150 | (KeIsKernelCetEnabled() << 8);
            IsKernelCetAuditModeEnabled = KeIsKernelCetAuditModeEnabled();
            *(_DWORD *)a4 = v152 | (IsKernelCetAuditModeEnabled << 9);
LABEL_189:
            Size = 4;
            goto LABEL_823;
          }
          if ( a6 )
            *a6 = 4;
          return -1073741820;
        case 0xDEu:
          SystemBasicInformation = CmQueryBuildVersionInformation(v20, v19, (_WORD *)a4, Length, &Size);
          goto LABEL_822;
        case 0xDFu:
          if ( !v20 )
            return -1073741821;
          ModuleInformation = ExPoolQueryLimits(v20, v19, (void *)a4, Length, KeGetCurrentThread()->PreviousMode);
          if ( ModuleInformation >= 0 )
            Size = v170;
          goto LABEL_823;
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
          goto LABEL_823;
        case 0xE4u:
        case 0xE5u:
          Size = Length;
          SystemBasicInformation = KeQueryDpcWatchdogConfiguration((void *)a4, Length, v16);
          goto LABEL_822;
        case 0xEAu:
          Size = 17048;
          if ( Length >= 0x4298 )
          {
            SystemBasicInformation = HvlQueryMinrootInfo((_DWORD *)a4, Length, &Size);
LABEL_822:
            ModuleInformation = SystemBasicInformation;
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_823;
        case 0xEBu:
          SystemBasicInformation = HvlQuerySetBootPagesInfo((_DWORD *)a4, Length, PreviousMode, 1, &Size);
          goto LABEL_822;
        case 0xEEu:
          if ( KeGetCurrentThread()->PreviousMode )
          {
            ModuleInformation = -1073741790;
            goto LABEL_823;
          }
          if ( !v20 || (unsigned int)v19 < 0x14 )
            goto LABEL_797;
          if ( *v20 != 1 )
            LODWORD(v8) = -1073741811;
          if ( (int)v8 >= 0 )
          {
            Size = 5;
            if ( !a4 || Length < 5 )
            {
              ModuleInformation = -1073741820;
              goto LABEL_823;
            }
            memset_0((void *)a4, 0, Length);
            *(_DWORD *)a4 = 1;
            OriginalImageVersion = ExpGetOriginalImageVersion();
            if ( OriginalImageVersion >= 0xA00000C && *((_DWORD *)v173 + 4) <= OriginalImageVersion )
            {
              *(_BYTE *)(a4 + 4) = 1;
              ModuleInformation = (int)v8;
              goto LABEL_823;
            }
          }
          else
          {
LABEL_797:
            LODWORD(v8) = -1073741811;
          }
          ModuleInformation = (int)v8;
LABEL_823:
          if ( a6 )
            *a6 = Size;
          result = ModuleInformation;
          break;
        case 0xEFu:
          SystemBasicInformation = ExpQuerySystemMemoryNumaInformation((__int64 *)v20, v19, (_OWORD *)a4, Length, &Size);
          goto LABEL_822;
        case 0xF0u:
          SystemBasicInformation = ExpQuerySystemMemoryNumaPerformanceInformation((__int128 *)v20, v19, a4, Length);
          goto LABEL_822;
        case 0xF3u:
          Size = 16;
          if ( Length >= 0x10 )
          {
            v216 = 0LL;
            v217 = 0LL;
            v218 = 0LL;
            v219 = 0LL;
            v220 = 0LL;
            v221 = 0LL;
            v222 = 0LL;
            v163 = VslpEnterIumSecureMode(2u, 0x35u, 0, (__int64)&v216);
            if ( v163 < 0 )
            {
              v164 = (unsigned __int64)Src.Flink;
            }
            else
            {
              v164 = (unsigned __int64)Src.Flink & 0xFFFFFFFFFFFFFFFEuLL | v217 & 1;
              Src.Flink = (struct _LIST_ENTRY *)v164;
              Src.Blink = (struct _LIST_ENTRY *)*((_QWORD *)&v217 + 1);
            }
            ModuleInformation = v163;
            if ( v163 < 0 )
            {
              Src.Flink = (struct _LIST_ENTRY *)(v164 & 0xFFFFFFFFFFFFFFFEuLL);
              ModuleInformation = 0;
            }
            *(struct _LIST_ENTRY *)a4 = Src;
          }
          else
          {
            ModuleInformation = -1073741820;
          }
          goto LABEL_823;
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
          goto LABEL_823;
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
          goto LABEL_823;
        case 0xFEu:
          SystemBasicInformation = ExpQueryRuntimeAttestationReport(v20, v19, (void *)a4, Length, &Size, PreviousMode);
          goto LABEL_822;
        default:
          return -1073741821;
      }
      return result;
    case 175:
    case 181:
    case 230:
      v19 = (unsigned int)v170;
      if ( (_DWORD)v170 != 8 )
        return -1073741811;
      v20 = (int *)v173;
      Handle = *(HANDLE *)v173;
      goto LABEL_38;
    case 178:
      v19 = (unsigned int)v170;
      if ( (_DWORD)v170 != 8 )
        return -1073741811;
      v20 = (int *)v173;
      v201 = *(_QWORD *)v173;
      goto LABEL_38;
    case 231:
      v19 = (unsigned int)v170;
      if ( (unsigned int)v170 < 8 )
        return -1073741811;
      v20 = (int *)v173;
      ProcNumber = (_PROCESSOR_NUMBER)*((_DWORD *)v173 + 1);
      RelationshipType = *(_DWORD *)v173;
      goto LABEL_38;
    default:
      goto LABEL_36;
  }
}
