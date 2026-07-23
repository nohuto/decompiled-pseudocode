/*
 * XREFs of NtSetInformationProcess @ 0x1408BA860
 * Callers:
 *     <none>
 * Callees:
 *     PsSetIoPriorityThread @ 0x14020DFEC (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x14020E16C (PsSetPagePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeSetDisableBoostProcess @ 0x140268ED0 (KeSetDisableBoostProcess.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402691AC (KeSetPriorityAndQuantumProcess.c)
 *     KeChangeMemoryAttributes @ 0x14026A684 (KeChangeMemoryAttributes.c)
 *     KeSetExecuteOptions @ 0x14026AB3C (KeSetExecuteOptions.c)
 *     KeQueryPrimaryGroupProcess @ 0x14026F244 (KeQueryPrimaryGroupProcess.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     MmGetMinWsPagePriority @ 0x140311E90 (MmGetMinWsPagePriority.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C5810 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     RtlInsertDynamicUserFunctionTable @ 0x1403D788C (RtlInsertDynamicUserFunctionTable.c)
 *     PsIsSystemProcess @ 0x14041AD40 (PsIsSystemProcess.c)
 *     PspLockUnlockProcessExclusive @ 0x14041D224 (PspLockUnlockProcessExclusive.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PsGetSessionId @ 0x140433C80 (PsGetSessionId.c)
 *     MmGetMaximumUserAddress @ 0x14043FB40 (MmGetMaximumUserAddress.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     RtlStringCbCopyA @ 0x140458D18 (RtlStringCbCopyA.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     RtlRemoveDynamicUserFunctionTable @ 0x14045DC0C (RtlRemoveDynamicUserFunctionTable.c)
 *     KeVerifyGroupAffinity @ 0x140471198 (KeVerifyGroupAffinity.c)
 *     MmGetDefaultPagePriority @ 0x14047DF60 (MmGetDefaultPagePriority.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x140489530 (PspSynchronizeThreadIsolationDomains.c)
 *     MmSetMemoryPriorityProcess @ 0x140489910 (MmSetMemoryPriorityProcess.c)
 *     KeInitializeGate @ 0x140489B40 (KeInitializeGate.c)
 *     RtlInterlockedSetClearBits @ 0x14048BE9C (RtlInterlockedSetClearBits.c)
 *     KeIsUserCetAllowed @ 0x140497BD0 (KeIsUserCetAllowed.c)
 *     KeIsCoreIsolationMitigationPolicyEnforceable @ 0x14049D928 (KeIsCoreIsolationMitigationPolicyEnforceable.c)
 *     MmRemoveExecuteGrants @ 0x14049FA30 (MmRemoveExecuteGrants.c)
 *     KeSynchronizeSecurityDomain @ 0x1404A67FC (KeSynchronizeSecurityDomain.c)
 *     PspWriteProcessSecurityDomain @ 0x1404A7B40 (PspWriteProcessSecurityDomain.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404A9208 (ExCpuSetResourceManagerAccessCheck.c)
 *     KeBoostPriorityThread @ 0x1404B71EC (KeBoostPriorityThread.c)
 *     Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline @ 0x1404F21D8 (Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline.c)
 *     xKdEnumerateDebuggingDevices @ 0x1404F8540 (xKdEnumerateDebuggingDevices.c)
 *     IoRevokeHandlesForProcess @ 0x140593A48 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405BBD78 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1405BBDD4 (KeSetCpuSetsProcess.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x140641D78 (EtwTraceProcessSetInPrivateMode.c)
 *     MmReleaseCommitForMemResetPages @ 0x14065EFDC (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14065F194 (MmSetCommitReleaseEligibility.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmValidateUserCallTarget @ 0x1406EADD8 (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x1407385E0 (ObSetProcessDeviceMap.c)
 *     PfSnSetAltPrefetchParam @ 0x14073B764 (PfSnSetAltPrefetchParam.c)
 *     PspSyscallProviderOptIn @ 0x140761B7C (PspSyscallProviderOptIn.c)
 *     PsIsGuiThread @ 0x140764B8C (PsIsGuiThread.c)
 *     PsSetProcessHandleTracingInformation @ 0x140764BE8 (PsSetProcessHandleTracingInformation.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140764ED0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140765328 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140765604 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407658B8 (PspSetProcessAffinityUpdateMode.c)
 *     PspApplyCoreIsolationPolicy @ 0x140766E28 (PspApplyCoreIsolationPolicy.c)
 *     PspAssignCpuPartitionsToProcess @ 0x140766F94 (PspAssignCpuPartitionsToProcess.c)
 *     PspAssignPrimaryToken @ 0x1407676A0 (PspAssignPrimaryToken.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14076AC60 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14077EF48 (SeCodeIntegritySetInformationProcess.c)
 *     ExSystemExceptionFilter @ 0x1407A7AE0 (ExSystemExceptionFilter.c)
 *     PspUpdatePebForAffinityChange @ 0x14083C4B8 (PspUpdatePebForAffinityChange.c)
 *     RtlIsSandboxedToken @ 0x140840280 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContextEx @ 0x1408436C0 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 *     LpcRequestPort @ 0x1408B03E0 (LpcRequestPort.c)
 *     PspGetRedirectionTrustPolicy @ 0x1408BA06C (PspGetRedirectionTrustPolicy.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1408BA0E4 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspSetProcessPriorityClass @ 0x1408BA140 (PspSetProcessPriorityClass.c)
 *     SeCheckPrivilegedObject @ 0x1408BA228 (SeCheckPrivilegedObject.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1408BA4BC (PspSchedulerSharedDataRegionCreate.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x1408BA774 (PspSetProcessDefaultHardErrorMode.c)
 *     PsGetNextProcessThread @ 0x1408BD940 (PsGetNextProcessThread.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1408BDEFC (EtwCheckSecurityLoggerAccess.c)
 *     PspCombineSecurityDomains @ 0x1408EDED8 (PspCombineSecurityDomains.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     MmAllocateUserStack @ 0x1408FD254 (MmAllocateUserStack.c)
 *     SeCompareSigningLevels @ 0x14091E260 (SeCompareSigningLevels.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     PoSetProcessEnergyTrackingState @ 0x140960060 (PoSetProcessEnergyTrackingState.c)
 *     PspSetQuotaLimits @ 0x1409C2688 (PspSetQuotaLimits.c)
 *     PsIsSessionInitializationProcess @ 0x140A05FF0 (PsIsSessionInitializationProcess.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A0902C (PspGetNoChildProcessRestrictedPolicy.c)
 *     PspSetupUserFiberShadowStack @ 0x140A14E60 (PspSetupUserFiberShadowStack.c)
 *     KeSetAutoAlignmentProcess @ 0x140A29C68 (KeSetAutoAlignmentProcess.c)
 *     PsSetProcessPriorityByClass @ 0x140A334D0 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140A334FC (PspSetProcessForegroundBackgroundRequest.c)
 *     PspSetProcessAffinitySafe @ 0x140A48864 (PspSetProcessAffinitySafe.c)
 *     MmProcessWorkingSetControl @ 0x140A4A36C (MmProcessWorkingSetControl.c)
 *     PspFreeUserFiberShadowStack @ 0x140A537E8 (PspFreeUserFiberShadowStack.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140A579D4 (EtwSetProcessTelemetryCoverage.c)
 *     PsSetProcessFaultInformation @ 0x140A5B7E0 (PsSetProcessFaultInformation.c)
 *     ExEnableHandleExceptions @ 0x140A5BB80 (ExEnableHandleExceptions.c)
 *     KeSetCheckStackExtentsProcess @ 0x140A615F8 (KeSetCheckStackExtentsProcess.c)
 *     PspSetRedirectionTrustPolicy @ 0x140A62D9C (PspSetRedirectionTrustPolicy.c)
 *     SeSetVirtualizationToken @ 0x140A85DC0 (SeSetVirtualizationToken.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x140A96108 (PsIsSystemWideMitigationOptionSet.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140A9616C (PspSetNoChildProcessRestrictedPolicy.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // r13
  __int128 *v5; // r15
  PROCESSINFOCLASS v6; // ebx
  HANDLE v7; // r10
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // r11
  char PreviousMode; // r12
  __int64 v11; // rcx
  char v12; // r14
  NTSTATUS result; // eax
  int v14; // eax
  char v15; // al
  int v16; // r8d
  int v17; // edx
  int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int32 v21; // ebx
  __int32 v22; // ebx
  __int32 v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // eax
  __int32 v29; // ebx
  __int32 v30; // ebx
  __int32 v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  char *v37; // rbx
  int v38; // r9d
  __int32 v39; // ebx
  __int32 v40; // ebx
  __int32 v41; // ebx
  int v42; // ebx
  int v43; // ebx
  int v44; // ebx
  int v45; // ebx
  __int32 v46; // ebx
  __int32 v47; // ebx
  __int32 v48; // ebx
  int v49; // ebx
  int v50; // ebx
  int v51; // ebx
  int v52; // ebx
  unsigned __int64 v53; // rbx
  size_t v54; // rsi
  _DWORD *v55; // r13
  __int64 v56; // r8
  unsigned int i; // edx
  _KPROCESS *v58; // r8
  __int64 v59; // rdx
  NTSTATUS v60; // esi
  __int64 j; // rax
  __int64 v62; // rbx
  char *v63; // r9
  void *v64; // rcx
  void *v65; // rdx
  __int64 v66; // r8
  _DWORD *v67; // r15
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rcx
  char *v71; // r9
  unsigned __int64 v72; // rax
  char *v73; // rax
  int v74; // r8d
  unsigned __int64 v75; // rdx
  void *v76; // rcx
  int v77; // r10d
  char *v78; // rax
  char *v79; // r8
  ULONG_PTR v80; // rbx
  NTSTATUS v81; // ebx
  PVOID v82; // rcx
  __int32 v83; // ebx
  __int32 v84; // ebx
  __int32 v85; // ebx
  int v86; // ebx
  int v87; // ebx
  int v88; // ebx
  char v89; // bl
  __int64 v90; // r9
  NTSTATUS v91; // r15d
  unsigned __int8 *v92; // rcx
  __int64 v93; // rbx
  unsigned int v94; // eax
  unsigned __int64 v95; // r15
  _KPROCESS *Process; // r9
  __int64 v97; // rcx
  PVOID v98; // rcx
  int v99; // ebx
  int v100; // ebx
  unsigned __int64 v101; // rax
  void *v102; // rbx
  __int64 v103; // r14
  unsigned __int64 v104; // rbx
  signed __int64 v105; // rdx
  signed __int64 *v106; // roff
  signed __int64 v107; // r14
  signed __int64 v108; // rax
  unsigned int v109; // ebx
  int RedirectionTrustPolicy; // eax
  int v111; // ecx
  int v112; // ebx
  __int64 v113; // rdx
  unsigned int v114; // ebx
  int v115; // r13d
  int v116; // r15d
  PVOID v117; // rdx
  __int64 v118; // rcx
  PVOID v119; // rdx
  int v120; // eax
  int v121; // r8d
  int v122; // edx
  char v123; // bl
  __int64 v124; // rdx
  __int64 v125; // r8
  unsigned int v126; // ebx
  int v127; // ecx
  int v128; // r8d
  int v129; // edx
  int v130; // ebx
  unsigned __int64 v131; // rax
  __int64 v132; // rdx
  unsigned __int64 v133; // rcx
  _KPROCESS *v134; // rbx
  char v135; // r8
  unsigned __int64 ReadyTime; // rdx
  __int64 v137; // r14
  int v138; // ebx
  unsigned int v139; // r15d
  __int32 v140; // ebx
  __int32 v141; // ebx
  __int32 v142; // ebx
  int v143; // ebx
  int v144; // ebx
  int v145; // ebx
  PVOID v146; // r13
  signed __int64 *v147; // rbx
  __int64 *v148; // rsi
  signed __int64 *v149; // rbx
  PVOID v150; // r13
  volatile signed __int32 *v151; // r9
  signed __int32 v152; // eax
  int v153; // r8d
  signed __int32 v154; // edx
  PVOID v155; // rcx
  _QWORD *v156; // rbx
  int v157; // r12d
  __int16 v158; // dx
  char v159; // al
  unsigned int v160; // edx
  int v161; // esi
  int v162; // r8d
  int v163; // r10d
  int v164; // ebx
  int v165; // r11d
  int v166; // edx
  int v167; // eax
  int v168; // edx
  volatile signed __int32 *v169; // rcx
  int v170; // r8d
  unsigned int v171; // r15d
  int v172; // r13d
  char v173; // al
  unsigned int v174; // ebx
  unsigned int NoChildProcessRestrictedPolicy; // eax
  __int64 v176; // r8
  int v177; // edx
  int v178; // eax
  int v179; // ebx
  PVOID v180; // rcx
  __int64 v181; // rdx
  unsigned int v182; // ebx
  volatile signed __int32 *v183; // r8
  signed __int32 v184; // eax
  signed __int32 v185; // edx
  char *v186; // rax
  char *v187; // rbx
  PVOID v188; // rcx
  void *v189; // r14
  int v190; // eax
  __int64 v191; // r8
  __int64 v192; // r9
  int v193; // ebx
  _BOOL8 v194; // rbx
  __int16 v195; // dx
  char v196; // dl
  __int16 v197; // dx
  PVOID v198; // rcx
  __int64 v199; // rcx
  PVOID v200; // rdx
  PVOID v201; // r13
  PVOID v202; // r8
  volatile signed __int32 *v203; // rax
  volatile signed __int32 *v204; // rcx
  signed int v205; // ebx
  NTSTATUS v206; // eax
  unsigned __int64 v207; // rcx
  __int16 v208; // dx
  char v209; // al
  unsigned int v210; // ebx
  unsigned __int64 v211; // rax
  __int64 v212; // rdx
  int v213; // r8d
  unsigned int v214; // edx
  _DWORD *v215; // rax
  _DWORD *v216; // rbx
  int v217; // r14d
  __int64 k; // rdx
  __int64 NextProcessThread; // rax
  __int64 v220; // rbx
  char v221; // si
  int v222; // ebx
  __int16 v223; // bx
  __int64 v224; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int8 v226; // bl
  PVOID v227; // r13
  __int16 v228; // dx
  char v229; // al
  int v230; // ebx
  int v231; // ecx
  unsigned int *p_Handle; // rdx
  int v233; // ebx
  char v234; // bl
  int v235; // eax
  __int64 *v236; // rcx
  int v237; // r13d
  int v238; // r12d
  int v239; // r15d
  int v240; // ebx
  char v241; // bl
  char v242; // cl
  bool IsSandboxedToken; // bl
  int v244; // r13d
  int v245; // r9d
  volatile signed __int32 *v246; // r10
  int v247; // eax
  bool v248; // zf
  int v249; // r9d
  int v250; // r15d
  int v251; // eax
  PVOID v252; // rcx
  PVOID v253; // rcx
  int v254; // r10d
  int v255; // ebx
  int v256; // r8d
  int v257; // esi
  int v258; // r15d
  int v259; // r12d
  int v260; // r13d
  int v261; // edx
  int v262; // ebx
  unsigned int v263; // esi
  void *v264; // rbx
  char v265; // bl
  __int64 Pool2; // rax
  void *v267; // rbx
  unsigned int v268; // r13d
  NTSTATUS v269; // eax
  void *v270; // rbx
  __int64 v271; // rax
  __int64 v272; // rdx
  void *v273; // rax
  NTSTATUS v274; // eax
  char v275; // bl
  char v276; // bl
  __int128 v277; // xmm1
  const char *v278; // r8
  _KPROCESS *v279; // rcx
  struct _LIST_ENTRY *Blink; // r8
  __int64 v281; // rdx
  __int64 *v282; // rax
  int v283; // eax
  int Flink; // ecx
  unsigned int v285; // ecx
  int v286; // ecx
  unsigned int v287; // ecx
  __int64 v288; // rdx
  _KPROCESS *v289; // rcx
  SIZE_T v290; // rdx
  size_t v291; // r15
  void *v292; // rax
  size_t v293; // r8
  __int64 v294; // r15
  unsigned int m; // edx
  unsigned int v296; // eax
  size_t v297; // r15
  size_t v298; // r8
  __int64 v299; // r15
  unsigned int n; // edx
  signed __int32 v301[8]; // [rsp+0h] [rbp-4E8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-4A8h] BYREF
  char v303; // [rsp+48h] [rbp-4A0h]
  _BYTE v304[3]; // [rsp+49h] [rbp-49Fh] BYREF
  unsigned int v305; // [rsp+4Ch] [rbp-49Ch]
  NTSTATUS v306; // [rsp+50h] [rbp-498h]
  ULONG Alignment[2]; // [rsp+58h] [rbp-490h]
  __int64 v308; // [rsp+60h] [rbp-488h]
  PVOID P; // [rsp+68h] [rbp-480h]
  HANDLE Handle; // [rsp+70h] [rbp-478h] BYREF
  unsigned __int16 v311[2]; // [rsp+78h] [rbp-470h] BYREF
  __int16 v312; // [rsp+7Ch] [rbp-46Ch]
  int v313; // [rsp+80h] [rbp-468h]
  unsigned int v314; // [rsp+84h] [rbp-464h]
  char v315; // [rsp+88h] [rbp-460h]
  char v316; // [rsp+89h] [rbp-45Fh]
  char v317; // [rsp+8Ah] [rbp-45Eh]
  char v318; // [rsp+8Bh] [rbp-45Dh]
  int v319; // [rsp+8Ch] [rbp-45Ch]
  int v320; // [rsp+90h] [rbp-458h]
  PVOID v321; // [rsp+98h] [rbp-450h]
  void *Src; // [rsp+A0h] [rbp-448h]
  char *v323; // [rsp+A8h] [rbp-440h]
  __int64 v324; // [rsp+B0h] [rbp-438h]
  int v325; // [rsp+B8h] [rbp-430h] BYREF
  BOOL v326; // [rsp+BCh] [rbp-42Ch]
  char *v327; // [rsp+C0h] [rbp-428h]
  char *v328; // [rsp+C8h] [rbp-420h]
  char *v329; // [rsp+D0h] [rbp-418h]
  __m128i v330; // [rsp+D8h] [rbp-410h]
  _OWORD *v331; // [rsp+E8h] [rbp-400h]
  _DWORD *v332; // [rsp+F0h] [rbp-3F8h]
  int v333; // [rsp+F8h] [rbp-3F0h]
  unsigned int v334; // [rsp+FCh] [rbp-3ECh]
  int v335; // [rsp+100h] [rbp-3E8h]
  int v336; // [rsp+104h] [rbp-3E4h]
  PVOID v337; // [rsp+108h] [rbp-3E0h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+110h] [rbp-3D8h]
  unsigned __int64 v339; // [rsp+118h] [rbp-3D0h]
  PVOID v340; // [rsp+120h] [rbp-3C8h]
  PVOID v341; // [rsp+128h] [rbp-3C0h] BYREF
  PVOID v342; // [rsp+130h] [rbp-3B8h] BYREF
  void *v343; // [rsp+138h] [rbp-3B0h]
  int v344; // [rsp+140h] [rbp-3A8h]
  int v345; // [rsp+144h] [rbp-3A4h]
  int v346; // [rsp+148h] [rbp-3A0h]
  int v347; // [rsp+14Ch] [rbp-39Ch]
  int v348; // [rsp+150h] [rbp-398h]
  int v349; // [rsp+154h] [rbp-394h]
  int v350; // [rsp+158h] [rbp-390h]
  int v351; // [rsp+15Ch] [rbp-38Ch]
  int v352; // [rsp+160h] [rbp-388h]
  int v353; // [rsp+164h] [rbp-384h]
  __int64 v354; // [rsp+168h] [rbp-380h]
  int v355; // [rsp+170h] [rbp-378h]
  _DWORD *v356; // [rsp+178h] [rbp-370h]
  int v357; // [rsp+180h] [rbp-368h]
  int v358; // [rsp+184h] [rbp-364h]
  int v359; // [rsp+188h] [rbp-360h]
  unsigned int *v360; // [rsp+190h] [rbp-358h]
  unsigned __int64 v361; // [rsp+198h] [rbp-350h]
  __int128 v362; // [rsp+1A0h] [rbp-348h] BYREF
  __int128 v363; // [rsp+1B0h] [rbp-338h] BYREF
  __int64 v364; // [rsp+1C0h] [rbp-328h]
  __int64 v365; // [rsp+1C8h] [rbp-320h]
  struct _LIST_ENTRY *v366; // [rsp+1D0h] [rbp-318h]
  _BYTE *v367; // [rsp+1D8h] [rbp-310h]
  void *v368; // [rsp+1F0h] [rbp-2F8h]
  PVOID v369; // [rsp+1F8h] [rbp-2F0h] BYREF
  int v370; // [rsp+200h] [rbp-2E8h]
  __int128 v371; // [rsp+208h] [rbp-2E0h] BYREF
  __int128 v372; // [rsp+218h] [rbp-2D0h]
  struct _KAPC_STATE ApcState; // [rsp+228h] [rbp-2C0h] BYREF
  _OWORD v374[2]; // [rsp+258h] [rbp-290h] BYREF
  __int64 v375; // [rsp+278h] [rbp-270h]
  _BYTE v376[144]; // [rsp+280h] [rbp-268h] BYREF
  _BYTE SubjectContext[40]; // [rsp+310h] [rbp-1D8h] BYREF
  __int64 v378; // [rsp+338h] [rbp-1B0h]
  PVOID *v379; // [rsp+340h] [rbp-1A8h]
  int v380; // [rsp+348h] [rbp-1A0h]
  int v381; // [rsp+34Ch] [rbp-19Ch]
  char v382[256]; // [rsp+350h] [rbp-198h] BYREF
  char pszDest[80]; // [rsp+450h] [rbp-98h] BYREF

  v4 = ProcessInformationLength;
  v5 = (__int128 *)ProcessInformation;
  v6 = ProcessInformationClass;
  v7 = ProcessHandle;
  *(_QWORD *)Alignment = ProcessHandle;
  v321 = ProcessInformation;
  LODWORD(v323) = ProcessInformationLength;
  v8 = 0LL;
  Object = 0LL;
  v371 = 0LL;
  v305 = 0;
  v312 = 0;
  v320 = 0;
  v343 = 0LL;
  v337 = 0LL;
  v339 = 0LL;
  v325 = 0;
  v372 = 0LL;
  v311[0] = 0;
  CurrentThread = KeGetCurrentThread();
  P = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v303 = PreviousMode;
  if ( !PreviousMode )
  {
    v11 = 0x7FFFFFFF0000LL;
    v12 = 1;
    goto LABEL_3;
  }
  switch ( ProcessInformationClass )
  {
    case ProcessBasePriority:
      goto LABEL_117;
    case ProcessEnableAlignmentFaultFixup:
    case ProcessForegroundInformation:
    case ProcessPriorityClass:
      v12 = 1;
      v28 = 1;
      goto LABEL_84;
    case ProcessPriorityClassEx:
      v28 = 2;
      goto LABEL_83;
    case ProcessAffinityMask:
      goto LABEL_543;
    case ProcessIoPriority:
    case ProcessPagePriority:
LABEL_117:
      v28 = 4;
LABEL_83:
      v12 = 1;
      goto LABEL_84;
    case ProcessTlsInformation:
    case ProcessInstrumentationCallback:
    case ProcessExceptionPort:
    case ProcessFreeFiberShadowStackAllocation:
    case ProcessFiberShadowStackAllocation:
    case ProcessThreadStackAllocation:
      goto LABEL_543;
    case ProcessAffinityUpdateMode:
      goto LABEL_183;
    case ProcessDynamicFunctionTableInformation:
    case ProcessManageWritesToExecutableMemory:
    case ProcessCombineSecurityDomainsInformation:
      goto LABEL_543;
    case ProcessMemoryAllocationMode:
      goto LABEL_183;
    case ProcessConsoleHostProcess:
    case ProcessRevokeFileHandles:
    case ProcessMemoryExhaustion:
    case ProcessCommitReleaseInformation:
      goto LABEL_543;
  }
  if ( ProcessInformationClass != ProcessInPrivate
    && ProcessInformationClass != ProcessHighGraphicsPriorityInformation
    && ProcessInformationClass != ProcessDebugAuthInformation )
  {
    if ( ProcessInformationClass != ProcessSystemResourceManagement )
    {
      if ( ProcessInformationClass != ProcessEnableReadWriteVmLogging )
      {
        if ( ProcessInformationClass != ProcessEnableOptionalXStateFeatures )
        {
          if ( ProcessInformationClass != ProcessAltSystemCallInformation )
          {
            if ( ProcessInformationClass != ProcessDynamicEHContinuationTargets
              && ProcessInformationClass != ProcessDynamicEnforcedCetCompatibleRanges )
            {
              v28 = 4;
              if ( ProcessInformationClass == ProcessAssignCpuPartitions )
                v28 = 8;
              goto LABEL_83;
            }
            goto LABEL_543;
          }
          goto LABEL_183;
        }
LABEL_543:
        v28 = 8;
        goto LABEL_83;
      }
      goto LABEL_544;
    }
LABEL_183:
    v28 = 4;
    goto LABEL_83;
  }
LABEL_544:
  v12 = 1;
  v28 = 1;
LABEL_84:
  if ( ProcessInformationLength )
  {
    if ( ((v28 - 1) & (unsigned int)ProcessInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    *(_QWORD *)&ProcessInformationClass = (char *)ProcessInformation + ProcessInformationLength;
    v11 = 0x7FFFFFFF0000LL;
  }
  else
  {
    v11 = 0x7FFFFFFF0000LL;
  }
LABEL_3:
  if ( v6 <= ProcessHandleCheckingMode )
  {
    if ( v6 == ProcessHandleCheckingMode )
    {
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v130 = *(_DWORD *)ProcessInformation;
      v350 = *(_DWORD *)ProcessInformation;
      if ( (v130 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)v7,
                 512,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v131 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v131 )
      {
        LOBYTE(v132) = v130 & 1;
        ExEnableHandleExceptions(v131, v132);
        goto LABEL_256;
      }
LABEL_484:
      LODWORD(v8) = -1073741558;
      goto LABEL_257;
    }
    if ( v6 > ProcessSessionInformation )
    {
      if ( v6 > ProcessInstrumentationCallback )
      {
        v21 = v6 - 41;
        if ( !v21 )
        {
          v362 = 0LL;
          v363 = 0LL;
          v364 = 0LL;
          if ( v7 != (HANDLE)-1LL )
            return -1073741811;
          v37 = 0LL;
          if ( ProcessInformationLength == 40 )
          {
            if ( PreviousMode )
            {
              v362 = *(_OWORD *)ProcessInformation;
              v363 = *((_OWORD *)ProcessInformation + 1);
              v364 = *((_QWORD *)ProcessInformation + 4);
              v37 = (char *)ProcessInformation + 32;
              v5 = &v362;
            }
            v38 = *(_DWORD *)v5;
            if ( *(_DWORD *)v5 > 0x40u || *((_DWORD *)v5 + 1) | *((_DWORD *)v5 + 2) | *((_DWORD *)v5 + 3) )
              return -1073741811;
            ++v5;
          }
          else
          {
            if ( ProcessInformationLength != 24 )
              return -1073741820;
            v38 = 0;
            if ( PreviousMode )
            {
              v363 = *(_OWORD *)ProcessInformation;
              v37 = (char *)ProcessInformation + 16;
              v5 = &v363;
            }
          }
          if ( *(_QWORD *)v5 )
          {
            v369 = *(PVOID *)v5;
            *((_QWORD *)v5 + 2) = 0LL;
            result = MmAllocateUserStack((int)v5 + 16, *((_QWORD *)v5 + 1), (unsigned int)&v369, v38, 0);
            if ( result >= 0 && PreviousMode )
              *(_QWORD *)v37 = *((_QWORD *)v5 + 2);
            return result;
          }
          return -1073741811;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 3;
          if ( !v23 )
          {
            if ( v7 != (HANDLE)-1LL )
              return -1073741811;
            if ( ProcessInformationLength == 4 )
            {
              LODWORD(Handle) = *(_DWORD *)ProcessInformation;
              if ( ((unsigned int)Handle & 0xFFFFFFFC) == 0 )
                return PspSetProcessAffinityUpdateMode((__int64)CurrentThread, (int *)&Handle);
              return -1073741811;
            }
            return -1073741820;
          }
          v24 = v23 - 1;
          if ( !v24 )
          {
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            v351 = *(_DWORD *)ProcessInformation;
            v265 = v351;
            if ( (v351 & 0xFFFFFFFE) != 0 )
              return -1073741811;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)v7,
                       512,
                       (__int64)PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            if ( (v265 & 1) != 0 )
              _InterlockedOr((volatile signed __int32 *)Object + 125, 0x200000u);
            else
              _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFDFFFFF);
            goto LABEL_32;
          }
          v25 = v24 - 2;
          if ( !v25 )
          {
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            v263 = *(_DWORD *)ProcessInformation;
            v352 = *(_DWORD *)ProcessInformation;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)v7,
                       512,
                       (__int64)PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v264 = (void *)PsReferencePrimaryTokenWithTag((__int64)Object, 0x746C6644u);
            SeSetVirtualizationToken(v264, v263);
            ObfDereferenceObject(v264);
            goto LABEL_32;
          }
          v26 = v25 - 1;
          if ( !v26 )
          {
            if ( ProcessInformationLength == 8 )
            {
              if ( v7 == (HANDLE)-1LL )
              {
                v366 = *(struct _LIST_ENTRY **)ProcessInformation;
                if ( ((unsigned __int8)v366 & 3) == 1 )
                {
                  KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink = v366;
                  return 0;
                }
              }
              return -1073741811;
            }
            return -1073741820;
          }
          v27 = v26 - 3;
          if ( v27 )
          {
            if ( v27 == 1 )
            {
              if ( v7 != (HANDLE)-1LL )
                return -1073741811;
              if ( ProcessInformationLength == 16 )
              {
                *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
                if ( SubjectContext[8] )
                  return RtlRemoveDynamicUserFunctionTable(*(__int64 *)SubjectContext);
                else
                  return RtlInsertDynamicUserFunctionTable(*(__int64 *)SubjectContext);
              }
              return -1073741820;
            }
            return -1073741821;
          }
          v303 = 0;
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          v308 = *(_QWORD *)ProcessInformation;
          if ( v7 != (HANDLE)-1LL && (_DWORD)v308 != 2 )
            return -1073741811;
          Process = KeGetCurrentThread()->ApcState.Process;
          Object = Process;
          v97 = (unsigned int)v308;
          if ( (int)v308 <= 8 )
          {
            if ( (_DWORD)v308 != 8 )
            {
              if ( (_DWORD)v308 != 1 )
              {
                if ( (_DWORD)v308 != 2 )
                {
                  if ( (_DWORD)v308 == 3 )
                  {
                    if ( (v308 & 0xFFFFFFFC00000000uLL) != 0
                      || ((HIDWORD(v308) >> 1) & 1) == 0 && (v308 & 0x100000000LL) != 0
                      || ((HIDWORD(v308) >> 1) & 1) != 0 && (v308 & 0x100000000LL) == 0 )
                    {
                      goto LABEL_239;
                    }
                    v211 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
                    if ( v211 )
                    {
                      LOBYTE(v212) = BYTE4(v308) & 1;
                      v241 = ExEnableHandleExceptions(v211, v212);
                      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
                      v60 = v241 == 0 ? 0xC0000022 : 0;
                    }
                    else
                    {
                      v60 = -1073741558;
                    }
LABEL_240:
                    if ( v303 != 1 )
                      return v60;
                    goto LABEL_241;
                  }
                  if ( (_DWORD)v308 != 4 )
                  {
                    if ( (_DWORD)v308 == 6 )
                    {
                      if ( HIDWORD(v308) < 2 )
                      {
                        if ( (v308 & 0x100000000LL) != 0 || (LODWORD(Process[4].ThreadListHead.Flink) & 0x80u) == 0 )
                        {
                          v60 = 0;
                          if ( (v308 & 0x100000000LL) != 0 )
                            _InterlockedOr((volatile signed __int32 *)Object + 468, 0x80u);
                          goto LABEL_240;
                        }
                        goto LABEL_472;
                      }
LABEL_239:
                      v60 = -1073741811;
                      goto LABEL_240;
                    }
                    if ( (_DWORD)v308 == 7 && (v308 & 0x800000000LL) == 0 && (v308 & 0x1000000000LL) == 0 )
                    {
                      if ( HIDWORD(v308) >= 0x20 )
                        goto LABEL_239;
                      if ( (*((_DWORD *)Object + 468) & 1) == 0 || (v308 & 0x400000000LL) == 0 )
                        goto LABEL_472;
                      _InterlockedOr((volatile signed __int32 *)Object + 468, 4u);
                      goto LABEL_300;
                    }
                    goto LABEL_628;
                  }
                  if ( HIDWORD(v308) >= 0x10 )
                    goto LABEL_239;
                  if ( (v308 & 0x100000000LL) != 0 && (v308 & 0x200000000LL) != 0 )
                  {
                    v210 = HIDWORD(v308) & 0xFFFFFFFD;
                    HIDWORD(v308) &= ~2u;
                  }
                  else
                  {
                    v210 = HIDWORD(v308);
                  }
                  if ( (v210 & 4) != 0 && (v210 & 8) != 0 )
                  {
                    v210 &= ~8u;
                    HIDWORD(v308) = v210;
                  }
                  v237 = v210 & 1;
                  if ( (v210 & 1) != 0 || (*((_DWORD *)Object + 468) & 0x1000) == 0 )
                  {
                    v238 = (v210 >> 2) & 1;
                    if ( v238 || (*((_DWORD *)Object + 502) & 2) == 0 )
                    {
                      v239 = (v210 >> 1) & 1;
                      if ( v239 || (v210 & 1) != 0 || (*((_DWORD *)Object + 468) & 0x2000) == 0 )
                      {
                        v240 = (v210 >> 3) & 1;
                        if ( v240 || v238 || (*((_DWORD *)Object + 502) & 4) == 0 )
                        {
                          if ( (v237 || v239) && PsIsGuiThread((__int64)CurrentThread) )
                          {
                            v60 = -1073741431;
                          }
                          else
                          {
                            v60 = 0;
                            if ( v237 )
                            {
                              _InterlockedOr((volatile signed __int32 *)Object + 468, 0x3000u);
                            }
                            else if ( v239 )
                            {
                              _InterlockedOr((volatile signed __int32 *)Object + 468, 0x2000u);
                            }
                            if ( v238 )
                            {
                              _InterlockedOr((volatile signed __int32 *)Object + 502, 6u);
                            }
                            else if ( v240 )
                            {
                              _InterlockedOr((volatile signed __int32 *)Object + 502, 4u);
                            }
                          }
                          goto LABEL_240;
                        }
                      }
                    }
                  }
LABEL_472:
                  v60 = -1073741790;
                  goto LABEL_240;
                }
                v171 = HIDWORD(v308);
                if ( (v308 & 0xFFFFFFF000000000uLL) != 0 )
                  goto LABEL_239;
                if ( (v308 & 0x100000000LL) != 0 && (v308 & 0x800000000LL) != 0 )
                {
                  v171 = HIDWORD(v308) & 0xFFFFFFF7;
                  HIDWORD(v308) &= ~8u;
                }
                v172 = v171 & 1;
                if ( (v171 & 1) == 0 && ((v171 & 2) != 0 || (v171 & 4) != 0) )
                  goto LABEL_239;
                if ( (unsigned int)PsIsSystemWideMitigationOptionSet(9LL) )
                  goto LABEL_628;
                if ( *(_QWORD *)Alignment == -1LL )
                {
                  v173 = v303;
                }
                else
                {
                  v60 = ObpReferenceObjectByHandleWithTag(
                          *(ULONG_PTR *)Alignment,
                          512,
                          (__int64)PsProcessType,
                          PreviousMode,
                          0x79517350u,
                          &Object,
                          0LL,
                          0LL);
                  if ( v60 < 0 )
                    goto LABEL_240;
                  v173 = 1;
                  v303 = 1;
                }
                if ( v173 )
                {
                  if ( Object != KeGetCurrentThread()->ApcState.Process )
                  {
                    v242 = 0;
                    if ( (*((_DWORD *)Object + 468) & 0x100) != 0 )
                    {
                      memset(SubjectContext, 0, 32);
                      SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, (PSECURITY_SUBJECT_CONTEXT)SubjectContext);
                      IsSandboxedToken = RtlIsSandboxedToken((PSECURITY_SUBJECT_CONTEXT)SubjectContext, 1);
                      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
                      if ( (RtlIsSandboxedToken(0LL, PreviousMode)
                         || !IsSandboxedToken
                         || (*((_DWORD *)Object + 468) & 0x400) == 0)
                        && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
                      {
                        goto LABEL_472;
                      }
                      v242 = 1;
                    }
                    if ( !v242
                      && (v308 & 0x800000000LL) == 0
                      && (v171 & 1) == 0
                      && (*((_DWORD *)Object + 468) & 0x800) != 0 )
                    {
                      goto LABEL_472;
                    }
                    v170 = v172 == 0 ? 0x900 : 0;
                    v244 = -v172;
                    v245 = (v244 != 0 ? 0x100 : 0) | 0x800;
                    if ( (v308 & 0x800000000LL) == 0 )
                      v245 = v244 != 0 ? 0x900 : 0;
                    if ( (v308 & 0x200000000LL) != 0 )
                      v245 |= 0x200u;
                    else
                      v170 |= 0x200u;
                    v246 = (volatile signed __int32 *)((char *)Object + 1872);
                    v168 = v245 | 0x400;
                    if ( ((HIDWORD(v308) >> 2) & 1) == 0 )
                      v168 = v245;
                    v247 = v170 | 0x400;
                    v248 = ((HIDWORD(v308) >> 2) & 1) == 0;
                    goto LABEL_861;
                  }
                  v171 = HIDWORD(v308);
                }
                if ( !v172 && (*((_DWORD *)Object + 468) & 0x100) != 0 )
                  goto LABEL_472;
                v213 = (v171 >> 3) & 1;
                if ( !v213 && !v172 && (*((_DWORD *)Object + 468) & 0x800) != 0 )
                  goto LABEL_472;
                v249 = (v171 >> 1) & 1;
                if ( v249 )
                {
                  if ( (*((_DWORD *)Object + 468) & 0x300) == 0x100 )
                    goto LABEL_472;
                }
                v250 = (v171 >> 2) & 1;
                if ( v250 )
                {
                  if ( (*((_DWORD *)Object + 468) & 0x500) == 0x100 )
                    goto LABEL_472;
                }
                if ( v172 )
                {
                  v251 = 2304;
                }
                else
                {
                  v251 = 0;
                  if ( v213 )
                    v251 = 2048;
                }
                v170 = (v249 ^ 1) << 9;
                v168 = v251 | 0x200;
                if ( !v249 )
                  v168 = v251;
                if ( v250 )
                  v168 |= 0x400u;
                v246 = (volatile signed __int32 *)((char *)Object + 1872);
                v247 = v170 | 0x400;
                v248 = v250 == 0;
LABEL_861:
                if ( v248 )
                  v170 = v247;
                v169 = v246;
LABEL_458:
                RtlInterlockedSetClearBits(v169, v168, v170);
                goto LABEL_300;
              }
              if ( (v308 & 0xFFFFFFF000000000uLL) != 0 )
                goto LABEL_239;
              v128 = (HIDWORD(v308) >> 1) & 1;
              if ( !v128 && ((__int64)Process[4].ThreadListHead.Flink & 0x10) != 0 )
                goto LABEL_472;
              if ( (v308 & 0x100000000LL) == 0 && (*((_DWORD *)Object + 468) & 0x40) == 0 )
                goto LABEL_472;
              v129 = (HIDWORD(v308) >> 3) & 1;
              if ( !v129 && (*((_DWORD *)Object + 468) & 8) != 0 )
                goto LABEL_472;
              if ( v129 )
              {
                if ( !v128 )
                {
                  v60 = -1073741776;
                  goto LABEL_240;
                }
              }
              else if ( !v128 )
              {
LABEL_353:
                if ( (v308 & 0x100000000LL) != 0 )
                  _InterlockedAnd((volatile signed __int32 *)Object + 468, 0xFFFFFFBF);
                if ( v129 )
                  _InterlockedOr((volatile signed __int32 *)Object + 468, 8u);
                goto LABEL_300;
              }
              _InterlockedOr((volatile signed __int32 *)Object + 468, 0x10u);
              goto LABEL_353;
            }
            v114 = HIDWORD(v308);
            if ( (v308 & 0xFFFFFFE000000000uLL) != 0 )
              goto LABEL_239;
            if ( (v308 & 0x100000000LL) != 0 && ((v308 & 0x800000000LL) != 0 || (v308 & 0x1000000000LL) != 0) )
              v114 = HIDWORD(v308) & 0xFFFFFFE7;
            if ( (v114 & 2) != 0 && (v114 & 0x10) != 0 )
              v114 &= ~0x10u;
            v115 = (v114 >> 3) & 1;
            if ( v115 )
            {
              if ( (v114 & 0x10) != 0 )
                goto LABEL_239;
            }
            v116 = (v114 >> 1) & 1;
            if ( v116 + (v114 & 1) > 1 )
              goto LABEL_239;
            if ( (v114 & 1) == 0 )
            {
              LOBYTE(ProcessInformationClass) = *((_BYTE *)Object + 1528);
              if ( (_BYTE)ProcessInformationClass == ProcessExceptionPort
                || (LOBYTE(v97) = 8, !(unsigned int)SeCompareSigningLevels(v97, *(_QWORD *)&ProcessInformationClass)) )
              {
                LOBYTE(ProcessInformationClass) = *((_BYTE *)Object + 1529);
                if ( (_BYTE)ProcessInformationClass == ProcessExceptionPort )
                  goto LABEL_472;
                LOBYTE(v97) = 8;
                if ( !(unsigned int)SeCompareSigningLevels(v97, *(_QWORD *)&ProcessInformationClass) )
                  goto LABEL_472;
              }
              if ( !v116 )
              {
                LOBYTE(ProcessInformationClass) = 6;
                v252 = Object;
                LOBYTE(v252) = *((_BYTE *)Object + 1528);
                if ( (unsigned int)SeCompareSigningLevels(v252, *(_QWORD *)&ProcessInformationClass) )
                {
                  LOBYTE(ProcessInformationClass) = 6;
                  v253 = Object;
                  LOBYTE(v253) = *((_BYTE *)Object + 1529);
                  if ( (unsigned int)SeCompareSigningLevels(v253, *(_QWORD *)&ProcessInformationClass) )
                    goto LABEL_472;
                }
              }
            }
            if ( (*((_DWORD *)Object + 468) & 0x3000000) != 0 && (v114 & 0x10) == 0 && !v116 && !v115 && (v114 & 1) == 0 )
              goto LABEL_472;
            v60 = 0;
            if ( (v114 & 1) != 0 )
            {
              v117 = Object;
              LOBYTE(v117) = *((_BYTE *)Object + 1528);
              LOBYTE(v97) = 8;
              if ( (unsigned int)SeCompareSigningLevels(v97, v117) )
                *((_BYTE *)Object + 1528) = 8;
              v119 = Object;
              LOBYTE(v119) = *((_BYTE *)Object + 1529);
              LOBYTE(v118) = 8;
              if ( (unsigned int)SeCompareSigningLevels(v118, v119) )
                *((_BYTE *)Object + 1529) = 8;
            }
            else if ( v116 )
            {
              LOBYTE(ProcessInformationClass) = 6;
              v198 = Object;
              LOBYTE(v198) = *((_BYTE *)Object + 1528);
              if ( !(unsigned int)SeCompareSigningLevels(v198, *(_QWORD *)&ProcessInformationClass) )
                goto LABEL_472;
              v200 = Object;
              LOBYTE(v200) = *((_BYTE *)Object + 1529);
              LOBYTE(v199) = 6;
              if ( (unsigned int)SeCompareSigningLevels(v199, v200) )
                *((_BYTE *)Object + 1529) = 6;
            }
            v120 = 0;
            if ( v114 )
              v120 = 0x800000;
            v121 = ((v114 & 8) == 0) << 24;
            v122 = v120 | 0x1000000;
            if ( !v115 )
              v122 = v120;
            if ( ((v114 >> 4) & 1) != 0 )
              v122 |= 0x2000000u;
            else
              v121 |= 0x2000000u;
LABEL_322:
            RtlInterlockedSetClearBits((volatile signed __int32 *)Object + 468, v122, v121);
            goto LABEL_240;
          }
          if ( (_DWORD)v308 == 9 )
          {
            if ( (v308 & 0xFFFFFFFC00000000uLL) != 0 )
              goto LABEL_239;
            if ( (v308 & 0x100000000LL) == 0 && ((__int64)Process[4].ThreadListHead.Flink & 0x10000) != 0
              || (v308 & 0x100000000LL) == 0
              && (v308 & 0x200000000LL) == 0
              && (*((_DWORD *)Object + 468) & 0x20000) != 0 )
            {
              goto LABEL_472;
            }
            v60 = 0;
            if ( (v308 & 0x100000000LL) != 0 )
            {
              v122 = 0x10000;
              v121 = 0x20000;
            }
            else
            {
              if ( (v308 & 0x200000000LL) == 0 )
                goto LABEL_240;
              v122 = 0x20000;
              v121 = 0x10000;
            }
            goto LABEL_322;
          }
          if ( (_DWORD)v308 == 10 )
          {
            v160 = HIDWORD(v308);
            if ( (v308 & 0xFFFFFFE000000000uLL) != 0 )
              goto LABEL_239;
            if ( (v308 & 0x100000000LL) != 0 && (v308 & 0x800000000LL) != 0 )
              v160 = HIDWORD(v308) & 0xFFFFFFF7;
            if ( (v160 & 2) != 0 && (v160 & 0x10) != 0 )
              v160 &= ~0x10u;
            v161 = v160 & 1;
            v162 = 0x80000;
            if ( (v160 & 1) == 0 && (*((_DWORD *)Object + 468) & 0x80000) != 0 )
              goto LABEL_472;
            v163 = (v160 >> 1) & 1;
            if ( !v163 && (*((_DWORD *)Object + 468) & 0x200000) != 0 )
              goto LABEL_472;
            v164 = (v160 >> 2) & 1;
            if ( !v164 && (*((_DWORD *)Object + 468) & 0x40000) != 0 )
              goto LABEL_472;
            v165 = (v160 >> 3) & 1;
            if ( !v165 && (v160 & 1) == 0 && (*((_DWORD *)Object + 468) & 0x100000) != 0 )
              goto LABEL_472;
            v166 = (v160 >> 4) & 1;
            if ( !v166 && !v163 && (*((_DWORD *)Object + 468) & 0x400000) != 0 )
              goto LABEL_472;
            v167 = 0;
            if ( v161 )
            {
              v167 = 0x100000;
            }
            else
            {
              v162 = 0;
              if ( v165 )
                v162 = 0x100000;
            }
            if ( v163 )
            {
              v162 |= 0x200000u;
              v167 |= 0x400000u;
            }
            else if ( v166 )
            {
              v162 |= 0x400000u;
            }
            v168 = v162 | 0x40000;
            if ( !v164 )
              v168 = v162;
            v169 = (volatile signed __int32 *)((char *)Object + 1872);
            v170 = v167;
            goto LABEL_458;
          }
          if ( (_DWORD)v308 != 13 )
          {
            if ( (_DWORD)v308 == 14 )
            {
              if ( (v308 & 0xFFFFFFE000000000uLL) != 0 )
                goto LABEL_239;
              if ( (v308 & 0x100000000LL) == 0 && ((__int64)Process[4].ThreadListHead.Flink & 0x40000000) != 0 )
                goto LABEL_472;
              if ( ((HIDWORD(v308) >> 1) & 1) == 0 && *((int *)Object + 468) < 0 )
                goto LABEL_472;
              if ( ((HIDWORD(v308) >> 3) & 1) == 0 && (*((_DWORD *)Object + 469) & 0x2000) != 0 )
                goto LABEL_472;
              if ( ((HIDWORD(v308) >> 2) & 1) == 0 && (*((_DWORD *)Object + 469) & 0x1000) != 0 )
                goto LABEL_472;
              v262 = (HIDWORD(v308) >> 4) & 1;
              if ( !v262 && (*((_DWORD *)Object + 502) & 1) != 0 )
                goto LABEL_472;
              if ( !v262 || KeIsCoreIsolationMitigationPolicyEnforceable() )
              {
                if ( (v308 & 0x100000000LL) != 0 )
                  _InterlockedOr((volatile signed __int32 *)Object + 468, 0x40000000u);
                if ( ((HIDWORD(v308) >> 1) & 1) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)Object + 468, 0x80000000);
                  _InterlockedOr((volatile signed __int32 *)Object + 383, 0x200000u);
                  PspWriteProcessSecurityDomain((__int64)Object, _InterlockedIncrement64(&PsNextSecurityDomain), 1);
                  KeSynchronizeSecurityDomain((_KPROCESS *)Object);
                  PspSynchronizeThreadIsolationDomains((__int64)Object);
                }
                if ( ((HIDWORD(v308) >> 2) & 1) != 0 )
                  _InterlockedOr((volatile signed __int32 *)Object + 469, 0x1000u);
                if ( ((HIDWORD(v308) >> 3) & 1) != 0 )
                  _InterlockedOr((volatile signed __int32 *)Object + 469, 0x2000u);
                if ( v262 )
                  PspApplyCoreIsolationPolicy((__int64)Object);
                goto LABEL_300;
              }
              goto LABEL_628;
            }
            if ( (_DWORD)v308 == 15 )
            {
              v214 = HIDWORD(v308);
              if ( (v308 & 0xFFFFFC0000000000uLL) != 0 )
                goto LABEL_239;
              if ( (v308 & 0x1000000000LL) != 0 )
              {
                v214 = HIDWORD(v308) | 1;
                HIDWORD(v308) |= 1u;
              }
              if ( (v214 & 0x200) != 0 )
              {
                v214 |= 4u;
                HIDWORD(v308) = v214;
              }
              if ( (v214 & 0x40) != 0 )
              {
                v214 |= 0x20u;
                HIDWORD(v308) = v214;
              }
              v254 = (v214 >> 4) & 1;
              if ( !v254 && (*((_DWORD *)Object + 469) & 0x100000) != 0 )
                goto LABEL_472;
              if ( (v214 & 1) == 0 && (*((_DWORD *)Object + 469) & 0x4000) != 0 )
                goto LABEL_472;
              if ( (v214 & 1) != 0 && (*((_DWORD *)Object + 469) & 0x4000) == 0 )
                goto LABEL_472;
              v255 = (v214 >> 9) & 1;
              if ( v255 )
              {
                if ( *((int *)Object + 469) >= 0 )
                  goto LABEL_472;
              }
              v256 = (v214 >> 2) & 1;
              if ( !v256 && (*((_DWORD *)Object + 469) & 0x20000) != 0 )
                goto LABEL_472;
              if ( v256 && (*((_DWORD *)Object + 469) & 0x20000) == 0 )
                goto LABEL_472;
              v257 = (v214 >> 6) & 1;
              if ( !v257 && (*((_DWORD *)Object + 469) & 0x400000) != 0 )
                goto LABEL_472;
              v258 = (v214 >> 5) & 1;
              if ( !v258 && (*((_DWORD *)Object + 469) & 0x200000) != 0 )
                goto LABEL_472;
              v259 = (v214 >> 8) & 1;
              if ( !v259 && (*((_DWORD *)Object + 469) & 0x40000000) != 0 )
                goto LABEL_472;
              v260 = (v214 >> 1) & 1;
              if ( v260 )
              {
                if ( (*((_DWORD *)Object + 469) & 0x8000) == 0 )
                  goto LABEL_472;
              }
              if ( ((v214 >> 3) & 1) == 0 && (*((_DWORD *)Object + 469) & 0x40000) != 0 )
                goto LABEL_472;
              if ( ((v214 >> 3) & 1) != 0 && (*((_DWORD *)Object + 469) & 0x40000) == 0 )
                goto LABEL_472;
              v261 = (v214 >> 7) & 1;
              if ( !v261 && (*((_DWORD *)Object + 469) & 0x800000) != 0 )
                goto LABEL_472;
              if ( v261 && (*((_DWORD *)Object + 469) & 0x800000) == 0 )
                goto LABEL_472;
              if ( v254 )
                _InterlockedOr((volatile signed __int32 *)Object + 469, 0x100000u);
              if ( !v255 && v256 )
                _InterlockedAnd((volatile signed __int32 *)Object + 469, 0x7FFFFFFFu);
              if ( v257 )
              {
                _InterlockedOr((volatile signed __int32 *)Object + 469, 0x200000u);
                _InterlockedOr((volatile signed __int32 *)Object + 469, 0x400000u);
              }
              else if ( v258 )
              {
                _InterlockedOr((volatile signed __int32 *)Object + 469, 0x200000u);
              }
              if ( v259 )
                _InterlockedOr((volatile signed __int32 *)Object + 469, 0x40000000u);
              if ( !v260 )
                _InterlockedAnd((volatile signed __int32 *)Object + 469, 0xFFFF7FFF);
LABEL_300:
              v60 = 0;
              goto LABEL_240;
            }
            if ( (_DWORD)v308 != 16 )
            {
LABEL_628:
              v60 = -1073741637;
              goto LABEL_240;
            }
            v109 = HIDWORD(v308);
            if ( (v308 & 0xFFFFFFFC00000000uLL) != 0 )
              goto LABEL_239;
            if ( (v308 & 0x100000000LL) != 0 && (v308 & 0x200000000LL) != 0 )
              v109 = HIDWORD(v308) & 0xFFFFFFFD;
            RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((__int64)Object);
            v111 = v109 & 1;
            if ( (v109 & 1) == 0 && RedirectionTrustPolicy == 1 )
              goto LABEL_472;
            v112 = (v109 >> 1) & 1;
            if ( !v112 )
            {
              if ( v111 )
                goto LABEL_298;
              if ( RedirectionTrustPolicy == 2 )
                goto LABEL_472;
            }
            if ( !v111 )
            {
              if ( !v112 )
                goto LABEL_300;
              v113 = 2LL;
              goto LABEL_299;
            }
LABEL_298:
            v113 = 1LL;
LABEL_299:
            PspSetRedirectionTrustPolicy(Object, v113);
            goto LABEL_300;
          }
          v174 = HIDWORD(v308);
          if ( (v308 & 0xFFFFFFF800000000uLL) != 0 || (v308 & 0x100000000LL) == 0 && (v308 & 0x400000000LL) != 0 )
            goto LABEL_239;
          if ( (v308 & 0x100000000LL) != 0 && (v308 & 0x200000000LL) != 0 )
            v174 = HIDWORD(v308) & 0xFFFFFFFD;
          NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(Object);
          v176 = NoChildProcessRestrictedPolicy;
          v177 = v174 & 1;
          if ( (v174 & 1) == 0 && NoChildProcessRestrictedPolicy - 1 <= 1 )
            goto LABEL_472;
          v178 = (v174 >> 2) & 1;
          if ( v178 )
          {
            if ( (_DWORD)v176 == 1 )
              goto LABEL_472;
          }
          v179 = (v174 >> 1) & 1;
          if ( !v179 )
          {
            if ( v177 )
              goto LABEL_482;
            if ( (_DWORD)v176 == 3 )
              goto LABEL_472;
          }
          if ( !v177 )
          {
            if ( !v179 )
              goto LABEL_300;
            v181 = 3LL;
            v180 = Object;
            goto LABEL_509;
          }
LABEL_482:
          v180 = Object;
          if ( v178 )
            v181 = 2LL;
          else
            v181 = 1LL;
LABEL_509:
          PspSetNoChildProcessRestrictedPolicy(v180, v181, v176);
          goto LABEL_300;
        }
LABEL_951:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v81 = PsChargeProcessNonPagedPoolQuota((__int64)Object, 0x6028uLL);
        if ( v81 < 0 )
          goto LABEL_194;
        Pool2 = ExAllocatePool2(0x40uLL);
        v267 = (void *)Pool2;
        if ( Pool2 )
        {
          PsWatchEnabled = 1;
          *(_DWORD *)Pool2 = 0;
          *(_QWORD *)(Pool2 + 8) = 0LL;
          KeInitializeGate(Pool2 + 16, 0);
          if ( !_InterlockedCompareExchange64((volatile signed __int64 *)Object + 88, (signed __int64)v267, 0LL) )
          {
LABEL_372:
            v81 = 0;
            goto LABEL_194;
          }
          ExFreePoolWithTag(v267, 0);
          v81 = -1073741752;
        }
        else
        {
          v81 = -1073741801;
        }
        PsReturnProcessNonPagedPoolQuota((ULONG_PTR)Object, 0x6028uLL);
        goto LABEL_194;
      }
      if ( v6 != ProcessInstrumentationCallback )
      {
        v46 = v6 - 25;
        if ( !v46 )
        {
          if ( ProcessInformationLength == 1 )
          {
            v234 = *(_BYTE *)ProcessInformation;
            v316 = *(_BYTE *)ProcessInformation;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)v7,
                       0x2000,
                       (__int64)PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result >= 0 )
            {
              if ( (unsigned int)dword_140E084E0 > 5 && tlgKeywordOn((__int64)&dword_140E084E0, 0x400000000000LL) )
              {
                v304[0] = v234;
                *(_QWORD *)&SubjectContext[32] = v304;
                v378 = 1LL;
                v369 = (PVOID)0x1000000;
                v379 = &v369;
                v380 = 8;
                v381 = 0;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E084E0,
                  (unsigned __int8 *)&word_14004FD9E,
                  0LL,
                  0LL,
                  4u,
                  (PEVENT_DATA_DESCRIPTOR)SubjectContext);
              }
              MmGetMinWsPagePriority();
              if ( !(unsigned int)Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline() )
              {
                LOBYTE(v8) = v234 != 0;
                PsSetProcessPriorityByClass(Object, (unsigned int)v8);
              }
              goto LABEL_32;
            }
            return result;
          }
          return -1073741820;
        }
        v47 = v46 - 4;
        if ( !v47 )
        {
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v233 = *(_DWORD *)ProcessInformation;
          v357 = *(_DWORD *)ProcessInformation;
          if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
            return -1073741727;
          result = ObpReferenceObjectByHandleWithTag(
                     *(ULONG_PTR *)Alignment,
                     512,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          if ( v233 )
            _InterlockedOr((volatile signed __int32 *)Object + 125, 0x2000u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFDFFF);
          goto LABEL_32;
        }
        v48 = v47 - 2;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( !v49 )
          {
            Handle = 0LL;
            if ( ProcessInformationLength )
            {
              if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
                return -1073741820;
              v231 = *(_DWORD *)ProcessInformation;
              LODWORD(Handle) = *(_DWORD *)ProcessInformation;
              if ( ProcessInformationLength == 8 )
                HIDWORD(Handle) = *((_DWORD *)ProcessInformation + 1);
              else
                HIDWORD(Handle) = 0;
              if ( v231 && (v231 & 0xFFFFFFF0) != 0 )
                return -1073741811;
            }
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)v7,
                       512,
                       (__int64)PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            if ( (_DWORD)v4 )
              p_Handle = (unsigned int *)&Handle;
            else
              p_Handle = 0LL;
            v206 = PsSetProcessHandleTracingInformation((struct _EX_RUNDOWN_REF *)Object, p_Handle);
            goto LABEL_701;
          }
          v50 = v49 - 1;
          if ( v50 )
          {
            v51 = v50 - 1;
            if ( !v51 )
            {
              if ( ProcessInformationLength != 4 )
                return -1073741820;
              if ( v7 != (HANDLE)-1LL )
                return -1073741811;
              v335 = *(_DWORD *)ProcessInformation;
              v60 = KeSetExecuteOptions((__int64)KeGetCurrentThread()->ApcState.Process, v335);
              if ( v60 >= 0 && (v335 & 3) == 1 )
                MmRemoveExecuteGrants();
              return v60;
            }
            v52 = v51 - 1;
            if ( !v52 )
            {
              memset(v374, 0, sizeof(v374));
              v375 = 0LL;
              Src = 0LL;
              v329 = 0LL;
              if ( v7 != (HANDLE)-1LL )
                return -1073741811;
              if ( PreviousMode != 1 )
                return -1073741823;
              if ( ProcessInformationLength < 0x28 )
                return -1073741820;
              v53 = ProcessInformationLength - 16;
              if ( v53 != 24 * (v53 / 0x18) )
                return -1073741820;
              v54 = ProcessInformationLength;
              if ( ProcessInformationLength == 40 )
              {
                v55 = v374;
                P = v374;
              }
              else
              {
                v55 = (_DWORD *)ExAllocatePool2(0x101uLL);
                P = v55;
                if ( !v55 )
                  return -1073741670;
              }
              v332 = v55;
              memmove(v55, v5, v54);
              v356 = v55 + 1;
              if ( v55[1] < 2u
                && (*v55 & 0xFFFFFFFE) == 0
                && (v360 = v55 + 2, v56 = (unsigned int)v55[2], (_DWORD)v56)
                && v53 / 0x18 == v56 )
              {
                for ( i = 0; ; ++i )
                {
                  v305 = i;
                  if ( i >= (unsigned int)v56 )
                    break;
                  if ( v55[6 * i + 4] )
                    goto LABEL_271;
                }
                v58 = KeGetCurrentThread()->ApcState.Process;
                Object = v58;
                v313 = 0;
                if ( (*v55 & 1) != 0 )
                {
                  if ( !v58[1].ReadyTime )
                    goto LABEL_271;
                  v158 = WORD2(v58[3].PerProcessorCycleTimes);
                  if ( v158 == 332 || (v159 = 0, v158 == 452) )
                    v159 = 1;
                  if ( !v159 )
                  {
LABEL_271:
                    v60 = -1073741811;
                    goto LABEL_179;
                  }
                  v313 = 1;
                }
                v59 = v313 ^ 1u;
                Alignment[0] = 4 * v59 + 4;
                v324 = 4 * v59 + 4;
                v331 = v5;
                v305 = 0;
                v60 = 0;
                v306 = 0;
                for ( j = PsGetNextProcessThread(v58, 0LL); ; j = PsGetNextProcessThread(Object, v321) )
                {
                  v321 = (PVOID)j;
                  LODWORD(v323) = v305;
                  v62 = j;
                  if ( !j || v305 >= *v360 )
                    break;
                  if ( (*(_DWORD *)(j + 116) & 0x400) == 0 )
                  {
                    RunRef = (PEX_RUNDOWN_REF)(j + 1416);
                    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(j + 1416)) )
                    {
                      v63 = *(char **)(v62 + 240);
                      v327 = v63;
                      if ( v313 )
                      {
                        v64 = v63 + 8236;
                        v329 = v63 + 8236;
                        v65 = (void *)*((unsigned int *)v63 + 2059);
                      }
                      else
                      {
                        v64 = v63 + 88;
                        v329 = v63 + 88;
                        v65 = (void *)*((_QWORD *)v63 + 11);
                      }
                      Src = v65;
                      if ( v65 )
                      {
                        if ( *v356 == 1 )
                        {
                          if ( v65 == v64 )
                          {
                            Src = 0LL;
                            v77 = (int)v323;
                            v78 = (char *)(unsigned int)v323;
                          }
                          else
                          {
                            if ( v324 * (unsigned int)v55[3] && ((Alignment[0] - 1) & (unsigned int)v65) != 0 )
                              ExRaiseDatatypeMisalignment();
                            v328 = (char *)v305;
                            v93 = 3LL * v305;
                            ProbeForWrite(
                              *(volatile void **)&v55[6 * v305 + 6],
                              v324 * (unsigned int)v55[3],
                              Alignment[0]);
                            memmove(*(void **)&v55[2 * v93 + 6], Src, v324 * (unsigned int)v55[3]);
                            _InterlockedOr(v301, 0);
                            v78 = v328;
                            v63 = v327;
                            v77 = (int)v323;
                          }
                          v79 = (char *)v331 + 24 * (_QWORD)v78;
                          v328 = v79;
                          v327 = v79 + 16;
                          *((_DWORD *)v79 + 4) |= 1u;
                          if ( v313 )
                          {
                            v353 = v332[6 * v77 + 6];
                            *((_DWORD *)v63 + 2059) = v353;
                          }
                          else
                          {
                            *((_QWORD *)v63 + 11) = *(_QWORD *)&v332[6 * v77 + 6];
                          }
                          *((_QWORD *)v79 + 4) = *((_QWORD *)v321 + 162);
                          *((_QWORD *)v79 + 3) = Src;
                          *((_DWORD *)v79 + 4) ^= 3u;
                          ++v305;
                        }
                        else
                        {
                          v66 = 3LL * v305;
                          v323 = (char *)v331 + 24 * v305;
                          v67 = v323 + 16;
                          v328 = v323 + 16;
                          *((_DWORD *)v323 + 4) |= 1u;
                          v68 = (unsigned int)v332[3];
                          if ( v313 )
                          {
                            v72 = (unsigned __int64)v65 + 4 * v68;
                            if ( v72 >= 0x7FFFFFFF0000LL )
                              v72 = 0x7FFFFFFF0000LL;
                            v73 = (char *)*(unsigned int *)v72;
                            v71 = (char *)(unsigned int)v73;
                            v329 = v73;
                            v74 = v55[2 * v66 + 6];
                            v358 = v74;
                            v75 = (unsigned __int64)Src + 4 * (unsigned int)v332[3];
                            if ( v75 >= 0x7FFFFFFF0000LL )
                              v75 = 0x7FFFFFFF0000LL;
                            *(_DWORD *)v75 = v74;
                          }
                          else
                          {
                            v69 = (unsigned __int64)v65 + 8 * v68;
                            if ( v69 >= 0x7FFFFFFF0000LL )
                              v69 = 0x7FFFFFFF0000LL;
                            v327 = *(char **)v69;
                            v329 = v327;
                            v70 = (unsigned __int64)Src + 8 * (unsigned int)v332[3];
                            if ( v70 >= 0x7FFFFFFF0000LL )
                              v70 = 0x7FFFFFFF0000LL;
                            RtlCopyVolatileMemory((void *)v70, &v55[2 * v66 + 6], 8uLL);
                            v71 = v327;
                          }
                          *((_QWORD *)v323 + 3) = v71;
                          *v67 ^= 3u;
                          ++v305;
                        }
                      }
                      ExReleaseRundownProtection_0(RunRef);
                    }
                  }
                }
                if ( v321 )
                  ObfDereferenceObjectWithTag(v321, 0x6E457350u);
              }
              else
              {
                v60 = -1073741820;
              }
LABEL_179:
              if ( v55 == (_DWORD *)v374 )
                return v60;
              v76 = v55;
LABEL_181:
              ExFreePoolWithTag(v76, 0);
              return v60;
            }
            if ( v52 != 4 )
              return -1073741821;
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            v334 = *(_DWORD *)ProcessInformation;
            v126 = v334;
            if ( v334 > (unsigned int)MmGetDefaultPagePriority() || v334 < (unsigned int)MmGetMinWsPagePriority() )
              return -1073741811;
            result = ObpReferenceObjectByHandleWithTag(
                       *(ULONG_PTR *)Alignment,
                       512,
                       (__int64)PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v60 = result;
            if ( result < 0 )
              return result;
            if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
              goto LABEL_338;
            v150 = P;
            PspLockProcessExclusive((__int64)Object, (__int64)P);
            v182 = v126 << 12;
            v183 = (volatile signed __int32 *)Object;
            v184 = *((_DWORD *)Object + 124);
            do
            {
              v185 = v184;
              v184 = _InterlockedCompareExchange(v183 + 124, v182 | v184 & 0xFFFF8FFF, v184);
            }
            while ( v184 != v185 );
            v155 = Object;
            v186 = (char *)Object + 880;
            v187 = (char *)*((_QWORD *)Object + 110);
            while ( v187 != v186 )
            {
              PsSetPagePriorityThread((__int64)(v187 - 1400), v334);
              v187 = *(char **)v187;
              v155 = Object;
              v186 = (char *)Object + 880;
            }
            goto LABEL_496;
          }
          if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
            return -1073741820;
          if ( ProcessInformationLength == 4 )
          {
            v94 = *(_DWORD *)ProcessInformation;
            v319 = *(_DWORD *)ProcessInformation;
            LOBYTE(v95) = 0;
          }
          else
          {
            v339 = *(_QWORD *)ProcessInformation;
            v94 = v339;
            v95 = HIDWORD(v339);
            v319 = v339;
          }
          if ( v94 >= 4 )
            return -1073741811;
          if ( v94 >= 3 )
          {
            if ( !SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, (int)v7, 512, PreviousMode) )
              return -1073741727;
            v7 = *(HANDLE *)Alignment;
          }
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)v7,
                     512,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          v60 = result;
          if ( result < 0 )
            return result;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
          {
            v150 = P;
            PspLockProcessExclusive((__int64)Object, (__int64)P);
            v151 = (volatile signed __int32 *)Object;
            v152 = *((_DWORD *)Object + 125);
            v153 = v319 << 27;
            do
            {
              v154 = v152;
              v152 = _InterlockedCompareExchange(v151 + 125, v153 | v152 & 0xC7FFFFFF, v152);
            }
            while ( v152 != v154 );
            v155 = Object;
            v156 = (_QWORD *)*((_QWORD *)Object + 110);
            if ( v156 != (_QWORD *)((char *)Object + 880) )
            {
              v157 = v319;
              do
              {
                if ( (_BYTE)v95 == 1 && ((*((_DWORD *)v156 + 10) >> 9) & 7) < v157 )
                  IoBoostThreadIoPriority(v156 - 175, v157, 0);
                PsSetIoPriorityThread((__int64)(v156 - 175), v157);
                v156 = (_QWORD *)*v156;
                v155 = Object;
              }
              while ( v156 != (_QWORD *)((char *)Object + 880) );
            }
LABEL_496:
            PspUnlockProcessExclusive((__int64)v155, (__int64)v150);
LABEL_497:
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
            goto LABEL_241;
          }
LABEL_338:
          v60 = -1073741558;
LABEL_241:
          v98 = Object;
LABEL_242:
          ObfDereferenceObjectWithTag(v98, 0x79517350u);
          return v60;
        }
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v60 = result;
        if ( result < 0 )
          return result;
        v336 = *(_DWORD *)v5;
        if ( (v336 & 0xFFFFFFFE) == 0 )
        {
          if ( (v336 & 1) != 0 )
            _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFFFD);
          else
            _InterlockedOr((volatile signed __int32 *)Object + 125, 2u);
          goto LABEL_241;
        }
LABEL_538:
        v60 = -1073741811;
        goto LABEL_241;
      }
      memset(&ApcState, 0, sizeof(ApcState));
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 8 )
      {
        v330.m128i_i64[0] = 0LL;
        v133 = *(_QWORD *)ProcessInformation;
        v330.m128i_i64[1] = *(_QWORD *)ProcessInformation;
      }
      else
      {
        v330 = *(__m128i *)ProcessInformation;
        v133 = _mm_srli_si128(v330, 8).m128i_u64[0];
      }
      if ( v330.m128i_i32[1] )
        return -1073741811;
      if ( v330.m128i_i32[0] )
        return -1073741736;
      if ( v133 != (__int64)(v133 << 16) >> 16 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)v7,
                 512,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v134 = KeGetCurrentThread()->ApcState.Process;
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) || Object == v134 )
      {
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
          goto LABEL_484;
        if ( !*((_QWORD *)Object + 98) )
          goto LABEL_384;
        v195 = *((_WORD *)Object + 886);
        if ( v195 == 332 || (v248 = v195 == 452, v196 = 0, v248) )
          v196 = 1;
        if ( v196 )
          v135 = 1;
        else
LABEL_384:
          v135 = 0;
        ReadyTime = v134[1].ReadyTime;
        if ( v135 )
        {
          if ( ReadyTime )
          {
            v208 = WORD2(v134[3].PerProcessorCycleTimes);
            if ( v208 == 332 || (v209 = 0, v208 == 452) )
              v209 = 1;
            if ( v209 )
            {
              KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
              if ( v330.m128i_i64[1] < (unsigned __int64)MmGetMaximumUserAddress() )
              {
                v235 = MmValidateUserCallTarget(v330.m128i_i64[1], 1);
                v139 = v235 == 0 ? 0xC000000D : 0;
                if ( v235 )
                {
                  v236 = (__int64 *)*((_QWORD *)Object + 98);
                  if ( v236 )
                    v8 = *v236;
                  *(_DWORD *)(v8 + 1168) = v330.m128i_i32[2];
                }
              }
              else
              {
                v139 = -1073741811;
              }
              KiUnstackDetachProcess((__int64)&ApcState, 0LL);
              goto LABEL_388;
            }
          }
        }
        else
        {
          if ( !ReadyTime )
            goto LABEL_387;
          v197 = WORD2(v134[3].PerProcessorCycleTimes);
          if ( v197 != 332 && v197 != 452 )
            v12 = 0;
          if ( !v12 )
          {
LABEL_387:
            KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
            v137 = v330.m128i_i64[1];
            v138 = MmValidateUserCallTarget(v330.m128i_i64[1], 0);
            v139 = v138 == 0 ? 0xC000000D : 0;
            KiUnstackDetachProcess((__int64)&ApcState, 0LL);
            if ( v138 )
            {
              v201 = P;
              PspLockProcessExclusive((__int64)Object, (__int64)P);
              *((_QWORD *)Object + 45) = v137;
              v202 = Object;
              v203 = (volatile signed __int32 *)((char *)Object + 880);
              v204 = (volatile signed __int32 *)*((_QWORD *)Object + 110);
              while ( v204 != v203 )
              {
                if ( v330.m128i_i64[1] )
                  _interlockedbittestandset(v204 - 350, 0x19u);
                else
                  _interlockedbittestandreset(v204 - 350, 0x19u);
                v204 = *(volatile signed __int32 **)v204;
                v202 = Object;
                v203 = (volatile signed __int32 *)((char *)Object + 880);
              }
              PspUnlockProcessExclusive((__int64)v202, (__int64)v201);
            }
            goto LABEL_388;
          }
        }
        v139 = -1073741637;
LABEL_388:
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
        LODWORD(v8) = v139;
        goto LABEL_257;
      }
LABEL_713:
      LODWORD(v8) = -1073741727;
      goto LABEL_257;
    }
    if ( v6 == ProcessSessionInformation )
    {
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v230 = *(_DWORD *)ProcessInformation;
      v349 = *(_DWORD *)ProcessInformation;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   *(ULONG_PTR *)Alignment,
                   516,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v81 = (unsigned int)PsGetSessionId((__int64)Object) != v230 ? 0xC0000022 : 0;
        goto LABEL_194;
      }
      return -1073741727;
    }
    if ( v6 > ProcessIoPortHandlers )
    {
      v140 = v6 - 15;
      if ( !v140 )
        goto LABEL_951;
      v141 = v140 - 1;
      if ( !v141 )
      {
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   *(ULONG_PTR *)Alignment,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741822;
      }
      v142 = v141 - 1;
      if ( !v142 )
      {
        if ( ProcessInformationLength == 1 )
        {
          v226 = *(_BYTE *)ProcessInformation;
          v315 = *(_BYTE *)ProcessInformation;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)v7,
                     512,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result >= 0 )
          {
            v227 = P;
            PspLockProcessExclusive((__int64)Object, (__int64)P);
            if ( v226 )
              *((_DWORD *)Object + 226) |= 4u;
            else
              *((_DWORD *)Object + 226) &= ~4u;
            if ( *((_QWORD *)Object + 98) )
            {
              v228 = *((_WORD *)Object + 886);
              if ( v228 == 332 || (v229 = 0, v228 == 452) )
                v229 = 1;
              if ( v229 )
                v226 = 1;
            }
            KeSetAutoAlignmentProcess(Object, v226);
            PspUnlockProcessExclusive((__int64)Object, (__int64)v227);
            goto LABEL_32;
          }
          return result;
        }
        return -1073741820;
      }
      v143 = v142 - 1;
      if ( !v143 )
      {
        if ( ProcessInformationLength != 2 )
          return -1073741820;
        v223 = *(_WORD *)ProcessInformation;
        v312 = *(_WORD *)ProcessInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        LOBYTE(v224) = PreviousMode;
        v91 = PspSetProcessPriorityClass((__int64)Object, HIBYTE(v312), *(__int64 *)Alignment, v224);
        if ( v91 < 0 )
          goto LABEL_214;
        if ( (unsigned int)dword_140E084E0 > 5 && tlgKeywordOn((__int64)&dword_140E084E0, 0x400000000000LL) )
        {
          v304[0] = v223;
          *(_QWORD *)&SubjectContext[32] = v304;
          v378 = 1LL;
          v369 = (PVOID)0x1000000;
          v379 = &v369;
          v380 = 8;
          v381 = 0;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E084E0,
            (unsigned __int8 *)byte_14004FD43,
            0LL,
            0LL,
            4u,
            (PEVENT_DATA_DESCRIPTOR)SubjectContext);
        }
        MmGetMinWsPagePriority();
        IsEnabledDeviceUsageNoInline = Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline();
        v92 = (unsigned __int8 *)Object;
        if ( !IsEnabledDeviceUsageNoInline )
        {
LABEL_735:
          PsSetProcessPriorityByClass(v92, 1LL);
          goto LABEL_214;
        }
LABEL_213:
        KeSetPriorityAndQuantumProcess((__int64)v92, *(_DWORD *)&PspPriorityTable[2 * v92[839]], 0, 0, 0);
        goto LABEL_214;
      }
      v144 = v143 - 1;
      if ( !v144 )
      {
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v222 = *(_DWORD *)ProcessInformation;
        v348 = *(_DWORD *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        v60 = ObpReferenceObjectByHandleWithTag(
                *(ULONG_PTR *)Alignment,
                512,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v60 < 0 )
          return v60;
        v98 = Object;
        if ( *((_QWORD *)Object + 200) )
        {
          v60 = -1073741790;
          goto LABEL_242;
        }
        if ( v222 )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 0x1000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFEFFFFFF);
        goto LABEL_241;
      }
      v145 = v144 - 2;
      if ( v145 )
      {
        v193 = v145 - 1;
        if ( v193 )
        {
          if ( v193 != 1 )
            return -1073741821;
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          v365 = *(_QWORD *)ProcessInformation;
          if ( RtlIsSandboxedToken(0LL, PreviousMode) )
            return -1073741790;
          result = ObpReferenceObjectByHandleWithTag(
                     *(ULONG_PTR *)Alignment,
                     512,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          v206 = ObSetProcessDeviceMap((__int64)Object);
          goto LABEL_701;
        }
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v347 = *(_DWORD *)ProcessInformation;
        v194 = v347 != 0;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v60 = result;
        if ( result < 0 )
          return result;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
        {
          KeSetDisableBoostProcess((__int64)Object, v194);
          goto LABEL_497;
        }
        goto LABEL_338;
      }
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v371 = *(_QWORD *)ProcessInformation;
        if ( !(_QWORD)v371 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v371 = *(_OWORD *)ProcessInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v371, 0) )
          return -1073741811;
        v7 = *(HANDLE *)Alignment;
      }
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)v7,
                 512,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v98 = Object;
      if ( (*((_DWORD *)Object + 34) & 0x1000) != 0 )
      {
        v60 = -1073741811;
        goto LABEL_242;
      }
      KeQueryPrimaryGroupProcess((__int64)Object, v311);
      if ( (_DWORD)v4 == 8 )
      {
        v207 = v371 & KeActiveProcessors.Bitmap[v311[0]];
        if ( v207 != (_QWORD)v371 )
          goto LABEL_538;
        WORD4(v371) = v311[0];
        *(_QWORD *)&v371 = v207;
      }
      v146 = P;
      --*((_WORD *)P + 242);
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
      {
        v147 = (signed __int64 *)((char *)Object + 456);
        v148 = KeAbPreAcquire((__int64)Object + 456, 0LL);
        if ( _InterlockedCompareExchange64(v147, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v147, 0, v148, (unsigned __int64)v147);
        if ( v148 )
          *((_BYTE *)v148 + 10) = 1;
        v60 = PspSetProcessAffinitySafe((struct _KPROCESS *)Object, (__int64)&v325);
        v149 = (signed __int64 *)Object;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 57, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v149 + 57);
        KeAbPostRelease((ULONG_PTR)(v149 + 57));
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
        if ( v60 >= 0 )
        {
          if ( v325 )
            PspUpdatePebForAffinityChange((__int64)v146, (__int64)Object);
          _InterlockedOr((volatile signed __int32 *)Object + 124, 0x200000u);
        }
      }
      else
      {
        v60 = -1073741558;
      }
      KeLeaveCriticalRegionThread((__int64)v146);
      goto LABEL_241;
    }
    if ( v6 == ProcessIoPortHandlers )
    {
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)v7,
                 512,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
    }
    else
    {
      v29 = v6 - 1;
      if ( !v29 )
        return PspSetQuotaLimits((ULONG_PTR)v7);
      v30 = v29 - 4;
      if ( !v30 )
      {
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v346 = *(_DWORD *)ProcessInformation;
        v205 = v346;
        if ( v346 < 0 )
          v205 = v346 & 0x7FFFFFFF;
        v221 = v346 < 0 ? 2 : 0;
        if ( (unsigned int)(v205 - 1) > 0x1E )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v205 <= *((char *)Object + 144)
          || SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, Alignment[0], 512, PreviousMode) )
        {
          KeSetPriorityAndQuantumProcess((__int64)Object, v205, 0, 0, 0);
          MmSetMemoryPriorityProcess((__int64)Object, v221);
          goto LABEL_257;
        }
        goto LABEL_713;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v217 = *(_DWORD *)ProcessInformation;
        v345 = *(_DWORD *)ProcessInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v60 = result;
        if ( result < 0 )
          return result;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
        {
          for ( k = 0LL; ; k = v220 )
          {
            NextProcessThread = PsGetNextProcessThread(Object, k);
            v220 = NextProcessThread;
            if ( !NextProcessThread )
              break;
            KeBoostPriorityThread(NextProcessThread, v217);
          }
          goto LABEL_497;
        }
        goto LABEL_338;
      }
      v32 = v31 - 2;
      if ( !v32 )
      {
        if ( ProcessInformationLength == 8 )
        {
          LODWORD(v103) = 0;
          v333 = 0;
          v102 = *(void **)ProcessInformation;
          v354 = *(_QWORD *)ProcessInformation;
        }
        else
        {
          if ( ProcessInformationLength != 16 )
            return -1073741820;
          v102 = *(void **)ProcessInformation;
          v354 = *(_QWORD *)ProcessInformation;
          v103 = *((unsigned int *)ProcessInformation + 2);
          v333 = *((_DWORD *)ProcessInformation + 2);
          if ( (v103 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
            return -1073741811;
        }
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        v342 = 0LL;
        result = ObReferenceObjectByHandle(v102, 0, LpcPortObjectType, PreviousMode, &v342, 0LL);
        v104 = (unsigned __int64)v342;
        v332 = v342;
        if ( result < 0 )
          return result;
        v60 = ObpReferenceObjectByHandleWithTag(
                *(ULONG_PTR *)Alignment,
                2048,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v60 < 0 )
        {
          v188 = (PVOID)v104;
LABEL_499:
          ObfDereferenceObject(v188);
          return v60;
        }
        v105 = v104 | (unsigned int)v103;
        v331 = (_OWORD *)v105;
        v106 = (signed __int64 *)((char *)Object + 576);
        _m_prefetchw((char *)Object + 576);
        v107 = *v106;
        do
        {
          v324 = v107;
          if ( (_DWORD)v4 == 16 )
          {
            *((_DWORD *)v5 + 2) = v107 & 7;
          }
          else if ( (v107 & 7) != 0 )
          {
            ObfDereferenceObject((PVOID)v104);
            goto LABEL_538;
          }
          v108 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 72, v105, v107);
          v248 = v107 == v108;
          v107 = v108;
        }
        while ( !v248 );
        if ( v108 )
        {
          memset(&SubjectContext[8], 0, 32);
          v189 = (void *)(v108 & 0xFFFFFFFFFFFFFFF8uLL);
          *(_QWORD *)SubjectContext = 0xD00300008LL;
          v378 = *((_QWORD *)Object + 58);
          while ( 1 )
          {
            v190 = LpcRequestPort((__int64)v189, (__int64)SubjectContext);
            if ( v190 != -1073741801 && v190 != -1073741670 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
          }
          PspLockUnlockProcessExclusive((__int64)Object, (__int64)P, v191, v192);
          ObfDereferenceObject(v189);
        }
        v60 = 0;
        goto LABEL_241;
      }
      v33 = v32 - 1;
      if ( !v33 )
      {
        if ( ProcessInformationLength == 16 )
          return PspAssignPrimaryToken(
                   (__int64)CurrentThread,
                   PreviousMode,
                   (ULONG_PTR)v7,
                   *(void **)ProcessInformation);
        return -1073741820;
      }
      v34 = v33 - 1;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          if ( v35 != 1 )
            return -1073741821;
          if ( ProcessInformationLength != 4 )
            return -1073741820;
          v36 = *(_DWORD *)ProcessInformation;
          v344 = *(_DWORD *)ProcessInformation;
          result = ObpReferenceObjectByHandleWithTag(
                     (ULONG_PTR)v7,
                     512,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          PspSetProcessDefaultHardErrorMode((__int64)Object, (__int64)P, v36);
          goto LABEL_32;
        }
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   544,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   544,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
      }
    }
    v206 = xKdEnumerateDebuggingDevices();
LABEL_701:
    v81 = v206;
    goto LABEL_194;
  }
  if ( v6 <= ProcessTelemetryCoverage )
  {
    if ( v6 == ProcessTelemetryCoverage )
    {
      if ( ProcessInformationLength != 24 )
        return -1073741820;
      memset_0(pszDest, 0, 0x41uLL);
      v277 = *v5;
      *(_OWORD *)SubjectContext = v277;
      *(_QWORD *)&SubjectContext[16] = *((_QWORD *)v5 + 2);
      v278 = (const char *)v277;
      if ( (unsigned __int64)(v277 + 65) > 0x7FFFFFFF0000LL || (__int64)v277 + 65 < (unsigned __int64)v277 )
        v278 = *(const char **)SubjectContext;
      RtlStringCbCopyA(pszDest, 0x41uLL, v278);
      result = ObpReferenceObjectByHandleWithTag(
                 *(ULONG_PTR *)Alignment,
                 544,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      *(_QWORD *)SubjectContext = pszDest;
      pszDest[64] = 0;
      v81 = EtwSetProcessTelemetryCoverage(Object, SubjectContext);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *((_DWORD *)v5 + 3) = *(_DWORD *)&SubjectContext[12];
      *((_DWORD *)v5 + 4) = *(_DWORD *)&SubjectContext[16];
      return v81;
    }
    if ( v6 > ProcessSubsystemProcess )
    {
      v39 = v6 - 70;
      if ( !v39 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        EtwTraceProcessSetInPrivateMode((__int64)Object);
        _InterlockedOr((volatile signed __int32 *)Object + 124, 0x80000000);
        goto LABEL_32;
      }
      v40 = v39 - 1;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( !v41 )
          return PsIumEnableOnDemandDebugWithResponse((ULONG_PTR)v7, ProcessInformation, ProcessInformationLength);
        v42 = v41 - 2;
        if ( !v42 )
        {
          if ( ProcessInformationLength != 1 )
            return -1073741820;
          v276 = *(_BYTE *)ProcessInformation;
          v318 = *(_BYTE *)ProcessInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            return -1073741727;
          result = ObpReferenceObjectByHandleWithTag(
                     *(ULONG_PTR *)Alignment,
                     0x2000,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          if ( v276 )
            _InterlockedOr((volatile signed __int32 *)Object + 383, 0x200u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 383, 0xFFFFFDFF);
          goto LABEL_32;
        }
        v43 = v42 - 3;
        if ( v43 )
        {
          v44 = v43 - 3;
          if ( v44 )
          {
            v45 = v44 - 2;
            if ( v45 )
            {
              if ( v45 == 1 )
                return -1073741637;
              return -1073741821;
            }
            if ( ProcessInformationLength < 8 )
              return -1073741820;
            memset_0(v376, 0, sizeof(v376));
            if ( (unsigned int)v4 >= 0x90 )
              LODWORD(v4) = 144;
            memmove(v376, v5, (unsigned int)v4);
            result = ObpReferenceObjectByHandleWithTag(
                       *(ULONG_PTR *)Alignment,
                       512,
                       (__int64)PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v81 = PoSetProcessEnergyTrackingState(Object, v376);
            if ( v81 < 0 )
              goto LABEL_194;
            goto LABEL_372;
          }
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( result < 0 )
            return result;
          if ( (_DWORD)v4 != 1 )
            return -1073741820;
          v275 = *(_BYTE *)v5;
          v317 = *(_BYTE *)v5;
          result = ObpReferenceObjectByHandleWithTag(
                     *(ULONG_PTR *)Alignment,
                     0x2000,
                     (__int64)PsProcessType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL,
                     0LL);
          if ( result < 0 )
            return result;
          if ( v275 )
            _InterlockedOr((volatile signed __int32 *)Object + 124, 0x8000000u);
          else
            _InterlockedAnd((volatile signed __int32 *)Object + 124, 0xF7FFFFFF);
          KeRecomputeCpuSetAffinityProcess((__int64)Object);
LABEL_32:
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return 0;
        }
        v369 = 0LL;
        v370 = 0;
        if ( ProcessInformationLength != 12 )
          return -1073741820;
        v369 = *(PVOID *)ProcessInformation;
        v127 = *((_DWORD *)ProcessInformation + 2);
        v370 = v127;
        if ( (_DWORD)v369 != 1 || (HIDWORD(v369) & 0xFFFFFFF8) != 0 || (~HIDWORD(v369) & v127) != 0 )
          return -1073741811;
        if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
        {
          v60 = ObpReferenceObjectByHandleWithTag(
                  *(ULONG_PTR *)Alignment,
                  0x2000,
                  (__int64)PsProcessType,
                  PreviousMode,
                  0x79517350u,
                  &Object,
                  0LL,
                  0LL);
          if ( v60 >= 0 )
          {
            v81 = guard_dispatch_icall_no_overrides(Object);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
            return v81;
          }
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v60;
        }
        return -1073741822;
      }
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v100 = *(_DWORD *)ProcessInformation;
      v359 = *(_DWORD *)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)v7,
                 512,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v101 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v101 )
      {
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v101, v100);
LABEL_256:
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
LABEL_257:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v8;
      }
      goto LABEL_484;
    }
    switch ( v6 )
    {
      case ProcessSubsystemProcess:
        if ( (unsigned int)PsIsSessionInitializationProcess(KeGetCurrentThread()->ApcState.Process) )
        {
          v341 = 0LL;
          v274 = ObReferenceObjectByHandle(
                   *(HANDLE *)Alignment,
                   0x200u,
                   (POBJECT_TYPE)PsProcessType,
                   PreviousMode,
                   &v341,
                   0LL);
          v81 = v274;
          Object = v341;
          if ( v274 >= 0 )
          {
            _InterlockedOr((volatile signed __int32 *)v341 + 383, 0x40u);
            ObfDereferenceObject(Object);
          }
          return v81;
        }
        return -1073741727;
      case ProcessRevokeFileHandles:
        *(_OWORD *)SubjectContext = 0LL;
        v270 = 0LL;
        v340 = 0LL;
        if ( PreviousMode == 1 )
        {
          v271 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)ProcessInformation < 0x7FFFFFFF0000LL )
            v271 = (__int64)ProcessInformation;
          *(_DWORD *)SubjectContext = *(_DWORD *)v271;
          v272 = *(_QWORD *)(v271 + 8);
          *(_QWORD *)&SubjectContext[8] = v272;
          if ( !*(_WORD *)SubjectContext )
            return -1073741811;
          if ( (v272 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v273 = (void *)ExAllocatePool2(0x40uLL);
          v270 = v273;
          v340 = v273;
          if ( !v273 )
            return -1073741670;
          memmove(v273, *(const void **)&SubjectContext[8], *(unsigned __int16 *)SubjectContext);
          *(_QWORD *)&SubjectContext[8] = v270;
          v5 = (__int128 *)SubjectContext;
          v367 = SubjectContext;
          v7 = *(HANDLE *)Alignment;
        }
        v60 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)v7,
                0x2000,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v60 < 0 )
          goto LABEL_1011;
        v60 = IoRevokeHandlesForProcess((__int64)v5, Object);
        if ( v270 )
          ExFreePoolWithTag(v270, 0);
        goto LABEL_241;
      case ProcessWorkingSetControl:
        return MmProcessWorkingSetControl((ULONG_PTR)v7);
      case ProcessCheckStackExtentsMode:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v326 = *(_DWORD *)v5 != 0;
        if ( KeGetCurrentThread()->ApcState.Process == Object )
        {
          v60 = -1073741790;
        }
        else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
        {
          v60 = 0;
          KeSetCheckStackExtentsProcess(Object, v326);
          if ( !v326 && (*((_DWORD *)Object + 124) & 0x20000) != 0 )
            _InterlockedAnd((volatile signed __int32 *)Object + 124, 0xFFFDFFFF);
        }
        else
        {
          v60 = -1073741727;
        }
        goto LABEL_241;
      case ProcessMemoryExhaustion:
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v372 = *(_OWORD *)ProcessInformation;
        if ( (_WORD)v372 != 1 || DWORD1(v372) )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( *((_QWORD *)&v372 + 1) )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 0x100u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFEFF);
        goto LABEL_32;
      case ProcessFaultInformation:
        v369 = 0LL;
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v369 = *(PVOID *)v5;
        v206 = PsSetProcessFaultInformation(Object, &v369);
        goto LABEL_701;
    }
    if ( v6 != ProcessCommitReleaseInformation )
    {
      if ( (unsigned int)(v6 - 66) >= 2 )
        return -1073741821;
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0x100 )
        return -1073741820;
      memmove(v382, ProcessInformation, ProcessInformationLength);
      v268 = (unsigned int)v4 >> 3;
      if ( v6 == ProcessAllowedCpuSetsInformation )
      {
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( result < 0 )
          return result;
      }
      result = ObpReferenceObjectByHandleWithTag(
                 *(ULONG_PTR *)Alignment,
                 0x2000,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v206 = KeSetCpuSetsProcess(
               (__int64)Object,
               v268,
               (__int64)v382,
               v6 == ProcessAllowedCpuSetsInformation,
               v6 != ProcessAllowedCpuSetsInformation);
      goto LABEL_701;
    }
    if ( ProcessInformationLength != 32 )
      return -1073741820;
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)v7,
               8193,
               (__int64)PsProcessType,
               PreviousMode,
               0x79517350u,
               &Object,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    *(_OWORD *)SubjectContext = *v5;
    *(_OWORD *)&SubjectContext[16] = v5[1];
    if ( *(_DWORD *)SubjectContext != 3 )
    {
      v60 = -1073741735;
      goto LABEL_241;
    }
    if ( (*(_DWORD *)&SubjectContext[4] & 0xFFFFFFF8) == 0
      && !*(_QWORD *)&SubjectContext[8]
      && !*(_QWORD *)&SubjectContext[16]
      && (((*(_DWORD *)&SubjectContext[4] >> 1) & 1) == 0 && (SubjectContext[4] & 4) == 0 || (SubjectContext[4] & 1) != 0) )
    {
      if ( ((*(_DWORD *)&SubjectContext[4] >> 1) & 1) != 0 || (SubjectContext[4] & 4) != 0 )
        v269 = MmReleaseCommitForMemResetPages((__int64)Object, (*(_DWORD *)&SubjectContext[4] >> 2) & 1);
      else
        v269 = MmSetCommitReleaseEligibility((__int64)Object, SubjectContext[4] & 1);
      v60 = v269;
      goto LABEL_241;
    }
    goto LABEL_538;
  }
  if ( v6 > ProcessAltSystemCallInformation )
  {
    v83 = v6 - 101;
    if ( v83 )
    {
      v84 = v83 - 1;
      if ( v84 )
      {
        v85 = v84 - 3;
        if ( !v85 )
        {
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          v361 = *(_QWORD *)ProcessInformation;
          if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & v361) != 0 )
            return -1073741811;
          if ( PreviousMode == 1 )
          {
            if ( v7 != (HANDLE)-1LL )
            {
              result = ObpReferenceObjectByHandleWithTag(
                         (ULONG_PTR)v7,
                         512,
                         (__int64)PsProcessType,
                         1,
                         0x79517350u,
                         &Object,
                         0LL,
                         0LL);
              if ( result < 0 )
                return result;
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              if ( Object != KeGetCurrentThread()->ApcState.Process )
                return -1073741811;
            }
            v289 = KeGetCurrentThread()->ApcState.Process;
            Object = v289;
            if ( v289[1].ReadyTime )
              return -1073741811;
            if ( !PsIsSystemProcess((__int64)v289) )
              return PspEnableProcessOptionalXStateFeatures((__int64)Object, v361);
            return -1073741637;
          }
          return -1073741790;
        }
        v86 = v85 - 1;
        if ( !v86 )
          return PfSnSetAltPrefetchParam((ULONG_PTR)v7, ProcessInformation, ProcessInformationLength);
        v87 = v86 - 1;
        if ( v87 )
        {
          v88 = v87 - 1;
          if ( !v88 )
          {
            if ( ProcessInformationLength != 4 )
              return -1073741820;
            v320 = *(_DWORD *)ProcessInformation;
            v89 = v320;
            if ( !(_WORD)v320 || (v320 & 0xFFFC) != 0 )
              return -1073741811;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)v7,
                       512,
                       (__int64)PsProcessType,
                       PreviousMode,
                       0x79517350u,
                       &Object,
                       0LL,
                       0LL);
            v91 = result;
            if ( result < 0 )
              return result;
            if ( (v89 & 1) != 0
              && (unsigned int)dword_140E084E0 > 5
              && tlgKeywordOn((__int64)&dword_140E084E0, 0x400000000000LL) )
            {
              v304[0] = HIBYTE(v320);
              *(_QWORD *)&SubjectContext[32] = v304;
              v378 = 1LL;
              v369 = (PVOID)0x1000000;
              v379 = &v369;
              v380 = 8;
              v381 = 0;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E084E0,
                (unsigned __int8 *)byte_14004FE01,
                0LL,
                0LL,
                4u,
                (PEVENT_DATA_DESCRIPTOR)SubjectContext);
            }
            if ( (v89 & 2) != 0 )
            {
              LOBYTE(v90) = PreviousMode;
              v91 = PspSetProcessPriorityClass((__int64)Object, BYTE2(v320), *(__int64 *)Alignment, v90);
              if ( v91 < 0 )
              {
LABEL_214:
                ObfDereferenceObjectWithTag(Object, 0x79517350u);
                return v91;
              }
            }
            MmGetMinWsPagePriority();
            if ( !(unsigned int)Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline()
              && (v89 & 1) != 0 )
            {
              v92 = (unsigned __int8 *)Object;
              goto LABEL_735;
            }
            v92 = (unsigned __int8 *)Object;
            goto LABEL_213;
          }
          v99 = v88 - 4;
          if ( v99 )
          {
            if ( v99 == 1 )
            {
              if ( !ProcessInformationLength )
              {
                if ( v7 == (HANDLE)-1LL )
                {
                  LOBYTE(v11) = PreviousMode;
                  KeChangeMemoryAttributes(v11);
                  return 0;
                }
                return -1073741637;
              }
              return -1073741820;
            }
            return -1073741821;
          }
          if ( ProcessInformationLength != 8 )
            return -1073741820;
          Handle = 0LL;
          v81 = ObpReferenceObjectByHandleWithTag(
                  (ULONG_PTR)v7,
                  512,
                  (__int64)PsProcessType,
                  PreviousMode,
                  0x79517350u,
                  &Object,
                  0LL,
                  0LL);
          if ( v81 >= 0 )
          {
            v81 = PspSchedulerSharedDataRegionCreate((_KPROCESS *)Object, (__int64 *)&Handle);
            if ( v81 >= 0 )
            {
              *(_QWORD *)v5 = Handle;
              Handle = 0LL;
              v81 = 0;
            }
          }
          if ( Handle )
            ObCloseHandle(Handle, PreviousMode);
          v82 = Object;
          if ( Object )
            goto LABEL_195;
          return v81;
        }
        if ( ProcessInformationLength < 0x10 || (ProcessInformationLength & 7) != 0 )
          return -1073741820;
        v215 = (_DWORD *)ExAllocatePool2(0x101uLL);
        v216 = v215;
        v339 = (unsigned __int64)v215;
        if ( v215 )
        {
          memmove(v215, v5, v4);
          if ( (unsigned int)(v4 - 8) >> 3 < v216[1] || (*v216 & 0xFFFFFFFE) != 0 )
          {
            v60 = -1073741811;
          }
          else
          {
            v369 = 0LL;
            v60 = ObReferenceObjectByHandle(
                    *(HANDLE *)Alignment,
                    0x200u,
                    (POBJECT_TYPE)PsProcessType,
                    PreviousMode,
                    &v369,
                    0LL);
            Object = v369;
            if ( v60 >= 0 )
            {
              LOBYTE(v288) = PreviousMode;
              v60 = PspAssignCpuPartitionsToProcess(
                      (__int64)v369,
                      v288,
                      (__int64)(v216 + 2),
                      v216[1],
                      *(_BYTE *)v216 & 1);
            }
          }
        }
        else
        {
          v60 = -1073741670;
        }
        if ( v216 )
          ExFreePoolWithTag(v216, 0);
        v188 = Object;
        if ( Object )
          goto LABEL_499;
        return v60;
      }
      LODWORD(Handle) = 0;
      v270 = 0LL;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
      v290 = 24 * (unsigned int)*(unsigned __int16 *)SubjectContext;
      if ( !(_DWORD)v290 )
        return -1073741811;
      if ( !*(_QWORD *)&SubjectContext[8] )
        return -1073741811;
      v291 = (unsigned int)v290;
      ProbeForWrite(*(volatile void **)&SubjectContext[8], v290, 8u);
      if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
        return -1073741811;
      if ( PreviousMode != 1 )
        return -1073741790;
      v369 = 0LL;
      result = ObReferenceObjectByHandle(*(HANDLE *)Alignment, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v369, 0LL);
      Object = v369;
      if ( result < 0 )
        return result;
      if ( v369 != KeGetCurrentThread()->ApcState.Process || (*((_DWORD *)v369 + 469) & 0x40000000) == 0 )
      {
        if ( (*((_DWORD *)v369 + 469) & 0x4000) != 0 )
        {
          v292 = (void *)ExAllocatePool2(0x101uLL);
          v270 = v292;
          v369 = v292;
          if ( v292 )
          {
            v293 = v291;
            v294 = *(_QWORD *)&SubjectContext[8];
            memmove(v292, *(const void **)&SubjectContext[8], v293);
            v60 = PspProcessDynamicEnforcedAddressRanges(
                    (ULONG_PTR)Object,
                    (__int64)Object + 1936,
                    (__int64)v270,
                    *(unsigned __int16 *)SubjectContext,
                    &Handle);
            v306 = v60;
            for ( m = 0; ; ++m )
            {
              v305 = m;
              if ( m >= (unsigned int)Handle )
                break;
              *(_DWORD *)(v294 + 24LL * m + 16) = *((_DWORD *)v270 + 6 * m + 4);
            }
            goto LABEL_1099;
          }
          goto LABEL_1106;
        }
        goto LABEL_1105;
      }
    }
    else
    {
      LODWORD(Handle) = 0;
      v270 = 0LL;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
      v296 = 16 * *(unsigned __int16 *)SubjectContext;
      if ( !v296 )
        return -1073741811;
      if ( !*(_QWORD *)&SubjectContext[8] )
        return -1073741811;
      v297 = v296;
      ProbeForWrite(*(volatile void **)&SubjectContext[8], v296, 8u);
      if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
        return -1073741811;
      if ( PreviousMode != 1 )
        return -1073741790;
      v369 = 0LL;
      result = ObReferenceObjectByHandle(*(HANDLE *)Alignment, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v369, 0LL);
      Object = v369;
      if ( result < 0 )
        return result;
      if ( v369 != KeGetCurrentThread()->ApcState.Process || (*((_DWORD *)v369 + 469) & 0x40000000) == 0 )
      {
        if ( (*((_DWORD *)v369 + 469) & 0x4000) != 0 )
        {
          v292 = (void *)ExAllocatePool2(0x101uLL);
          v270 = v292;
          v369 = v292;
          if ( v292 )
          {
            v298 = v297;
            v299 = *(_QWORD *)&SubjectContext[8];
            memmove(v292, *(const void **)&SubjectContext[8], v298);
            v60 = PspProcessDynamicEHContinuationTargets(
                    (ULONG_PTR)Object,
                    (__int64)v270,
                    *(unsigned __int16 *)SubjectContext,
                    &Handle);
            v306 = v60;
            for ( n = 0; ; ++n )
            {
              v305 = n;
              if ( n >= (unsigned int)Handle )
                break;
              *(_QWORD *)(v299 + 16LL * n + 8) = *((_QWORD *)v270 + 2 * n + 1);
            }
LABEL_1099:
            if ( Object )
              ObfDereferenceObject(Object);
LABEL_1011:
            if ( !v270 )
              return v60;
            v76 = v270;
            goto LABEL_181;
          }
LABEL_1106:
          v60 = -1073741801;
          v270 = v292;
          goto LABEL_1099;
        }
LABEL_1105:
        v60 = -1073741637;
        goto LABEL_1099;
      }
    }
    v60 = -1073741790;
    goto LABEL_1099;
  }
  switch ( v6 )
  {
    case ProcessAltSystemCallInformation:
      memset(SubjectContext, 0, 20);
      if ( ProcessInformationLength != 20 )
        return -1073741820;
      *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
      *(_DWORD *)&SubjectContext[16] = *((_DWORD *)ProcessInformation + 4);
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)v7,
                 32,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v206 = PspSyscallProviderOptIn((__int64)Object, (__int64)SubjectContext);
      goto LABEL_701;
    case ProcessEnableReadWriteVmLogging:
      goto LABEL_12;
    case ProcessDebugAuthInformation:
      return SeCodeIntegritySetInformationProcess((__int64)v7, 90LL, ProcessInformation, ProcessInformationLength);
    case ProcessSystemResourceManagement:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v355 = *(_DWORD *)ProcessInformation;
      v123 = v355;
      if ( (v355 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   *(ULONG_PTR *)Alignment,
                   0x2000,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        LOBYTE(v125) = 1;
        LOBYTE(v124) = v123 & 1;
        PspSetProcessForegroundBackgroundRequest(Object, v124, v125);
        goto LABEL_32;
      }
      return -1073741727;
    case ProcessCombineSecurityDomainsInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v80 = *(_QWORD *)ProcessInformation;
      v368 = *(void **)ProcessInformation;
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)v7,
                 0x2000,
                 (__int64)PsProcessType,
                 PreviousMode,
                 0x79517350u,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v81 = ObpReferenceObjectByHandleWithTag(
              v80,
              4096,
              (__int64)PsProcessType,
              PreviousMode,
              0x79517350u,
              &v337,
              0LL,
              0LL);
      v82 = Object;
      if ( v81 < 0 )
        goto LABEL_195;
      v81 = PspCombineSecurityDomains(Object, v337);
      ObfDereferenceObjectWithTag(v337, 0x79517350u);
LABEL_194:
      v82 = Object;
LABEL_195:
      ObfDereferenceObjectWithTag(v82, 0x79517350u);
      return v81;
  }
  if ( v6 != ProcessEnableLogging )
  {
    if ( v6 != ProcessLeapSecondInformation )
    {
      if ( v6 != ProcessFiberShadowStackAllocation )
      {
        if ( v6 == ProcessFreeFiberShadowStackAllocation )
        {
          if ( v7 != (HANDLE)-1LL )
            return -1073741811;
          if ( PreviousMode == 1 )
          {
            if ( ProcessInformationLength == 8 )
            {
              if ( KeIsUserCetAllowed() && _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
                return PspFreeUserFiberShadowStack(*(PVOID *)v5);
              return -1073741637;
            }
            return -1073741820;
          }
          return -1073741823;
        }
        return -1073741821;
      }
      if ( v7 != (HANDLE)-1LL )
        return -1073741811;
      if ( PreviousMode != 1 )
        return -1073741823;
      if ( ProcessInformationLength != 32 )
        return -1073741820;
      if ( KeIsUserCetAllowed() && _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
        return PspSetupUserFiberShadowStack(*(_QWORD *)v5, *((_QWORD *)v5 + 1), (unsigned int)v5[1], (char *)v5 + 24);
      return -1073741637;
    }
    if ( ProcessInformationLength != 8 )
      return -1073741820;
    v343 = *(void **)ProcessInformation;
    if ( ((unsigned int)v343 & 0xFFFFFFFE) != 0 || v7 != (HANDLE)-1LL )
      return -1073741811;
    v279 = KeGetCurrentThread()->ApcState.Process;
    Object = v279;
    Blink = v279[1].ProcessListEntry.Blink;
    if ( Blink )
    {
      v281 = 0LL;
      v282 = (__int64 *)v279[1].ReadyTime;
      if ( v282 )
        v281 = *v282;
      v283 = (unsigned __int8)v343 & 1;
      Flink = (int)Blink[124].Flink;
      if ( ((unsigned __int8)v343 & 1) != 0 )
        v285 = Flink | 1;
      else
        v285 = Flink & 0xFFFFFFFE;
      LODWORD(Blink[124].Flink) = v285;
      if ( v281 )
      {
        v286 = *(_DWORD *)(v281 + 1140);
        if ( v283 )
          v287 = v286 | 1;
        else
          v287 = v286 & 0xFFFFFFFE;
        *(_DWORD *)(v281 + 1140) = v287;
      }
      return v8;
    }
    return -1073741790;
  }
LABEL_12:
  if ( v6 == ProcessEnableReadWriteVmLogging && !ProcessInformationLength
    || ProcessInformationLength < 4 && v6 == ProcessEnableLogging )
  {
    return -1073741820;
  }
  LOBYTE(ProcessInformationClass) = PreviousMode;
  result = EtwCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process, *(_QWORD *)&ProcessInformationClass);
  if ( result < 0 )
    return result;
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741727;
  v314 = 0;
  if ( v6 == ProcessEnableReadWriteVmLogging )
  {
    v15 = *(_BYTE *)v5;
    v314 = *(_BYTE *)v5 & 1;
    v14 = v15 & 3;
  }
  else
  {
    v14 = *(_DWORD *)v5;
  }
  v314 = v14;
  if ( (v14 & 0xFFFFFF80) != 0 )
    return -1073741811;
  result = ObpReferenceObjectByHandleWithTag(
             *(ULONG_PTR *)Alignment,
             0x2000,
             (__int64)PsProcessType,
             PreviousMode,
             0x79517350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)Object + 383, 0x4FE7FFFFu);
    v16 = (((v314 >> 2) & 1) << 19) | 0x100000;
    if ( (v314 & 8) == 0 )
      v16 = ((v314 >> 2) & 1) << 19;
    v17 = v16 | 0x20000000;
    if ( (v314 & 0x10) == 0 )
      v17 = v16;
    v18 = v17 | 0x10000000;
    if ( (v314 & 0x20) == 0 )
      v18 = v17;
    v19 = v18 | 0x80000000;
    if ( (v314 & 0x40) == 0 )
      v19 = v18;
    _InterlockedOr((volatile signed __int32 *)Object + 383, v19);
    _InterlockedAnd((volatile signed __int32 *)Object + 124, 0xFCFFFFFF);
    v20 = ((v314 & 1) << 24) | 0x2000000;
    if ( (v314 & 2) == 0 )
      v20 = (v314 & 1) << 24;
    _InterlockedOr((volatile signed __int32 *)Object + 124, v20);
    goto LABEL_32;
  }
  return result;
}
