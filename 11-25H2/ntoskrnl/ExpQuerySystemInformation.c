/*
 * XREFs of ExpQuerySystemInformation @ 0x1409DB5B0
 * Callers:
 *     NtQuerySystemInformationEx @ 0x1409DB270 (NtQuerySystemInformationEx.c)
 *     NtQuerySystemInformation @ 0x1409DB410 (NtQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     VslGetNestedPageProtectionFlags @ 0x14025D590 (VslGetNestedPageProtectionFlags.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140266270 (KeQueryLogicalProcessorRelationship.c)
 *     KeFlushProcessWriteBuffers @ 0x14027118C (KeFlushProcessWriteBuffers.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     ExpGetLookasideInformation @ 0x1402D1FA8 (ExpGetLookasideInformation.c)
 *     ExUnlockUserBuffer @ 0x1402D31E0 (ExUnlockUserBuffer.c)
 *     ExGetBigPoolInfo @ 0x1402F70C0 (ExGetBigPoolInfo.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x140304F78 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MmUnlockLoadedDataTableEntryShared @ 0x14036CEEC (MmUnlockLoadedDataTableEntryShared.c)
 *     MmLockLoadedDataTableEntryShared @ 0x14036D178 (MmLockLoadedDataTableEntryShared.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1403B20E4 (PoGetPerfStateAndParkingInfo.c)
 *     PoGetIdleTimes @ 0x1403B2600 (PoGetIdleTimes.c)
 *     MmQueryMemoryListInformation @ 0x1403BE2A8 (MmQueryMemoryListInformation.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1403C22D8 (MmQuerySystemWorkingSetInformation.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x1404206E0 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     PoEnergyEstimationEnabled @ 0x14044A480 (PoEnergyEstimationEnabled.c)
 *     ExpGetSystemBasicInformation @ 0x14044DD04 (ExpGetSystemBasicInformation.c)
 *     KeIsKernelCetEnabled @ 0x14045663C (KeIsKernelCetEnabled.c)
 *     ExpGetSystemProcessorInformation @ 0x14045C2B8 (ExpGetSystemProcessorInformation.c)
 *     MmGetAvailablePages @ 0x140462A9C (MmGetAvailablePages.c)
 *     MmGetTotalCommittedPages @ 0x1404636DC (MmGetTotalCommittedPages.c)
 *     MmGetTotalCommitLimit @ 0x1404637C0 (MmGetTotalCommitLimit.c)
 *     MmGetPeakCommitment @ 0x14046402C (MmGetPeakCommitment.c)
 *     MmGetResidentAvailablePages @ 0x1404646DC (MmGetResidentAvailablePages.c)
 *     KeQueryGroupAffinity @ 0x1404692D0 (KeQueryGroupAffinity.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14046B528 (ExpGetSystemEmulationBasicInformation.c)
 *     MmGetHighestPhysicalPage @ 0x14046F044 (MmGetHighestPhysicalPage.c)
 *     MmGetSharedCommit @ 0x1404717D4 (MmGetSharedCommit.c)
 *     MmGetProcessPartitionId @ 0x140471A98 (MmGetProcessPartitionId.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x140477AC8 (ExpGetSystemEmulationProcessorInformation.c)
 *     MmGetLowestPhysicalPage @ 0x140477C98 (MmGetLowestPhysicalPage.c)
 *     KeQueryCycleTimeStatsProcessor @ 0x14047BCD8 (KeQueryCycleTimeStatsProcessor.c)
 *     PpmCapturePerformanceDistribution @ 0x14047E99C (PpmCapturePerformanceDistribution.c)
 *     KeQueryActiveGroupCount @ 0x1404807A0 (KeQueryActiveGroupCount.c)
 *     KeGetRecommendedSharedDataAlignment @ 0x1404882F0 (KeGetRecommendedSharedDataAlignment.c)
 *     KeQueryBootTimeValues @ 0x140496000 (KeQueryBootTimeValues.c)
 *     KeIsUserCetAllowed @ 0x140497BD0 (KeIsUserCetAllowed.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404A9208 (ExCpuSetResourceManagerAccessCheck.c)
 *     VslIsTrustletRunning @ 0x1404B4248 (VslIsTrustletRunning.c)
 *     VslIsSecureKernelRunning @ 0x1404BD68C (VslIsSecureKernelRunning.c)
 *     KeIsCetCapable @ 0x1404C036C (KeIsCetCapable.c)
 *     KeIsKernelCetAuditModeEnabled @ 0x1404C86C8 (KeIsKernelCetAuditModeEnabled.c)
 *     HvlQueryActiveProcessors @ 0x14057FCC0 (HvlQueryActiveProcessors.c)
 *     HvlQueryMinrootInfo @ 0x14057FD90 (HvlQueryMinrootInfo.c)
 *     HvlQueryProcessorTopologyCount @ 0x140580030 (HvlQueryProcessorTopologyCount.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058A534 (VslQuerySecureKernelProfileInformation.c)
 *     KeQueryDpcWatchdogConfiguration @ 0x1405B0DB8 (KeQueryDpcWatchdogConfiguration.c)
 *     KeQuerySecureSpeculationInformation @ 0x1405B97C4 (KeQuerySecureSpeculationInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1405C0034 (KeGetAffinitizedInterruptsInfo.c)
 *     PsQueryCpuQuotaInformation @ 0x1405D8E80 (PsQueryCpuQuotaInformation.c)
 *     PsQueryActivityModerationUserSettings @ 0x1405D93B4 (PsQueryActivityModerationUserSettings.c)
 *     Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline @ 0x1405DB288 (Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x1405FCD70 (SeQueryTrustedPlatformModuleInformation.c)
 *     VfGetVerifierInformation @ 0x1406087F4 (VfGetVerifierInformation.c)
 *     Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline @ 0x140646710 (Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_OfflineCrashTableV3__private_IsEnabledDeviceUsageNoInline @ 0x140646764 (Feature_OfflineCrashTableV3__private_IsEnabledDeviceUsageNoInline.c)
 *     ExpQueryBootLoaderMetadata @ 0x140646FBC (ExpQueryBootLoaderMetadata.c)
 *     ExPoolQueryLimits @ 0x140648408 (ExPoolQueryLimits.c)
 *     ExpGetOriginalImageVersion @ 0x14064F16C (ExpGetOriginalImageVersion.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     ZwFilterBootOption @ 0x14069CEC0 (ZwFilterBootOption.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExQueryBootEntropyInformation @ 0x1406EDAA8 (ExQueryBootEntropyInformation.c)
 *     CmQuerySingleFeatureConfiguration @ 0x1406EE3D4 (CmQuerySingleFeatureConfiguration.c)
 *     HvlQueryDetailInfo @ 0x140702A7C (HvlQueryDetailInfo.c)
 *     HvlQueryEnlightenmentInfo @ 0x140702B98 (HvlQueryEnlightenmentInfo.c)
 *     HvlQuerySetBootPagesInfo @ 0x140702C1C (HvlQuerySetBootPagesInfo.c)
 *     VslTransformDumpKey @ 0x1407045EC (VslTransformDumpKey.c)
 *     KeQueryCpuSetInformation @ 0x1407306BC (KeQueryCpuSetInformation.c)
 *     KeQueryKvaShadowInformation @ 0x140730980 (KeQueryKvaShadowInformation.c)
 *     ObQueryRefTraceInformation @ 0x140738818 (ObQueryRefTraceInformation.c)
 *     PsRootSiloInformation @ 0x1407628F0 (PsRootSiloInformation.c)
 *     SeSecurityModelQueryInformation @ 0x140780A5C (SeSecurityModelQueryInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1407A4EF0 (ExpGetSystemPlatformBinary.c)
 *     ExpGetSystemProcessorFeaturesInformation @ 0x1407A53A8 (ExpGetSystemProcessorFeaturesInformation.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407A53D8 (ExpGetSystemWriteConstraintInformation.c)
 *     ExpQueryInterruptSteeringInformation @ 0x1407A5B14 (ExpQueryInterruptSteeringInformation.c)
 *     ExpQueryLegacyDriverInformation @ 0x1407A5C18 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryModuleInformationEx @ 0x1407A5CDC (ExpQueryModuleInformationEx.c)
 *     ExpQueryNumaAvailableMemory @ 0x1407A5D70 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryNumaProximityNode @ 0x1407A5EF0 (ExpQueryNumaProximityNode.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1407A5FD4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpQuerySystemMemoryNumaInformation @ 0x1407B6260 (ExpQuerySystemMemoryNumaInformation.c)
 *     ExpQuerySystemMemoryNumaPerformanceInformation @ 0x1407B63AC (ExpQuerySystemMemoryNumaPerformanceInformation.c)
 *     WheaQuerySystemInformation @ 0x1407B6F80 (WheaQuerySystemInformation.c)
 *     MmEnumerateBadPages @ 0x1407DD2F8 (MmEnumerateBadPages.c)
 *     IoQueryVhdBootInformation @ 0x140819EBC (IoQueryVhdBootInformation.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14082425C (EtwQueryPerformanceTraceInformation.c)
 *     ExpGetDeviceDataInformation @ 0x140829BF4 (ExpGetDeviceDataInformation.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     EtwTiLogSyscallUsage @ 0x1408EA178 (EtwTiLogSyscallUsage.c)
 *     PsGetSupportedProcessorArchitectures @ 0x14090746C (PsGetSupportedProcessorArchitectures.c)
 *     sub_140908780 @ 0x140908780 (sub_140908780.c)
 *     ExpSnapShotHandleTables @ 0x140921A40 (ExpSnapShotHandleTables.c)
 *     PsLookupProcessByProcessId @ 0x140921F20 (PsLookupProcessByProcessId.c)
 *     PfQuerySuperfetchInformation @ 0x140932B10 (PfQuerySuperfetchInformation.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1409699F8 (ExpGetSystemFirmwareTableInformation.c)
 *     ObGetObjectInformation @ 0x1409D7DC0 (ObGetObjectInformation.c)
 *     PsQueryFullProcessImageName @ 0x140A01874 (PsQueryFullProcessImageName.c)
 *     ExGetPoolTagInfo @ 0x140A044C4 (ExGetPoolTagInfo.c)
 *     sub_140A048EC @ 0x140A048EC (sub_140A048EC.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A09550 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A095BC (ExReleaseTimeRefreshLockShared.c)
 *     ExIsRestrictedCaller @ 0x140A0AFF8 (ExIsRestrictedCaller.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x140A0F334 (KeBuildLogicalProcessorSystemInformation.c)
 *     SmQueryStoreInformation @ 0x140A122F8 (SmQueryStoreInformation.c)
 *     CmQueryFeatureConfigurationSections @ 0x140A1ACB8 (CmQueryFeatureConfigurationSections.c)
 *     PfSnQueryPrefetcherInformation @ 0x140A3F3AC (PfSnQueryPrefetcherInformation.c)
 *     ExpGetSystemFlushInformation @ 0x140A3FEC4 (ExpGetSystemFlushInformation.c)
 *     SiGetSystemDeviceName @ 0x140A407A8 (SiGetSystemDeviceName.c)
 *     ExpQueryNumaProcessorMap @ 0x140A46044 (ExpQueryNumaProcessorMap.c)
 *     CmQueryBuildVersionInformation @ 0x140A462A0 (CmQueryBuildVersionInformation.c)
 *     IopRetrieveSystemDeviceName @ 0x140A510B4 (IopRetrieveSystemDeviceName.c)
 *     SeSecureBootQueryInformation @ 0x140A512C0 (SeSecureBootQueryInformation.c)
 *     ExpQueryChannelInformation @ 0x140A56784 (ExpQueryChannelInformation.c)
 *     MmGetPageFileInformation @ 0x140A5A858 (MmGetPageFileInformation.c)
 *     ExpQueryMemoryTopologyInformation @ 0x140A690A0 (ExpQueryMemoryTopologyInformation.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6BEE8 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x140A7C660 (HvlQueryVsmProtectionInfo.c)
 *     IoQueryLowPriorityIoInformation @ 0x140A7CE14 (IoQueryLowPriorityIoInformation.c)
 *     ExpQueryModuleInformation @ 0x140A80410 (ExpQueryModuleInformation.c)
 *     CmQueryRegistryQuotaInformation @ 0x140A83B14 (CmQueryRegistryQuotaInformation.c)
 *     VslIsEncryptionKeyAvailable @ 0x140A84954 (VslIsEncryptionKeyAvailable.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x140A8E034 (ExpConvertLdrEntryToModuleInfo.c)
 *     SeQueryHSTIResults @ 0x140A9CD48 (SeQueryHSTIResults.c)
 *     KeQuerySpeculationControlInformation @ 0x140AC0980 (KeQuerySpeculationControlInformation.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140AD1640 (ExpQuerySystemPerformanceInformation.c)
 *     ExQuerySystemLockInformation @ 0x140B5A6C8 (ExQuerySystemLockInformation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VfGetVerifierInformationEx @ 0x140B8C4AC (VfGetVerifierInformationEx.c)
 *     BgkQueryBootGraphicsInformation @ 0x140BA0064 (BgkQueryBootGraphicsInformation.c)
 */

NTSTATUS __fastcall ExpQuerySystemInformation(
        unsigned int a1,
        void *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int Length,
        unsigned int *a6)
{
  PVOID v8; // rsi
  unsigned __int8 PreviousMode; // r14
  unsigned int v10; // r13d
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
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // cx
  struct _LIST_ENTRY *v27; // rcx
  struct _LIST_ENTRY *v28; // rax
  struct _LIST_ENTRY *v29; // rax
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // cx
  unsigned __int16 ProcessPartitionId; // ax
  unsigned __int16 v33; // cx
  unsigned __int16 v34; // cx
  unsigned __int16 v35; // cx
  struct _LIST_ENTRY *v36; // rcx
  unsigned int v37; // esi
  unsigned int v38; // r8d
  unsigned int v39; // r10d
  unsigned int v40; // r13d
  __int64 v41; // rax
  __int64 v42; // rcx
  _DWORD *v43; // rdx
  int v44; // esi
  void *v45; // rdi
  unsigned int v46; // edi
  __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // r8
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v51; // rsi
  char v52; // r14
  struct _KTHREAD *CurrentThread; // rsi
  NTSTATUS v54; // edi
  bool v55; // zf
  NTSTATUS result; // eax
  __int64 v57; // rax
  __int64 v58; // rdi
  _WORD *v59; // rbx
  int v60; // eax
  int v61; // ebx
  int v62; // eax
  _DWORD *v63; // r8
  int v64; // ebx
  int v65; // eax
  _DWORD *v66; // r8
  int v67; // ebx
  int v68; // eax
  int ObjectInformation; // ebx
  unsigned int v70; // r14d
  __int64 v71; // rcx
  int v72; // ecx
  int v73; // edx
  __int64 *v74; // r14
  __int64 v75; // r8
  unsigned int v76; // ecx
  __int64 *v77; // r14
  __int64 v78; // rcx
  unsigned int v79; // r8d
  __int64 v80; // rax
  _DWORD *v81; // rcx
  struct _LIST_ENTRY *v82; // rdi
  struct _LIST_ENTRY *v83; // rdi
  struct _LIST_ENTRY *p_Src; // rax
  __int64 v85; // r14
  __int64 v86; // rcx
  struct _LIST_ENTRY *v87; // rax
  int v88; // r9d
  int VerifierInformation; // eax
  signed __int32 v90; // r14d
  __int64 *v91; // r14
  __int64 v92; // rcx
  int v93; // r8d
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v94; // r12
  unsigned int v95; // eax
  _PROCESSOR_NUMBER *p_Size_4; // r13
  unsigned int v97; // r8d
  int v98; // r9d
  int v99; // edx
  int v100; // r10d
  unsigned int v101; // r9d
  unsigned int v102; // r13d
  unsigned int v103; // edi
  unsigned int v104; // eax
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
  int SystemDeviceName; // eax
  int v117; // ebx
  unsigned int v118; // ebx
  __int64 Pool2; // rax
  void *v120; // r14
  void *v121; // rsi
  int v122; // eax
  _DWORD *v123; // rdi
  int v124; // ecx
  int v125; // edx
  struct _LIST_ENTRY *v126; // rax
  __int64 v127; // r8
  __int64 v128; // r9
  PVOID v129; // rdi
  __int64 v130; // rax
  __int64 v131; // rax
  int v132; // ecx
  unsigned __int64 v133; // r8
  __int64 *v134; // rdx
  __int64 *j; // rcx
  __int64 v136; // rax
  unsigned int v137; // r14d
  void *v138; // rcx
  unsigned int v139; // eax
  bool v140; // cf
  unsigned int v141; // r11d
  unsigned int v142; // r10d
  __int64 v143; // rax
  int v144; // r10d
  int v145; // ecx
  int NestedPageProtectionFlags; // edi
  char v147; // cl
  __int64 v148; // rcx
  char v149; // al
  unsigned __int64 CurrentServerSilo; // rax
  char v151; // cl
  char IsEncryptionKeyAvailable; // al
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
  int v164; // eax
  __int64 v165; // rax
  unsigned int OriginalImageVersion; // ecx
  int v167; // eax
  unsigned __int64 v168; // rdx
  int SystemBasicInformation; // [rsp+40h] [rbp-498h]
  unsigned int Size; // [rsp+44h] [rbp-494h] BYREF
  _PROCESSOR_NUMBER Size_4; // [rsp+48h] [rbp-490h] BYREF
  int i; // [rsp+4Ch] [rbp-48Ch]
  unsigned __int8 v173; // [rsp+50h] [rbp-488h]
  USHORT v174; // [rsp+54h] [rbp-484h]
  size_t v175; // [rsp+58h] [rbp-480h] BYREF
  unsigned int v176; // [rsp+60h] [rbp-478h] BYREF
  char v177; // [rsp+64h] [rbp-474h] BYREF
  char v178[3]; // [rsp+65h] [rbp-473h] BYREF
  void *v179; // [rsp+68h] [rbp-470h]
  PVOID v180; // [rsp+70h] [rbp-468h]
  unsigned int *v181; // [rsp+78h] [rbp-460h]
  ULONG v182; // [rsp+80h] [rbp-458h]
  char Data[72]; // [rsp+B4h] [rbp-424h] BYREF
  unsigned __int16 v184; // [rsp+FCh] [rbp-3DCh]
  _QWORD *v185; // [rsp+110h] [rbp-3C8h]
  unsigned int v186; // [rsp+11Ch] [rbp-3BCh]
  LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType; // [rsp+120h] [rbp-3B8h]
  unsigned int v188; // [rsp+124h] [rbp-3B4h] BYREF
  PEPROCESS Process; // [rsp+128h] [rbp-3B0h] BYREF
  int v190; // [rsp+130h] [rbp-3A8h]
  int v191; // [rsp+134h] [rbp-3A4h] BYREF
  int v192; // [rsp+138h] [rbp-3A0h] BYREF
  unsigned int v193; // [rsp+13Ch] [rbp-39Ch] BYREF
  unsigned int v194; // [rsp+140h] [rbp-398h] BYREF
  unsigned int v195; // [rsp+144h] [rbp-394h] BYREF
  _DWORD v196[2]; // [rsp+148h] [rbp-390h] BYREF
  __int64 v197; // [rsp+150h] [rbp-388h]
  ULONG ResultLength; // [rsp+158h] [rbp-380h] BYREF
  HANDLE KeyHandle; // [rsp+160h] [rbp-378h] BYREF
  PVOID P; // [rsp+168h] [rbp-370h] BYREF
  _QWORD *v201; // [rsp+170h] [rbp-368h] BYREF
  HANDLE Handle; // [rsp+178h] [rbp-360h]
  HANDLE ProcessId[2]; // [rsp+180h] [rbp-358h]
  __int64 v204; // [rsp+190h] [rbp-348h]
  __int64 v205; // [rsp+198h] [rbp-340h] BYREF
  PVOID v206; // [rsp+1A0h] [rbp-338h] BYREF
  _DWORD *v207; // [rsp+1A8h] [rbp-330h] BYREF
  PVOID v208; // [rsp+1B0h] [rbp-328h] BYREF
  _QWORD *v209; // [rsp+1B8h] [rbp-320h] BYREF
  PVOID v210; // [rsp+1C0h] [rbp-318h] BYREF
  __int64 v211; // [rsp+1C8h] [rbp-310h] BYREF
  PVOID v212; // [rsp+1D0h] [rbp-308h] BYREF
  __int64 v213; // [rsp+1D8h] [rbp-300h] BYREF
  PVOID Object; // [rsp+1E0h] [rbp-2F8h] BYREF
  __int64 v215; // [rsp+1E8h] [rbp-2F0h]
  PVOID v216; // [rsp+1F0h] [rbp-2E8h] BYREF
  __int64 v217; // [rsp+1F8h] [rbp-2E0h] BYREF
  __int128 v218; // [rsp+200h] [rbp-2D8h] BYREF
  unsigned int v219; // [rsp+210h] [rbp-2C8h]
  int v220; // [rsp+218h] [rbp-2C0h]
  volatile void *v221; // [rsp+228h] [rbp-2B0h]
  __int128 v222; // [rsp+240h] [rbp-298h] BYREF
  __int128 v223; // [rsp+250h] [rbp-288h]
  __int128 v224; // [rsp+260h] [rbp-278h]
  __int128 v225; // [rsp+270h] [rbp-268h]
  __int128 v226; // [rsp+280h] [rbp-258h]
  __int128 v227; // [rsp+290h] [rbp-248h]
  __int64 v228; // [rsp+2A0h] [rbp-238h]
  struct _LIST_ENTRY Src; // [rsp+2B0h] [rbp-228h] BYREF
  struct _LIST_ENTRY v230; // [rsp+2C0h] [rbp-218h]
  struct _LIST_ENTRY v231; // [rsp+2D0h] [rbp-208h] BYREF
  struct _LIST_ENTRY v232; // [rsp+2E0h] [rbp-1F8h]
  struct _LIST_ENTRY v233; // [rsp+2F0h] [rbp-1E8h]
  struct _LIST_ENTRY v234; // [rsp+300h] [rbp-1D8h]
  struct _LIST_ENTRY v235; // [rsp+310h] [rbp-1C8h]
  struct _LIST_ENTRY v236; // [rsp+320h] [rbp-1B8h]
  struct _LIST_ENTRY v237; // [rsp+330h] [rbp-1A8h]
  struct _LIST_ENTRY v238; // [rsp+340h] [rbp-198h]
  struct _LIST_ENTRY *Flink; // [rsp+350h] [rbp-188h]
  int v240; // [rsp+358h] [rbp-180h]
  __int128 KeyValueInformation; // [rsp+460h] [rbp-78h] BYREF
  int v242; // [rsp+470h] [rbp-68h]
  __int128 v243; // [rsp+478h] [rbp-60h] BYREF
  __int64 v244; // [rsp+488h] [rbp-50h]

  v175 = a3;
  v179 = a2;
  v186 = a1;
  v181 = a6;
  v8 = 0LL;
  v176 = 0;
  v217 = 0LL;
  v195 = 0;
  v196[0] = 0;
  i = 0;
  v192 = 0;
  v184 = 0;
  v174 = 0;
  v218 = 0LL;
  Process = 0LL;
  Size_4 = 0;
  v201 = 0LL;
  P = 0LL;
  v190 = 0;
  v213 = 0LL;
  v243 = 0LL;
  v244 = 0LL;
  memset_0(&Src, 0, 0x1B0uLL);
  SystemBasicInformation = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v173 = PreviousMode;
  if ( PreviousMode )
  {
    switch ( a1 )
    {
      case 0xCu:
        v11 = 8;
        goto LABEL_7;
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
        goto LABEL_8;
      case 0xFAu:
        Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline();
        goto LABEL_6;
      default:
LABEL_6:
        v11 = 4;
LABEL_7:
        v10 = 1;
LABEL_8:
        ProbeForWrite((volatile void *)a4, Length, v11);
        if ( a6 )
        {
          v12 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
            v12 = (__int64)a6;
          *(_DWORD *)v12 = *(_DWORD *)v12;
        }
        break;
    }
  }
  else
  {
    v10 = 1;
  }
  Size = 0;
  RelationshipType = RelationAll;
  v13 = 0LL;
  v182 = 0;
  v14 = 0;
  v174 = 0;
  v184 = 0;
  v197 = 0LL;
  Handle = 0LL;
  v215 = 0LL;
  v15 = 9LL;
  LODWORD(v180) = 9;
  v190 = 9;
  v16 = v186;
  switch ( v186 )
  {
    case 2u:
    case 0x21u:
    case 0x24u:
    case 0x41u:
      v14 = -1;
      v174 = -1;
      v17 = -1;
      goto LABEL_16;
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
      v174 = *(_WORD *)v179;
      v14 = v174;
      if ( v174 >= KeQueryActiveGroupCount() )
        return -1073741811;
      v17 = v174;
LABEL_16:
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(v17);
      v13 = ActiveProcessorCount;
      v182 = ActiveProcessorCount;
      v16 = v186;
      v15 = (unsigned int)v180;
LABEL_37:
      v19 = (unsigned int)v175;
      goto LABEL_38;
    case 0x48u:
      v19 = (unsigned int)v175;
      if ( (_DWORD)v175 != 4 )
        return -1073741811;
      v20 = (int *)v179;
      v15 = *(unsigned int *)v179;
      v190 = *(_DWORD *)v179;
      break;
    case 0x6Bu:
      v19 = (unsigned int)v175;
      if ( (unsigned int)v175 < 4 )
        return -1073741811;
      v20 = (int *)v179;
      RelationshipType = *(_DWORD *)v179;
      break;
    case 0x79u:
      v19 = (unsigned int)v175;
      if ( (unsigned int)v175 >= 2 )
      {
        v20 = (int *)v179;
        v184 = *(_WORD *)v179;
        if ( v184 < (unsigned __int16)KeNumberNodes )
          break;
      }
      return -1073741811;
    case 0xA5u:
      v19 = (unsigned int)v175;
      if ( (_DWORD)v175 )
      {
        if ( (_DWORD)v175 != 8 )
          return -1073741811;
        v20 = (int *)v179;
        v197 = *(_QWORD *)v179;
      }
      else
      {
        v197 = 0LL;
LABEL_38:
        v20 = (int *)v179;
      }
      break;
    case 0xAFu:
    case 0xB5u:
    case 0xE6u:
      v19 = (unsigned int)v175;
      if ( (_DWORD)v175 != 8 )
        return -1073741811;
      v20 = (int *)v179;
      Handle = *(HANDLE *)v179;
      break;
    case 0xB2u:
      v19 = (unsigned int)v175;
      if ( (_DWORD)v175 != 8 )
        return -1073741811;
      v20 = (int *)v179;
      v215 = *(_QWORD *)v179;
      break;
    case 0xE7u:
      v19 = (unsigned int)v175;
      if ( (unsigned int)v175 < 8 )
        return -1073741811;
      v20 = (int *)v179;
      Size_4 = (_PROCESSOR_NUMBER)*((_DWORD *)v179 + 1);
      RelationshipType = *(_DWORD *)v179;
      break;
    default:
      goto LABEL_37;
  }
  v21 = 0x140000000uLL;
  switch ( v16 )
  {
    case 0u:
    case 0x72u:
      if ( Length == 64 )
      {
        SystemBasicInformation = ExpGetSystemBasicInformation(a4);
        goto LABEL_44;
      }
      if ( a6 )
        *a6 = 64;
      return -1073741820;
    case 1u:
      if ( Length >= 0xC )
      {
        SystemBasicInformation = ExpGetSystemProcessorInformation(a4);
        Size = 12;
        goto LABEL_837;
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
      v37 = 376;
      if ( Length <= 0x178 )
        v37 = Length;
      ExpQuerySystemPerformanceInformation((unsigned int)v13, a4, v37);
      Size = v37;
      goto LABEL_837;
    case 3u:
      if ( Length <= 0x30 )
      {
        KeQueryBootTimeValues(&Src.Blink, (LARGE_INTEGER *)&Src, &v231);
        Blink = PsGetCurrentServerSiloGlobals()[76].Blink;
        v230.Flink = Blink[27].Blink;
        LODWORD(v230.Blink) = Blink[27].Flink;
        v231.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF780000003B0];
        memmove((void *)a4, &Src, Length);
        goto LABEL_141;
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
      SystemBasicInformation = ExpGetProcessInformation(a4, Length, (unsigned int)&Size, 0, v16);
      goto LABEL_837;
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
        goto LABEL_71;
      }
      if ( a6 )
        *a6 = 24;
      return -1073741820;
    case 8u:
    case 0x8Du:
      v38 = 48;
      if ( v16 != 8 )
        v38 = 72;
      LODWORD(v180) = v38;
      if ( Length && !(Length % v38) )
      {
        v39 = 0;
        v40 = 0;
        i = 0;
        while ( 1 )
        {
          v185 = (_QWORD *)a4;
          if ( v40 >= (unsigned int)v13 )
            break;
          Size_4.Group = v14;
          *(_WORD *)&Size_4.Number = (unsigned __int8)v40;
          if ( v14 || (_BYTE)v40 )
          {
            if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v40 >= 0x40u )
            {
              v41 = 0xFFFFFFFFLL;
            }
            else
            {
              v41 = *((unsigned int *)qword_140F216A8 + 64 * (unsigned __int64)v14 + (unsigned __int8)v40);
              if ( !(_DWORD)v41 )
                v41 = 0xFFFFFFFFLL;
            }
          }
          else
          {
            v41 = 0LL;
          }
          v179 = (void *)KiProcessorBlock[v41];
          if ( Length < v38 + v39 )
            break;
          LODWORD(v175) = v38 + v39;
          PoGetIdleTimes(&Size_4, 0LL, (__int64)&Src);
          v42 = KeMaximumIncrement;
          v43 = v179;
          *(_QWORD *)(a4 + 16) = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)v179 + 8594);
          *(_QWORD *)(a4 + 8) = v42 * HIDWORD(Src.Flink);
          *(_QWORD *)(a4 + 24) = v42 * (unsigned int)v43[8595];
          *(_QWORD *)(a4 + 32) = v42 * (unsigned int)v43[8596];
          *(_QWORD *)a4 = v42 * LODWORD(Src.Flink);
          *(_DWORD *)(a4 + 40) = v43[8592];
          if ( v186 == 141 )
          {
            *(_QWORD *)(a4 + 48) = v42 * (unsigned int)v43[8603];
            *(_DWORD *)(a4 + 44) = 0;
            *(_QWORD *)(a4 + 56) = 0LL;
            *(_QWORD *)(a4 + 64) = 0LL;
          }
          v38 = (unsigned int)v180;
          a4 += (unsigned int)v180;
          i = ++v40;
          LODWORD(v13) = v182;
          v39 = v175;
        }
        Size = v39;
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = v13 * v38;
      return -1073741820;
    case 9u:
      if ( Length == 4 )
      {
        *(_DWORD *)a4 = NtGlobalFlag;
        goto LABEL_185;
      }
      if ( a6 )
        *a6 = 4;
      return -1073741820;
    case 0xBu:
      if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (char *)&v175 + 4) )
        return -1073741790;
      SystemBasicInformation = ExpQueryModuleInformation(HIDWORD(v175), a4, Length, &Size);
      EtwTiLogSyscallUsage(SystemBasicInformation, 0);
      goto LABEL_837;
    case 0xCu:
      if ( Length < 0x38 )
      {
        if ( a6 )
          *a6 = 56;
        return -1073741820;
      }
      if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (char *)&v175 + 4) )
        return -1073741790;
      v205 = 0LL;
      v206 = 0LL;
      v60 = ExLockUserBuffer(
              a4,
              Length,
              KeGetCurrentThread()->PreviousMode,
              IoWriteAccess,
              &v205,
              (struct _MDL **)&v206);
      if ( v60 >= 0 )
      {
        v61 = ExQuerySystemLockInformation(HIDWORD(v175), v205, Length, &Size);
        ExUnlockUserBuffer((struct _MDL *)v206);
        SystemBasicInformation = v61;
        EtwTiLogSyscallUsage(v61, 2u);
      }
      else
      {
        SystemBasicInformation = v60;
        EtwTiLogSyscallUsage(v60, 2u);
      }
      goto LABEL_837;
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x13u:
      SystemBasicInformation = -1073741822;
      goto LABEL_837;
    case 0x10u:
      if ( Length < 0x20 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      if ( (a4 & 7) != 0 )
        return -2147483646;
      if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (char *)&v175 + 4) )
      {
        v207 = 0LL;
        v208 = 0LL;
        v62 = ExLockUserBuffer(
                a4,
                Length,
                KeGetCurrentThread()->PreviousMode,
                IoWriteAccess,
                &v207,
                (struct _MDL **)&v208);
        if ( v62 >= 0 )
        {
          v193 = 0;
          v63 = v207;
          *v207 = 0;
          v64 = ExpSnapShotHandleTables(
                  (__int64 (__fastcall *)(int, int, int, int, __int64, int, __int64))ObpCaptureHandleInformation,
                  HIDWORD(v175),
                  v63,
                  Length,
                  &v193,
                  0);
          Size = v193;
          ExUnlockUserBuffer((struct _MDL *)v208);
          SystemBasicInformation = v64;
          EtwTiLogSyscallUsage(v64, 4u);
        }
        else
        {
          SystemBasicInformation = v62;
          EtwTiLogSyscallUsage(v62, 4u);
        }
        goto LABEL_837;
      }
      return -1073741790;
    case 0x11u:
      if ( Length < 0x40 )
      {
        if ( a6 )
          *a6 = 64;
        return -1073741820;
      }
      if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (char *)&v175 + 4) )
        return -1073741790;
      v211 = 0LL;
      v212 = 0LL;
      v68 = ExLockUserBuffer(
              a4,
              Length,
              KeGetCurrentThread()->PreviousMode,
              IoWriteAccess,
              &v211,
              (struct _MDL **)&v212);
      if ( v68 >= 0 )
      {
        ObjectInformation = ObGetObjectInformation(SHIDWORD(v175), a4, v211, Length, &Size);
        ExUnlockUserBuffer((struct _MDL *)v212);
        SystemBasicInformation = ObjectInformation;
        EtwTiLogSyscallUsage(ObjectInformation, 6u);
      }
      else
      {
        SystemBasicInformation = v68;
        EtwTiLogSyscallUsage(v68, 6u);
      }
      goto LABEL_837;
    case 0x12u:
    case 0x90u:
      v70 = 32;
      if ( v16 != 18 )
        v70 = 40;
      Size = v70;
      if ( Length >= v70 )
      {
        Size = 0;
        LOBYTE(v8) = v16 == 144;
        SystemBasicInformation = MmGetPageFileInformation(0x40000000u, a4, Length, (_DWORD)v8, (__int64)&Size);
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = v70;
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
        v71 = 2LL;
      }
      else
      {
        if ( v16 == 120 )
          v10 = 3;
        v71 = v10;
      }
      MmQuerySystemWorkingSetInformation(v71, &Src);
      *(struct _LIST_ENTRY *)a4 = Src;
      *(_DWORD *)(a4 + 16) = v230.Flink;
      i = 64;
      *(_QWORD *)(a4 + 24) = v230.Blink;
      *(struct _LIST_ENTRY *)(a4 + 32) = v231;
      *(struct _LIST_ENTRY *)(a4 + 48) = v232;
LABEL_44:
      Size = 64;
      goto LABEL_837;
    case 0x16u:
      if ( Length >= 0x30 )
      {
        SystemBasicInformation = ExGetPoolTagInfo(a4, Length, &Size);
        goto LABEL_837;
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
      v79 = 0;
      for ( i = 0; ; i = v79 )
      {
        v185 = (_QWORD *)a4;
        if ( v79 >= (unsigned int)v13 )
          break;
        Size_4.Group = v14;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v79;
        if ( v14 || (_BYTE)v79 )
        {
          if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v79 >= 0x40u )
          {
            v80 = 0xFFFFFFFFLL;
          }
          else
          {
            v80 = *((unsigned int *)qword_140F216A8 + 64 * (unsigned __int64)v14 + (unsigned __int8)v79);
            if ( !(_DWORD)v80 )
              v80 = 0xFFFFFFFFLL;
          }
        }
        else
        {
          v80 = 0LL;
        }
        v81 = (_DWORD *)KiProcessorBlock[v80];
        *(_DWORD *)a4 = v81[2895];
        *(_DWORD *)(a4 + 4) = v81[3607];
        *(_DWORD *)(a4 + 8) = v81[3627];
        *(_DWORD *)(a4 + 12) = KeTimeIncrement;
        *(_DWORD *)(a4 + 16) = 0;
        *(_DWORD *)(a4 + 20) = 0;
        a4 += 24LL;
        ++v79;
      }
      goto LABEL_201;
    case 0x18u:
      if ( Length == 20 )
      {
        *(_DWORD *)(a4 + 4) = KiMaximumDpcQueueDepth;
        *(_DWORD *)(a4 + 8) = KiMinimumDpcRate;
        *(_DWORD *)(a4 + 12) = KiAdjustDpcThreshold;
        *(_DWORD *)(a4 + 16) = KiIdealDpcRate;
        goto LABEL_297;
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
      ExAcquireTimeRefreshLockShared(0x140000000uLL, v19, v15, v13);
      v51 = KeTimeAdjustmentFrequency;
      v52 = KeTimeSynchronization;
      ExReleaseTimeRefreshLockShared();
      if ( Length == 24 )
      {
        *(_QWORD *)a4 = v51;
        *(_QWORD *)(a4 + 8) = MEMORY[0xFFFFF78000000300];
        *(_BYTE *)(a4 + 16) = v52;
      }
      else
      {
        *(_DWORD *)a4 = MEMORY[0xFFFFF78000000300] * (unsigned __int64)KeMaximumIncrement / v51;
        *(_DWORD *)(a4 + 4) = KeMaximumIncrement;
        *(_BYTE *)(a4 + 8) = v52;
      }
LABEL_141:
      Size = Length;
      goto LABEL_837;
    case 0x1Fu:
      SystemBasicInformation = EtwQueryPerformanceTraceInformation(a4, Length, PreviousMode, &Size);
      goto LABEL_837;
    case 0x21u:
      if ( Length < 0x10 )
      {
        if ( a6 )
          *a6 = 16;
        return -1073741820;
      }
      Size = 16;
      v72 = 0;
      v73 = 0;
      if ( (_DWORD)v13 )
      {
        v74 = KiProcessorBlock;
        v75 = (unsigned int)v13;
        i = v13;
        do
        {
          v72 += *(_DWORD *)(*v74 + 35768);
          v73 += *(_DWORD *)(*v74++ + 34416);
          --v75;
        }
        while ( v75 );
      }
      *(_DWORD *)a4 = v72;
      *(_DWORD *)(a4 + 4) = v73;
      *(_DWORD *)(a4 + 8) = 0;
      *(_DWORD *)(a4 + 12) = 0;
      goto LABEL_837;
    case 0x23u:
      if ( Length >= 2 )
      {
        *(_BYTE *)a4 = (_BYTE)KdDebuggerEnabled;
        *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerNotPresent;
        v76 = 2;
        goto LABEL_269;
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
        v77 = KiProcessorBlock;
        v78 = (unsigned int)v13;
        i = v13;
        do
        {
          LODWORD(v8) = *(_DWORD *)(*v77++ + 11580) + (_DWORD)v8;
          --v78;
        }
        while ( v78 );
      }
      *(_DWORD *)a4 = (_DWORD)v8;
      *(_DWORD *)(a4 + 4) = KeThreadSwitchCounters;
      *(_DWORD *)(a4 + 8) = dword_140F217E8;
      *(_DWORD *)(a4 + 12) = dword_140F217E4;
      *(_DWORD *)(a4 + 16) = dword_140F217EC;
      *(_DWORD *)(a4 + 20) = dword_140F217F0;
      *(_DWORD *)(a4 + 24) = dword_140F217F8;
      *(_DWORD *)(a4 + 28) = dword_140F217F4;
      *(_DWORD *)(a4 + 32) = dword_140F217FC;
      *(_DWORD *)(a4 + 36) = dword_140F21800;
      *(_DWORD *)(a4 + 40) = dword_140F21804;
      *(_DWORD *)(a4 + 44) = dword_140F21808;
      Size = 48;
      goto LABEL_837;
    case 0x25u:
      if ( Length >= 0x10 )
      {
        SystemBasicInformation = CmQueryRegistryQuotaInformation(a4, v19, v15, v13);
        Size = 16;
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 16;
      return -1073741820;
    case 0x2Au:
      Size = 48 * v13;
      if ( Length < 48 * (int)v13 )
        goto LABEL_115;
      while ( 1 )
      {
        i = (int)v8;
        v185 = (_QWORD *)a4;
        if ( (unsigned int)v8 >= (unsigned int)v13 )
          break;
        Size_4.Group = v14;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v8;
        PoGetIdleTimes(&Size_4, (__int64)&Src, 0LL);
        *(struct _LIST_ENTRY *)a4 = Src;
        *(struct _LIST_ENTRY *)(a4 + 16) = v230;
        *(struct _LIST_ENTRY *)(a4 + 32) = v231;
        a4 += 48LL;
        LODWORD(v8) = (_DWORD)v8 + 1;
        LODWORD(v13) = v182;
      }
      goto LABEL_837;
    case 0x2Bu:
      if ( Length >= 0x18 )
      {
        Size = Length;
        SystemBasicInformation = ExpQueryLegacyDriverInformation(a4, &Size);
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 24;
      return -1073741820;
    case 0x2Cu:
      if ( Length >= 0xAC )
      {
        v82 = PsGetCurrentServerSiloGlobals()[76].Blink;
        ((void (*)(void))ExAcquireTimeRefreshLockShared)();
        Src = *v82;
        v230 = v82[1];
        v231 = v82[2];
        v232 = v82[3];
        v233 = v82[4];
        v234 = v82[5];
        v235 = v82[6];
        v236 = v82[7];
        v237 = v82[8];
        v238 = v82[9];
        Flink = v82[10].Flink;
        v240 = (int)v82[10].Blink;
        ExReleaseTimeRefreshLockShared();
        *(struct _LIST_ENTRY *)a4 = Src;
        *(struct _LIST_ENTRY *)(a4 + 16) = v230;
        *(struct _LIST_ENTRY *)(a4 + 32) = v231;
        *(struct _LIST_ENTRY *)(a4 + 48) = v232;
        *(struct _LIST_ENTRY *)(a4 + 64) = v233;
        *(struct _LIST_ENTRY *)(a4 + 80) = v234;
        *(struct _LIST_ENTRY *)(a4 + 96) = v235;
        *(struct _LIST_ENTRY *)(a4 + 112) = v236;
        *(struct _LIST_ENTRY *)(a4 + 128) = v237;
        *(struct _LIST_ENTRY *)(a4 + 144) = v238;
        *(_QWORD *)(a4 + 160) = Flink;
        *(_DWORD *)(a4 + 168) = v240;
        Size = 172;
        SystemBasicInformation = 0;
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 172;
      return -1073741820;
    case 0x2Du:
      SystemBasicInformation = ExpGetLookasideInformation(a4, Length, &Size);
      goto LABEL_837;
    case 0x32u:
      if ( Length == 8 )
      {
        *(_QWORD *)a4 = 0xFFFF800000000000uLL;
        goto LABEL_758;
      }
      if ( a6 )
        *a6 = 8;
      return -1073741820;
    case 0x33u:
      if ( !PreviousMode )
        return -1073741637;
      if ( Length >= 0x90 )
      {
        v88 = 0;
        goto LABEL_335;
      }
      if ( a6 )
        *a6 = 144;
      return -1073741820;
    case 0x35u:
      if ( Length >= 0x10 )
      {
        v192 = *(_DWORD *)a4;
        v221 = *(volatile void **)(a4 + 8);
        v219 = *(_DWORD *)(a4 + 4);
        ProbeForWrite(v221, v219, 4u);
        SystemBasicInformation = ExpGetProcessInformation(
                                   (_DWORD)v221,
                                   v219,
                                   (unsigned int)&Size,
                                   (unsigned int)&v192,
                                   5);
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 16;
      return -1073741820;
    case 0x37u:
      SystemBasicInformation = ExpQueryNumaProcessorMap(a4, Length, &Size, v13);
      goto LABEL_837;
    case 0x38u:
      SystemBasicInformation = PfSnQueryPrefetcherInformation(0x140000000uLL, a4, Length, PreviousMode, &Size);
      goto LABEL_837;
    case 0x3Au:
      if ( Length >= 4 )
      {
        *(_DWORD *)a4 = KeGetRecommendedSharedDataAlignment();
        goto LABEL_185;
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
        goto LABEL_377;
      KeyValueInformation = 0LL;
      v242 = 0;
      ResultLength = 0;
      KeyHandle = 0LL;
      v90 = 0;
      v54 = ZwOpenKey(&KeyHandle, 1u, &stru_140E091B8);
      if ( v54 >= 0 )
      {
        v54 = ZwQueryValueKey(
                KeyHandle,
                &stru_140E09178,
                KeyValuePartialInformation,
                &KeyValueInformation,
                0x14u,
                &ResultLength);
        if ( v54 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
          v90 = HIDWORD(KeyValueInformation);
        ZwClose(KeyHandle);
      }
      _InterlockedCompareExchange((volatile signed __int32 *)(MmWriteableSharedUserData + 736), v90, -1);
      if ( (int)(v54 + 0x80000000) < 0 || v54 == -1073741772 )
        v54 = 0;
      SystemBasicInformation = v54;
      if ( v54 >= 0 )
      {
LABEL_377:
        *(_DWORD *)a4 = MEMORY[0xFFFFF780000002E0];
        goto LABEL_185;
      }
      return v54;
    case 0x3Cu:
      SystemBasicInformation = ExpQueryNumaAvailableMemory(a4);
      goto LABEL_837;
    case 0x3Du:
      Size = 80 * v13;
      if ( Length < 80 * (int)v13 )
        goto LABEL_115;
      v185 = (_QWORD *)a4;
      v46 = 0;
      i = 0;
      while ( v46 < (unsigned int)v13 )
      {
        Size_4.Group = v14;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v46;
        if ( v14 || (_BYTE)v46 )
        {
          if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v46 >= 0x40u )
          {
            v47 = 0xFFFFFFFFLL;
          }
          else
          {
            v47 = *((unsigned int *)qword_140F216A8 + 64 * (unsigned __int64)v14 + (unsigned __int8)v46);
            if ( !(_DWORD)v47 )
              v47 = 0xFFFFFFFFLL;
          }
        }
        else
        {
          v47 = 0LL;
        }
        v179 = (void *)KiProcessorBlock[v47];
        PoGetPerfStateAndParkingInfo(&Size_4, (__int64)&Src, 0LL, &v217);
        *(_OWORD *)a4 = 0LL;
        *(_OWORD *)(a4 + 16) = 0LL;
        *(_OWORD *)(a4 + 32) = 0LL;
        *(_OWORD *)(a4 + 48) = 0LL;
        *(_OWORD *)(a4 + 64) = 0LL;
        v48 = KeMaximumIncrement;
        v49 = v179;
        *(_QWORD *)(a4 + 40) = KeMaximumIncrement
                             * (unsigned __int64)(unsigned int)(*((_DWORD *)v179 + 8593) + *((_DWORD *)v179 + 8594));
        *(_QWORD *)(a4 + 48) = v48 * *(unsigned int *)(v49[3] + 652LL);
        if ( BYTE4(v230.Blink) )
        {
          *(_BYTE *)a4 = Src.Blink;
          *(_BYTE *)(a4 + 7) = BYTE4(Src.Blink);
          *(_BYTE *)(a4 + 8) = v230.Flink;
          *(_DWORD *)(a4 + 12) = 1;
        }
        *(_QWORD *)(a4 + 72) = v217;
        a4 += 80LL;
        v185 = (_QWORD *)a4;
        i = ++v46;
        LODWORD(v13) = v182;
      }
      goto LABEL_837;
    case 0x3Eu:
      if ( Length == 64 )
      {
        SystemBasicInformation = ExpGetSystemEmulationBasicInformation(a4);
        Size = 64;
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 64;
      return -1073741820;
    case 0x3Fu:
      if ( Length >= 0xC )
      {
        SystemBasicInformation = ExpGetSystemEmulationProcessorInformation(a4);
        Size = 12;
        goto LABEL_837;
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
      if ( !(unsigned int)ExIsRestrictedCaller(PreviousMode, (char *)&v175 + 4) )
      {
        v209 = 0LL;
        v210 = 0LL;
        v65 = ExLockUserBuffer(
                a4,
                Length,
                KeGetCurrentThread()->PreviousMode,
                IoWriteAccess,
                &v209,
                (struct _MDL **)&v210);
        if ( v65 >= 0 )
        {
          v194 = 0;
          v66 = v209;
          *v209 = 0LL;
          v67 = ExpSnapShotHandleTables(
                  (__int64 (__fastcall *)(int, int, int, int, __int64, int, __int64))ObpCaptureHandleInformationEx,
                  HIDWORD(v175),
                  v66,
                  Length,
                  &v194,
                  1);
          Size = v194;
          ExUnlockUserBuffer((struct _MDL *)v210);
          SystemBasicInformation = v67;
          EtwTiLogSyscallUsage(v67, 5u);
        }
        else
        {
          SystemBasicInformation = v65;
          EtwTiLogSyscallUsage(v65, 5u);
        }
        goto LABEL_837;
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
        v91 = KiProcessorBlock;
        v92 = (unsigned int)v13;
        i = v13;
        do
        {
          LODWORD(v8) = *(_DWORD *)(*v91++ + 34812) + (_DWORD)v8;
          --v92;
        }
        while ( v92 );
      }
      *(_DWORD *)a4 = (_DWORD)v8;
      goto LABEL_185;
    case 0x42u:
      if ( Length < 0x20 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (char *)&v175 + 4) )
        return -1073741790;
      SystemBasicInformation = ExGetBigPoolInfo(SHIDWORD(v175), (_DWORD *)a4, Length, &Size);
      EtwTiLogSyscallUsage(SystemBasicInformation, 7u);
      goto LABEL_837;
    case 0x45u:
    case 0xE8u:
    case 0xECu:
    case 0xEDu:
      goto LABEL_509;
    case 0x46u:
      if ( Length == 4 )
      {
        *(_DWORD *)a4 = ObpObjectSecurityMode;
        goto LABEL_185;
      }
      if ( a6 )
        *a6 = 4;
      return -1073741820;
    case 0x48u:
      if ( Length != 8 )
        return -1073741811;
      v93 = v15 - 7;
      if ( v93 )
      {
        if ( v93 != 1 )
          return -1073741637;
        *(_DWORD *)a4 = 8;
        *(_DWORD *)(a4 + 4) = (unsigned __int8)guard_dispatch_icall_no_overrides(0x140000000uLL);
      }
      else
      {
        *(_DWORD *)a4 = 7;
        LOBYTE(v8) = off_140E00B18[0] != xKdEnumerateDebuggingDevices;
        *(_DWORD *)(a4 + 4) = (_DWORD)v8;
      }
      goto LABEL_758;
    case 0x49u:
      SystemBasicInformation = KeBuildLogicalProcessorSystemInformation(v14, a4, Length, &Size);
      goto LABEL_837;
    case 0x4Cu:
      SystemBasicInformation = ExpGetSystemFirmwareTableInformation((char *)a4, PreviousMode, Length, &Size);
      EtwTiLogSyscallUsage(SystemBasicInformation, 0xEu);
      goto LABEL_837;
    case 0x4Du:
      if ( (unsigned int)ExIsRestrictedCaller(PreviousMode, (char *)&v175 + 4) )
        return -1073741790;
      LOBYTE(v8) = SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) == 0;
      SystemBasicInformation = ExpQueryModuleInformationEx(SHIDWORD(v175), (_WORD *)a4, Length, (int)v8, (int *)&Size);
      EtwTiLogSyscallUsage(SystemBasicInformation, 1u);
      goto LABEL_837;
    case 0x4Fu:
      SystemBasicInformation = PfQuerySuperfetchInformation(0x140000000LL, (__int128 *)a4, Length, PreviousMode, &Size);
      goto LABEL_837;
    case 0x50u:
      SystemBasicInformation = MmQueryMemoryListInformation(
                                 (ULONG **)0xFFFFFFFFFFFFFFFFLL,
                                 (_OWORD *)a4,
                                 Length,
                                 v13,
                                 &Size);
      goto LABEL_837;
    case 0x53u:
      v101 = 8 * v13;
      Size = v101;
      if ( Length < 8 )
        goto LABEL_445;
      if ( Length >= v101 )
        v102 = v182;
      else
        v102 = Length >> 3;
      v103 = Length < v101 ? 0xC0000004 : 0;
      v185 = (_QWORD *)a4;
      LOBYTE(v21) = 1;
      KeFlushProcessWriteBuffers(v21);
      v104 = 0;
      while ( 1 )
      {
        i = v104;
        if ( v104 >= v102 )
          break;
        Size_4.Group = v14;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v104;
        if ( v14 || (_BYTE)v104 )
        {
          if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v104 >= 0x40u )
          {
            v105 = 0xFFFFFFFFLL;
          }
          else
          {
            v105 = *((unsigned int *)qword_140F216A8 + 64 * (unsigned __int64)v14 + (unsigned __int8)v104);
            if ( !(_DWORD)v105 )
              v105 = 0xFFFFFFFFLL;
          }
        }
        else
        {
          v105 = 0LL;
        }
        v106 = *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[v105] + 24) + 72LL);
        v107 = v185;
        *v185 = v106;
        v185 = v107 + 1;
        v104 = i + 1;
        v14 = v174;
      }
LABEL_495:
      SystemBasicInformation = v103;
      goto LABEL_837;
    case 0x56u:
      SystemBasicInformation = ObQueryRefTraceInformation((char *)a4, Length, &Size);
      goto LABEL_837;
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
        SystemBasicInformation = -1073741820;
      }
      goto LABEL_837;
    case 0x58u:
      *(_OWORD *)ProcessId = 0LL;
      v204 = 0LL;
      Size = 24;
      if ( Length != 24 )
      {
        SystemBasicInformation = -1073741820;
        goto LABEL_837;
      }
      *(_OWORD *)ProcessId = *(_OWORD *)a4;
      v204 = *(_QWORD *)(a4 + 16);
      if ( LOWORD(ProcessId[1]) || (BYTE2(ProcessId[1]) & 1) != 0 )
        return -1073741811;
      if ( PreviousMode && WORD1(ProcessId[1]) && (v204 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      CurrentThread = KeGetCurrentThread();
      v191 = WORD1(ProcessId[1]);
      --CurrentThread->KernelApcDisable;
      v54 = PsLookupProcessByProcessId(ProcessId[0], &Process);
      if ( v54 >= 0 )
      {
        SystemBasicInformation = PsQueryFullProcessImageName(Process, a4 + 8, v204, &v191);
        ObfDereferenceObjectWithTag(Process, 0x746C6644u);
        v55 = CurrentThread->KernelApcDisable++ == -1;
        if ( v55
          && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( SystemBasicInformation == -1073741820 )
          *(_WORD *)(a4 + 10) = v191;
        goto LABEL_837;
      }
      v55 = CurrentThread->KernelApcDisable++ == -1;
      if ( v55
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return v54;
    case 0x5Au:
      Size = 32;
      if ( Length < 0x14 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      *(_OWORD *)a4 = *(_OWORD *)&ExpBootEnvironmentInformation;
      *(_DWORD *)(a4 + 16) = dword_140EFE810;
      if ( Length < Size )
LABEL_297:
        Size = 20;
      else
        *(_QWORD *)(a4 + 24) = qword_140EFE818;
      goto LABEL_837;
    case 0x5Bu:
      SystemBasicInformation = HvlQueryEnlightenmentInfo((_OWORD *)a4, Length, v15, &Size);
      goto LABEL_837;
    case 0x5Cu:
      if ( !PreviousMode )
        return -1073741637;
      if ( Length == 40 )
      {
        SystemBasicInformation = VfGetVerifierInformationEx(a4, v19, v15, v13);
        Size = ((SystemBasicInformation >> 31) & 0xFFFFFFD8) + 40;
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 40;
      return -1073741820;
    case 0x62u:
      v103 = IopRetrieveSystemDeviceName(SyspartDirectGetSystemPartition, a4, Length, &Size);
      if ( v103 == -1073740718 && IopAmbiguousSystemDisk )
      {
        v188 = 0;
        SystemDeviceName = SiGetSystemDeviceName(SiGetSystemDisk, 0LL, 0LL, &v188);
        v117 = SystemDeviceName;
        if ( SystemDeviceName == -1073741789 )
        {
          v118 = v188;
          Pool2 = ExAllocatePool2(0x100uLL);
          v120 = (void *)Pool2;
          if ( Pool2 )
          {
            v117 = SiGetSystemDeviceName(SiGetSystemDisk, Pool2, v118, &v188);
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
        else if ( SystemDeviceName >= 0 )
        {
          v117 = -1073741595;
        }
        if ( v117 >= 0 )
          ExFreePoolWithTag(v8, 0);
        if ( v117 == -1073740718 )
          v103 = -1073740719;
      }
      goto LABEL_495;
    case 0x63u:
      VerifierInformation = IopRetrieveSystemDeviceName(SyspartDirectGetSystemDisk, a4, Length, &Size);
      if ( VerifierInformation != -1073740718 )
        goto LABEL_336;
      if ( IopAmbiguousSystemDisk )
        VerifierInformation = -1073740719;
      SystemBasicInformation = VerifierInformation;
      goto LABEL_837;
    case 0x64u:
      WORD4(v218) = v14;
      *(_QWORD *)&v218 = KeQueryGroupAffinity(v14);
      v44 = __popcnt(v218);
      SystemBasicInformation = PpmCapturePerformanceDistribution(0LL, 0, v44, (__int64)&v218, &v176);
      if ( SystemBasicInformation == -1073741820 )
      {
        if ( v176 <= Length )
        {
          v45 = (void *)ExAllocatePool2(0x40uLL);
          v180 = v45;
          if ( v45 )
          {
            SystemBasicInformation = PpmCapturePerformanceDistribution(
                                       (unsigned __int64)v45,
                                       v176,
                                       v44,
                                       (__int64)&v218,
                                       &Size);
            if ( SystemBasicInformation >= 0 )
              memmove((void *)a4, v45, Size);
            ExFreePoolWithTag(v45, 0x744D5050u);
          }
          else
          {
            SystemBasicInformation = -1073741670;
          }
        }
        else
        {
          SystemBasicInformation = -1073741820;
          Size = v176;
        }
      }
      goto LABEL_837;
    case 0x65u:
      SystemBasicInformation = ExpQueryNumaProximityNode((unsigned int *)a4, Length, &Size);
      goto LABEL_837;
    case 0x66u:
      if ( Length >= 0x1B0 )
      {
        v83 = PsGetCurrentServerSiloGlobals()[76].Blink;
        ((void (*)(void))ExAcquireTimeRefreshLockShared)();
        p_Src = &Src;
        v85 = 3LL;
        v86 = 3LL;
        do
        {
          *p_Src = *v83;
          p_Src[1] = v83[1];
          p_Src[2] = v83[2];
          p_Src[3] = v83[3];
          p_Src[4] = v83[4];
          p_Src[5] = v83[5];
          p_Src[6] = v83[6];
          p_Src += 8;
          p_Src[-1] = v83[7];
          v83 += 8;
          --v86;
        }
        while ( v86 );
        *p_Src = *v83;
        p_Src[1] = v83[1];
        p_Src[2] = v83[2];
        ExReleaseTimeRefreshLockShared();
        v87 = &Src;
        do
        {
          *(struct _LIST_ENTRY *)a4 = *v87;
          *(struct _LIST_ENTRY *)(a4 + 16) = v87[1];
          *(struct _LIST_ENTRY *)(a4 + 32) = v87[2];
          *(struct _LIST_ENTRY *)(a4 + 48) = v87[3];
          *(struct _LIST_ENTRY *)(a4 + 64) = v87[4];
          *(struct _LIST_ENTRY *)(a4 + 80) = v87[5];
          *(struct _LIST_ENTRY *)(a4 + 96) = v87[6];
          a4 += 128LL;
          *(struct _LIST_ENTRY *)(a4 - 16) = v87[7];
          v87 += 8;
          --v85;
        }
        while ( v85 );
        *(struct _LIST_ENTRY *)a4 = *v87;
        *(struct _LIST_ENTRY *)(a4 + 16) = v87[1];
        *(struct _LIST_ENTRY *)(a4 + 32) = v87[2];
        Size = 432;
        SystemBasicInformation = 0;
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 432;
      return -1073741820;
    case 0x67u:
      if ( qword_140F044B8 )
        SystemBasicInformation = guard_dispatch_icall_no_overrides(a4);
      else
        SystemBasicInformation = -1073741823;
      goto LABEL_837;
    case 0x69u:
      SystemBasicInformation = guard_dispatch_icall_no_overrides(23LL);
      if ( SystemBasicInformation != -1073741820 )
        goto LABEL_509;
      v76 = v176;
      if ( Length < v176 || !a4 )
        goto LABEL_269;
      if ( v173 )
      {
        v121 = (void *)ExAllocatePool2(0x101uLL);
        v180 = v121;
        if ( !v121 )
        {
          SystemBasicInformation = -1073741670;
          goto LABEL_837;
        }
      }
      else
      {
        v121 = (void *)a4;
        v180 = (PVOID)a4;
      }
      v122 = guard_dispatch_icall_no_overrides(23LL);
      SystemBasicInformation = v122;
      if ( !v173 )
        goto LABEL_837;
      if ( v122 >= 0 )
        goto LABEL_519;
      goto LABEL_520;
    case 0x6Au:
      goto LABEL_836;
    case 0x6Bu:
    case 0xE7u:
      v94 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)&Src;
      v180 = &Src;
      v95 = 80;
      v176 = 80;
      if ( Length < 0x50 )
      {
        v95 = Length;
        v176 = Length;
      }
      Size = v95;
      p_Size_4 = &Size_4;
      if ( v16 != 231 )
        p_Size_4 = 0LL;
      while ( 2 )
      {
        SystemBasicInformation = KeQueryLogicalProcessorRelationship(p_Size_4, RelationshipType, v94, &Size);
        if ( SystemBasicInformation < 0 )
        {
          if ( SystemBasicInformation == -1073741820 )
          {
            if ( Size <= Length )
            {
              if ( v94 && v94 != (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)&Src )
                ExFreePoolWithTag(v94, 0);
              v94 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePool2(0x101uLL);
              v180 = v94;
              if ( v94 )
              {
                v176 = Size;
                continue;
              }
              SystemBasicInformation = -1073741670;
            }
            else
            {
              SystemBasicInformation = -1073741820;
            }
          }
        }
        else
        {
          memmove((void *)a4, v94, Size);
          SystemBasicInformation = 0;
        }
        break;
      }
      if ( v94 && v94 != (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)&Src )
        goto LABEL_405;
      goto LABEL_837;
    case 0x6Cu:
      v110 = 8 * v13;
      Size = 8 * v13;
      if ( Length < 8 )
        goto LABEL_445;
      v111 = Length < v110;
      if ( Length < v110 )
      {
        LODWORD(v13) = Length >> 3;
        v111 = Length < v110;
      }
      v185 = (_QWORD *)a4;
      v112 = 0;
      while ( 1 )
      {
        i = v112;
        if ( v112 >= (unsigned int)v13 )
          break;
        Size_4.Group = v14;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v112;
        if ( v14 || (_BYTE)v112 )
        {
          if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v112 >= 0x40u )
          {
            v113 = 0xFFFFFFFFLL;
          }
          else
          {
            v113 = *((unsigned int *)qword_140F216A8 + 64 * (unsigned __int64)v14 + (unsigned __int8)v112);
            if ( !(_DWORD)v113 )
              v113 = 0xFFFFFFFFLL;
          }
        }
        else
        {
          v113 = 0LL;
        }
        v114 = *(_QWORD *)(KiProcessorBlock[v113] + 34680);
        v115 = v185;
        *v185 = v114;
        v185 = v115 + 1;
        v112 = i + 1;
        v14 = v174;
      }
      SystemBasicInformation = v111 ? 0xC0000004 : 0;
      goto LABEL_837;
    case 0x6Du:
      SystemBasicInformation = SmQueryStoreInformation(0x140000000uLL, a4, Length, PreviousMode, &Size);
      goto LABEL_837;
    case 0x70u:
      SystemBasicInformation = IoQueryVhdBootInformation(0x140000000LL, (void *)a4, Length, &Size);
      goto LABEL_837;
    case 0x71u:
      SystemBasicInformation = PsQueryCpuQuotaInformation((_DWORD *)a4, Length, PreviousMode, &Size);
      goto LABEL_837;
    case 0x73u:
      if ( (_DWORD)v19 )
      {
        SystemBasicInformation = -1073741820;
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
          SystemBasicInformation = -1073741820;
        }
      }
      goto LABEL_837;
    case 0x74u:
      SystemBasicInformation = IoQueryLowPriorityIoInformation(0x140000000uLL, a4, Length, &Size);
      goto LABEL_837;
    case 0x75u:
      Size = 1096;
      if ( Length != 1096 )
      {
        SystemBasicInformation = -1073741820;
        goto LABEL_837;
      }
      if ( PreviousMode )
        return -1073741790;
      SystemBasicInformation = ExQueryBootEntropyInformation(a4);
      goto LABEL_837;
    case 0x76u:
      if ( !PreviousMode )
        return -1073741637;
      if ( Length < 0x110 )
      {
        if ( a6 )
          *a6 = 272;
        return -1073741820;
      }
      v88 = 1;
LABEL_335:
      VerifierInformation = VfGetVerifierInformation((void *)a4, Length, &Size, v88);
LABEL_336:
      SystemBasicInformation = VerifierInformation;
      goto LABEL_837;
    case 0x79u:
      Size = 4 * (unsigned __int16)KeNumberNodes;
      if ( Length >= Size )
      {
        i = 0;
        v97 = 0;
        v98 = 0;
        v99 = 0;
        v100 = v184;
        while ( (unsigned int)v8 < (unsigned __int16)KeNumberNodes )
        {
          *(_DWORD *)(a4 + 4LL * v97) = *((_DWORD *)KeNodeDistance
                                        + v99
                                        + v100 * (unsigned int)(unsigned __int16)KeNumberNodes);
          v97 = v98 + 1;
          v99 = v98 + 1;
          i = v98 + 1;
          LODWORD(v8) = ++v98;
        }
      }
      else
      {
        SystemBasicInformation = -1073741820;
      }
      goto LABEL_837;
    case 0x7Au:
      Size = 8;
      if ( Length != 8 || !a4 )
        goto LABEL_115;
      v123 = (_DWORD *)ExAllocatePool2(0x101uLL);
      v179 = v123;
      if ( v123 )
      {
        SystemBasicInformation = guard_dispatch_icall_no_overrides(26LL);
        if ( SystemBasicInformation >= 0 )
        {
          *(_DWORD *)a4 = *v123;
          v124 = *(_DWORD *)(a4 + 4) ^ (v123[1] ^ *(_DWORD *)(a4 + 4)) & 1;
          *(_DWORD *)(a4 + 4) = v124;
          v125 = v124 ^ (v123[1] ^ v124) & 2;
          *(_DWORD *)(a4 + 4) = v125;
          *(_DWORD *)(a4 + 4) = v125 ^ (v123[1] ^ v125) & 4;
        }
        ExFreePoolWithTag(v123, 0x6F666E49u);
      }
      else
      {
        SystemBasicInformation = -1073741670;
      }
      goto LABEL_837;
    case 0x7Bu:
      if ( Length != 32 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
      Src.Flink = (struct _LIST_ENTRY *)MmGetAvailablePages(ProcessPartitionId);
      Src.Blink = (struct _LIST_ENTRY *)MmGetTotalCommittedPages(v33);
      v230.Flink = (struct _LIST_ENTRY *)MmGetTotalCommitLimit(v34);
      v230.Blink = (struct _LIST_ENTRY *)MmGetPeakCommitment(v35);
      v36 = v230.Blink;
      if ( v230.Blink < Src.Blink )
        v36 = Src.Blink;
      v230.Blink = v36;
      *(struct _LIST_ENTRY *)a4 = Src;
      *(struct _LIST_ENTRY *)(a4 + 16) = v230;
      goto LABEL_639;
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
            SystemBasicInformation = -1073741820;
          }
        }
        else
        {
          SystemBasicInformation = -1073741637;
        }
      }
      else
      {
        SystemBasicInformation = -1073741820;
      }
      goto LABEL_837;
    case 0x7Eu:
      Size = 32;
      if ( Length == 32 )
      {
        SystemBasicInformation = BgkQueryBootGraphicsInformation(0LL, &Src, v15, v13);
        if ( SystemBasicInformation >= 0 )
        {
          v126 = Src.Flink;
          if ( v173 )
            v126 = 0LL;
          Src.Flink = v126;
          memmove((void *)a4, &Src, Size);
        }
      }
      else
      {
        SystemBasicInformation = -1073741820;
      }
      goto LABEL_837;
    case 0x80u:
    case 0xF4u:
      if ( (_DWORD)v19 )
      {
        SystemBasicInformation = -1073741820;
      }
      else
      {
        v132 = MmEnumerateBadPages(&v201);
        v133 = 0LL;
        v94 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)v201;
        if ( v201 )
        {
          v133 = *v201 & 0xFFFFFFFFFFFFFLL;
          if ( v133 <= 0x1FFFFFFF )
          {
            Size = 8 * *(_DWORD *)v201;
            LODWORD(v8) = 8 * v133;
          }
          else
          {
            v132 = -1073741820;
          }
        }
        if ( Length < (unsigned int)v8 )
          v132 = -1073741820;
        SystemBasicInformation = v132;
        if ( v201 )
        {
          if ( v132 >= 0 )
          {
            if ( v186 == 128 )
            {
              v134 = v201 + 1;
              for ( j = v201 + 1; v133; --v133 )
              {
                if ( (*v134 & 0x4000000000000000LL) == 0 )
                {
                  v136 = *v134 & 0x7FFFFFFFFFFFFFFFLL;
                  *v134 = v136;
                  *j++ = v136;
                }
                ++v134;
              }
              Size = 8 * (((char *)j - (char *)v94 - 8) >> 3);
            }
            memmove((void *)a4, &v94->Processor, Size);
          }
LABEL_405:
          ExFreePoolWithTag(v94, 0);
        }
      }
      goto LABEL_837;
    case 0x85u:
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      SystemBasicInformation = ExpGetSystemPlatformBinary(a4, Length, PreviousMode);
      EtwTiLogSyscallUsage(SystemBasicInformation, 0xDu);
      goto LABEL_837;
    case 0x86u:
      Size = 32;
      if ( Length == 32 )
        SystemBasicInformation = sub_140A048EC(0x140000000uLL, a4, v15, v13);
      else
        SystemBasicInformation = -1073741820;
      goto LABEL_837;
    case 0x87u:
      Size = 8;
      if ( Length >= 8 )
      {
        if ( (unsigned int)HvlQueryActiveProcessors(&v195, 0LL) )
        {
          SystemBasicInformation = -1073741637;
        }
        else
        {
          SystemBasicInformation = HvlQueryProcessorTopologyCount(0LL, v196);
          if ( SystemBasicInformation )
          {
            SystemBasicInformation = -1073741637;
          }
          else
          {
            *(_DWORD *)a4 = v195;
            *(_DWORD *)(a4 + 4) = v196[0];
          }
        }
      }
      else
      {
        SystemBasicInformation = -1073741820;
      }
      goto LABEL_837;
    case 0x88u:
    case 0x89u:
      if ( Length == 48 )
        return ExpGetDeviceDataInformation(v16, a4, 48);
      if ( a6 )
        *a6 = 48;
      return -1073741820;
    case 0x8Au:
      SystemBasicInformation = ExpQueryMemoryTopologyInformation((void *)a4);
      EtwTiLogSyscallUsage(SystemBasicInformation, 0xAu);
      goto LABEL_837;
    case 0x8Bu:
      SystemBasicInformation = ExpQueryChannelInformation((void *)a4);
      EtwTiLogSyscallUsage(SystemBasicInformation, 0xBu);
      goto LABEL_837;
    case 0x8Cu:
      if ( a6 || Length >= 8 )
      {
        SystemBasicInformation = BgkQueryBootGraphicsInformation(2LL, &Size, v15, v13);
        if ( SystemBasicInformation >= 0 )
        {
          if ( Size )
          {
            if ( Length >= Size )
            {
              SystemBasicInformation = BgkQueryBootGraphicsInformation(1LL, &P, v127, v128);
              if ( SystemBasicInformation >= 0 )
              {
                v129 = P;
                if ( P )
                {
                  memmove((void *)a4, P, Size);
                  ExFreePoolWithTag(v129, 0x4B494742u);
                }
                else
                {
                  SystemBasicInformation = -1073741670;
                }
              }
            }
            else
            {
              SystemBasicInformation = -1073741789;
            }
          }
          else
          {
            SystemBasicInformation = -1073741670;
          }
        }
      }
      else
      {
        SystemBasicInformation = -1073741811;
      }
      goto LABEL_837;
    case 0x8Fu:
    case 0x91u:
    case 0xABu:
    case 0xB3u:
      SystemBasicInformation = SeSecureBootQueryInformation(v16, a4, Length, &Size);
      goto LABEL_837;
    case 0x93u:
      SystemBasicInformation = ExpQueryPortableWorkspaceEfiLauncherInformation((bool *)a4, Length, &Size);
      goto LABEL_837;
    case 0x95u:
      if ( Length >= 3 )
      {
        *(_BYTE *)a4 = KdpBootedNodebug == 0;
        *(_BYTE *)(a4 + 1) = (_BYTE)KdDebuggerEnabled;
        *(_BYTE *)(a4 + 2) = (_BYTE)KdDebuggerNotPresent == 0;
        Size = 3;
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 3;
      return -1073741820;
    case 0x96u:
      if ( a4 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741727;
      SystemBasicInformation = ExpQueryBootLoaderMetadata((void *)a4, Length, &Size);
      EtwTiLogSyscallUsage(SystemBasicInformation, 0xFu);
      goto LABEL_837;
    case 0x97u:
      Size = 4;
      if ( Length >= 4 )
      {
        *(_DWORD *)a4 = ExSoftRebootFlags;
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 4;
      return -1073741820;
    case 0x99u:
      if ( (_DWORD)v19 )
      {
        SystemBasicInformation = -1073741820;
      }
      else
      {
        v137 = 32;
        Size = 32;
        if ( (unsigned int)Feature_OfflineCrashTableV3__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( Length < 0xC )
          {
            SystemBasicInformation = -1073741820;
          }
          else
          {
            if ( Length <= 0x20 )
              v137 = Length;
            Size = v137;
            memmove((void *)a4, &PoOffCrashConfigTable, v137);
          }
        }
        else if ( Length < 0x20 )
        {
          if ( Length < 0xC )
          {
            SystemBasicInformation = -1073741820;
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
          *(_QWORD *)(a4 + 16) = xmmword_140F0DB90;
          *(_DWORD *)(a4 + 24) = DWORD2(xmmword_140F0DB90);
        }
      }
      goto LABEL_837;
    case 0x9Au:
      if ( Length < 0x20 )
      {
        if ( a6 )
          *a6 = 32;
        return -1073741820;
      }
      SystemBasicInformation = ExpGetSystemProcessorFeaturesInformation((_QWORD *)a4);
LABEL_639:
      Size = 32;
      goto LABEL_837;
    case 0x9Cu:
      Size = 128;
      if ( Length == 128 )
      {
        SystemBasicInformation = BgkQueryBootGraphicsInformation(3LL, &Src, v15, v13);
        if ( SystemBasicInformation >= 0 )
          memmove((void *)a4, &Src, Size);
      }
      else
      {
        SystemBasicInformation = -1073741820;
      }
      goto LABEL_837;
    case 0x9Du:
      Size = WORD5(ExpManufacturingInformation) + 24;
      if ( Length >= Size )
      {
        v138 = (void *)(a4 + 24);
        *(_OWORD *)a4 = 0LL;
        *(_QWORD *)(a4 + 16) = 0LL;
        *(_DWORD *)a4 = ExpManufacturingInformation;
        *(_DWORD *)(a4 + 8) = DWORD2(ExpManufacturingInformation);
        if ( WORD4(ExpManufacturingInformation) )
        {
          *(_QWORD *)(a4 + 16) = v138;
          memmove(v138, ::Data, WORD5(ExpManufacturingInformation));
        }
      }
      else
      {
        SystemBasicInformation = -1073741820;
      }
      goto LABEL_837;
    case 0x9Eu:
      Size = 1;
      if ( Length )
      {
        *(_BYTE *)a4 = PoEnergyEstimationEnabled();
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 1;
      goto LABEL_115;
    case 0x9Fu:
      SystemBasicInformation = HvlQueryDetailInfo((_OWORD *)a4, Length, v15, &Size);
      goto LABEL_837;
    case 0xA0u:
      v139 = (_DWORD)v13 << 6;
      Size = (_DWORD)v13 << 6;
      if ( Length < 0x40 )
        goto LABEL_445;
      v140 = Length < v139;
      if ( Length < v139 )
      {
        LODWORD(v13) = Length >> 6;
        v182 = Length >> 6;
        v140 = Length < v139;
      }
      v141 = v140 ? 0xC0000004 : 0;
      v185 = (_QWORD *)a4;
      v142 = 0;
      i = 0;
      while ( v142 < (unsigned int)v13 )
      {
        Size_4.Group = v14;
        *(_WORD *)&Size_4.Number = (unsigned __int8)v142;
        if ( v14 || (_BYTE)v142 )
        {
          if ( v14 >= (unsigned __int16)KiActiveGroups || (unsigned __int8)v142 >= 0x40u )
          {
            v143 = 0xFFFFFFFFLL;
          }
          else
          {
            v143 = *((unsigned int *)qword_140F216A8 + 64 * (unsigned __int64)v14 + (unsigned __int8)v142);
            if ( !(_DWORD)v143 )
              v143 = 0xFFFFFFFFLL;
          }
        }
        else
        {
          v143 = 0LL;
        }
        KeQueryCycleTimeStatsProcessor(KiProcessorBlock[v143], (_QWORD *)a4);
        a4 += 64LL;
        v185 = (_QWORD *)a4;
        v142 = v144 + 1;
        i = v142;
        LODWORD(v13) = v182;
      }
      SystemBasicInformation = v141;
      goto LABEL_837;
    case 0xA2u:
      SystemBasicInformation = SeQueryTrustedPlatformModuleInformation((int *)a4, Length, &Size);
      goto LABEL_837;
    case 0xA3u:
      if ( Length )
      {
        *(_BYTE *)a4 = KdIgnoreUmExceptions;
        Size = 1;
        goto LABEL_837;
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
      if ( qword_140F04528 )
        SystemBasicInformation = guard_dispatch_icall_no_overrides(v16);
      else
        SystemBasicInformation = -1073741823;
      goto LABEL_837;
    case 0xA5u:
      Size = 16;
      if ( Length == 16 )
      {
        LOBYTE(Src.Flink) = (__int64)Src.Flink & 0xEF | (16 * (ExpFirmwarePageProtectionSupported & 1));
        Feature_Servicing_VBSEnclavesForArgon__private_IsEnabledDeviceUsageNoInline();
        if ( VslIsSecureKernelRunning() )
        {
          if ( v145 )
          {
            v177 = 0;
            LOBYTE(Src.Flink) |= 1u;
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags(0LL);
            v147 = (char)Src.Flink;
            if ( (NestedPageProtectionFlags & 2) != 0 )
            {
              v147 = LOBYTE(Src.Flink) | 2;
              LOBYTE(Src.Flink) |= 2u;
            }
            if ( (NestedPageProtectionFlags & 0x20) != 0 )
            {
              v147 |= 4u;
              LOBYTE(Src.Flink) = v147;
            }
            if ( (NestedPageProtectionFlags & 0x10) != 0 )
              LOBYTE(Src.Flink) = v147 | 8;
            v148 = BYTE1(Src.Flink);
            if ( (NestedPageProtectionFlags & 0x200) != 0 )
            {
              LOBYTE(v148) = BYTE1(Src.Flink) | 2;
              BYTE1(Src.Flink) |= 2u;
            }
            if ( !v197 )
              goto LABEL_697;
            SystemBasicInformation = VslIsTrustletRunning(v197, &v177);
            v149 = v177;
LABEL_696:
            v148 = BYTE1(Src.Flink);
            LOBYTE(v148) = v149 & 1 | BYTE1(Src.Flink) & 0xFE;
            BYTE1(Src.Flink) = v148;
LABEL_697:
            if ( (NestedPageProtectionFlags & 0x800) != 0 )
            {
              LOBYTE(v148) = v148 | 4;
              BYTE1(Src.Flink) = v148;
            }
            if ( (NestedPageProtectionFlags & 0x1000) != 0 )
            {
              LOBYTE(v148) = v148 | 8;
              BYTE1(Src.Flink) = v148;
            }
            if ( (NestedPageProtectionFlags & 0x2000) != 0 )
            {
              LOBYTE(v148) = v148 | 0x10;
              BYTE1(Src.Flink) = v148;
            }
            if ( (NestedPageProtectionFlags & 0x10000) != 0 )
            {
              LOBYTE(v148) = v148 | 0x20;
              BYTE1(Src.Flink) = v148;
            }
            if ( (NestedPageProtectionFlags & 0x40000) != 0 )
            {
              LOBYTE(v148) = v148 | 0x40;
              BYTE1(Src.Flink) = v148;
            }
            if ( (NestedPageProtectionFlags & 0x80000) != 0 )
              BYTE2(Src.Flink) |= 1u;
            IsEncryptionKeyAvailable = VslIsEncryptionKeyAvailable(v148);
            LOBYTE(Src.Flink) = (__int64)Src.Flink & 0xDF | (32 * (IsEncryptionKeyAvailable & 1));
            goto LABEL_710;
          }
          CurrentServerSilo = PsGetCurrentServerSilo();
          if ( PsIsHostSilo(CurrentServerSilo) )
          {
            v178[0] = 0;
            LOBYTE(Src.Flink) |= 1u;
            NestedPageProtectionFlags = VslGetNestedPageProtectionFlags(0LL);
            v151 = (char)Src.Flink;
            if ( (NestedPageProtectionFlags & 2) != 0 )
            {
              v151 = LOBYTE(Src.Flink) | 2;
              LOBYTE(Src.Flink) |= 2u;
            }
            if ( (NestedPageProtectionFlags & 0x20) != 0 )
            {
              v151 |= 4u;
              LOBYTE(Src.Flink) = v151;
            }
            if ( (NestedPageProtectionFlags & 0x10) != 0 )
              LOBYTE(Src.Flink) = v151 | 8;
            v148 = BYTE1(Src.Flink);
            if ( (NestedPageProtectionFlags & 0x200) != 0 )
            {
              LOBYTE(v148) = BYTE1(Src.Flink) | 2;
              BYTE1(Src.Flink) |= 2u;
            }
            if ( !v197 )
              goto LABEL_697;
            SystemBasicInformation = VslIsTrustletRunning(v197, v178);
            v149 = v178[0];
            goto LABEL_696;
          }
        }
LABEL_710:
        *(struct _LIST_ENTRY *)a4 = Src;
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 16;
LABEL_115:
      SystemBasicInformation = -1073741820;
LABEL_837:
      if ( a6 )
        *a6 = Size;
      return SystemBasicInformation;
    case 0xA6u:
      SystemBasicInformation = SeQueryHSTIResults(a4, Length, &Size, v13);
      goto LABEL_837;
    case 0xA7u:
      if ( PreviousMode )
      {
        SystemBasicInformation = -1073741790;
      }
      else if ( Length >= 0x148 )
      {
        v57 = MmLockLoadedDataTableEntryShared(*(_QWORD *)a4);
        v58 = v57;
        if ( v57 )
        {
          v59 = (_WORD *)(a4 + 8);
          *v59 = 0;
          ExpConvertLdrEntryToModuleInfo(0, v57, 0, 0, (__int64)v59);
          MmUnlockLoadedDataTableEntryShared(v58);
          Size = 328;
LABEL_201:
          SystemBasicInformation = 0;
        }
        else
        {
          SystemBasicInformation = -1073741275;
        }
      }
      else
      {
        SystemBasicInformation = -1073741820;
      }
      goto LABEL_837;
    case 0xA9u:
      SystemBasicInformation = HvlQueryVsmProtectionInfo((void *)a4);
      goto LABEL_837;
    case 0xADu:
      result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
      SystemBasicInformation = result;
      if ( result < 0 )
        return result;
      Size = 264;
      if ( Length != 264 )
      {
        SystemBasicInformation = -1073741820;
        goto LABEL_837;
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
      goto LABEL_837;
    case 0xAEu:
      SystemBasicInformation = PsRootSiloInformation((_DWORD *)a4, Length, &Size);
      goto LABEL_837;
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
      SystemBasicInformation = KeQueryCpuSetInformation((void *)a4, Length, (__int64)&Size, (__int64)v162);
      if ( v8 )
        goto LABEL_731;
      goto LABEL_837;
    case 0xB2u:
      if ( !Length )
      {
        SystemBasicInformation = -1073741789;
        goto LABEL_837;
      }
      if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, PreviousMode) )
        return -1073741727;
      v163 = (struct _MDL *)ExAllocatePool2(0x41uLL);
      v121 = v163;
      v180 = v163;
      if ( !v163 )
      {
        SystemBasicInformation = -1073741670;
        goto LABEL_837;
      }
      SystemBasicInformation = VslQuerySecureKernelProfileInformation(v215, v163, Length, &Size);
      if ( SystemBasicInformation >= 0 )
        memmove((void *)a4, v121, Size);
      goto LABEL_520;
    case 0xB4u:
      SystemBasicInformation = ExpQueryInterruptSteeringInformation(v20, v19, (_DWORD *)a4, Length, &Size);
      goto LABEL_837;
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
      SystemBasicInformation = PsGetSupportedProcessorArchitectures((_DWORD *)a4, v19, Length, &Size, (__int64)v162);
      if ( v8 )
LABEL_731:
        ObfDereferenceObject(v162);
      goto LABEL_837;
    case 0xB6u:
      if ( Length != 56 )
      {
        if ( a6 )
          *a6 = 56;
        return -1073741820;
      }
      v22 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
      Src.Flink = (struct _LIST_ENTRY *)(*(_QWORD *)(*((_QWORD *)qword_140E2FD48 + v22) + 18512LL) << 12);
      Src.Blink = (struct _LIST_ENTRY *)(MmGetAvailablePages(v22) << 12);
      v230.Flink = (struct _LIST_ENTRY *)(MmGetResidentAvailablePages(v23) << 12);
      v230.Blink = (struct _LIST_ENTRY *)(MmGetTotalCommittedPages(v24) << 12);
      v231.Blink = (struct _LIST_ENTRY *)(MmGetTotalCommitLimit(v25) << 12);
      v232.Flink = (struct _LIST_ENTRY *)(MmGetPeakCommitment(v26) << 12);
      v231.Flink = (struct _LIST_ENTRY *)(MmGetSharedCommit() << 12);
      v27 = Src.Flink;
      if ( Src.Flink < Src.Blink )
        v27 = Src.Blink;
      Src.Flink = v27;
      v28 = v231.Blink;
      if ( v231.Blink < v230.Blink )
        v28 = v230.Blink;
      v231.Blink = v28;
      v29 = v232.Flink;
      if ( v232.Flink < v230.Blink )
        v29 = v230.Blink;
      v232.Flink = v29;
      *(struct _LIST_ENTRY *)a4 = Src;
      *(struct _LIST_ENTRY *)(a4 + 16) = v230;
      *(struct _LIST_ENTRY *)(a4 + 32) = v231;
      *(_QWORD *)(a4 + 48) = v232.Flink;
      Size = 56;
      goto LABEL_837;
    case 0xB7u:
      if ( Length != 16 )
        return -1073741820;
      SystemBasicInformation = ExpQueryCodeIntegrityCertificateInfo(*(_QWORD *)a4, *(unsigned int *)(a4 + 8), v15, v13);
      goto LABEL_837;
    case 0xB8u:
      if ( Length != 24 )
      {
        if ( a6 )
          *a6 = 24;
        return -1073741820;
      }
      v30 = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
      Src.Flink = (struct _LIST_ENTRY *)(*(_QWORD *)(*((_QWORD *)qword_140E2FD48 + v30) + 18512LL) << 12);
      Src.Blink = (struct _LIST_ENTRY *)(MmGetLowestPhysicalPage(v30) << 12);
      v230.Flink = (struct _LIST_ENTRY *)((MmGetHighestPhysicalPage(v31) << 12) + 4095);
      *(struct _LIST_ENTRY *)a4 = Src;
      *(_QWORD *)(a4 + 16) = v230.Flink;
LABEL_71:
      Size = 24;
      goto LABEL_837;
    case 0xB9u:
      SystemBasicInformation = sub_140908780((void *)a4, Length);
      goto LABEL_837;
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
      SystemBasicInformation = PsQueryActivityModerationUserSettings(&Src);
      if ( SystemBasicInformation >= 0 )
        *(_QWORD *)a4 = Src.Flink;
      goto LABEL_837;
    case 0xC0u:
      if ( Length >= 0x20 )
      {
        SystemBasicInformation = ExpGetSystemFlushInformation(a4, v19, v15, v13);
        Size = 32;
        goto LABEL_837;
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
        i = 0;
        v109 = 0;
        while ( (unsigned int)v8 < (unsigned __int16)KeNumberNodes )
        {
          KeInitializeSchedulerSubNodeEnumerationContext(&v243, KeNodeBlock[v109]);
          while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v243, &v213) )
          {
            v174 = *(_WORD *)(v213 + 136);
            *(_QWORD *)(a4 + 8LL * v174) |= *(_QWORD *)(v213 + 16);
          }
          v109 = i + 1;
          i = v109;
          LODWORD(v8) = v109;
        }
      }
      else
      {
LABEL_445:
        SystemBasicInformation = -1073741789;
      }
      goto LABEL_837;
    case 0xC2u:
      SystemBasicInformation = VslTransformDumpKey(v20, v19, (void *)a4, Length, &Size, PreviousMode);
      goto LABEL_837;
    case 0xC3u:
      if ( Length >= 8 )
      {
        SystemBasicInformation = ExpGetSystemWriteConstraintInformation((_QWORD *)a4);
        goto LABEL_758;
      }
      if ( a6 )
        *a6 = 8;
      return -1073741820;
    case 0xC4u:
      SystemBasicInformation = KeQueryKvaShadowInformation((BOOL *)a4, Length, &Size);
      goto LABEL_837;
    case 0xC5u:
      Size = 8;
      if ( Length >= 8 )
      {
        v165 = qword_140E2D838;
        *(_QWORD *)a4 = 0LL;
        *(_QWORD *)a4 = v165;
      }
      else
      {
        SystemBasicInformation = -1073741820;
      }
      goto LABEL_837;
    case 0xC6u:
      SystemBasicInformation = guard_dispatch_icall_no_overrides(34LL);
      if ( SystemBasicInformation != -1073741820 )
        return -1073741637;
      v76 = v176;
      if ( Length < v176 || !a4 )
      {
LABEL_269:
        Size = v76;
        goto LABEL_837;
      }
      if ( v173 )
      {
        v121 = (void *)ExAllocatePool2(0x101uLL);
        v180 = v121;
        if ( !v121 )
        {
          SystemBasicInformation = -1073741670;
          goto LABEL_837;
        }
      }
      else
      {
        v121 = (void *)a4;
        v180 = (PVOID)a4;
      }
      v164 = guard_dispatch_icall_no_overrides(34LL);
      SystemBasicInformation = v164;
      if ( v173 )
      {
        if ( v164 >= 0 )
LABEL_519:
          memmove((void *)a4, v121, Size);
LABEL_520:
        ExFreePoolWithTag(v121, 0x6F666E49u);
      }
      goto LABEL_837;
    case 0xC8u:
      SystemBasicInformation = IopRetrieveSystemDeviceName(SyspartDirectGetFirmwareSystemPartition, a4, Length, &Size);
      goto LABEL_837;
    case 0xC9u:
      SystemBasicInformation = KeQuerySpeculationControlInformation(a4, Length, &Size, v13);
      goto LABEL_837;
    case 0xCAu:
      Size = 1;
      if ( Length != 1 )
      {
        if ( a6 )
          *a6 = 1;
        goto LABEL_115;
      }
      v196[1] = 0;
      guard_dispatch_icall_no_overrides(48LL);
LABEL_509:
      SystemBasicInformation = -1073741637;
      goto LABEL_837;
    case 0xCEu:
      if ( Length != 8 )
      {
        if ( a6 )
          *a6 = 8;
        return -1073741820;
      }
      *(_BYTE *)a4 = *(_BYTE *)ExLeapSecondData != 0;
      *(_DWORD *)(a4 + 4) = 0;
LABEL_758:
      Size = 8;
      goto LABEL_837;
    case 0xCFu:
      if ( Length == 4 )
      {
        *(_DWORD *)a4 = NtGlobalFlag2;
        goto LABEL_185;
      }
      if ( a6 )
        *a6 = 4;
      return -1073741820;
    case 0xD0u:
      SystemBasicInformation = SeSecurityModelQueryInformation((_DWORD *)a4, Length);
      goto LABEL_837;
    case 0xD2u:
      SystemBasicInformation = CmQuerySingleFeatureConfiguration((__int64 *)v20, v19, a4, Length, &Size);
      goto LABEL_837;
    case 0xD3u:
      SystemBasicInformation = CmQueryFeatureConfigurationSections(
                                 (int)v20,
                                 v19,
                                 a4,
                                 Length,
                                 (__int64)&Size,
                                 KeGetCurrentThread()->PreviousMode);
      goto LABEL_837;
    case 0xD5u:
      SystemBasicInformation = KeQuerySecureSpeculationInformation((unsigned int *)a4, Length, &Size);
      goto LABEL_837;
    case 0xD6u:
      if ( PreviousMode )
        return -1073741727;
      if ( ExpSpacesBootInformation )
      {
        v130 = *(_QWORD *)ExpSpacesBootInformation;
        if ( *(_QWORD *)ExpSpacesBootInformation )
        {
          Size = *(_QWORD *)ExpSpacesBootInformation;
          if ( a4 )
          {
            if ( Length >= (unsigned int)v130 )
              memmove((void *)a4, (const void *)(ExpSpacesBootInformation + 8), (unsigned int)v130);
            else
              SystemBasicInformation = -1073741820;
          }
        }
      }
      goto LABEL_837;
    case 0xD7u:
      if ( PreviousMode )
      {
        SystemBasicInformation = -1073741727;
      }
      else
      {
        v131 = ExpFwRamdiskInfo;
        if ( ExpFwRamdiskInfo )
        {
          Size = 24;
          if ( Length >= 0x18 )
          {
            *(_OWORD *)a4 = *(_OWORD *)ExpFwRamdiskInfo;
            *(_QWORD *)(a4 + 16) = *(_QWORD *)(v131 + 16);
          }
          else
          {
            SystemBasicInformation = -1073741820;
          }
        }
        else
        {
          SystemBasicInformation = -1073741810;
        }
      }
      goto LABEL_837;
    case 0xD8u:
      Size = 32;
      if ( Length == 32 )
      {
        SystemBasicInformation = WheaQuerySystemInformation();
        EtwTiLogSyscallUsage(SystemBasicInformation, 0x10u);
      }
      else
      {
        SystemBasicInformation = -1073741820;
      }
      goto LABEL_837;
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
LABEL_185:
        Size = 4;
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 4;
      return -1073741820;
    case 0xDEu:
      SystemBasicInformation = CmQueryBuildVersionInformation(
                                 v20,
                                 v19,
                                 a4,
                                 Length,
                                 &Size,
                                 KeGetCurrentThread()->PreviousMode);
      goto LABEL_837;
    case 0xDFu:
      if ( !v20 )
        return -1073741821;
      SystemBasicInformation = ExPoolQueryLimits(v20, v19, (void *)a4, Length, KeGetCurrentThread()->PreviousMode);
      if ( SystemBasicInformation >= 0 )
        Size = v175;
      goto LABEL_837;
    case 0xE3u:
      Size = 1;
      if ( Length == 1 )
      {
        *(_BYTE *)a4 = 1;
        goto LABEL_837;
      }
      if ( a6 )
        *a6 = 1;
      goto LABEL_115;
    case 0xE4u:
    case 0xE5u:
      Size = Length;
      SystemBasicInformation = KeQueryDpcWatchdogConfiguration((void *)a4, Length, v16);
      goto LABEL_837;
    case 0xEAu:
      Size = 17048;
      if ( Length >= 0x4298 )
        SystemBasicInformation = HvlQueryMinrootInfo((_DWORD *)a4, Length, &Size);
      else
        SystemBasicInformation = -1073741820;
      goto LABEL_837;
    case 0xEBu:
      SystemBasicInformation = HvlQuerySetBootPagesInfo((_DWORD *)a4, Length, PreviousMode, 1, &Size);
      goto LABEL_837;
    case 0xEEu:
      if ( KeGetCurrentThread()->PreviousMode )
      {
        SystemBasicInformation = -1073741790;
        goto LABEL_837;
      }
      if ( !v20 || (unsigned int)v19 < 0x14 )
        goto LABEL_811;
      if ( *v20 != 1 )
        LODWORD(v8) = -1073741811;
      if ( (int)v8 >= 0 )
      {
        Size = 5;
        if ( !a4 || Length < 5 )
        {
          SystemBasicInformation = -1073741820;
          goto LABEL_837;
        }
        memset_0((void *)a4, 0, Length);
        *(_DWORD *)a4 = 1;
        OriginalImageVersion = ExpGetOriginalImageVersion();
        if ( OriginalImageVersion >= 0xA00000C && *((_DWORD *)v179 + 4) <= OriginalImageVersion )
        {
          *(_BYTE *)(a4 + 4) = 1;
          SystemBasicInformation = (int)v8;
          goto LABEL_837;
        }
      }
      else
      {
LABEL_811:
        LODWORD(v8) = -1073741811;
      }
      SystemBasicInformation = (int)v8;
      goto LABEL_837;
    case 0xEFu:
      SystemBasicInformation = ExpQuerySystemMemoryNumaInformation((__int64)v20, v19, (_OWORD *)a4, Length, &Size);
      goto LABEL_837;
    case 0xF0u:
      SystemBasicInformation = ExpQuerySystemMemoryNumaPerformanceInformation((__int128 *)v20, v19, a4, Length);
      goto LABEL_837;
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
        v167 = VslpEnterIumSecureMode(2u, 0x35u, 0, (__int64)&v222);
        if ( v167 < 0 )
        {
          v168 = (unsigned __int64)Src.Flink;
        }
        else
        {
          v168 = (unsigned __int64)Src.Flink & 0xFFFFFFFFFFFFFFFEuLL | v223 & 1;
          Src.Flink = (struct _LIST_ENTRY *)v168;
          Src.Blink = (struct _LIST_ENTRY *)*((_QWORD *)&v223 + 1);
        }
        SystemBasicInformation = v167;
        if ( v167 < 0 )
        {
          Src.Flink = (struct _LIST_ENTRY *)(v168 & 0xFFFFFFFFFFFFFFFEuLL);
          SystemBasicInformation = 0;
        }
        *(struct _LIST_ENTRY *)a4 = Src;
      }
      else
      {
        SystemBasicInformation = -1073741820;
      }
      goto LABEL_837;
    case 0xF7u:
      if ( PreviousMode )
      {
        SystemBasicInformation = -1073741727;
      }
      else if ( ExpOslRamdiskInfo )
      {
        Size = 24 * *((_DWORD *)ExpOslRamdiskInfo + 1) + 8;
        if ( Length >= Size )
          memmove((void *)a4, ExpOslRamdiskInfo, Size);
        else
          SystemBasicInformation = -1073741820;
      }
      else
      {
        SystemBasicInformation = -1073741810;
      }
      goto LABEL_837;
    case 0xFAu:
      if ( (unsigned int)Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline() )
      {
        Size = 16;
        if ( Length >= 0x10 )
        {
          if ( (Length & 7) != 0 )
            SystemBasicInformation = -1073741820;
          else
            *(_OWORD *)a4 = KeProcessorFeaturesBuffer;
        }
        else
        {
          SystemBasicInformation = -1073741820;
        }
      }
      else
      {
LABEL_836:
        SystemBasicInformation = -1073741821;
      }
      goto LABEL_837;
    default:
      return -1073741821;
  }
}
