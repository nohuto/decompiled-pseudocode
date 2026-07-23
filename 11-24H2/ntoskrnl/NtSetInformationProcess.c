/*
 * XREFs of NtSetInformationProcess @ 0x1408EBA70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402676E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     PspSynchronizeThreadIsolationDomains @ 0x14032C988 (PspSynchronizeThreadIsolationDomains.c)
 *     PsSetIoPriorityThread @ 0x140330D1C (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140330E98 (PsSetPagePriorityThread.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     KeQueryPrimaryGroupProcess @ 0x1403A1E28 (KeQueryPrimaryGroupProcess.c)
 *     KeChangeMemoryAttributes @ 0x1403A4D48 (KeChangeMemoryAttributes.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403B5184 (ExCpuSetResourceManagerAccessCheck.c)
 *     MmGetMinWsPagePriority @ 0x1403C11A0 (MmGetMinWsPagePriority.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     PsIsSystemProcess @ 0x1404079B0 (PsIsSystemProcess.c)
 *     PspLockUnlockProcessExclusive @ 0x140408728 (PspLockUnlockProcessExclusive.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     MmGetMaximumUserAddress @ 0x140435790 (MmGetMaximumUserAddress.c)
 *     RtlInsertDynamicUserFunctionTable @ 0x140442310 (RtlInsertDynamicUserFunctionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     KeSetDisableBoostProcess @ 0x140446DDC (KeSetDisableBoostProcess.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     RtlStringCbCopyA @ 0x14044E2F8 (RtlStringCbCopyA.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     RtlRemoveDynamicUserFunctionTable @ 0x1404518DC (RtlRemoveDynamicUserFunctionTable.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     KeVerifyGroupAffinity @ 0x140469BC0 (KeVerifyGroupAffinity.c)
 *     MmGetDefaultPagePriority @ 0x140479730 (MmGetDefaultPagePriority.c)
 *     MmSetMemoryPriorityProcess @ 0x140483E60 (MmSetMemoryPriorityProcess.c)
 *     KeInitializeGate @ 0x1404842C4 (KeInitializeGate.c)
 *     RtlInterlockedSetClearBits @ 0x140486664 (RtlInterlockedSetClearBits.c)
 *     KeSetExecuteOptions @ 0x14048BE20 (KeSetExecuteOptions.c)
 *     KeIsUserCetAllowed @ 0x140491FC4 (KeIsUserCetAllowed.c)
 *     KeIsCoreIsolationMitigationPolicyEnforceable @ 0x140497598 (KeIsCoreIsolationMitigationPolicyEnforceable.c)
 *     MmRemoveExecuteGrants @ 0x140499A20 (MmRemoveExecuteGrants.c)
 *     KeSynchronizeSecurityDomain @ 0x1404A1ABC (KeSynchronizeSecurityDomain.c)
 *     PspWriteProcessSecurityDomain @ 0x1404A2E04 (PspWriteProcessSecurityDomain.c)
 *     Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline @ 0x1404A7A48 (Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline.c)
 *     KeBoostPriorityThread @ 0x1404DD768 (KeBoostPriorityThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x1404F82D0 (xKdEnumerateDebuggingDevices.c)
 *     IoRevokeHandlesForProcess @ 0x1405940D8 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405BD2D8 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1405BD334 (KeSetCpuSetsProcess.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x14064C354 (EtwTraceProcessSetInPrivateMode.c)
 *     MmReleaseCommitForMemResetPages @ 0x14066BCEC (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14066BEA4 (MmSetCommitReleaseEligibility.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmValidateUserCallTarget @ 0x1406F463C (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x1407428F0 (ObSetProcessDeviceMap.c)
 *     PfSnSetAltPrefetchParam @ 0x140745A74 (PfSnSetAltPrefetchParam.c)
 *     PspSyscallProviderOptIn @ 0x14077175C (PspSyscallProviderOptIn.c)
 *     PsIsGuiThread @ 0x14077477C (PsIsGuiThread.c)
 *     PsSetProcessHandleTracingInformation @ 0x1407747D8 (PsSetProcessHandleTracingInformation.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140774AC0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140774F18 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1407751F4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407754A8 (PspSetProcessAffinityUpdateMode.c)
 *     PspApplyCoreIsolationPolicy @ 0x140776A18 (PspApplyCoreIsolationPolicy.c)
 *     PspAssignCpuPartitionsToProcess @ 0x140776B84 (PspAssignCpuPartitionsToProcess.c)
 *     PspAssignPrimaryToken @ 0x140777290 (PspAssignPrimaryToken.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14077A6B0 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14078E138 (SeCodeIntegritySetInformationProcess.c)
 *     ExSystemExceptionFilter @ 0x1407B73D0 (ExSystemExceptionFilter.c)
 *     SeCaptureSubjectContextEx @ 0x14083BF00 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 *     LpcRequestPort @ 0x1408971D0 (LpcRequestPort.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PspCombineSecurityDomains @ 0x1408AB200 (PspCombineSecurityDomains.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PspFreeUserFiberShadowStack @ 0x1408D959C (PspFreeUserFiberShadowStack.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1408DCC48 (EtwSetProcessTelemetryCoverage.c)
 *     PspUpdatePebForAffinityChange @ 0x1408DF878 (PspUpdatePebForAffinityChange.c)
 *     RtlIsSandboxedToken @ 0x1408E3950 (RtlIsSandboxedToken.c)
 *     SeCheckPrivilegedObject @ 0x1408EB21C (SeCheckPrivilegedObject.c)
 *     PspGetRedirectionTrustPolicy @ 0x1408EB35C (PspGetRedirectionTrustPolicy.c)
 *     PspSetProcessPriorityClass @ 0x1408EB3D4 (PspSetProcessPriorityClass.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1408EB4BC (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1408EB67C (PspSchedulerSharedDataRegionCreate.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x1408EB98C (PspSetProcessDefaultHardErrorMode.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1408EEA78 (EtwCheckSecurityLoggerAccess.c)
 *     PsGetNextProcessThread @ 0x1408EEC70 (PsGetNextProcessThread.c)
 *     PspSetupUserFiberShadowStack @ 0x140914A90 (PspSetupUserFiberShadowStack.c)
 *     MmAllocateUserStack @ 0x1409150D0 (MmAllocateUserStack.c)
 *     PspSetQuotaLimits @ 0x140999A58 (PspSetQuotaLimits.c)
 *     PoSetProcessEnergyTrackingState @ 0x14099B460 (PoSetProcessEnergyTrackingState.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A00208 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PsIsSessionInitializationProcess @ 0x140A04680 (PsIsSessionInitializationProcess.c)
 *     KeSetAutoAlignmentProcess @ 0x140A24758 (KeSetAutoAlignmentProcess.c)
 *     PsSetProcessPriorityByClass @ 0x140A2C560 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140A2C58C (PspSetProcessForegroundBackgroundRequest.c)
 *     PspSetProcessAffinitySafe @ 0x140A42004 (PspSetProcessAffinitySafe.c)
 *     MmProcessWorkingSetControl @ 0x140A434A4 (MmProcessWorkingSetControl.c)
 *     PsSetProcessFaultInformation @ 0x140A55880 (PsSetProcessFaultInformation.c)
 *     ExEnableHandleExceptions @ 0x140A55C8C (ExEnableHandleExceptions.c)
 *     KeSetCheckStackExtentsProcess @ 0x140A5BD58 (KeSetCheckStackExtentsProcess.c)
 *     PspSetRedirectionTrustPolicy @ 0x140A5D7E4 (PspSetRedirectionTrustPolicy.c)
 *     SeSetVirtualizationToken @ 0x140A86A68 (SeSetVirtualizationToken.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x140A97168 (PsIsSystemWideMitigationOptionSet.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140A971CC (PspSetNoChildProcessRestrictedPolicy.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  HANDLE v8; // rsi
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 PreviousMode; // di
  __int64 v11; // rcx
  NTSTATUS result; // eax
  int v13; // eax
  char v14; // al
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  PVOID v20; // rcx
  int v21; // ebx
  int v22; // eax
  char *v23; // r14
  int v24; // r9d
  int v25; // ecx
  __int64 v26; // r8
  unsigned int v27; // edx
  _KPROCESS *Process; // r8
  __int64 v29; // rdx
  __int64 j; // rax
  volatile void **v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // r13
  char *v34; // rcx
  char *v35; // r14
  __int64 v36; // rdx
  char *v37; // rdi
  char *v38; // rbx
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // r14
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  int v45; // r8d
  unsigned __int64 v46; // rdx
  NTSTATUS v47; // ebx
  __int64 v48; // rdx
  volatile void **v49; // rax
  char *v50; // r8
  _DWORD *v51; // rdx
  char *v52; // rax
  ULONG_PTR v53; // rbx
  char v54; // bl
  NTSTATUS v55; // r14d
  unsigned __int8 *v56; // r10
  NTSTATUS v57; // r14d
  int v58; // ebx
  unsigned __int64 v59; // rax
  void *v60; // rbx
  unsigned int v61; // r12d
  NTSTATUS v62; // ebx
  PVOID v63; // r8
  unsigned __int64 v64; // rdx
  signed __int64 *v65; // roff
  signed __int64 v66; // rdi
  signed __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // r15
  int v70; // ecx
  NTSTATUS v71; // edi
  NTSTATUS v72; // ebx
  unsigned int v73; // ebx
  int v74; // r15d
  int v75; // r12d
  __int64 v76; // rcx
  int v77; // r8d
  int v78; // edx
  char v79; // r15
  unsigned int v80; // ebx
  int RedirectionTrustPolicy; // eax
  int v82; // ecx
  char v83; // bl
  __int64 v84; // r8
  unsigned int v85; // r15d
  int v86; // ebx
  unsigned __int64 v87; // rax
  __int16 v88; // cx
  unsigned __int64 v89; // rcx
  _KPROCESS *v90; // rbx
  BOOLEAN v91; // al
  PVOID v92; // rcx
  BOOLEAN v93; // al
  struct _EX_RUNDOWN_REF *v94; // rcx
  bool v95; // r9
  unsigned __int64 ReadyTime; // r8
  __int64 v97; // r15
  int v98; // ebx
  __int64 v99; // r8
  __int64 v100; // r9
  NTSTATUS v101; // edi
  __int64 v102; // r8
  __int64 v103; // r9
  signed __int64 *v104; // rbx
  char *v105; // rdi
  signed __int64 *v106; // rdi
  int v107; // ebx
  __int64 v108; // rdx
  volatile signed __int32 *v109; // r9
  signed __int32 v110; // eax
  int v111; // r8d
  signed __int32 v112; // edx
  PVOID v113; // rcx
  KSPIN_LOCK *v114; // rdi
  int v115; // r12d
  unsigned int v116; // ecx
  unsigned int v117; // ebx
  int v118; // r12d
  unsigned int v119; // ebx
  unsigned int NoChildProcessRestrictedPolicy; // eax
  __int64 v121; // r8
  int v122; // edx
  int v123; // eax
  int v124; // ebx
  PVOID v125; // rcx
  unsigned int v126; // r15d
  volatile signed __int32 *v127; // r8
  signed __int32 v128; // eax
  signed __int32 v129; // edx
  _QWORD *v130; // rdi
  int v131; // ebx
  int v132; // edi
  int v133; // r8d
  int v134; // edx
  int v135; // ebx
  int v136; // r11d
  int v137; // ecx
  int v138; // eax
  int v139; // edx
  void *v140; // rdi
  int v141; // eax
  __int64 v142; // rdx
  _BOOL8 v143; // r14
  __int16 v144; // r8
  __int16 v145; // r8
  __int64 v146; // rcx
  PVOID v147; // r8
  volatile signed __int32 *v148; // rcx
  signed int v149; // ebx
  unsigned __int64 v150; // rcx
  __int16 v151; // r8
  unsigned __int64 v152; // rax
  unsigned int v153; // ebx
  int v154; // r8d
  unsigned int v155; // ecx
  __int64 v156; // rdx
  struct _EX_RUNDOWN_REF *v157; // rax
  struct _EX_RUNDOWN_REF *v158; // rbx
  NTSTATUS v159; // r15d
  __int64 Pool2; // rax
  void *v161; // rbx
  char v162; // r14
  char v163; // al
  __int16 v164; // bx
  char v165; // bl
  int v166; // r14d
  __int64 i; // rdi
  unsigned __int8 v168; // bl
  __int16 v169; // r8
  int v170; // r14d
  int v171; // ebx
  int v172; // ebx
  int v173; // ecx
  unsigned int *p_Handle; // rdx
  __int64 v175; // r8
  __int64 v176; // r9
  HANDLE *v177; // rcx
  char v178; // bl
  unsigned int v179; // r14d
  void *v180; // rbx
  char v181; // bl
  int v182; // r12d
  int v183; // edi
  int v184; // r15d
  int v185; // ebx
  bool IsGuiThread; // al
  int v187; // eax
  bool IsSandboxedToken; // bl
  unsigned int v189; // r9d
  int v190; // r8d
  int v191; // r12d
  int v192; // r11d
  BOOLEAN v193; // al
  unsigned int v194; // r9d
  int v195; // edx
  int v196; // eax
  bool v197; // zf
  int v198; // ecx
  int v199; // ebx
  int v200; // eax
  int v201; // ebx
  bool IsCoreIsolationMitigationPolicyEnforceable; // al
  int v203; // r11d
  int v204; // ebx
  int v205; // r8d
  int v206; // edi
  int v207; // r14d
  int v208; // r15d
  int v209; // r12d
  int v210; // ecx
  __int64 v211; // rdx
  void *v212; // rbx
  __int64 v213; // rax
  int v214; // edx
  __int64 v215; // rcx
  void *v216; // rax
  BOOL v217; // ebx
  NTSTATUS v218; // eax
  unsigned int v219; // r13d
  char v220; // bl
  NTSTATUS v221; // eax
  char v222; // bl
  __int128 v223; // xmm1
  const char *v224; // r8
  _KPROCESS *v225; // r8
  struct _LIST_ENTRY *Blink; // rdx
  __int64 v227; // rcx
  __int64 *v228; // rax
  int v229; // r8d
  int Flink; // eax
  unsigned int v231; // eax
  int v232; // eax
  unsigned int v233; // eax
  _QWORD *v234; // r14
  unsigned int v235; // eax
  ULONG_PTR v236; // rbx
  PVOID v237; // rcx
  _QWORD *v238; // rax
  __int64 v239; // rdi
  SIZE_T v240; // rdx
  ULONG_PTR v241; // rbx
  _QWORD *v242; // rax
  __int64 v243; // rdi
  _KPROCESS *v244; // rcx
  signed __int32 v245[8]; // [rsp+0h] [rbp-4F8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-4B8h] BYREF
  _BYTE v247[4]; // [rsp+48h] [rbp-4B0h] BYREF
  int v248; // [rsp+4Ch] [rbp-4ACh]
  unsigned int v249; // [rsp+50h] [rbp-4A8h]
  HANDLE v250; // [rsp+58h] [rbp-4A0h]
  NTSTATUS v251; // [rsp+60h] [rbp-498h]
  void *v252; // [rsp+68h] [rbp-490h]
  HANDLE Handle; // [rsp+70h] [rbp-488h] BYREF
  unsigned __int8 v254; // [rsp+78h] [rbp-480h]
  unsigned __int16 v255; // [rsp+7Ch] [rbp-47Ch] BYREF
  PVOID P; // [rsp+80h] [rbp-478h]
  __int16 v257; // [rsp+88h] [rbp-470h]
  int v258; // [rsp+8Ch] [rbp-46Ch]
  unsigned int v259; // [rsp+90h] [rbp-468h]
  PVOID v260; // [rsp+98h] [rbp-460h]
  ULONG Alignment; // [rsp+A0h] [rbp-458h]
  void *v262; // [rsp+A8h] [rbp-450h]
  char v263; // [rsp+B0h] [rbp-448h]
  char v264; // [rsp+B1h] [rbp-447h]
  char v265; // [rsp+B2h] [rbp-446h]
  char v266; // [rsp+B3h] [rbp-445h]
  int v267; // [rsp+B4h] [rbp-444h]
  int v268; // [rsp+B8h] [rbp-440h]
  char *v269; // [rsp+C0h] [rbp-438h]
  __int64 v270; // [rsp+C8h] [rbp-430h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+D0h] [rbp-428h]
  char *v272; // [rsp+D8h] [rbp-420h]
  __int64 v273; // [rsp+E0h] [rbp-418h]
  char *v274; // [rsp+E8h] [rbp-410h]
  __m128i v275; // [rsp+F0h] [rbp-408h]
  __int64 v276; // [rsp+100h] [rbp-3F8h]
  char *v277; // [rsp+108h] [rbp-3F0h]
  unsigned int v278; // [rsp+110h] [rbp-3E8h]
  int v279; // [rsp+114h] [rbp-3E4h]
  int v280; // [rsp+118h] [rbp-3E0h]
  unsigned int v281; // [rsp+11Ch] [rbp-3DCh]
  BOOL v282; // [rsp+120h] [rbp-3D8h]
  PVOID v283; // [rsp+128h] [rbp-3D0h] BYREF
  PVOID v284; // [rsp+130h] [rbp-3C8h]
  PVOID v285; // [rsp+138h] [rbp-3C0h] BYREF
  PVOID v286; // [rsp+140h] [rbp-3B8h] BYREF
  int v287; // [rsp+148h] [rbp-3B0h]
  int v288; // [rsp+14Ch] [rbp-3ACh]
  int v289; // [rsp+150h] [rbp-3A8h]
  int v290; // [rsp+154h] [rbp-3A4h]
  int v291; // [rsp+158h] [rbp-3A0h]
  int v292; // [rsp+15Ch] [rbp-39Ch]
  int v293; // [rsp+160h] [rbp-398h]
  int v294; // [rsp+164h] [rbp-394h]
  int v295; // [rsp+168h] [rbp-390h]
  int v296; // [rsp+16Ch] [rbp-38Ch]
  int v297; // [rsp+170h] [rbp-388h]
  int v298; // [rsp+174h] [rbp-384h]
  __int64 v299; // [rsp+178h] [rbp-380h]
  unsigned __int64 v300; // [rsp+180h] [rbp-378h]
  unsigned int *v301; // [rsp+188h] [rbp-370h]
  _DWORD *v302; // [rsp+190h] [rbp-368h]
  int v303; // [rsp+198h] [rbp-360h]
  int v304; // [rsp+19Ch] [rbp-35Ch]
  unsigned __int64 v305; // [rsp+1A0h] [rbp-358h]
  __int128 v306; // [rsp+1A8h] [rbp-350h] BYREF
  __int128 v307; // [rsp+1B8h] [rbp-340h] BYREF
  __int64 v308; // [rsp+1C8h] [rbp-330h]
  struct _LIST_ENTRY *v309; // [rsp+1D8h] [rbp-320h]
  _BYTE *v310; // [rsp+1E0h] [rbp-318h]
  void *v311; // [rsp+1F0h] [rbp-308h]
  void *v312; // [rsp+1F8h] [rbp-300h]
  PVOID v313; // [rsp+200h] [rbp-2F8h] BYREF
  int v314; // [rsp+208h] [rbp-2F0h]
  __int128 v315; // [rsp+210h] [rbp-2E8h] BYREF
  __int128 v316; // [rsp+220h] [rbp-2D8h]
  struct _KAPC_STATE ApcState; // [rsp+230h] [rbp-2C8h] BYREF
  _OWORD v318[2]; // [rsp+260h] [rbp-298h] BYREF
  __int64 v319; // [rsp+280h] [rbp-278h]
  _BYTE v320[144]; // [rsp+290h] [rbp-268h] BYREF
  _BYTE SubjectContext[40]; // [rsp+320h] [rbp-1D8h] BYREF
  __int64 v322; // [rsp+348h] [rbp-1B0h]
  PVOID *v323; // [rsp+350h] [rbp-1A8h]
  int v324; // [rsp+358h] [rbp-1A0h]
  int v325; // [rsp+35Ch] [rbp-19Ch]
  char v326[256]; // [rsp+360h] [rbp-198h] BYREF
  char pszDest[80]; // [rsp+460h] [rbp-98h] BYREF

  v4 = ProcessInformationLength;
  v5 = (__int128 *)ProcessInformation;
  v6 = ProcessInformationClass;
  v7 = ProcessHandle;
  v250 = ProcessHandle;
  P = ProcessInformation;
  Alignment = ProcessInformationLength;
  v8 = 0LL;
  Object = 0LL;
  v315 = 0LL;
  v249 = 0;
  v257 = 0;
  v267 = 0;
  v262 = 0LL;
  v283 = 0LL;
  v300 = 0LL;
  LODWORD(v270) = 0;
  v316 = 0LL;
  v255 = 0;
  CurrentThread = KeGetCurrentThread();
  v274 = (char *)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v254 = PreviousMode;
  if ( PreviousMode )
  {
    switch ( ProcessInformationClass )
    {
      case ProcessBasePriority:
        v22 = 4;
        v11 = 8LL;
        break;
      case ProcessEnableAlignmentFaultFixup:
        v22 = 1;
        v11 = 8LL;
        break;
      case ProcessForegroundInformation:
        v22 = 1;
        v11 = 8LL;
        break;
      case ProcessPriorityClass:
        v22 = 1;
        v11 = 8LL;
        break;
      case ProcessPriorityClassEx:
        v22 = 2;
        v11 = 8LL;
        break;
      case ProcessAffinityMask:
        v11 = 8LL;
        v22 = 8;
        break;
      case ProcessIoPriority:
        v22 = 4;
        v11 = 8LL;
        break;
      case ProcessPagePriority:
        v22 = 4;
        v11 = 8LL;
        break;
      case ProcessTlsInformation:
        v11 = 8LL;
        v22 = 8;
        break;
      case ProcessExceptionPort:
        v11 = 8LL;
        v22 = 8;
        break;
      case ProcessInstrumentationCallback:
        v11 = 8LL;
        v22 = 8;
        break;
      case ProcessThreadStackAllocation:
        v11 = 8LL;
        v22 = 8;
        break;
      case ProcessFiberShadowStackAllocation:
        v11 = 8LL;
        v22 = 8;
        break;
      case ProcessFreeFiberShadowStackAllocation:
        v11 = 8LL;
        v22 = 8;
        break;
      case ProcessAffinityUpdateMode:
        v22 = 4;
        v11 = 8LL;
        break;
      case ProcessMemoryAllocationMode:
        v22 = 4;
        v11 = 8LL;
        break;
      default:
        v11 = 8LL;
        switch ( ProcessInformationClass )
        {
          case ProcessConsoleHostProcess:
            v22 = 8;
            break;
          case ProcessDynamicFunctionTableInformation:
            v22 = 8;
            break;
          case ProcessRevokeFileHandles:
            v22 = 8;
            break;
          case ProcessMemoryExhaustion:
            v22 = 8;
            break;
          case ProcessCommitReleaseInformation:
            v22 = 8;
            break;
          case ProcessInPrivate:
            v22 = 1;
            break;
          case ProcessHighGraphicsPriorityInformation:
            v22 = 1;
            break;
          case ProcessManageWritesToExecutableMemory:
            v22 = 8;
            break;
          case ProcessDebugAuthInformation:
            v22 = 1;
            break;
          case ProcessSystemResourceManagement:
            v22 = 4;
            break;
          case ProcessCombineSecurityDomainsInformation:
            v22 = 8;
            break;
          case ProcessEnableReadWriteVmLogging:
            v22 = 1;
            break;
          case ProcessAltSystemCallInformation:
            v22 = 4;
            break;
          case ProcessDynamicEHContinuationTargets:
            v22 = 8;
            break;
          case ProcessDynamicEnforcedCetCompatibleRanges:
            v22 = 8;
            break;
          case ProcessEnableOptionalXStateFeatures:
            v22 = 8;
            break;
          default:
            v22 = 4;
            if ( ProcessInformationClass == ProcessAssignCpuPartitions )
              v22 = 8;
            break;
        }
        break;
    }
    if ( ProcessInformationLength )
    {
      if ( ((v22 - 1) & (unsigned int)ProcessInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 8LL;
    }
  }
  else
  {
    v11 = 8LL;
  }
  if ( ProcessInformationClass != ProcessEnableLogging )
  {
    switch ( ProcessInformationClass )
    {
      case ProcessQuotaLimits:
        return PspSetQuotaLimits((ULONG_PTR)v7);
      case ProcessBasePriority:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v287 = *(_DWORD *)ProcessInformation;
        v149 = v287;
        if ( v287 < 0 )
          v149 = v287 & 0x7FFFFFFF;
        v162 = v287 < 0 ? 2 : 0;
        if ( (unsigned int)(v149 - 1) > 0x1E )
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
        v92 = Object;
        if ( v149 > *((char *)Object + 144) )
        {
          v163 = SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, (int)v250, 512, PreviousMode);
          v92 = Object;
          if ( !v163 )
            goto LABEL_676;
        }
        KeSetPriorityAndQuantumProcess((__int64)v92, v149, 0, 0, 0);
        MmSetMemoryPriorityProcess((__int64)Object, v162);
        goto LABEL_24;
      case ProcessRaisePriority:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v166 = *(_DWORD *)ProcessInformation;
        v288 = *(_DWORD *)ProcessInformation;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v47 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
          goto LABEL_287;
        for ( i = PsGetNextProcessThread(Object, 0LL); i; i = PsGetNextProcessThread(Object, i) )
          KeBoostPriorityThread(i, v166);
        goto LABEL_419;
      case ProcessExceptionPort:
        if ( ProcessInformationLength == 8 )
        {
          v61 = 0;
          v278 = 0;
          v60 = *(void **)ProcessInformation;
          v299 = *(_QWORD *)ProcessInformation;
        }
        else
        {
          if ( ProcessInformationLength != 16 )
            return -1073741820;
          v60 = *(void **)ProcessInformation;
          v299 = *(_QWORD *)ProcessInformation;
          v278 = *((_DWORD *)ProcessInformation + 2);
          v61 = v278;
          if ( (v278 & 0xFFFFFFF8) != 0 )
            return -1073741811;
        }
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        v285 = 0LL;
        v25 = ObReferenceObjectByHandle(v60, 0, LpcPortObjectType, PreviousMode, &v285, 0LL);
        v260 = v285;
        v277 = (char *)v285;
        if ( v25 < 0 )
          return v25;
        v62 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)v250,
                2048,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v62 < 0 )
        {
          ObfDereferenceObject(v260);
          return v62;
        }
        v63 = v260;
        v64 = (unsigned __int64)v260 | v61;
        v276 = v64;
        v65 = (signed __int64 *)((char *)Object + 576);
        _m_prefetchw((char *)Object + 576);
        v66 = *v65;
        do
        {
          v260 = (PVOID)v66;
          if ( (_DWORD)v4 == 16 )
          {
            *((_DWORD *)v5 + 2) = v66 & 7;
          }
          else if ( (v66 & 7) != 0 )
          {
            ObfDereferenceObject(v63);
            goto LABEL_470;
          }
          v67 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 72, v64, v66);
          v197 = v66 == v67;
          v66 = v67;
        }
        while ( !v197 );
        if ( v67 )
        {
          memset(&SubjectContext[8], 0, 32);
          v140 = (void *)(v67 & 0xFFFFFFFFFFFFFFF8uLL);
          *(_QWORD *)SubjectContext = 0xD00300008LL;
          v322 = *((_QWORD *)Object + 58);
          while ( 1 )
          {
            v141 = LpcRequestPort((__int64)v140, (__int64)SubjectContext);
            if ( v141 != -1073741801 && v141 != -1073741670 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
          }
          PspLockUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
          ObfDereferenceObject(v140);
        }
        goto LABEL_218;
      case ProcessAccessToken:
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        return PspAssignPrimaryToken((__int64)CurrentThread, PreviousMode, (ULONG_PTR)v7, *(void **)ProcessInformation);
      case ProcessLdtInformation:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   544,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result >= 0 )
          goto LABEL_513;
        return result;
      case ProcessLdtSize:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   544,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result >= 0 )
          goto LABEL_513;
        return result;
      case ProcessDefaultHardErrorMode:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v21 = *(_DWORD *)ProcessInformation;
        v289 = *(_DWORD *)ProcessInformation;
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
        PspSetProcessDefaultHardErrorMode((__int64)Object, (__int64)CurrentThread, v21);
        goto LABEL_24;
      case ProcessIoPortHandlers:
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
LABEL_513:
        v47 = xKdEnumerateDebuggingDevices();
        goto LABEL_157;
      case ProcessWorkingSetWatch:
      case ProcessWorkingSetWatchEx:
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
        v47 = PsChargeProcessNonPagedPoolQuota((__int64)Object, 0x6028uLL);
        if ( v47 < 0 )
          goto LABEL_157;
        Pool2 = ExAllocatePool2(0x40uLL, 0x6028uLL, 0x73577350u);
        v161 = (void *)Pool2;
        if ( Pool2 )
        {
          PsWatchEnabled = 1;
          *(_DWORD *)Pool2 = 0;
          *(_QWORD *)(Pool2 + 8) = 0LL;
          KeInitializeGate(Pool2 + 16, 0);
          if ( !_InterlockedCompareExchange64((volatile signed __int64 *)Object + 88, (signed __int64)v161, 0LL) )
          {
LABEL_218:
            v47 = 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v47;
          }
          ExFreePoolWithTag(v161, 0);
          v47 = -1073741752;
        }
        else
        {
          v47 = -1073741801;
        }
        PsReturnProcessNonPagedPoolQuota((ULONG_PTR)Object, 0x6028uLL);
        goto LABEL_157;
      case ProcessUserModeIOPL:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v250,
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
      case ProcessEnableAlignmentFaultFixup:
        if ( ProcessInformationLength != 1 )
          return -1073741820;
        v168 = *(_BYTE *)ProcessInformation;
        v264 = *(_BYTE *)ProcessInformation;
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
        PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
        if ( v168 )
          *((_DWORD *)Object + 226) |= 4u;
        else
          *((_DWORD *)Object + 226) &= ~4u;
        if ( *((_QWORD *)Object + 98) )
        {
          v169 = *((_WORD *)Object + 886);
          if ( v169 == 332 || v169 == 452 )
            v168 = 1;
        }
        KeSetAutoAlignmentProcess(Object, v168);
        PspUnlockProcessExclusive((__int64)Object);
        goto LABEL_24;
      case ProcessPriorityClass:
        if ( ProcessInformationLength != 2 )
          return -1073741820;
        v164 = *(_WORD *)ProcessInformation;
        v257 = *(_WORD *)ProcessInformation;
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
        v101 = PspSetProcessPriorityClass((__int64)Object, HIBYTE(v257), (__int64)v250, PreviousMode);
        if ( v101 >= 0 )
        {
          if ( (unsigned int)dword_140E08630 > 5 && tlgKeywordOn((__int64)&dword_140E08630, 0x400000000000LL) )
          {
            v247[0] = v164;
            *(_QWORD *)&SubjectContext[32] = v247;
            v322 = 1LL;
            v313 = (PVOID)0x1000000;
            v323 = &v313;
            v324 = 8;
            v325 = 0;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E08630,
              (unsigned __int8 *)&byte_140051D27,
              0LL,
              0LL,
              4u,
              (PEVENT_DATA_DESCRIPTOR)SubjectContext);
          }
          MmGetMinWsPagePriority();
          if ( (unsigned int)Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline() )
            KeSetPriorityAndQuantumProcess(
              (__int64)Object,
              *(_DWORD *)&PspPriorityTable[2 * *((unsigned __int8 *)Object + 839)],
              0,
              0,
              0);
          else
            PsSetProcessPriorityByClass(Object, 1LL);
        }
        goto LABEL_330;
      case ProcessWx86Information:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v170 = *(_DWORD *)ProcessInformation;
        v290 = *(_DWORD *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        v47 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)v250,
                512,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v47 < 0 )
          return v47;
        v20 = Object;
        if ( *((_QWORD *)Object + 200) )
        {
          v47 = -1073741790;
          goto LABEL_158;
        }
        if ( v170 )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 0x1000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFEFFFFFF);
        goto LABEL_157;
      case ProcessAffinityMask:
        if ( ProcessInformationLength == 8 )
        {
          *(_QWORD *)&v315 = *(_QWORD *)ProcessInformation;
          if ( !(_QWORD)v315 )
            return -1073741811;
        }
        else
        {
          if ( ProcessInformationLength != 16 )
            return -1073741820;
          v315 = *(_OWORD *)ProcessInformation;
          if ( !KeVerifyGroupAffinity((__int64)&v315, 0) )
            return -1073741811;
          v7 = v250;
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
        v20 = Object;
        if ( (*((_DWORD *)Object + 34) & 0x1000) != 0 )
        {
          v47 = -1073741811;
          goto LABEL_158;
        }
        KeQueryPrimaryGroupProcess((__int64)Object, &v255, v102, v103);
        if ( (_DWORD)v4 == 8 )
        {
          v150 = v315 & KeActiveProcessors.Bitmap[v255];
          if ( v150 != (_QWORD)v315 )
          {
LABEL_470:
            v47 = -1073741811;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v47;
          }
          WORD4(v315) = v255;
          *(_QWORD *)&v315 = v150;
        }
        --CurrentThread->KernelApcDisable;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
        {
          v104 = (signed __int64 *)((char *)Object + 456);
          v105 = (char *)KeAbPreAcquire((__int64)Object + 456, 0LL);
          if ( _InterlockedCompareExchange64(v104, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v104, 0, v105, (__int64)v104);
          if ( v105 )
            v105[10] = 1;
          v47 = PspSetProcessAffinitySafe((struct _KPROCESS *)Object, (__int64)&v270);
          v106 = (signed __int64 *)Object;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 57, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v106 + 57);
          KeAbPostRelease((ULONG_PTR)(v106 + 57));
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
          if ( v47 >= 0 )
          {
            if ( (_DWORD)v270 )
              PspUpdatePebForAffinityChange((__int64)CurrentThread, (__int64)Object);
            _InterlockedOr((volatile signed __int32 *)Object + 124, 0x200000u);
          }
        }
        else
        {
          v47 = -1073741558;
        }
        KeLeaveCriticalRegionThread();
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v47;
      case ProcessPriorityBoost:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v291 = *(_DWORD *)ProcessInformation;
        v143 = v291 != 0;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v47 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
          goto LABEL_287;
        KeSetDisableBoostProcess((__int64)Object, v143);
        goto LABEL_419;
      case ProcessDeviceMap:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        v311 = *(void **)ProcessInformation;
        if ( RtlIsSandboxedToken(0LL, PreviousMode) )
          return -1073741790;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v250,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v47 = ObSetProcessDeviceMap((__int64)Object);
        goto LABEL_157;
      case ProcessSessionInformation:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v171 = *(_DWORD *)ProcessInformation;
        v295 = *(_DWORD *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v250,
                   516,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v171 != (unsigned int)PsGetSessionId((__int64)Object) )
          LODWORD(v8) = -1073741790;
        goto LABEL_207;
      case ProcessForegroundInformation:
        if ( ProcessInformationLength != 1 )
          return -1073741820;
        v165 = *(_BYTE *)ProcessInformation;
        v263 = *(_BYTE *)ProcessInformation;
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
        if ( (unsigned int)dword_140E08630 > 5 && tlgKeywordOn((__int64)&dword_140E08630, 0x400000000000LL) )
        {
          v247[0] = v165;
          *(_QWORD *)&SubjectContext[32] = v247;
          v322 = 1LL;
          v313 = (PVOID)0x1000000;
          v323 = &v313;
          v324 = 8;
          v325 = 0;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E08630,
            (unsigned __int8 *)&dword_140051CC4,
            0LL,
            0LL,
            4u,
            (PEVENT_DATA_DESCRIPTOR)SubjectContext);
        }
        MmGetMinWsPagePriority();
        if ( !(unsigned int)Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline() )
        {
          LOBYTE(v8) = v165 != 0;
          PsSetProcessPriorityByClass(Object, (unsigned int)v8);
        }
        goto LABEL_24;
      case ProcessBreakOnTermination:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v172 = *(_DWORD *)ProcessInformation;
        v304 = *(_DWORD *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v250,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v172 )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 0x2000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFDFFF);
        goto LABEL_24;
      case ProcessDebugFlags:
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
        v47 = result;
        if ( result < 0 )
          return result;
        v279 = *(_DWORD *)v5;
        if ( (v279 & 0xFFFFFFFE) != 0 )
          goto LABEL_470;
        if ( (v279 & 1) != 0 )
          _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFFFD);
        else
          _InterlockedOr((volatile signed __int32 *)Object + 125, 2u);
        goto LABEL_157;
      case ProcessHandleTracing:
        Handle = 0LL;
        if ( !ProcessInformationLength )
          goto LABEL_752;
        if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        v173 = *(_DWORD *)ProcessInformation;
        LODWORD(Handle) = *(_DWORD *)ProcessInformation;
        if ( ProcessInformationLength == 8 )
          HIDWORD(Handle) = *((_DWORD *)ProcessInformation + 1);
        else
          HIDWORD(Handle) = 0;
        if ( v173 && (v173 & 0xFFFFFFF0) != 0 )
          return -1073741811;
LABEL_752:
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
        v47 = PsSetProcessHandleTracingInformation((struct _EX_RUNDOWN_REF *)Object, p_Handle);
        goto LABEL_157;
      case ProcessIoPriority:
        if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( ProcessInformationLength == 4 )
        {
          LODWORD(v68) = *(_DWORD *)ProcessInformation;
          v268 = *(_DWORD *)ProcessInformation;
          LOBYTE(v69) = 0;
        }
        else
        {
          v68 = *(_QWORD *)ProcessInformation;
          v300 = v68;
          v69 = HIDWORD(v68);
          v268 = v68;
        }
        if ( (unsigned int)v68 >= 4 )
          return -1073741811;
        if ( (unsigned int)v68 < 3 )
          goto LABEL_353;
        if ( !SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, (int)v7, 512, PreviousMode) )
          return -1073741727;
        v7 = v250;
LABEL_353:
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v47 = result;
        if ( result < 0 )
          return result;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
        {
          PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
          v109 = (volatile signed __int32 *)Object;
          v110 = *((_DWORD *)Object + 125);
          v111 = v268 << 27;
          do
          {
            v112 = v110;
            v110 = _InterlockedCompareExchange(v109 + 125, v111 | v110 & 0xC7FFFFFF, v110);
          }
          while ( v110 != v112 );
          v113 = Object;
          v114 = (KSPIN_LOCK *)*((_QWORD *)Object + 110);
          if ( v114 != (KSPIN_LOCK *)((char *)Object + 880) )
          {
            v115 = v268;
            do
            {
              if ( (_BYTE)v69 == 1 && ((*((_DWORD *)v114 + 10) >> 9) & 7) < v115 )
                IoBoostThreadIoPriority(v114 - 175, v115, 0);
              PsSetIoPriorityThread((__int64)(v114 - 175), v115);
              v114 = (KSPIN_LOCK *)*v114;
              v113 = Object;
            }
            while ( v114 != (KSPIN_LOCK *)((char *)Object + 880) );
          }
LABEL_418:
          PspUnlockProcessExclusive((__int64)v113);
LABEL_419:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        }
        else
        {
LABEL_287:
          v47 = -1073741558;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        }
        return v47;
      case ProcessExecuteFlags:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        v280 = *(_DWORD *)ProcessInformation;
        v71 = KeSetExecuteOptions((__int64)KeGetCurrentThread()->ApcState.Process, v280);
        if ( v71 >= 0 && (v280 & 3) == 1 )
          MmRemoveExecuteGrants();
        return v71;
      case ProcessTlsInformation:
        memset(v318, 0, sizeof(v318));
        v319 = 0LL;
        v269 = 0LL;
        v273 = 0LL;
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741823;
        if ( ProcessInformationLength < 0x28
          || ProcessInformationLength - 16 != 24 * ((ProcessInformationLength - 16) / 0x18uLL) )
        {
          return -1073741820;
        }
        if ( ProcessInformationLength == 40 )
        {
          P = v318;
        }
        else
        {
          P = (PVOID)ExAllocatePool2(0x101uLL, ProcessInformationLength, 0x736C5450u);
          if ( !P )
            return -1073741670;
        }
        v274 = (char *)P;
        memmove(P, v5, v4);
        v302 = (char *)P + 4;
        if ( *((_DWORD *)P + 1) >= 2u
          || (*(_DWORD *)P & 0xFFFFFFFE) != 0
          || (v301 = (unsigned int *)((char *)P + 8), v26 = *((unsigned int *)P + 2), !(_DWORD)v26)
          || (unsigned int)(v4 - 16) / 0x18uLL != v26 )
        {
          v47 = -1073741820;
          goto LABEL_136;
        }
        v27 = 0;
        while ( 2 )
        {
          v249 = v27;
          if ( v27 < (unsigned int)v26 )
          {
            if ( !*((_DWORD *)P + 6 * v27 + 4) )
            {
              ++v27;
              continue;
            }
            goto LABEL_220;
          }
          break;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        Object = Process;
        v258 = 0;
        if ( (*(_DWORD *)P & 1) != 0 )
        {
          if ( !Process[1].ReadyTime || (v88 = WORD2(Process[3].PerProcessorCycleTimes), v88 != 332) && v88 != 452 )
          {
LABEL_220:
            v47 = -1073741811;
            goto LABEL_136;
          }
          v258 = 1;
        }
        v29 = v258 ^ 1u;
        Alignment = 4 * v29 + 4;
        v276 = 4 * v29 + 4;
        v277 = (char *)v5;
        v249 = 0;
        v248 = 0;
        v251 = 0;
        for ( j = PsGetNextProcessThread(Process, 0LL); ; j = PsGetNextProcessThread(Object, v260) )
        {
          v260 = (PVOID)j;
          v31 = (volatile void **)v249;
          LODWORD(v250) = v249;
          v32 = j;
          if ( !j || v249 >= *v301 )
            break;
          if ( (*(_DWORD *)(j + 116) & 0x400) == 0 )
          {
            RunRef = (PEX_RUNDOWN_REF)(j + 1416);
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(j + 1416)) )
            {
              v33 = *(_QWORD *)(v32 + 240);
              if ( v258 )
              {
                v34 = (char *)(v33 + 8236);
                v273 = v33 + 8236;
                v35 = (char *)*(unsigned int *)(v33 + 8236);
              }
              else
              {
                v34 = (char *)(v33 + 88);
                v273 = v33 + 88;
                v35 = *(char **)(v33 + 88);
              }
              v269 = v35;
              if ( v35 )
              {
                if ( *v302 == 1 )
                {
                  if ( v35 == v34 )
                  {
                    v269 = 0LL;
                    v49 = v31;
                  }
                  else
                  {
                    v48 = v276 * *((unsigned int *)P + 3);
                    if ( v48 )
                    {
                      if ( ((Alignment - 1) & (unsigned int)v35) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( (unsigned __int64)&v35[v48] > 0x7FFFFFFF0000LL || &v35[v48] < v35 )
                        v35 = v269;
                    }
                    v272 = (char *)v249;
                    v31 = (volatile void **)((char *)P + 24 * v249 + 24);
                    ProbeForWrite(*v31, v276 * *((unsigned int *)P + 3), Alignment);
                    memmove((void *)*v31, v35, v276 * *((unsigned int *)P + 3));
                    _InterlockedOr(v245, 0);
                    LODWORD(v31) = (_DWORD)v250;
                    v49 = (volatile void **)v272;
                  }
                  v50 = &v277[24 * (_QWORD)v49];
                  v250 = v50;
                  v51 = v50 + 16;
                  v272 = v50 + 16;
                  *((_DWORD *)v50 + 4) |= 1u;
                  v52 = &v274[24 * (unsigned int)v31 + 24];
                  if ( v258 )
                  {
                    v303 = *(_DWORD *)v52;
                    *(_DWORD *)(v33 + 8236) = v303;
                  }
                  else
                  {
                    *(_QWORD *)(v33 + 88) = *(_QWORD *)v52;
                  }
                  if ( v248 < 0 )
                  {
                    *v51 &= ~1u;
                  }
                  else
                  {
                    *((_QWORD *)v50 + 4) = *((_QWORD *)v260 + 162);
                    *((_QWORD *)v50 + 3) = v269;
                    *v51 ^= 3u;
                    ++v249;
                  }
                }
                else
                {
                  v36 = 24LL * v249;
                  v37 = &v277[v36];
                  v272 = &v277[v36];
                  v38 = &v277[v36 + 16];
                  v250 = v38;
                  *(_DWORD *)v38 |= 1u;
                  v39 = *((unsigned int *)v274 + 3);
                  if ( v258 )
                  {
                    v43 = (unsigned __int64)&v35[4 * v39];
                    if ( v43 >= 0x7FFFFFFF0000LL )
                      v43 = 0x7FFFFFFF0000LL;
                    v44 = *(unsigned int *)v43;
                    v41 = (unsigned int)v44;
                    v273 = v44;
                    v45 = *(_DWORD *)&v274[v36 + 24];
                    v298 = v45;
                    v46 = (unsigned __int64)&v269[4 * *((unsigned int *)v274 + 3)];
                    if ( v46 >= 0x7FFFFFFF0000LL )
                      v46 = 0x7FFFFFFF0000LL;
                    *(_DWORD *)v46 = v45;
                  }
                  else
                  {
                    v40 = (unsigned __int64)&v35[8 * v39];
                    if ( v40 >= 0x7FFFFFFF0000LL )
                      v40 = 0x7FFFFFFF0000LL;
                    v41 = *(_QWORD *)v40;
                    v273 = *(_QWORD *)v40;
                    v42 = (unsigned __int64)&v269[8 * *((unsigned int *)v274 + 3)];
                    if ( v42 >= 0x7FFFFFFF0000LL )
                      v42 = 0x7FFFFFFF0000LL;
                    RtlCopyVolatileMemory((void *)v42, (char *)P + v36 + 24, 8uLL);
                  }
                  if ( v248 < 0 )
                  {
                    *(_DWORD *)v38 &= ~1u;
                  }
                  else
                  {
                    *((_QWORD *)v37 + 3) = v41;
                    *(_DWORD *)v38 ^= 3u;
                    ++v249;
                  }
                }
              }
              ExReleaseRundownProtection_0(RunRef);
              if ( v248 < 0 )
                break;
            }
          }
        }
        if ( v260 )
          ObfDereferenceObjectWithTag(v260, 0x6E457350u);
        v47 = v248;
LABEL_136:
        if ( P != v318 )
          ExFreePoolWithTag(P, 0);
        return v47;
      case ProcessPagePriority:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v85 = *(_DWORD *)ProcessInformation;
        v281 = v85;
        if ( v85 > (unsigned int)MmGetDefaultPagePriority() || v85 < (unsigned int)MmGetMinWsPagePriority() )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v250,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v47 = result;
        v248 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61) )
          goto LABEL_287;
        PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
        v126 = v85 << 12;
        v127 = (volatile signed __int32 *)Object;
        v128 = *((_DWORD *)Object + 124);
        do
        {
          v129 = v128;
          v128 = _InterlockedCompareExchange(v127 + 124, v126 | v128 & 0xFFFF8FFF, v128);
        }
        while ( v128 != v129 );
        v113 = Object;
        v130 = (_QWORD *)*((_QWORD *)Object + 110);
        if ( v130 != (_QWORD *)((char *)Object + 880) )
        {
          v131 = v281;
          do
          {
            PsSetPagePriorityThread((__int64)(v130 - 175), v131);
            v130 = (_QWORD *)*v130;
            v113 = Object;
          }
          while ( v130 != (_QWORD *)((char *)Object + 880) );
          v47 = v248;
        }
        goto LABEL_418;
      case ProcessInstrumentationCallback:
        memset(&ApcState, 0, sizeof(ApcState));
        if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
          return -1073741820;
        if ( ProcessInformationLength == 8 )
        {
          v275.m128i_i64[0] = 0LL;
          v89 = *(_QWORD *)ProcessInformation;
          v275.m128i_i64[1] = *(_QWORD *)ProcessInformation;
        }
        else
        {
          v275 = *(__m128i *)ProcessInformation;
          v89 = _mm_srli_si128(v275, 8).m128i_u64[0];
        }
        if ( v275.m128i_i32[1] )
          return -1073741811;
        if ( v275.m128i_i32[0] )
          return -1073741736;
        if ( v89 != (__int64)(v89 << 16) >> 16 )
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
        v90 = KeGetCurrentThread()->ApcState.Process;
        v91 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode);
        v92 = Object;
        if ( !v91 && Object != v90 )
        {
LABEL_676:
          ObfDereferenceObjectWithTag(v92, 0x79517350u);
          return -1073741727;
        }
        v93 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
        v94 = (struct _EX_RUNDOWN_REF *)Object;
        if ( !v93 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741558;
        }
        v95 = 0;
        if ( *((_QWORD *)Object + 98) )
        {
          v144 = *((_WORD *)Object + 886);
          if ( v144 == 332 || v144 == 452 )
            v95 = 1;
        }
        ReadyTime = v90[1].ReadyTime;
        if ( v95 )
        {
          if ( ReadyTime )
          {
            v151 = WORD2(v90[3].PerProcessorCycleTimes);
            if ( v151 == 332 || v151 == 452 )
            {
              KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
              v101 = 0;
              if ( v275.m128i_i64[1] < (unsigned __int64)MmGetMaximumUserAddress()
                && (unsigned int)MmValidateUserCallTarget(v275.m128i_i64[1], 1) )
              {
                v177 = (HANDLE *)*((_QWORD *)Object + 98);
                if ( v177 )
                  v8 = *v177;
                *((_DWORD *)v8 + 294) = v275.m128i_i32[2];
              }
              else
              {
                v101 = -1073741811;
              }
              KiUnstackDetachProcess((__int64)&ApcState, 0, v175, v176);
              v94 = (struct _EX_RUNDOWN_REF *)Object;
              goto LABEL_329;
            }
          }
        }
        else if ( !ReadyTime || (v145 = WORD2(v90[3].PerProcessorCycleTimes), v145 != 332) && v145 != 452 )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          v97 = v275.m128i_i64[1];
          v98 = MmValidateUserCallTarget(v275.m128i_i64[1], 0);
          v101 = -1073741811;
          if ( v98 )
            v101 = 0;
          KiUnstackDetachProcess((__int64)&ApcState, 0, v99, v100);
          v94 = (struct _EX_RUNDOWN_REF *)Object;
          if ( v98 )
          {
            PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
            *((_QWORD *)Object + 45) = v97;
            v147 = Object;
            v148 = (volatile signed __int32 *)*((_QWORD *)Object + 110);
            if ( v148 != (volatile signed __int32 *)((char *)Object + 880) )
            {
              while ( 1 )
              {
                if ( v97 )
                  _interlockedbittestandset(v148 - 350, 0x19u);
                else
                  _interlockedbittestandreset(v148 - 350, 0x19u);
                v148 = *(volatile signed __int32 **)v148;
                v147 = Object;
                if ( v148 == (volatile signed __int32 *)((char *)Object + 880) )
                  break;
                v97 = v275.m128i_i64[1];
              }
            }
            PspUnlockProcessExclusive((__int64)v147);
            v94 = (struct _EX_RUNDOWN_REF *)Object;
          }
          goto LABEL_329;
        }
        v101 = -1073741637;
LABEL_329:
        ExReleaseRundownProtection_0(v94 + 61);
        goto LABEL_330;
      case ProcessThreadStackAllocation:
        v306 = 0LL;
        v307 = 0LL;
        v308 = 0LL;
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        v23 = 0LL;
        if ( ProcessInformationLength == 40 )
        {
          if ( PreviousMode )
          {
            v306 = *(_OWORD *)ProcessInformation;
            v307 = *((_OWORD *)ProcessInformation + 1);
            v308 = *((_QWORD *)ProcessInformation + 4);
            v23 = (char *)ProcessInformation + 32;
            v5 = &v306;
          }
          v24 = *(_DWORD *)v5;
          if ( *(_DWORD *)v5 > 0x40u || *((_DWORD *)v5 + 1) | *((_DWORD *)v5 + 2) | *((_DWORD *)v5 + 3) )
            return -1073741811;
          ++v5;
        }
        else
        {
          if ( ProcessInformationLength != 24 )
            return -1073741820;
          v24 = 0;
          if ( PreviousMode )
          {
            v307 = *(_OWORD *)ProcessInformation;
            v23 = (char *)ProcessInformation + 16;
            v5 = &v307;
          }
        }
        if ( !*(_QWORD *)v5 )
          return -1073741811;
        v313 = *(PVOID *)v5;
        *((_QWORD *)v5 + 2) = 0LL;
        result = MmAllocateUserStack((int)v5 + 16, *((_QWORD *)v5 + 1), (unsigned int)&v313, v24, 0);
        v25 = result;
        if ( result >= 0 )
        {
          if ( PreviousMode )
            *(_QWORD *)v23 = *((_QWORD *)v5 + 2);
          return v25;
        }
        return result;
      case ProcessAffinityUpdateMode:
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        LODWORD(Handle) = *(_DWORD *)ProcessInformation;
        if ( ((unsigned int)Handle & 0xFFFFFFFC) != 0 )
          return -1073741811;
        return PspSetProcessAffinityUpdateMode((__int64)CurrentThread, (int *)&Handle);
      case ProcessMemoryAllocationMode:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v293 = *(_DWORD *)ProcessInformation;
        v178 = v293;
        if ( (v293 & 0xFFFFFFFE) != 0 )
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
        if ( (v178 & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFDFFFFF);
        goto LABEL_24;
      case ProcessTokenVirtualizationEnabled:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v179 = *(_DWORD *)ProcessInformation;
        v292 = *(_DWORD *)ProcessInformation;
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
        v180 = (void *)PsReferencePrimaryTokenWithTag((__int64)Object, 0x746C6644u);
        SeSetVirtualizationToken(v180, v179);
        ObfDereferenceObject(v180);
        goto LABEL_24;
      case ProcessConsoleHostProcess:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        v309 = *(struct _LIST_ENTRY **)ProcessInformation;
        if ( ((unsigned __int8)v309 & 3) != 1 )
          return -1073741811;
        KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink = v309;
        return 0;
      case ProcessMitigationPolicy:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        v252 = *(void **)ProcessInformation;
        if ( v7 != (HANDLE)-1LL && (_DWORD)v252 != 2 )
          return -1073741811;
        v56 = (unsigned __int8 *)KeGetCurrentThread()->ApcState.Process;
        Object = v56;
        if ( (_DWORD)v252 != 8 )
        {
          if ( (_DWORD)v252 != 16 )
          {
            switch ( (int)v252 )
            {
              case 1:
                if ( HIDWORD(v252) >= 0x10 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 2) == 0 && (*((_DWORD *)v56 + 468) & 0x10) != 0
                  || (BYTE4(v252) & 1) == 0 && (*((_DWORD *)v56 + 468) & 0x40) == 0 )
                {
                  goto LABEL_773;
                }
                if ( (BYTE4(v252) & 8) != 0 )
                  goto LABEL_382;
                if ( (*((_DWORD *)v56 + 468) & 8) != 0 )
                  goto LABEL_773;
                if ( (BYTE4(v252) & 8) != 0 )
                {
LABEL_382:
                  if ( (BYTE4(v252) & 2) == 0 )
                  {
                    v57 = -1073741776;
                    goto LABEL_259;
                  }
                }
                else if ( (BYTE4(v252) & 2) == 0 )
                {
LABEL_476:
                  if ( (BYTE4(v252) & 1) != 0 )
                  {
                    _InterlockedAnd((volatile signed __int32 *)v56 + 468, 0xFFFFFFBF);
                    v56 = (unsigned __int8 *)Object;
                  }
                  if ( (BYTE4(v252) & 8) != 0 )
                  {
                    _InterlockedOr((volatile signed __int32 *)v56 + 468, 8u);
                    v56 = (unsigned __int8 *)Object;
                  }
                  goto LABEL_480;
                }
                _InterlockedOr((volatile signed __int32 *)v56 + 468, 0x10u);
                v56 = (unsigned __int8 *)Object;
                goto LABEL_476;
              case 2:
                v117 = HIDWORD(v252);
                if ( (HIDWORD(v252) & 0xFFFFFFF0) != 0 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 1) != 0 && (BYTE4(v252) & 8) != 0 )
                {
                  v117 = HIDWORD(v252) & 0xFFFFFFF7;
                  HIDWORD(v252) &= ~8u;
                }
                v118 = v117 & 1;
                if ( (v117 & 1) == 0 && ((v117 & 2) != 0 || (v117 & 4) != 0) )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (unsigned int)PsIsSystemWideMitigationOptionSet(9LL) )
                {
                  v57 = -1073741637;
                  goto LABEL_258;
                }
                if ( v250 == (HANDLE)-1LL )
                {
                  v56 = (unsigned __int8 *)Object;
                  v79 = 0;
                }
                else
                {
                  v57 = ObpReferenceObjectByHandleWithTag(
                          (ULONG_PTR)v250,
                          512,
                          (__int64)PsProcessType,
                          PreviousMode,
                          0x79517350u,
                          &Object,
                          0LL,
                          0LL);
                  if ( v57 < 0 )
                    goto LABEL_258;
                  v79 = 1;
                  v56 = (unsigned __int8 *)Object;
                  if ( Object != KeGetCurrentThread()->ApcState.Process )
                  {
                    v187 = *((_DWORD *)Object + 468);
                    if ( (v187 & 0x100) != 0 )
                    {
                      memset(SubjectContext, 0, 32);
                      SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, (PSECURITY_SUBJECT_CONTEXT)SubjectContext);
                      IsSandboxedToken = RtlIsSandboxedToken((PSECURITY_SUBJECT_CONTEXT)SubjectContext, 1);
                      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
                      if ( RtlIsSandboxedToken(0LL, PreviousMode)
                        || !IsSandboxedToken
                        || (v56 = (unsigned __int8 *)Object, (*((_DWORD *)Object + 468) & 0x400) == 0) )
                      {
                        v193 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode);
                        v56 = (unsigned __int8 *)Object;
                        if ( !v193 )
                        {
                          v57 = -1073741790;
                          goto LABEL_260;
                        }
                      }
                      v189 = HIDWORD(v252);
                    }
                    else
                    {
                      v189 = HIDWORD(v252);
                      if ( (BYTE4(v252) & 8) == 0 && (v117 & 1) == 0 && (v187 & 0x800) != 0 )
                      {
                        v57 = -1073741790;
                        goto LABEL_260;
                      }
                    }
                    v190 = 0;
                    if ( !v118 )
                      v190 = 2304;
                    v191 = -v118;
                    v192 = (v191 != 0 ? 0x100 : 0) | 0x800;
                    if ( (v189 & 8) == 0 )
                      v192 = v191 != 0 ? 0x900 : 0;
                    if ( (v189 & 2) != 0 )
                      v192 |= 0x200u;
                    else
                      v190 |= 0x200u;
                    v194 = v189 >> 2;
                    v195 = v192 | 0x400;
                    if ( (v194 & 1) == 0 )
                      v195 = v192;
                    v196 = v190 | 0x400;
                    v197 = (v194 & 1) == 0;
                    goto LABEL_852;
                  }
                  v117 = HIDWORD(v252);
                }
                if ( !v118 && (*((_DWORD *)v56 + 468) & 0x100) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_260;
                }
                v154 = (v117 >> 3) & 1;
                if ( !v154 && !v118 && (*((_DWORD *)v56 + 468) & 0x800) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_260;
                }
                v198 = (v117 >> 1) & 1;
                if ( v198 && (*((_DWORD *)v56 + 468) & 0x300) == 0x100 )
                {
                  v57 = -1073741790;
                  goto LABEL_260;
                }
                v199 = (v117 >> 2) & 1;
                if ( v199 && (*((_DWORD *)v56 + 468) & 0x500) == 0x100 )
                {
                  v57 = -1073741790;
                  goto LABEL_260;
                }
                if ( v118 )
                {
                  v200 = 2304;
                }
                else
                {
                  v200 = 0;
                  if ( v154 )
                    v200 = 2048;
                }
                v190 = (v198 ^ 1) << 9;
                v195 = v200 | 0x200;
                if ( !v198 )
                  v195 = v200;
                if ( v199 )
                  v195 |= 0x400u;
                v196 = v190 | 0x400;
                v197 = v199 == 0;
LABEL_852:
                if ( v197 )
                  v190 = v196;
                RtlInterlockedSetClearBits((volatile signed __int32 *)v56 + 468, v195, v190);
                v57 = 0;
                v56 = (unsigned __int8 *)Object;
                goto LABEL_260;
              case 3:
                if ( HIDWORD(v252) >= 4 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 2) != 0 )
                  goto LABEL_298;
                if ( (BYTE4(v252) & 1) != 0 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 2) != 0 )
                {
LABEL_298:
                  if ( (BYTE4(v252) & 1) == 0 )
                  {
                    v57 = -1073741811;
                    goto LABEL_259;
                  }
                }
                v152 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v56);
                if ( v152 )
                {
                  v181 = ExEnableHandleExceptions(v152, BYTE4(v252) & 1);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
                  if ( !v181 )
                    LODWORD(v8) = -1073741790;
                  v57 = (int)v8;
                }
                else
                {
                  v57 = -1073741558;
                }
                goto LABEL_258;
              case 4:
                v153 = HIDWORD(v252);
                if ( (HIDWORD(v252) & 0xFFFFFFF0) != 0 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 1) != 0 && (BYTE4(v252) & 2) != 0 )
                {
                  v153 = HIDWORD(v252) & 0xFFFFFFFD;
                  HIDWORD(v252) &= ~2u;
                }
                if ( (v153 & 4) != 0 && (v153 & 8) != 0 )
                {
                  v153 &= ~8u;
                  HIDWORD(v252) = v153;
                }
                v182 = v153 & 1;
                if ( (v153 & 1) == 0 && (*((_DWORD *)v56 + 468) & 0x1000) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                v183 = (v153 >> 2) & 1;
                if ( !v183 && (*((_DWORD *)v56 + 502) & 2) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                v184 = (v153 >> 1) & 1;
                if ( !v184 && (v153 & 1) == 0 && (*((_DWORD *)v56 + 468) & 0x2000) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                v185 = (v153 >> 3) & 1;
                if ( !v185 && !v183 && (*((_DWORD *)v56 + 502) & 4) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                if ( v182 || v184 )
                {
                  IsGuiThread = PsIsGuiThread((__int64)CurrentThread);
                  v56 = (unsigned __int8 *)Object;
                  if ( IsGuiThread )
                  {
                    v57 = -1073741431;
                    goto LABEL_259;
                  }
                }
                v57 = 0;
                if ( v182 )
                {
                  _InterlockedOr((volatile signed __int32 *)v56 + 468, 0x3000u);
                }
                else
                {
                  if ( !v184 )
                    goto LABEL_808;
                  _InterlockedOr((volatile signed __int32 *)v56 + 468, 0x2000u);
                }
                v56 = (unsigned __int8 *)Object;
LABEL_808:
                if ( v183 )
                {
                  _InterlockedOr((volatile signed __int32 *)v56 + 502, 6u);
                  goto LABEL_258;
                }
                if ( !v185 )
                  goto LABEL_259;
                _InterlockedOr((volatile signed __int32 *)v56 + 502, 4u);
                goto LABEL_258;
              case 6:
                if ( (HIDWORD(v252) & 0xFFFFFFFE) != 0 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 1) == 0 && (*((_DWORD *)v56 + 468) & 0x80u) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                v57 = 0;
                if ( (BYTE4(v252) & 1) == 0 )
                  goto LABEL_259;
                _InterlockedOr((volatile signed __int32 *)v56 + 468, 0x80u);
                goto LABEL_258;
              case 7:
                if ( (BYTE4(v252) & 8) != 0 || (BYTE4(v252) & 0x10) != 0 )
                  goto LABEL_617;
                if ( (HIDWORD(v252) & 0xFFFFFFE0) != 0 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (*((_DWORD *)v56 + 468) & 1) == 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 4) == 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                _InterlockedOr((volatile signed __int32 *)v56 + 468, 4u);
                v57 = 0;
                goto LABEL_258;
              case 9:
                if ( (HIDWORD(v252) & 0xFFFFFFFC) != 0 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 1) == 0 && (*((_DWORD *)v56 + 468) & 0x10000) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 1) == 0 && (BYTE4(v252) & 2) == 0 && (*((_DWORD *)v56 + 468) & 0x20000) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                v57 = 0;
                if ( (BYTE4(v252) & 1) != 0 )
                {
                  v78 = 0x10000;
                  v77 = 0x20000;
                  goto LABEL_257;
                }
                if ( (BYTE4(v252) & 2) == 0 )
                  goto LABEL_259;
                v78 = 0x20000;
                v77 = 0x10000;
                goto LABEL_257;
              case 10:
                v116 = HIDWORD(v252);
                if ( (HIDWORD(v252) & 0xFFFFFFE0) != 0 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 1) != 0 && (BYTE4(v252) & 8) != 0 )
                  v116 = HIDWORD(v252) & 0xFFFFFFF7;
                if ( (v116 & 2) != 0 && (v116 & 0x10) != 0 )
                  v116 &= ~0x10u;
                v132 = v116 & 1;
                v133 = 0x80000;
                if ( (v116 & 1) == 0 && (*((_DWORD *)v56 + 468) & 0x80000) != 0 )
                  goto LABEL_773;
                v134 = (v116 >> 1) & 1;
                if ( !v134 && (*((_DWORD *)v56 + 468) & 0x200000) != 0 )
                  goto LABEL_773;
                v135 = (v116 >> 2) & 1;
                if ( !v135 && (*((_DWORD *)v56 + 468) & 0x40000) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                v136 = (v116 >> 3) & 1;
                if ( !v136 && (v116 & 1) == 0 && (*((_DWORD *)v56 + 468) & 0x100000) != 0 )
                  goto LABEL_773;
                v137 = (v116 >> 4) & 1;
                if ( !v137 && !v134 && (*((_DWORD *)v56 + 468) & 0x400000) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                v138 = 0;
                if ( v132 )
                {
                  v138 = 0x100000;
                }
                else
                {
                  v133 = 0;
                  if ( v136 )
                    v133 = 0x100000;
                }
                if ( v134 )
                {
                  v133 |= 0x200000u;
                  v138 |= 0x400000u;
                }
                else if ( v137 )
                {
                  v133 |= 0x400000u;
                }
                v139 = v133 | 0x40000;
                if ( !v135 )
                  v139 = v133;
                RtlInterlockedSetClearBits((volatile signed __int32 *)v56 + 468, v139, v138);
                v57 = 0;
                goto LABEL_258;
              case 13:
                v119 = HIDWORD(v252);
                if ( (HIDWORD(v252) & 0xFFFFFFF8) != 0 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 1) == 0 && (BYTE4(v252) & 4) != 0 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 1) != 0 && (BYTE4(v252) & 2) != 0 )
                  v119 = HIDWORD(v252) & 0xFFFFFFFD;
                NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v56);
                v121 = NoChildProcessRestrictedPolicy;
                v122 = v119 & 1;
                if ( (v119 & 1) == 0 && NoChildProcessRestrictedPolicy - 1 <= 1 )
                {
                  v57 = -1073741790;
                  goto LABEL_258;
                }
                v123 = (v119 >> 2) & 1;
                if ( v123 && (_DWORD)v121 == 1 )
                {
                  v57 = -1073741790;
                  goto LABEL_258;
                }
                v124 = (v119 >> 1) & 1;
                if ( v124 )
                  goto LABEL_399;
                if ( v122 )
                  goto LABEL_400;
                if ( (_DWORD)v121 == 3 )
                {
                  v57 = -1073741790;
                  goto LABEL_258;
                }
LABEL_399:
                if ( v122 )
                {
LABEL_400:
                  v125 = Object;
                  if ( !v123 )
                  {
                    PspSetNoChildProcessRestrictedPolicy(Object, 1LL, v121);
                    v57 = 0;
                    goto LABEL_258;
                  }
                  v142 = 2LL;
                  goto LABEL_445;
                }
                if ( v124 )
                {
                  v142 = 3LL;
                  v125 = Object;
LABEL_445:
                  PspSetNoChildProcessRestrictedPolicy(v125, v142, v121);
                  goto LABEL_446;
                }
                break;
              case 14:
                if ( (HIDWORD(v252) & 0xFFFFFFE0) != 0 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 1) == 0 && (*((_DWORD *)v56 + 468) & 0x40000000) != 0
                  || ((HIDWORD(v252) >> 1) & 1) == 0 && *((int *)v56 + 468) < 0
                  || ((HIDWORD(v252) >> 3) & 1) == 0 && (*((_DWORD *)v56 + 469) & 0x2000) != 0
                  || ((HIDWORD(v252) >> 2) & 1) == 0 && (*((_DWORD *)v56 + 469) & 0x1000) != 0 )
                {
                  goto LABEL_773;
                }
                v201 = (HIDWORD(v252) >> 4) & 1;
                if ( !v201 && (*((_DWORD *)v56 + 502) & 1) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                if ( v201 )
                {
                  IsCoreIsolationMitigationPolicyEnforceable = KeIsCoreIsolationMitigationPolicyEnforceable();
                  v56 = (unsigned __int8 *)Object;
                  if ( !IsCoreIsolationMitigationPolicyEnforceable )
                  {
LABEL_617:
                    v57 = -1073741637;
                    goto LABEL_259;
                  }
                }
                if ( (BYTE4(v252) & 1) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)v56 + 468, 0x40000000u);
                  v56 = (unsigned __int8 *)Object;
                }
                if ( ((HIDWORD(v252) >> 1) & 1) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)v56 + 468, 0x80000000);
                  _InterlockedOr((volatile signed __int32 *)Object + 383, 0x200000u);
                  PspWriteProcessSecurityDomain((__int64)Object, _InterlockedIncrement64(&PsNextSecurityDomain), 1);
                  KeSynchronizeSecurityDomain((_KPROCESS *)Object);
                  PspSynchronizeThreadIsolationDomains((__int64)Object);
                  v56 = (unsigned __int8 *)Object;
                }
                if ( ((HIDWORD(v252) >> 2) & 1) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)v56 + 469, 0x1000u);
                  v56 = (unsigned __int8 *)Object;
                }
                if ( ((HIDWORD(v252) >> 3) & 1) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)v56 + 469, 0x2000u);
                  v56 = (unsigned __int8 *)Object;
                }
                if ( !v201 )
                {
LABEL_480:
                  v57 = 0;
                  goto LABEL_259;
                }
                PspApplyCoreIsolationPolicy((__int64)v56);
                v57 = 0;
                goto LABEL_258;
              case 15:
                v155 = HIDWORD(v252);
                if ( (HIDWORD(v252) & 0xFFFFFC00) != 0 )
                {
                  v57 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v252) & 0x10) != 0 )
                {
                  v155 = HIDWORD(v252) | 1;
                  HIDWORD(v252) |= 1u;
                }
                if ( (v155 & 0x200) != 0 )
                {
                  v155 |= 4u;
                  HIDWORD(v252) = v155;
                }
                if ( (v155 & 0x40) != 0 )
                {
                  v155 |= 0x20u;
                  HIDWORD(v252) = v155;
                }
                v203 = (v155 >> 4) & 1;
                if ( !v203 && (*((_DWORD *)v56 + 469) & 0x100000) != 0
                  || (v155 & 1) == 0 && (*((_DWORD *)v56 + 469) & 0x4000) != 0 )
                {
                  goto LABEL_773;
                }
                if ( (v155 & 1) != 0 && (*((_DWORD *)v56 + 469) & 0x4000) == 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                v204 = (v155 >> 9) & 1;
                if ( v204 && *((int *)v56 + 469) >= 0 )
                  goto LABEL_773;
                v205 = (v155 >> 2) & 1;
                if ( !v205 && (*((_DWORD *)v56 + 469) & 0x20000) != 0 )
                  goto LABEL_773;
                if ( v205 && (*((_DWORD *)v56 + 469) & 0x20000) == 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                v206 = (v155 >> 6) & 1;
                if ( !v206 && (*((_DWORD *)v56 + 469) & 0x400000) != 0 )
                  goto LABEL_773;
                v207 = (v155 >> 5) & 1;
                if ( !v207 && (*((_DWORD *)v56 + 469) & 0x200000) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                v208 = (v155 >> 8) & 1;
                if ( !v208 && (*((_DWORD *)v56 + 469) & 0x40000000) != 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                v209 = (v155 >> 1) & 1;
                if ( v209 && (*((_DWORD *)v56 + 469) & 0x8000) == 0 )
                  goto LABEL_773;
                if ( ((v155 >> 3) & 1) == 0 && (*((_DWORD *)v56 + 469) & 0x40000) != 0 )
                  goto LABEL_773;
                if ( ((v155 >> 3) & 1) != 0 && (*((_DWORD *)v56 + 469) & 0x40000) == 0 )
                  goto LABEL_773;
                v210 = (v155 >> 7) & 1;
                if ( !v210 && (*((_DWORD *)v56 + 469) & 0x800000) != 0 )
                  goto LABEL_773;
                if ( v210 && (*((_DWORD *)v56 + 469) & 0x800000) == 0 )
                {
                  v57 = -1073741790;
                  goto LABEL_259;
                }
                if ( v203 )
                {
                  _InterlockedOr((volatile signed __int32 *)v56 + 469, 0x100000u);
                  v56 = (unsigned __int8 *)Object;
                }
                if ( !v204 && v205 )
                {
                  _InterlockedAnd((volatile signed __int32 *)v56 + 469, 0x7FFFFFFFu);
                  v56 = (unsigned __int8 *)Object;
                }
                if ( v206 )
                {
                  _InterlockedOr((volatile signed __int32 *)v56 + 469, 0x200000u);
                  _InterlockedOr((volatile signed __int32 *)Object + 469, 0x400000u);
                }
                else
                {
                  if ( !v207 )
                    goto LABEL_940;
                  _InterlockedOr((volatile signed __int32 *)v56 + 469, 0x200000u);
                }
                v56 = (unsigned __int8 *)Object;
LABEL_940:
                if ( v208 )
                {
                  _InterlockedOr((volatile signed __int32 *)v56 + 469, 0x40000000u);
                  v56 = (unsigned __int8 *)Object;
                }
                if ( !v209 )
                {
                  _InterlockedAnd((volatile signed __int32 *)v56 + 469, 0xFFFF7FFF);
                  v56 = (unsigned __int8 *)Object;
                }
                v57 = 0;
                goto LABEL_259;
              default:
                goto LABEL_617;
            }
            goto LABEL_446;
          }
          v80 = HIDWORD(v252);
          if ( (HIDWORD(v252) & 0xFFFFFFFC) == 0 )
          {
            if ( (BYTE4(v252) & 1) != 0 && (BYTE4(v252) & 2) != 0 )
              v80 = HIDWORD(v252) & 0xFFFFFFFD;
            RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((__int64)v56);
            v82 = v80 & 1;
            if ( (v80 & 1) == 0 && RedirectionTrustPolicy == 1 )
            {
              v57 = -1073741790;
LABEL_258:
              v56 = (unsigned __int8 *)Object;
              goto LABEL_259;
            }
            v107 = (v80 >> 1) & 1;
            if ( !v107 )
            {
              if ( v82 )
                goto LABEL_350;
              if ( RedirectionTrustPolicy == 2 )
              {
                v57 = -1073741790;
                goto LABEL_258;
              }
            }
            if ( !v82 )
            {
              if ( !v107 )
              {
LABEL_446:
                v57 = 0;
                goto LABEL_258;
              }
              v108 = 2LL;
              goto LABEL_351;
            }
LABEL_350:
            v108 = 1LL;
LABEL_351:
            PspSetRedirectionTrustPolicy(Object, v108);
            v57 = 0;
            goto LABEL_258;
          }
          v57 = -1073741811;
LABEL_259:
          v79 = 0;
LABEL_260:
          if ( v79 == 1 )
            ObfDereferenceObjectWithTag(v56, 0x79517350u);
          return v57;
        }
        v73 = HIDWORD(v252);
        if ( (HIDWORD(v252) & 0xFFFFFFE0) != 0 )
        {
          v57 = -1073741811;
          goto LABEL_259;
        }
        if ( (BYTE4(v252) & 1) != 0 && ((BYTE4(v252) & 8) != 0 || (BYTE4(v252) & 0x10) != 0) )
          v73 = HIDWORD(v252) & 0xFFFFFFE7;
        if ( (v73 & 2) != 0 && (v73 & 0x10) != 0 )
          v73 &= ~0x10u;
        v74 = (v73 >> 3) & 1;
        if ( v74 && (v73 & 0x10) != 0 )
        {
          v57 = -1073741811;
          goto LABEL_259;
        }
        v75 = (v73 >> 1) & 1;
        if ( v75 + (v73 & 1) > 1 )
        {
          v57 = -1073741811;
          goto LABEL_259;
        }
        if ( (v73 & 1) != 0 )
          goto LABEL_243;
        v156 = v56[1528];
        if ( (_BYTE)v156 == 8 )
          goto LABEL_946;
        LOBYTE(v11) = 8;
        if ( (unsigned int)SeCompareSigningLevels(v11, v156) )
          goto LABEL_948;
        v56 = (unsigned __int8 *)Object;
LABEL_946:
        v211 = v56[1529];
        if ( (_BYTE)v211 == 8 )
          goto LABEL_773;
        LOBYTE(v11) = 8;
        if ( !(unsigned int)SeCompareSigningLevels(v11, v211) )
        {
          v56 = (unsigned __int8 *)Object;
LABEL_773:
          v57 = -1073741790;
          goto LABEL_259;
        }
LABEL_948:
        v56 = (unsigned __int8 *)Object;
        if ( !v75 )
        {
          LOBYTE(ProcessInformationClass) = 6;
          if ( (unsigned int)SeCompareSigningLevels(
                               *((unsigned __int8 *)Object + 1528),
                               *(_QWORD *)&ProcessInformationClass) )
          {
            LOBYTE(ProcessInformationClass) = 6;
            if ( (unsigned int)SeCompareSigningLevels(
                                 *((unsigned __int8 *)Object + 1529),
                                 *(_QWORD *)&ProcessInformationClass) )
            {
              v57 = -1073741790;
              goto LABEL_258;
            }
          }
          v56 = (unsigned __int8 *)Object;
        }
LABEL_243:
        if ( (*((_DWORD *)v56 + 468) & 0x3000000) != 0 && (v73 & 0x10) == 0 && !v75 && !v74 && (v73 & 1) == 0 )
        {
          v57 = -1073741790;
          goto LABEL_259;
        }
        v57 = 0;
        if ( (v73 & 1) != 0 )
        {
          LOBYTE(v11) = 8;
          if ( (unsigned int)SeCompareSigningLevels(v11, v56[1528]) )
            *((_BYTE *)Object + 1528) = 8;
          LOBYTE(v76) = 8;
          if ( (unsigned int)SeCompareSigningLevels(v76, *((unsigned __int8 *)Object + 1529)) )
            *((_BYTE *)Object + 1529) = 8;
        }
        else
        {
          if ( !v75 )
            goto LABEL_250;
          LOBYTE(ProcessInformationClass) = 6;
          if ( !(unsigned int)SeCompareSigningLevels(v56[1528], *(_QWORD *)&ProcessInformationClass) )
          {
            v57 = -1073741790;
            goto LABEL_258;
          }
          LOBYTE(v146) = 6;
          if ( (unsigned int)SeCompareSigningLevels(v146, *((unsigned __int8 *)Object + 1529)) )
            *((_BYTE *)Object + 1529) = 6;
        }
        v56 = (unsigned __int8 *)Object;
LABEL_250:
        if ( v73 )
          LODWORD(v8) = 0x800000;
        v77 = ((v73 & 8) == 0) << 24;
        v78 = (unsigned int)v8 | 0x1000000;
        if ( !v74 )
          v78 = (int)v8;
        if ( ((v73 >> 4) & 1) != 0 )
          v78 |= 0x2000000u;
        else
          v77 |= 0x2000000u;
LABEL_257:
        RtlInterlockedSetClearBits((volatile signed __int32 *)v56 + 468, v78, v77);
        goto LABEL_258;
      case ProcessDynamicFunctionTableInformation:
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
        if ( SubjectContext[8] )
          return RtlRemoveDynamicUserFunctionTable(*(__int64 *)SubjectContext);
        else
          return RtlInsertDynamicUserFunctionTable(*(__int64 *)SubjectContext);
      case ProcessHandleCheckingMode:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v86 = *(_DWORD *)ProcessInformation;
        v294 = *(_DWORD *)ProcessInformation;
        if ( (v86 & 0xFFFFFFFE) != 0 )
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
        v87 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( v87 )
        {
          ExEnableHandleExceptions(v87, v86 & 1);
LABEL_206:
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
        }
        else
        {
LABEL_405:
          LODWORD(v8) = -1073741558;
        }
LABEL_207:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return (int)v8;
      case ProcessRevokeFileHandles:
        *(_OWORD *)SubjectContext = 0LL;
        v212 = 0LL;
        v284 = 0LL;
        if ( PreviousMode != 1 )
          goto LABEL_963;
        v213 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)ProcessInformation < 0x7FFFFFFF0000LL )
          v213 = (__int64)ProcessInformation;
        v214 = *(_DWORD *)v213;
        *(_DWORD *)SubjectContext = v214;
        v215 = *(_QWORD *)(v213 + 8);
        *(_QWORD *)&SubjectContext[8] = v215;
        if ( !(_WORD)v214 )
          return -1073741811;
        if ( (v215 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v216 = (void *)ExAllocatePool2(0x40uLL, (unsigned __int16)v214, 0x6E497350u);
        v212 = v216;
        v284 = v216;
        if ( !v216 )
          return -1073741670;
        memmove(v216, *(const void **)&SubjectContext[8], *(unsigned __int16 *)SubjectContext);
        *(_QWORD *)&SubjectContext[8] = v212;
        v5 = (__int128 *)SubjectContext;
        v310 = SubjectContext;
        v7 = v250;
LABEL_963:
        v71 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)v7,
                0x2000,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v71 < 0 )
        {
          if ( v212 )
            ExFreePoolWithTag(v212, 0);
          return v71;
        }
        v101 = IoRevokeHandlesForProcess((__int64)v5, Object);
        if ( v212 )
          ExFreePoolWithTag(v212, 0);
LABEL_330:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v101;
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
        if ( result >= 0 )
        {
          v282 = *(_DWORD *)v5 != 0;
          if ( KeGetCurrentThread()->ApcState.Process == Object )
          {
            v248 = -1073741790;
          }
          else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          {
            v248 = 0;
            v217 = v282;
            KeSetCheckStackExtentsProcess(Object, v282);
            if ( !v217 && (*((_DWORD *)Object + 124) & 0x20000) != 0 )
              _InterlockedAnd((volatile signed __int32 *)Object + 124, 0xFFFDFFFF);
          }
          else
          {
            v248 = -1073741727;
          }
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v248;
        }
        return result;
      case ProcessMemoryExhaustion:
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v316 = *(_OWORD *)ProcessInformation;
        if ( (_WORD)v316 != 1 || DWORD1(v316) )
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
        if ( *((_QWORD *)&v316 + 1) )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 0x100u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFEFF);
        goto LABEL_24;
      case ProcessFaultInformation:
        v313 = 0LL;
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
        v313 = *(PVOID *)v5;
        v47 = PsSetProcessFaultInformation((PRKPROCESS)Object);
        goto LABEL_157;
      case ProcessCommitReleaseInformation:
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
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741735;
        }
        if ( (*(_DWORD *)&SubjectContext[4] & 0xFFFFFFF8) != 0
          || *(_QWORD *)&SubjectContext[8]
          || *(_QWORD *)&SubjectContext[16]
          || (((*(_DWORD *)&SubjectContext[4] >> 1) & 1) != 0 || (SubjectContext[4] & 4) != 0)
          && (SubjectContext[4] & 1) == 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        if ( ((*(_DWORD *)&SubjectContext[4] >> 1) & 1) != 0 || (SubjectContext[4] & 4) != 0 )
          v218 = MmReleaseCommitForMemResetPages((__int64)Object, (*(_DWORD *)&SubjectContext[4] >> 2) & 1);
        else
          v218 = MmSetCommitReleaseEligibility((__int64)Object, SubjectContext[4] & 1);
        v47 = v218;
LABEL_157:
        v20 = Object;
LABEL_158:
        ObfDereferenceObjectWithTag(v20, 0x79517350u);
        return v47;
      case ProcessDefaultCpuSetsInformation:
      case ProcessAllowedCpuSetsInformation:
        if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0x100 )
          return -1073741820;
        memmove(v326, ProcessInformation, ProcessInformationLength);
        v219 = (unsigned int)v4 >> 3;
        if ( v6 == ProcessAllowedCpuSetsInformation )
        {
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( result < 0 )
            return result;
        }
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v250,
                   0x2000,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v47 = KeSetCpuSetsProcess(
                (__int64)Object,
                v219,
                (__int64)v326,
                v6 == ProcessAllowedCpuSetsInformation,
                v6 != ProcessAllowedCpuSetsInformation);
        goto LABEL_157;
      case ProcessSubsystemProcess:
        if ( !(unsigned int)PsIsSessionInitializationProcess(KeGetCurrentThread()->ApcState.Process) )
          return -1073741727;
        v286 = 0LL;
        v221 = ObReferenceObjectByHandle(v250, 0x200u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v286, 0LL);
        v47 = v221;
        Object = v286;
        if ( v221 >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v286 + 383, 0x40u);
          ObfDereferenceObject(Object);
        }
        return v47;
      case ProcessInPrivate:
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
        goto LABEL_24;
      case ProcessRaiseUMExceptionOnInvalidHandleClose:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v58 = *(_DWORD *)ProcessInformation;
        v297 = *(_DWORD *)ProcessInformation;
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
        v59 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( !v59 )
          goto LABEL_405;
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v59, v58);
        goto LABEL_206;
      case ProcessIumChallengeResponse:
        return PsIumEnableOnDemandDebugWithResponse((ULONG_PTR)v7, ProcessInformation, ProcessInformationLength);
      case ProcessHighGraphicsPriorityInformation:
        if ( ProcessInformationLength != 1 )
          return -1073741820;
        v222 = *(_BYTE *)ProcessInformation;
        v266 = *(_BYTE *)ProcessInformation;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v250,
                   0x2000,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v222 )
          _InterlockedOr((volatile signed __int32 *)Object + 383, 0x200u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 383, 0xFFFFFDFF);
        goto LABEL_24;
      case ProcessPowerThrottlingState:
        v313 = 0LL;
        v314 = 0;
        if ( ProcessInformationLength != 12 )
          return -1073741820;
        v313 = *(PVOID *)ProcessInformation;
        v70 = *((_DWORD *)ProcessInformation + 2);
        v314 = v70;
        if ( (_DWORD)v313 != 1 || (HIDWORD(v313) & 0xFFFFFFF8) != 0 || (~HIDWORD(v313) & v70) != 0 )
          return -1073741811;
        if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
          return -1073741822;
        v71 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)v250,
                0x2000,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v71 < 0 )
        {
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v71;
        }
        else
        {
          v72 = guard_dispatch_icall_no_overrides(Object, &v313);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v72;
        }
      case ProcessDisableSystemAllowedCpuSets:
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( result < 0 )
          return result;
        if ( (_DWORD)v4 != 1 )
          return -1073741820;
        v220 = *(_BYTE *)v5;
        v265 = *(_BYTE *)v5;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v250,
                   0x2000,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v220 )
          _InterlockedOr((volatile signed __int32 *)Object + 124, 0x8000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 124, 0xF7FFFFFF);
        KeRecomputeCpuSetAffinityProcess((__int64)Object);
        goto LABEL_24;
      case ProcessEnergyTrackingState:
        if ( ProcessInformationLength < 8 )
          return -1073741820;
        memset_0(v320, 0, sizeof(v320));
        if ( (unsigned int)v4 >= 0x90 )
          LODWORD(v4) = 144;
        memmove(v320, v5, (unsigned int)v4);
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v250,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v47 = PoSetProcessEnergyTrackingState(Object, v320);
        v20 = Object;
        if ( v47 >= 0 )
          goto LABEL_25;
        goto LABEL_158;
      case ProcessManageWritesToExecutableMemory:
        return -1073741637;
      case ProcessTelemetryCoverage:
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        memset_0(pszDest, 0, 0x41uLL);
        v223 = *v5;
        *(_OWORD *)SubjectContext = v223;
        *(_QWORD *)&SubjectContext[16] = *((_QWORD *)v5 + 2);
        v224 = (const char *)v223;
        if ( (unsigned __int64)(v223 + 65) > 0x7FFFFFFF0000LL || (__int64)v223 + 65 < (unsigned __int64)v223 )
          v224 = *(const char **)SubjectContext;
        RtlStringCbCopyA(pszDest, 0x41uLL, v224);
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v250,
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
        v47 = EtwSetProcessTelemetryCoverage((_KPROCESS *)Object, (__int64)SubjectContext);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *((_DWORD *)v5 + 3) = *(_DWORD *)&SubjectContext[12];
        *((_DWORD *)v5 + 4) = *(_DWORD *)&SubjectContext[16];
        return v47;
      case ProcessEnableReadWriteVmLogging:
        break;
      case ProcessDebugAuthInformation:
        return SeCodeIntegritySetInformationProcess(
                 (__int64)v7,
                 ProcessInformationClass,
                 ProcessInformation,
                 ProcessInformationLength);
      case ProcessSystemResourceManagement:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v296 = *(_DWORD *)ProcessInformation;
        v83 = v296;
        if ( (v296 & 0xFFFFFFFE) != 0 )
          return -1073741811;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v250,
                   0x2000,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        LOBYTE(v84) = 1;
        PspSetProcessForegroundBackgroundRequest(Object, v83 & 1, v84);
        goto LABEL_24;
      case ProcessCombineSecurityDomainsInformation:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        v53 = *(_QWORD *)ProcessInformation;
        v312 = *(void **)ProcessInformation;
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
        v47 = ObpReferenceObjectByHandleWithTag(
                v53,
                4096,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &v283,
                0LL,
                0LL);
        v20 = Object;
        if ( v47 < 0 )
          goto LABEL_158;
        v47 = PspCombineSecurityDomains((__int64)Object, (signed __int32 *)v283);
        ObfDereferenceObjectWithTag(v283, 0x79517350u);
        goto LABEL_157;
      case ProcessLeapSecondInformation:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        v262 = *(void **)ProcessInformation;
        if ( ((unsigned int)v262 & 0xFFFFFFFE) != 0 || v7 != (HANDLE)-1LL )
          return -1073741811;
        v225 = KeGetCurrentThread()->ApcState.Process;
        Object = v225;
        Blink = v225[1].ProcessListEntry.Blink;
        if ( !Blink )
          return -1073741790;
        v227 = 0LL;
        v228 = (__int64 *)v225[1].ReadyTime;
        if ( v228 )
          v227 = *v228;
        v229 = (unsigned __int8)v262 & 1;
        Flink = (int)Blink[124].Flink;
        if ( ((unsigned __int8)v262 & 1) != 0 )
          v231 = Flink | 1;
        else
          v231 = Flink & 0xFFFFFFFE;
        LODWORD(Blink[124].Flink) = v231;
        if ( v227 )
        {
          v232 = *(_DWORD *)(v227 + 1140);
          if ( v229 )
            v233 = v232 | 1;
          else
            v233 = v232 & 0xFFFFFFFE;
          *(_DWORD *)(v227 + 1140) = v233;
        }
        return (int)v8;
      case ProcessFiberShadowStackAllocation:
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741823;
        if ( ProcessInformationLength != 32 )
          return -1073741820;
        if ( !KeIsUserCetAllowed() || !_bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
          return -1073741637;
        return PspSetupUserFiberShadowStack(*(_QWORD *)v5, *((_QWORD *)v5 + 1), (unsigned int)v5[1], (char *)v5 + 24);
      case ProcessFreeFiberShadowStackAllocation:
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741823;
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        if ( KeIsUserCetAllowed() && _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
          return PspFreeUserFiberShadowStack(*(PVOID *)v5);
        return -1073741637;
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
        v47 = PspSyscallProviderOptIn((__int64)Object, (__int64)SubjectContext);
        goto LABEL_157;
      case ProcessDynamicEHContinuationTargets:
        LODWORD(Handle) = 0;
        v234 = 0LL;
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
        v235 = 16 * *(unsigned __int16 *)SubjectContext;
        if ( !v235 )
          return -1073741811;
        if ( !*(_QWORD *)&SubjectContext[8] )
          return -1073741811;
        v236 = v235;
        ProbeForWrite(*(volatile void **)&SubjectContext[8], v235, 8u);
        if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741790;
        v313 = 0LL;
        result = ObReferenceObjectByHandle(v250, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v313, 0LL);
        Object = v313;
        if ( result < 0 )
          return result;
        if ( v313 == KeGetCurrentThread()->ApcState.Process && (*((_DWORD *)v313 + 469) & 0x40000000) != 0 )
        {
          v47 = -1073741790;
        }
        else if ( (*((_DWORD *)v313 + 469) & 0x4000) != 0 )
        {
          v238 = (_QWORD *)ExAllocatePool2(0x101uLL, v236, 0x4E484544u);
          v234 = v238;
          v262 = v238;
          if ( v238 )
          {
            v239 = *(_QWORD *)&SubjectContext[8];
            memmove(v238, *(const void **)&SubjectContext[8], v236);
            v47 = PspProcessDynamicEHContinuationTargets(
                    (ULONG_PTR)Object,
                    (__int64)v234,
                    *(unsigned __int16 *)SubjectContext,
                    &Handle);
            v251 = v47;
            while ( 1 )
            {
              v249 = (unsigned int)v8;
              if ( (unsigned int)v8 >= (unsigned int)Handle )
                break;
              *(_QWORD *)(v239 + 16LL * (unsigned int)v8 + 8) = v234[2 * (unsigned int)v8 + 1];
              LODWORD(v8) = (_DWORD)v8 + 1;
            }
          }
          else
          {
            v47 = -1073741801;
          }
        }
        else
        {
          v47 = -1073741637;
        }
        v237 = Object;
        if ( Object )
          goto LABEL_1055;
        goto LABEL_1056;
      case ProcessDynamicEnforcedCetCompatibleRanges:
        LODWORD(Handle) = 0;
        v234 = 0LL;
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *(_OWORD *)ProcessInformation;
        v240 = 24 * (unsigned int)*(unsigned __int16 *)SubjectContext;
        if ( !(_DWORD)v240 )
          return -1073741811;
        if ( !*(_QWORD *)&SubjectContext[8] )
          return -1073741811;
        v241 = (unsigned int)v240;
        ProbeForWrite(*(volatile void **)&SubjectContext[8], v240, 8u);
        if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741790;
        v313 = 0LL;
        result = ObReferenceObjectByHandle(v250, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v313, 0LL);
        Object = v313;
        if ( result < 0 )
          return result;
        if ( v313 == KeGetCurrentThread()->ApcState.Process && (*((_DWORD *)v313 + 469) & 0x40000000) != 0 )
        {
          v47 = -1073741790;
        }
        else if ( (*((_DWORD *)v313 + 469) & 0x4000) != 0 )
        {
          v242 = (_QWORD *)ExAllocatePool2(0x101uLL, v241, 0x52414544u);
          v234 = v242;
          v262 = v242;
          if ( v242 )
          {
            v243 = *(_QWORD *)&SubjectContext[8];
            memmove(v242, *(const void **)&SubjectContext[8], v241);
            v47 = PspProcessDynamicEnforcedAddressRanges(
                    (ULONG_PTR)Object,
                    (__int64)Object + 1936,
                    (__int64)v234,
                    *(unsigned __int16 *)SubjectContext,
                    &Handle);
            v251 = v47;
            while ( 1 )
            {
              v249 = (unsigned int)v8;
              if ( (unsigned int)v8 >= (unsigned int)Handle )
                break;
              *(_DWORD *)(v243 + 24LL * (unsigned int)v8 + 16) = v234[3 * (unsigned int)v8 + 2];
              LODWORD(v8) = (_DWORD)v8 + 1;
            }
          }
          else
          {
            v47 = -1073741801;
          }
        }
        else
        {
          v47 = -1073741637;
        }
        v237 = Object;
        if ( Object )
LABEL_1055:
          ObfDereferenceObject(v237);
LABEL_1056:
        if ( v234 )
          ExFreePoolWithTag(v234, 0);
        return v47;
      case ProcessEnableOptionalXStateFeatures:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        v305 = *(_QWORD *)ProcessInformation;
        if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & v305) != 0 )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741790;
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
        v244 = KeGetCurrentThread()->ApcState.Process;
        Object = v244;
        if ( v244[1].ReadyTime )
          return -1073741811;
        if ( PsIsSystemProcess((__int64)v244) )
          return -1073741637;
        else
          return PspEnableProcessOptionalXStateFeatures((__int64)Object, v305);
      case ProcessAltPrefetchParam:
        return PfSnSetAltPrefetchParam((ULONG_PTR)v7, ProcessInformation, ProcessInformationLength);
      case ProcessAssignCpuPartitions:
        if ( ProcessInformationLength < 0x10 || (ProcessInformationLength & 7) != 0 )
          return -1073741820;
        v157 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(0x101uLL, ProcessInformationLength, 0x50707350u);
        v158 = v157;
        RunRef = v157;
        if ( v157 )
        {
          memmove(v157, v5, v4);
          if ( (unsigned int)(v4 - 8) >> 3 < HIDWORD(v158->Ptr) || (v158->Count & 0xFFFFFFFE) != 0 )
          {
            v159 = -1073741811;
          }
          else
          {
            v313 = 0LL;
            v159 = ObReferenceObjectByHandle(v250, 0x200u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v313, 0LL);
            Object = v313;
            if ( v159 >= 0 )
              v159 = PspAssignCpuPartitionsToProcess(
                       (__int64)v313,
                       PreviousMode,
                       (__int64)&v158[1],
                       HIDWORD(v158->Ptr),
                       v158->Count & 1);
          }
        }
        else
        {
          v159 = -1073741670;
        }
        if ( v158 )
          ExFreePoolWithTag(v158, 0);
        if ( Object )
          ObfDereferenceObject(Object);
        return v159;
      case ProcessPriorityClassEx:
        if ( ProcessInformationLength != 4 )
          return -1073741820;
        v267 = *(_DWORD *)ProcessInformation;
        v54 = v267;
        if ( !(_WORD)v267 || (v267 & 0xFFFC) != 0 )
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
        v55 = result;
        if ( result >= 0 )
        {
          if ( (v54 & 1) != 0
            && (unsigned int)dword_140E08630 > 5
            && tlgKeywordOn((__int64)&dword_140E08630, 0x400000000000LL) )
          {
            v247[0] = HIBYTE(v267);
            *(_QWORD *)&SubjectContext[32] = v247;
            v322 = 1LL;
            v313 = (PVOID)0x1000000;
            v323 = &v313;
            v324 = 8;
            v325 = 0;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E08630,
              (unsigned __int8 *)&byte_140051C67,
              0LL,
              0LL,
              4u,
              (PEVENT_DATA_DESCRIPTOR)SubjectContext);
          }
          if ( (v54 & 2) == 0
            || (v55 = PspSetProcessPriorityClass((__int64)Object, BYTE2(v267), (__int64)v250, PreviousMode), v55 >= 0) )
          {
            MmGetMinWsPagePriority();
            if ( (unsigned int)Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline()
              || (v54 & 1) == 0 )
            {
              KeSetPriorityAndQuantumProcess(
                (__int64)Object,
                *(_DWORD *)&PspPriorityTable[2 * *((unsigned __int8 *)Object + 839)],
                0,
                0,
                0);
            }
            else
            {
              PsSetProcessPriorityByClass(Object, 1LL);
            }
          }
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v55;
        }
        return result;
      case ProcessSchedulerSharedData:
        if ( ProcessInformationLength != 8 )
          return -1073741820;
        Handle = 0LL;
        v47 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)v7,
                512,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v47 >= 0 && (v47 = PspSchedulerSharedDataRegionCreate((_KPROCESS *)Object, (__int64 *)&Handle), v47 >= 0) )
        {
          *(_QWORD *)v5 = Handle;
          Handle = 0LL;
          v47 = 0;
        }
        else
        {
          v8 = Handle;
        }
        if ( v8 )
          ObCloseHandle(v8, PreviousMode);
        v20 = Object;
        if ( Object )
          goto LABEL_158;
        return v47;
      case ProcessSlistRollbackInformation:
        if ( ProcessInformationLength )
          return -1073741820;
        if ( v7 != (HANDLE)-1LL )
          return -1073741637;
        KeChangeMemoryAttributes(PreviousMode);
        return 0;
      default:
        return -1073741821;
    }
  }
  if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !ProcessInformationLength
    || ProcessInformationLength < 4 && ProcessInformationClass == ProcessEnableLogging )
  {
    return -1073741820;
  }
  result = EtwCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process, PreviousMode);
  if ( result >= 0 )
  {
    if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
      && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    {
      return -1073741727;
    }
    v259 = 0;
    if ( v6 == ProcessEnableReadWriteVmLogging )
    {
      v14 = *(_BYTE *)v5;
      v259 = *(_BYTE *)v5 & 1;
      v13 = v14 & 3;
    }
    else
    {
      v13 = *(_DWORD *)v5;
    }
    v259 = v13;
    if ( (v13 & 0xFFFFFF80) != 0 )
    {
      return -1073741811;
    }
    else
    {
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)v250,
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
        v15 = (((v259 >> 2) & 1) << 19) | 0x100000;
        if ( (v259 & 8) == 0 )
          v15 = ((v259 >> 2) & 1) << 19;
        v16 = v15 | 0x20000000;
        if ( (v259 & 0x10) == 0 )
          v16 = v15;
        v17 = v16 | 0x10000000;
        if ( (v259 & 0x20) == 0 )
          v17 = v16;
        v18 = v17 | 0x80000000;
        if ( (v259 & 0x40) == 0 )
          v18 = v17;
        _InterlockedOr((volatile signed __int32 *)Object + 383, v18);
        _InterlockedAnd((volatile signed __int32 *)Object + 124, 0xFCFFFFFF);
        v19 = ((v259 & 1) << 24) | 0x2000000;
        if ( (v259 & 2) == 0 )
          v19 = (v259 & 1) << 24;
        _InterlockedOr((volatile signed __int32 *)Object + 124, v19);
LABEL_24:
        v20 = Object;
LABEL_25:
        ObfDereferenceObjectWithTag(v20, 0x79517350u);
        return 0;
      }
    }
  }
  return result;
}
