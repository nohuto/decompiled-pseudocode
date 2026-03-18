/*
 * XREFs of NtSetInformationProcess @ 0x140947500
 * Callers:
 *     <none>
 * Callees:
 *     PspSynchronizeThreadIsolationDomains @ 0x1402053A8 (PspSynchronizeThreadIsolationDomains.c)
 *     PsSetIoPriorityThread @ 0x14020973C (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1402098B8 (PsSetPagePriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     KeQueryPrimaryGroupProcess @ 0x1403B3618 (KeQueryPrimaryGroupProcess.c)
 *     KeChangeMemoryAttributes @ 0x1403CA178 (KeChangeMemoryAttributes.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403CDFC0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsGetSessionId @ 0x1403D5E10 (PsGetSessionId.c)
 *     PsIsSystemProcess @ 0x140417C00 (PsIsSystemProcess.c)
 *     PspLockUnlockProcessExclusive @ 0x140418978 (PspLockUnlockProcessExclusive.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     MmGetMaximumUserAddress @ 0x14043F660 (MmGetMaximumUserAddress.c)
 *     RtlInsertDynamicUserFunctionTable @ 0x14044B1D0 (RtlInsertDynamicUserFunctionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     KeSetDisableBoostProcess @ 0x140451D2C (KeSetDisableBoostProcess.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14045201C (KeSetPriorityAndQuantumProcess.c)
 *     RtlStringCbCopyA @ 0x140459248 (RtlStringCbCopyA.c)
 *     PspLockProcessExclusive @ 0x14045AB10 (PspLockProcessExclusive.c)
 *     RtlRemoveDynamicUserFunctionTable @ 0x14045C6DC (RtlRemoveDynamicUserFunctionTable.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     KeVerifyGroupAffinity @ 0x14046F4B0 (KeVerifyGroupAffinity.c)
 *     MmGetMinWsPagePriority @ 0x1404790C0 (MmGetMinWsPagePriority.c)
 *     MmGetDefaultPagePriority @ 0x14047E830 (MmGetDefaultPagePriority.c)
 *     MmSetMemoryPriorityProcess @ 0x140488D70 (MmSetMemoryPriorityProcess.c)
 *     KeInitializeGate @ 0x1404892A8 (KeInitializeGate.c)
 *     RtlInterlockedSetClearBits @ 0x14048B890 (RtlInterlockedSetClearBits.c)
 *     KeSetExecuteOptions @ 0x140491328 (KeSetExecuteOptions.c)
 *     KeIsUserCetAllowed @ 0x140497634 (KeIsUserCetAllowed.c)
 *     KeIsCoreIsolationMitigationPolicyEnforceable @ 0x14049C968 (KeIsCoreIsolationMitigationPolicyEnforceable.c)
 *     MmRemoveExecuteGrants @ 0x14049EBE8 (MmRemoveExecuteGrants.c)
 *     KeSynchronizeSecurityDomain @ 0x1404A7090 (KeSynchronizeSecurityDomain.c)
 *     PspWriteProcessSecurityDomain @ 0x1404A8894 (PspWriteProcessSecurityDomain.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404AA1D4 (ExCpuSetResourceManagerAccessCheck.c)
 *     Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline @ 0x1404AD368 (Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline.c)
 *     KeBoostPriorityThread @ 0x1404E7068 (KeBoostPriorityThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x1404FA9F0 (xKdEnumerateDebuggingDevices.c)
 *     IoRevokeHandlesForProcess @ 0x140597158 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405BFCA8 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1405BFD04 (KeSetCpuSetsProcess.c)
 *     EtwTraceProcessSetInPrivateMode @ 0x14064DD44 (EtwTraceProcessSetInPrivateMode.c)
 *     MmReleaseCommitForMemResetPages @ 0x14066AB1C (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14066ACD4 (MmSetCommitReleaseEligibility.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmValidateUserCallTarget @ 0x1406F663C (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x140744600 (ObSetProcessDeviceMap.c)
 *     PfSnSetAltPrefetchParam @ 0x140747784 (PfSnSetAltPrefetchParam.c)
 *     PspSyscallProviderOptIn @ 0x14077153C (PspSyscallProviderOptIn.c)
 *     PsIsGuiThread @ 0x14077455C (PsIsGuiThread.c)
 *     PsSetProcessHandleTracingInformation @ 0x1407745B8 (PsSetProcessHandleTracingInformation.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1407748A0 (PspEnableProcessOptionalXStateFeatures.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140774CF8 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x140774FD4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140775288 (PspSetProcessAffinityUpdateMode.c)
 *     PspApplyCoreIsolationPolicy @ 0x1407767F8 (PspApplyCoreIsolationPolicy.c)
 *     PspAssignCpuPartitionsToProcess @ 0x140776964 (PspAssignCpuPartitionsToProcess.c)
 *     PspAssignPrimaryToken @ 0x140777070 (PspAssignPrimaryToken.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14077A800 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14078E208 (SeCodeIntegritySetInformationProcess.c)
 *     ExSystemExceptionFilter @ 0x1407B6F80 (ExSystemExceptionFilter.c)
 *     SeCaptureSubjectContextEx @ 0x14083FC40 (SeCaptureSubjectContextEx.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     LpcRequestPort @ 0x14088DDB0 (LpcRequestPort.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     PspFreeUserFiberShadowStack @ 0x1408DB370 (PspFreeUserFiberShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x1408DDED4 (PspSetupUserFiberShadowStack.c)
 *     MmAllocateUserStack @ 0x1408DE514 (MmAllocateUserStack.c)
 *     PoSetProcessEnergyTrackingState @ 0x1409044C4 (PoSetProcessEnergyTrackingState.c)
 *     EtwSetProcessTelemetryCoverage @ 0x1409047E8 (EtwSetProcessTelemetryCoverage.c)
 *     PspUpdatePebForAffinityChange @ 0x14090815C (PspUpdatePebForAffinityChange.c)
 *     RtlIsSandboxedToken @ 0x14090C230 (RtlIsSandboxedToken.c)
 *     PspSetProcessPriorityClass @ 0x140913B0C (PspSetProcessPriorityClass.c)
 *     SeCheckPrivilegedObject @ 0x140913BF4 (SeCheckPrivilegedObject.c)
 *     SeCompareSigningLevels @ 0x1409354F0 (SeCompareSigningLevels.c)
 *     PsSetProcessFaultInformation @ 0x14093B330 (PsSetProcessFaultInformation.c)
 *     ObReferenceProcessHandleTable @ 0x140940570 (ObReferenceProcessHandleTable.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x140946D5C (PspSchedulerSharedDataRegionCreate.c)
 *     PspCombineSecurityDomains @ 0x14094706C (PspCombineSecurityDomains.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x14094741C (PspSetProcessDefaultHardErrorMode.c)
 *     EtwCheckSecurityLoggerAccess @ 0x14094A508 (EtwCheckSecurityLoggerAccess.c)
 *     PsGetNextProcessThread @ 0x14094A700 (PsGetNextProcessThread.c)
 *     PspSetQuotaLimits @ 0x1409AFD58 (PspSetQuotaLimits.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x140A03CD8 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PsIsSessionInitializationProcess @ 0x140A08150 (PsIsSessionInitializationProcess.c)
 *     KeSetAutoAlignmentProcess @ 0x140A2FD18 (KeSetAutoAlignmentProcess.c)
 *     PsSetProcessPriorityByClass @ 0x140A37A20 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140A37A4C (PspSetProcessForegroundBackgroundRequest.c)
 *     PspSetProcessAffinitySafe @ 0x140A4B2A4 (PspSetProcessAffinitySafe.c)
 *     MmProcessWorkingSetControl @ 0x140A4C914 (MmProcessWorkingSetControl.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140A52E88 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExEnableHandleExceptions @ 0x140A5D86C (ExEnableHandleExceptions.c)
 *     PspGetRedirectionTrustPolicy @ 0x140A5EBB8 (PspGetRedirectionTrustPolicy.c)
 *     KeSetCheckStackExtentsProcess @ 0x140A63458 (KeSetCheckStackExtentsProcess.c)
 *     PspSetRedirectionTrustPolicy @ 0x140A65014 (PspSetRedirectionTrustPolicy.c)
 *     SeSetVirtualizationToken @ 0x140A8A728 (SeSetVirtualizationToken.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x140A9BBF8 (PsIsSystemWideMitigationOptionSet.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x140A9BC5C (PspSetNoChildProcessRestrictedPolicy.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtSetInformationProcess(ULONG_PTR BugCheckParameter1, __int64 a2, __int128 *a3, __int64 a4)
{
  size_t v4; // r13
  __int128 *v5; // r15
  int v6; // ebx
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
  __int64 v21; // r8
  int v22; // ebx
  int v23; // eax
  _QWORD *v24; // r14
  int v25; // r9d
  NTSTATUS v26; // ecx
  __int64 v27; // r8
  unsigned int v28; // edx
  _KPROCESS *Process; // r8
  __int64 v30; // rdx
  __int64 j; // rax
  volatile void **v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // r13
  char *v35; // rcx
  char *v36; // r14
  __int64 v37; // rdx
  char *v38; // rdi
  char *v39; // rbx
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // r14
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  int v46; // r8d
  unsigned __int64 v47; // rdx
  int v48; // ebx
  __int64 v49; // rdx
  volatile void **v50; // rax
  char *v51; // r8
  _DWORD *v52; // rdx
  char *v53; // rax
  ULONG_PTR v54; // rbx
  char v55; // bl
  int v56; // r14d
  unsigned __int8 *v57; // r10
  int v58; // r14d
  unsigned int v59; // ebx
  unsigned __int64 v60; // rax
  void *v61; // rbx
  unsigned int v62; // r12d
  int v63; // ebx
  PVOID v64; // r8
  unsigned __int64 v65; // rdx
  signed __int64 *v66; // roff
  signed __int64 v67; // rdi
  signed __int64 v68; // rax
  unsigned __int64 v69; // rax
  int v70; // ecx
  int v71; // edi
  __int64 v72; // r8
  __int64 v73; // r9
  int v74; // ebx
  unsigned int v75; // ebx
  int v76; // r15d
  int v77; // r12d
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // r8d
  int v82; // edx
  char v83; // r15
  unsigned int v84; // ebx
  int RedirectionTrustPolicy; // eax
  int v86; // ecx
  char v87; // bl
  __int64 v88; // r8
  unsigned int v89; // r15d
  int v90; // ebx
  unsigned __int64 v91; // rax
  __int16 v92; // cx
  unsigned __int64 v93; // rcx
  _KPROCESS *v94; // rbx
  BOOLEAN v95; // al
  PVOID v96; // rcx
  BOOLEAN v97; // al
  struct _EX_RUNDOWN_REF *v98; // rcx
  bool v99; // r9
  unsigned __int64 ReadyTime; // r8
  __int64 v101; // r15
  int v102; // ebx
  int v103; // edi
  signed __int64 *v104; // rbx
  _QWORD *v105; // rdi
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
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rdx
  unsigned int v145; // r14d
  __int16 v146; // r8
  __int16 v147; // r8
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  PVOID v151; // r8
  volatile signed __int32 *v152; // rcx
  signed int v153; // ebx
  unsigned __int64 v154; // rcx
  __int16 v155; // r8
  unsigned __int64 v156; // rax
  unsigned int v157; // ebx
  int v158; // r8d
  unsigned int v159; // ecx
  __int64 v160; // rdx
  struct _EX_RUNDOWN_REF *v161; // rax
  struct _EX_RUNDOWN_REF *v162; // rbx
  int v163; // r15d
  __int64 Pool2; // rax
  void *v165; // rbx
  char v166; // r14
  char v167; // al
  __int16 v168; // bx
  char v169; // bl
  int v170; // r14d
  __int64 i; // rdi
  unsigned __int8 v172; // bl
  __int16 v173; // r8
  int v174; // r14d
  int v175; // ebx
  int v176; // ebx
  int v177; // ecx
  unsigned int *p_Handle; // rdx
  HANDLE *v179; // rcx
  char v180; // bl
  unsigned int v181; // r14d
  void *v182; // rbx
  char v183; // bl
  int v184; // r12d
  int v185; // edi
  int v186; // r15d
  int v187; // ebx
  bool IsGuiThread; // al
  int v189; // eax
  bool IsSandboxedToken; // bl
  unsigned int v191; // r9d
  int v192; // r8d
  int v193; // r12d
  int v194; // r11d
  BOOLEAN v195; // al
  unsigned int v196; // r9d
  int v197; // edx
  int v198; // eax
  bool v199; // zf
  int v200; // ecx
  int v201; // ebx
  int v202; // eax
  int v203; // ebx
  bool IsCoreIsolationMitigationPolicyEnforceable; // al
  int v205; // r11d
  int v206; // ebx
  int v207; // r8d
  int v208; // edi
  int v209; // r14d
  int v210; // r15d
  int v211; // r12d
  int v212; // ecx
  __int64 v213; // rdx
  void *v214; // rbx
  __int64 v215; // rax
  __int64 v216; // rcx
  void *v217; // rax
  BOOL v218; // ebx
  int v219; // eax
  unsigned int v220; // r13d
  char v221; // bl
  NTSTATUS v222; // eax
  char v223; // bl
  __int128 v224; // xmm1
  const char *v225; // r8
  _KPROCESS *v226; // r8
  struct _LIST_ENTRY *Blink; // rdx
  __int64 v228; // rcx
  __int64 *v229; // rax
  int v230; // r8d
  int Flink; // eax
  unsigned int v232; // eax
  int v233; // eax
  unsigned int v234; // eax
  _QWORD *v235; // r14
  unsigned int v236; // eax
  size_t v237; // rbx
  PVOID v238; // rcx
  _QWORD *v239; // rax
  __int64 v240; // rdi
  SIZE_T v241; // rdx
  size_t v242; // rbx
  _QWORD *v243; // rax
  __int64 v244; // rdi
  _KPROCESS *v245; // rcx
  signed __int32 v246[8]; // [rsp+0h] [rbp-4F8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-4B8h] BYREF
  _BYTE v248[4]; // [rsp+48h] [rbp-4B0h] BYREF
  int v249; // [rsp+4Ch] [rbp-4ACh]
  unsigned int v250; // [rsp+50h] [rbp-4A8h]
  HANDLE v251; // [rsp+58h] [rbp-4A0h]
  int v252; // [rsp+60h] [rbp-498h]
  void *v253; // [rsp+68h] [rbp-490h]
  HANDLE Handle; // [rsp+70h] [rbp-488h] BYREF
  unsigned __int8 v255; // [rsp+78h] [rbp-480h]
  unsigned __int16 v256; // [rsp+7Ch] [rbp-47Ch] BYREF
  PVOID P; // [rsp+80h] [rbp-478h]
  __int16 v258; // [rsp+88h] [rbp-470h]
  int v259; // [rsp+8Ch] [rbp-46Ch]
  unsigned int v260; // [rsp+90h] [rbp-468h]
  PVOID v261; // [rsp+98h] [rbp-460h]
  ULONG Alignment; // [rsp+A0h] [rbp-458h]
  void *v263; // [rsp+A8h] [rbp-450h]
  char v264; // [rsp+B0h] [rbp-448h]
  char v265; // [rsp+B1h] [rbp-447h]
  char v266; // [rsp+B2h] [rbp-446h]
  char v267; // [rsp+B3h] [rbp-445h]
  int v268; // [rsp+B4h] [rbp-444h]
  int v269; // [rsp+B8h] [rbp-440h]
  char *v270; // [rsp+C0h] [rbp-438h]
  __int64 v271; // [rsp+C8h] [rbp-430h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+D0h] [rbp-428h]
  char *v273; // [rsp+D8h] [rbp-420h]
  __int64 v274; // [rsp+E0h] [rbp-418h]
  char *v275; // [rsp+E8h] [rbp-410h]
  __int128 v276; // [rsp+F0h] [rbp-408h]
  __int64 v277; // [rsp+100h] [rbp-3F8h]
  char *v278; // [rsp+108h] [rbp-3F0h]
  unsigned int v279; // [rsp+110h] [rbp-3E8h]
  int v280; // [rsp+114h] [rbp-3E4h]
  int v281; // [rsp+118h] [rbp-3E0h]
  unsigned int v282; // [rsp+11Ch] [rbp-3DCh]
  BOOL v283; // [rsp+120h] [rbp-3D8h]
  PVOID v284; // [rsp+128h] [rbp-3D0h] BYREF
  PVOID v285; // [rsp+130h] [rbp-3C8h]
  PVOID v286; // [rsp+138h] [rbp-3C0h] BYREF
  PVOID v287; // [rsp+140h] [rbp-3B8h] BYREF
  int v288; // [rsp+148h] [rbp-3B0h]
  int v289; // [rsp+14Ch] [rbp-3ACh]
  int v290; // [rsp+150h] [rbp-3A8h]
  int v291; // [rsp+154h] [rbp-3A4h]
  int v292; // [rsp+158h] [rbp-3A0h]
  int v293; // [rsp+15Ch] [rbp-39Ch]
  int v294; // [rsp+160h] [rbp-398h]
  int v295; // [rsp+164h] [rbp-394h]
  int v296; // [rsp+168h] [rbp-390h]
  int v297; // [rsp+16Ch] [rbp-38Ch]
  int v298; // [rsp+170h] [rbp-388h]
  int v299; // [rsp+174h] [rbp-384h]
  __int64 v300; // [rsp+178h] [rbp-380h]
  unsigned __int64 v301; // [rsp+180h] [rbp-378h]
  unsigned int *v302; // [rsp+188h] [rbp-370h]
  _DWORD *v303; // [rsp+190h] [rbp-368h]
  int v304; // [rsp+198h] [rbp-360h]
  int v305; // [rsp+19Ch] [rbp-35Ch]
  unsigned __int64 v306; // [rsp+1A0h] [rbp-358h]
  __int128 v307; // [rsp+1A8h] [rbp-350h] BYREF
  __int128 v308; // [rsp+1B8h] [rbp-340h] BYREF
  __int64 v309; // [rsp+1C8h] [rbp-330h]
  struct _LIST_ENTRY *v310; // [rsp+1D8h] [rbp-320h]
  _BYTE *v311; // [rsp+1E0h] [rbp-318h]
  void *v312; // [rsp+1F0h] [rbp-308h]
  void *v313; // [rsp+1F8h] [rbp-300h]
  PVOID v314; // [rsp+200h] [rbp-2F8h] BYREF
  int v315; // [rsp+208h] [rbp-2F0h]
  __int128 v316; // [rsp+210h] [rbp-2E8h] BYREF
  __int128 v317; // [rsp+220h] [rbp-2D8h]
  struct _KAPC_STATE ApcState; // [rsp+230h] [rbp-2C8h] BYREF
  _OWORD v319[2]; // [rsp+260h] [rbp-298h] BYREF
  __int64 v320; // [rsp+280h] [rbp-278h]
  _DWORD v321[36]; // [rsp+290h] [rbp-268h] BYREF
  _BYTE SubjectContext[40]; // [rsp+320h] [rbp-1D8h] BYREF
  __int64 v323; // [rsp+348h] [rbp-1B0h]
  PVOID *v324; // [rsp+350h] [rbp-1A8h]
  int v325; // [rsp+358h] [rbp-1A0h]
  int v326; // [rsp+35Ch] [rbp-19Ch]
  char v327[256]; // [rsp+360h] [rbp-198h] BYREF
  char pszDest[80]; // [rsp+460h] [rbp-98h] BYREF

  v4 = (unsigned int)a4;
  v5 = a3;
  v6 = a2;
  v7 = (HANDLE)BugCheckParameter1;
  v251 = (HANDLE)BugCheckParameter1;
  P = a3;
  Alignment = a4;
  v8 = 0LL;
  Object = 0LL;
  v316 = 0LL;
  v250 = 0;
  v258 = 0;
  v268 = 0;
  v263 = 0LL;
  v284 = 0LL;
  v301 = 0LL;
  LODWORD(v271) = 0;
  v317 = 0LL;
  v256 = 0;
  CurrentThread = KeGetCurrentThread();
  v275 = (char *)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v255 = PreviousMode;
  if ( PreviousMode )
  {
    switch ( (_DWORD)a2 )
    {
      case 5:
        v23 = 4;
        v11 = 8LL;
        break;
      case 0x11:
        v23 = 1;
        v11 = 8LL;
        break;
      case 0x19:
        v23 = 1;
        v11 = 8LL;
        break;
      case 0x12:
        v23 = 1;
        v11 = 8LL;
        break;
      case 0x6C:
        v23 = 2;
        v11 = 8LL;
        break;
      case 0x15:
        v11 = 8LL;
        v23 = 8;
        break;
      case 0x21:
        v23 = 4;
        v11 = 8LL;
        break;
      case 0x27:
        v23 = 4;
        v11 = 8LL;
        break;
      case 0x23:
        v11 = 8LL;
        v23 = 8;
        break;
      case 8:
        v11 = 8LL;
        v23 = 8;
        break;
      case 0x28:
        v11 = 8LL;
        v23 = 8;
        break;
      case 0x29:
        v11 = 8LL;
        v23 = 8;
        break;
      case 0x62:
        v11 = 8LL;
        v23 = 8;
        break;
      case 0x63:
        v11 = 8LL;
        v23 = 8;
        break;
      case 0x2D:
        v23 = 4;
        v11 = 8LL;
        break;
      case 0x2E:
        v23 = 4;
        v11 = 8LL;
        break;
      default:
        v11 = 8LL;
        switch ( (_DWORD)a2 )
        {
          case '1':
            v23 = 8;
            break;
          case '5':
            v23 = 8;
            break;
          case '8':
            v23 = 8;
            break;
          case '>':
            v23 = 8;
            break;
          case 'A':
            v23 = 8;
            break;
          case 'F':
            v23 = 1;
            break;
          case 'J':
            v23 = 1;
            break;
          case 'S':
            v23 = 8;
            break;
          case 'Z':
            v23 = 1;
            break;
          case '[':
            v23 = 4;
            break;
          case '_':
            v23 = 8;
            break;
          case 'W':
            v23 = 1;
            break;
          case 'd':
            v23 = 4;
            break;
          case 'e':
            v23 = 8;
            break;
          case 'f':
            v23 = 8;
            break;
          case 'i':
            v23 = 8;
            break;
          default:
            v23 = 4;
            if ( (_DWORD)a2 == 107 )
              v23 = 8;
            break;
        }
        break;
    }
    if ( (_DWORD)a4 )
    {
      if ( ((v23 - 1) & (unsigned int)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 8LL;
    }
  }
  else
  {
    v11 = 8LL;
  }
  if ( (_DWORD)a2 != 96 )
  {
    v21 = 0x140000000uLL;
    switch ( (int)a2 )
    {
      case 1:
        return PspSetQuotaLimits((ULONG_PTR)v7);
      case 5:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v288 = *(_DWORD *)v5;
        v153 = v288;
        if ( v288 < 0 )
          v153 = v288 & 0x7FFFFFFF;
        v166 = v288 < 0 ? 2 : 0;
        if ( (unsigned int)(v153 - 1) > 0x1E )
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
        v96 = Object;
        if ( v153 > *((char *)Object + 144) )
        {
          v167 = SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, (int)v251, 512, PreviousMode);
          v96 = Object;
          if ( !v167 )
            goto LABEL_676;
        }
        KeSetPriorityAndQuantumProcess((__int64)v96, v153, 0, 0, 0);
        MmSetMemoryPriorityProcess((__int64)Object, v166);
        goto LABEL_24;
      case 6:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v170 = *(_DWORD *)v5;
        v289 = *(_DWORD *)v5;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v48 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 61) )
          goto LABEL_287;
        for ( i = PsGetNextProcessThread(Object, 0LL); i; i = PsGetNextProcessThread(Object, i) )
          KeBoostPriorityThread(i, v170);
        goto LABEL_419;
      case 8:
        if ( (_DWORD)a4 == 8 )
        {
          v62 = 0;
          v279 = 0;
          v61 = *(void **)v5;
          v300 = *(_QWORD *)v5;
        }
        else
        {
          if ( (_DWORD)a4 != 16 )
            return -1073741820;
          v61 = *(void **)v5;
          v300 = *(_QWORD *)v5;
          v279 = *((_DWORD *)v5 + 2);
          v62 = v279;
          if ( (v279 & 0xFFFFFFF8) != 0 )
            return -1073741811;
        }
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        v286 = 0LL;
        v26 = ObReferenceObjectByHandle(v61, 0, LpcPortObjectType, PreviousMode, &v286, 0LL);
        v261 = v286;
        v278 = (char *)v286;
        if ( v26 < 0 )
          return v26;
        v63 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)v251,
                2048,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v63 < 0 )
        {
          ObfDereferenceObject(v261);
          return v63;
        }
        v64 = v261;
        v65 = (unsigned __int64)v261 | v62;
        v277 = v65;
        v66 = (signed __int64 *)((char *)Object + 576);
        _m_prefetchw((char *)Object + 576);
        v67 = *v66;
        do
        {
          v261 = (PVOID)v67;
          if ( (_DWORD)v4 == 16 )
          {
            *((_DWORD *)v5 + 2) = v67 & 7;
          }
          else if ( (v67 & 7) != 0 )
          {
            ObfDereferenceObject(v64);
            goto LABEL_470;
          }
          v68 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 72, v65, v67);
          v199 = v67 == v68;
          v67 = v68;
        }
        while ( !v199 );
        if ( v68 )
        {
          memset(&SubjectContext[8], 0, 32);
          v140 = (void *)(v68 & 0xFFFFFFFFFFFFFFF8uLL);
          *(_QWORD *)SubjectContext = 0xD00300008LL;
          v323 = *((_QWORD *)Object + 58);
          while ( 1 )
          {
            v141 = LpcRequestPort((__int64)v140, (__int64)SubjectContext);
            if ( v141 != -1073741801 && v141 != -1073741670 )
              break;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
          }
          PspLockUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread, v142, v143);
          ObfDereferenceObject(v140);
        }
        goto LABEL_218;
      case 9:
        if ( (_DWORD)a4 != 16 )
          return -1073741820;
        return PspAssignPrimaryToken((__int64)CurrentThread, PreviousMode, (ULONG_PTR)v7, *(void **)v5);
      case 10:
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
      case 11:
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
      case 12:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v22 = *(_DWORD *)v5;
        v290 = *(_DWORD *)v5;
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
        PspSetProcessDefaultHardErrorMode((__int64)Object, (__int64)CurrentThread, v22);
        goto LABEL_24;
      case 13:
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
        v48 = xKdEnumerateDebuggingDevices();
        goto LABEL_157;
      case 15:
      case 42:
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
        v48 = PsChargeProcessNonPagedPoolQuota((__int64)Object, 0x6028uLL);
        if ( v48 < 0 )
          goto LABEL_157;
        Pool2 = ExAllocatePool2(0x40uLL);
        v165 = (void *)Pool2;
        if ( Pool2 )
        {
          PsWatchEnabled = 1;
          *(_DWORD *)Pool2 = 0;
          *(_QWORD *)(Pool2 + 8) = 0LL;
          KeInitializeGate(Pool2 + 16, 0);
          if ( !_InterlockedCompareExchange64((volatile signed __int64 *)Object + 88, (signed __int64)v165, 0LL) )
          {
LABEL_218:
            v48 = 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v48;
          }
          ExFreePoolWithTag(v165, 0);
          v48 = -1073741752;
        }
        else
        {
          v48 = -1073741801;
        }
        PsReturnProcessNonPagedPoolQuota((ULONG_PTR)Object, 0x6028uLL);
        goto LABEL_157;
      case 16:
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v251,
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
      case 17:
        if ( (_DWORD)a4 != 1 )
          return -1073741820;
        v172 = *(_BYTE *)v5;
        v265 = *(_BYTE *)v5;
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
        if ( v172 )
          *((_DWORD *)Object + 226) |= 4u;
        else
          *((_DWORD *)Object + 226) &= ~4u;
        if ( *((_QWORD *)Object + 98) )
        {
          v173 = *((_WORD *)Object + 886);
          if ( v173 == 332 || v173 == 452 )
            v172 = 1;
        }
        KeSetAutoAlignmentProcess(Object, v172);
        PspUnlockProcessExclusive((__int64)Object);
        goto LABEL_24;
      case 18:
        if ( (_DWORD)a4 != 2 )
          return -1073741820;
        v168 = *(_WORD *)v5;
        v258 = *(_WORD *)v5;
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
        v103 = PspSetProcessPriorityClass((__int64)Object, HIBYTE(v258), (__int64)v251, PreviousMode);
        if ( v103 >= 0 )
        {
          if ( (unsigned int)dword_140E085C0 > 5 && tlgKeywordOn((__int64)&dword_140E085C0, 0x400000000000LL) )
          {
            v248[0] = v168;
            *(_QWORD *)&SubjectContext[32] = v248;
            v323 = 1LL;
            v314 = (PVOID)0x1000000;
            v324 = &v314;
            v325 = 8;
            v326 = 0;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E085C0,
              (unsigned __int8 *)byte_14005116D,
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
      case 19:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v174 = *(_DWORD *)v5;
        v291 = *(_DWORD *)v5;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        v48 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)v251,
                512,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v48 < 0 )
          return v48;
        v20 = Object;
        if ( *((_QWORD *)Object + 200) )
        {
          v48 = -1073741790;
          goto LABEL_158;
        }
        if ( v174 )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 0x1000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFEFFFFFF);
        goto LABEL_157;
      case 21:
        if ( (_DWORD)a4 == 8 )
        {
          *(_QWORD *)&v316 = *(_QWORD *)v5;
          if ( !(_QWORD)v316 )
            return -1073741811;
        }
        else
        {
          if ( (_DWORD)a4 != 16 )
            return -1073741820;
          v316 = *v5;
          if ( !KeVerifyGroupAffinity((__int64)&v316, 0) )
            return -1073741811;
          v7 = v251;
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
          v48 = -1073741811;
          goto LABEL_158;
        }
        KeQueryPrimaryGroupProcess((__int64)Object, &v256);
        if ( (_DWORD)v4 == 8 )
        {
          v154 = v316 & KeActiveProcessors.Bitmap[v256];
          if ( v154 != (_QWORD)v316 )
          {
LABEL_470:
            v48 = -1073741811;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v48;
          }
          WORD4(v316) = v256;
          *(_QWORD *)&v316 = v154;
        }
        --CurrentThread->KernelApcDisable;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 61) )
        {
          v104 = (signed __int64 *)((char *)Object + 456);
          v105 = KeAbPreAcquire((__int64)Object + 456, 0LL);
          if ( _InterlockedCompareExchange64(v104, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v104, 0, v105, (__int64)v104);
          if ( v105 )
            *((_BYTE *)v105 + 10) = 1;
          v48 = PspSetProcessAffinitySafe((struct _KPROCESS *)Object, (__int64)&v271);
          v106 = (signed __int64 *)Object;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 57, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v106 + 57);
          KeAbPostRelease((ULONG_PTR)(v106 + 57));
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
          if ( v48 >= 0 )
          {
            if ( (_DWORD)v271 )
              PspUpdatePebForAffinityChange((__int64)CurrentThread, (__int64)Object);
            _InterlockedOr((volatile signed __int32 *)Object + 124, 0x200000u);
          }
        }
        else
        {
          v48 = -1073741558;
        }
        KeLeaveCriticalRegionThread();
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v48;
      case 22:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v292 = *(_DWORD *)v5;
        v145 = v292 != 0;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v7,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v48 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 61) )
          goto LABEL_287;
        KeSetDisableBoostProcess((__int64)Object, v145);
        goto LABEL_419;
      case 23:
        if ( (_DWORD)a4 != 8 )
          return -1073741820;
        v312 = *(void **)v5;
        if ( RtlIsSandboxedToken(0LL, PreviousMode) )
          return -1073741790;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v251,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v48 = ObSetProcessDeviceMap((__int64)Object);
        goto LABEL_157;
      case 24:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v175 = *(_DWORD *)v5;
        v296 = *(_DWORD *)v5;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v251,
                   516,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v175 != (unsigned int)PsGetSessionId((__int64)Object) )
          LODWORD(v8) = -1073741790;
        goto LABEL_207;
      case 25:
        if ( (_DWORD)a4 != 1 )
          return -1073741820;
        v169 = *(_BYTE *)v5;
        v264 = *(_BYTE *)v5;
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
        if ( (unsigned int)dword_140E085C0 > 5 && tlgKeywordOn((__int64)&dword_140E085C0, 0x400000000000LL) )
        {
          v248[0] = v169;
          *(_QWORD *)&SubjectContext[32] = v248;
          v323 = 1LL;
          v314 = (PVOID)0x1000000;
          v324 = &v314;
          v325 = 8;
          v326 = 0;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E085C0,
            (unsigned __int8 *)byte_1400511C8,
            0LL,
            0LL,
            4u,
            (PEVENT_DATA_DESCRIPTOR)SubjectContext);
        }
        MmGetMinWsPagePriority();
        if ( !(unsigned int)Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline() )
        {
          LOBYTE(v8) = v169 != 0;
          PsSetProcessPriorityByClass(Object, (unsigned int)v8);
        }
        goto LABEL_24;
      case 29:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v176 = *(_DWORD *)v5;
        v305 = *(_DWORD *)v5;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v251,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v176 )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 0x2000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFDFFF);
        goto LABEL_24;
      case 31:
        if ( (_DWORD)a4 != 4 )
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
        v48 = result;
        if ( result < 0 )
          return result;
        v280 = *(_DWORD *)v5;
        if ( (v280 & 0xFFFFFFFE) != 0 )
          goto LABEL_470;
        if ( (v280 & 1) != 0 )
          _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFFFD);
        else
          _InterlockedOr((volatile signed __int32 *)Object + 125, 2u);
        goto LABEL_157;
      case 32:
        Handle = 0LL;
        if ( !(_DWORD)a4 )
          goto LABEL_752;
        if ( (((_DWORD)a4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        v177 = *(_DWORD *)v5;
        LODWORD(Handle) = *(_DWORD *)v5;
        if ( (_DWORD)a4 == 8 )
          HIDWORD(Handle) = *((_DWORD *)v5 + 1);
        else
          HIDWORD(Handle) = 0;
        if ( v177 && (v177 & 0xFFFFFFF0) != 0 )
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
        v48 = PsSetProcessHandleTracingInformation((struct _EX_RUNDOWN_REF *)Object, p_Handle);
        goto LABEL_157;
      case 33:
        if ( (((_DWORD)a4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( (_DWORD)a4 == 4 )
        {
          LODWORD(v69) = *(_DWORD *)v5;
          v269 = *(_DWORD *)v5;
          LOBYTE(v5) = 0;
        }
        else
        {
          v69 = *(_QWORD *)v5;
          v301 = v69;
          v5 = (__int128 *)HIDWORD(v69);
          v269 = v69;
        }
        if ( (unsigned int)v69 >= 4 )
          return -1073741811;
        if ( (unsigned int)v69 < 3 )
          goto LABEL_353;
        if ( !SeCheckPrivilegedObject(*(_QWORD *)&SeIncreaseBasePriorityPrivilege, (int)v7, 512, PreviousMode) )
          return -1073741727;
        v7 = v251;
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
        v48 = result;
        if ( result < 0 )
          return result;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 61) )
        {
          PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
          v109 = (volatile signed __int32 *)Object;
          v110 = *((_DWORD *)Object + 125);
          v111 = v269 << 27;
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
            v115 = v269;
            do
            {
              if ( (_BYTE)v5 == 1 && ((*((_DWORD *)v114 + 10) >> 9) & 7) < v115 )
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
          v48 = -1073741558;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
        }
        return v48;
      case 34:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        v281 = *(_DWORD *)v5;
        v71 = KeSetExecuteOptions((__int64)KeGetCurrentThread()->ApcState.Process, v281);
        if ( v71 >= 0 && (v281 & 3) == 1 )
          MmRemoveExecuteGrants();
        return v71;
      case 35:
        memset(v319, 0, sizeof(v319));
        v320 = 0LL;
        v270 = 0LL;
        v274 = 0LL;
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741823;
        if ( (unsigned int)a4 < 0x28 || (_DWORD)a4 - 16 != 24 * ((unsigned int)(a4 - 16) / 0x18uLL) )
          return -1073741820;
        if ( (_DWORD)a4 == 40 )
        {
          P = v319;
        }
        else
        {
          P = (PVOID)ExAllocatePool2(0x101uLL);
          if ( !P )
            return -1073741670;
        }
        v275 = (char *)P;
        memmove(P, v5, v4);
        v303 = (char *)P + 4;
        if ( *((_DWORD *)P + 1) >= 2u
          || (*(_DWORD *)P & 0xFFFFFFFE) != 0
          || (v302 = (unsigned int *)((char *)P + 8), v27 = *((unsigned int *)P + 2), !(_DWORD)v27)
          || (unsigned int)(v4 - 16) / 0x18uLL != v27 )
        {
          v48 = -1073741820;
          goto LABEL_136;
        }
        v28 = 0;
        while ( 2 )
        {
          v250 = v28;
          if ( v28 < (unsigned int)v27 )
          {
            if ( !*((_DWORD *)P + 6 * v28 + 4) )
            {
              ++v28;
              continue;
            }
            goto LABEL_220;
          }
          break;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        Object = Process;
        v259 = 0;
        if ( (*(_DWORD *)P & 1) != 0 )
        {
          if ( !Process[1].ReadyTime || (v92 = WORD2(Process[3].PerProcessorCycleTimes), v92 != 332) && v92 != 452 )
          {
LABEL_220:
            v48 = -1073741811;
            goto LABEL_136;
          }
          v259 = 1;
        }
        v30 = v259 ^ 1u;
        Alignment = 4 * v30 + 4;
        v277 = 4 * v30 + 4;
        v278 = (char *)v5;
        v250 = 0;
        v249 = 0;
        v252 = 0;
        for ( j = PsGetNextProcessThread(Process, 0LL); ; j = PsGetNextProcessThread(Object, v261) )
        {
          v261 = (PVOID)j;
          v32 = (volatile void **)v250;
          LODWORD(v251) = v250;
          v33 = j;
          if ( !j || v250 >= *v302 )
            break;
          if ( (*(_DWORD *)(j + 116) & 0x400) == 0 )
          {
            RunRef = (PEX_RUNDOWN_REF)(j + 1416);
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(j + 1416)) )
            {
              v34 = *(_QWORD *)(v33 + 240);
              if ( v259 )
              {
                v35 = (char *)(v34 + 8236);
                v274 = v34 + 8236;
                v36 = (char *)*(unsigned int *)(v34 + 8236);
              }
              else
              {
                v35 = (char *)(v34 + 88);
                v274 = v34 + 88;
                v36 = *(char **)(v34 + 88);
              }
              v270 = v36;
              if ( v36 )
              {
                if ( *v303 == 1 )
                {
                  if ( v36 == v35 )
                  {
                    v270 = 0LL;
                    v50 = v32;
                  }
                  else
                  {
                    v49 = v277 * *((unsigned int *)P + 3);
                    if ( v49 )
                    {
                      if ( ((Alignment - 1) & (unsigned int)v36) != 0 )
                        ExRaiseDatatypeMisalignment();
                      if ( (unsigned __int64)&v36[v49] > 0x7FFFFFFF0000LL || &v36[v49] < v36 )
                        v36 = v270;
                    }
                    v273 = (char *)v250;
                    v32 = (volatile void **)((char *)P + 24 * v250 + 24);
                    ProbeForWrite(*v32, v277 * *((unsigned int *)P + 3), Alignment);
                    memmove((void *)*v32, v36, v277 * *((unsigned int *)P + 3));
                    _InterlockedOr(v246, 0);
                    LODWORD(v32) = (_DWORD)v251;
                    v50 = (volatile void **)v273;
                  }
                  v51 = &v278[24 * (_QWORD)v50];
                  v251 = v51;
                  v52 = v51 + 16;
                  v273 = v51 + 16;
                  *((_DWORD *)v51 + 4) |= 1u;
                  v53 = &v275[24 * (unsigned int)v32 + 24];
                  if ( v259 )
                  {
                    v304 = *(_DWORD *)v53;
                    *(_DWORD *)(v34 + 8236) = v304;
                  }
                  else
                  {
                    *(_QWORD *)(v34 + 88) = *(_QWORD *)v53;
                  }
                  if ( v249 < 0 )
                  {
                    *v52 &= ~1u;
                  }
                  else
                  {
                    *((_QWORD *)v51 + 4) = *((_QWORD *)v261 + 162);
                    *((_QWORD *)v51 + 3) = v270;
                    *v52 ^= 3u;
                    ++v250;
                  }
                }
                else
                {
                  v37 = 24LL * v250;
                  v38 = &v278[v37];
                  v273 = &v278[v37];
                  v39 = &v278[v37 + 16];
                  v251 = v39;
                  *(_DWORD *)v39 |= 1u;
                  v40 = *((unsigned int *)v275 + 3);
                  if ( v259 )
                  {
                    v44 = (unsigned __int64)&v36[4 * v40];
                    if ( v44 >= 0x7FFFFFFF0000LL )
                      v44 = 0x7FFFFFFF0000LL;
                    v45 = *(unsigned int *)v44;
                    v42 = (unsigned int)v45;
                    v274 = v45;
                    v46 = *(_DWORD *)&v275[v37 + 24];
                    v299 = v46;
                    v47 = (unsigned __int64)&v270[4 * *((unsigned int *)v275 + 3)];
                    if ( v47 >= 0x7FFFFFFF0000LL )
                      v47 = 0x7FFFFFFF0000LL;
                    *(_DWORD *)v47 = v46;
                  }
                  else
                  {
                    v41 = (unsigned __int64)&v36[8 * v40];
                    if ( v41 >= 0x7FFFFFFF0000LL )
                      v41 = 0x7FFFFFFF0000LL;
                    v42 = *(_QWORD *)v41;
                    v274 = *(_QWORD *)v41;
                    v43 = (unsigned __int64)&v270[8 * *((unsigned int *)v275 + 3)];
                    if ( v43 >= 0x7FFFFFFF0000LL )
                      v43 = 0x7FFFFFFF0000LL;
                    RtlCopyVolatileMemory((void *)v43, (char *)P + v37 + 24, 8uLL);
                  }
                  if ( v249 < 0 )
                  {
                    *(_DWORD *)v39 &= ~1u;
                  }
                  else
                  {
                    *((_QWORD *)v38 + 3) = v42;
                    *(_DWORD *)v39 ^= 3u;
                    ++v250;
                  }
                }
              }
              ExReleaseRundownProtection_0(RunRef);
              if ( v249 < 0 )
                break;
            }
          }
        }
        if ( v261 )
          ObfDereferenceObjectWithTag(v261, 0x6E457350u);
        v48 = v249;
LABEL_136:
        if ( P != v319 )
          ExFreePoolWithTag(P, 0);
        return v48;
      case 39:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v89 = *(_DWORD *)v5;
        v282 = v89;
        if ( v89 > (unsigned int)MmGetDefaultPagePriority() || v89 < (unsigned int)MmGetMinWsPagePriority() )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v251,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        v48 = result;
        v249 = result;
        if ( result < 0 )
          return result;
        if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 61) )
          goto LABEL_287;
        PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
        v126 = v89 << 12;
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
          v131 = v282;
          do
          {
            PsSetPagePriorityThread((__int64)(v130 - 175), v131);
            v130 = (_QWORD *)*v130;
            v113 = Object;
          }
          while ( v130 != (_QWORD *)((char *)Object + 880) );
          v48 = v249;
        }
        goto LABEL_418;
      case 40:
        memset(&ApcState, 0, sizeof(ApcState));
        if ( (((_DWORD)a4 - 8) & 0xFFFFFFF7) != 0 )
          return -1073741820;
        if ( (_DWORD)a4 == 8 )
        {
          *(_QWORD *)&v276 = 0LL;
          v93 = *(_QWORD *)v5;
          *((_QWORD *)&v276 + 1) = *(_QWORD *)v5;
        }
        else
        {
          v276 = *v5;
          v93 = _mm_srli_si128((__m128i)v276, 8).m128i_u64[0];
        }
        if ( DWORD1(v276) )
          return -1073741811;
        if ( (_DWORD)v276 )
          return -1073741736;
        if ( v93 != (__int64)(v93 << 16) >> 16 )
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
        v94 = KeGetCurrentThread()->ApcState.Process;
        v95 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode);
        v96 = Object;
        if ( !v95 && Object != v94 )
        {
LABEL_676:
          ObfDereferenceObjectWithTag(v96, 0x79517350u);
          return -1073741727;
        }
        v97 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 61);
        v98 = (struct _EX_RUNDOWN_REF *)Object;
        if ( !v97 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741558;
        }
        v99 = 0;
        if ( *((_QWORD *)Object + 98) )
        {
          v146 = *((_WORD *)Object + 886);
          if ( v146 == 332 || v146 == 452 )
            v99 = 1;
        }
        ReadyTime = v94[1].ReadyTime;
        if ( v99 )
        {
          if ( ReadyTime )
          {
            v155 = WORD2(v94[3].PerProcessorCycleTimes);
            if ( v155 == 332 || v155 == 452 )
            {
              KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
              v103 = 0;
              if ( *((_QWORD *)&v276 + 1) < (unsigned __int64)MmGetMaximumUserAddress()
                && (unsigned int)MmValidateUserCallTarget(*((__int64 *)&v276 + 1), 1) )
              {
                v179 = (HANDLE *)*((_QWORD *)Object + 98);
                if ( v179 )
                  v8 = *v179;
                *((_DWORD *)v8 + 292) = DWORD2(v276);
              }
              else
              {
                v103 = -1073741811;
              }
              KiUnstackDetachProcess((__int64)&ApcState, 0);
              v98 = (struct _EX_RUNDOWN_REF *)Object;
              goto LABEL_329;
            }
          }
        }
        else if ( !ReadyTime || (v147 = WORD2(v94[3].PerProcessorCycleTimes), v147 != 332) && v147 != 452 )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          v101 = *((_QWORD *)&v276 + 1);
          v102 = MmValidateUserCallTarget(*((__int64 *)&v276 + 1), 0);
          v103 = -1073741811;
          if ( v102 )
            v103 = 0;
          KiUnstackDetachProcess((__int64)&ApcState, 0);
          v98 = (struct _EX_RUNDOWN_REF *)Object;
          if ( v102 )
          {
            PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
            *((_QWORD *)Object + 45) = v101;
            v151 = Object;
            v152 = (volatile signed __int32 *)*((_QWORD *)Object + 110);
            if ( v152 != (volatile signed __int32 *)((char *)Object + 880) )
            {
              while ( 1 )
              {
                if ( v101 )
                  _interlockedbittestandset(v152 - 350, 0x19u);
                else
                  _interlockedbittestandreset(v152 - 350, 0x19u);
                v152 = *(volatile signed __int32 **)v152;
                v151 = Object;
                if ( v152 == (volatile signed __int32 *)((char *)Object + 880) )
                  break;
                v101 = *((_QWORD *)&v276 + 1);
              }
            }
            PspUnlockProcessExclusive((__int64)v151);
            v98 = (struct _EX_RUNDOWN_REF *)Object;
          }
          goto LABEL_329;
        }
        v103 = -1073741637;
LABEL_329:
        ExReleaseRundownProtection_0(v98 + 61);
        goto LABEL_330;
      case 41:
        v307 = 0LL;
        v308 = 0LL;
        v309 = 0LL;
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        v24 = 0LL;
        if ( (_DWORD)a4 == 40 )
        {
          if ( PreviousMode )
          {
            v307 = *v5;
            v308 = v5[1];
            v309 = *((_QWORD *)v5 + 4);
            v24 = v5 + 2;
            v5 = &v307;
          }
          v25 = *(_DWORD *)v5;
          if ( *(_DWORD *)v5 > 0x40u || *((_DWORD *)v5 + 1) | *((_DWORD *)v5 + 2) | *((_DWORD *)v5 + 3) )
            return -1073741811;
          ++v5;
        }
        else
        {
          if ( (_DWORD)a4 != 24 )
            return -1073741820;
          v25 = 0;
          if ( PreviousMode )
          {
            v308 = *v5;
            v24 = v5 + 1;
            v5 = &v308;
          }
        }
        if ( !*(_QWORD *)v5 )
          return -1073741811;
        v314 = *(PVOID *)v5;
        *((_QWORD *)v5 + 2) = 0LL;
        result = MmAllocateUserStack((__int64 *)v5 + 2, *((_QWORD *)v5 + 1), (__int64 *)&v314, v25, 0);
        v26 = result;
        if ( result >= 0 )
        {
          if ( PreviousMode )
            *v24 = *((_QWORD *)v5 + 2);
          return v26;
        }
        return result;
      case 45:
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        LODWORD(Handle) = *(_DWORD *)v5;
        if ( ((unsigned int)Handle & 0xFFFFFFFC) != 0 )
          return -1073741811;
        return PspSetProcessAffinityUpdateMode((__int64)CurrentThread, (int *)&Handle);
      case 46:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v294 = *(_DWORD *)v5;
        v180 = v294;
        if ( (v294 & 0xFFFFFFFE) != 0 )
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
        if ( (v180 & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFDFFFFF);
        goto LABEL_24;
      case 48:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v181 = *(_DWORD *)v5;
        v293 = *(_DWORD *)v5;
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
        v182 = (void *)PsReferencePrimaryTokenWithTag((__int64)Object, 0x746C6644u);
        SeSetVirtualizationToken(v182, v181);
        ObfDereferenceObject(v182);
        goto LABEL_24;
      case 49:
        if ( (_DWORD)a4 != 8 )
          return -1073741820;
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        v310 = *(struct _LIST_ENTRY **)v5;
        if ( ((unsigned __int8)v310 & 3) != 1 )
          return -1073741811;
        KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink = v310;
        return 0;
      case 52:
        if ( (_DWORD)a4 != 8 )
          return -1073741820;
        v253 = *(void **)v5;
        if ( v7 != (HANDLE)-1LL && (_DWORD)v253 != 2 )
          return -1073741811;
        v57 = (unsigned __int8 *)KeGetCurrentThread()->ApcState.Process;
        Object = v57;
        if ( (_DWORD)v253 != 8 )
        {
          if ( (_DWORD)v253 != 16 )
          {
            switch ( (int)v253 )
            {
              case 1:
                if ( HIDWORD(v253) >= 0x10 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 2) == 0 && (*((_DWORD *)v57 + 468) & 0x10) != 0
                  || (BYTE4(v253) & 1) == 0 && (*((_DWORD *)v57 + 468) & 0x40) == 0 )
                {
                  goto LABEL_773;
                }
                if ( (BYTE4(v253) & 8) != 0 )
                  goto LABEL_382;
                if ( (*((_DWORD *)v57 + 468) & 8) != 0 )
                  goto LABEL_773;
                if ( (BYTE4(v253) & 8) != 0 )
                {
LABEL_382:
                  if ( (BYTE4(v253) & 2) == 0 )
                  {
                    v58 = -1073741776;
                    goto LABEL_259;
                  }
                }
                else if ( (BYTE4(v253) & 2) == 0 )
                {
LABEL_476:
                  if ( (BYTE4(v253) & 1) != 0 )
                  {
                    _InterlockedAnd((volatile signed __int32 *)v57 + 468, 0xFFFFFFBF);
                    v57 = (unsigned __int8 *)Object;
                  }
                  if ( (BYTE4(v253) & 8) != 0 )
                  {
                    _InterlockedOr((volatile signed __int32 *)v57 + 468, 8u);
                    v57 = (unsigned __int8 *)Object;
                  }
                  goto LABEL_480;
                }
                _InterlockedOr((volatile signed __int32 *)v57 + 468, 0x10u);
                v57 = (unsigned __int8 *)Object;
                goto LABEL_476;
              case 2:
                v117 = HIDWORD(v253);
                if ( (HIDWORD(v253) & 0xFFFFFFF0) != 0 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 1) != 0 && (BYTE4(v253) & 8) != 0 )
                {
                  v117 = HIDWORD(v253) & 0xFFFFFFF7;
                  HIDWORD(v253) &= ~8u;
                }
                v118 = v117 & 1;
                if ( (v117 & 1) == 0 && ((v117 & 2) != 0 || (v117 & 4) != 0) )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (unsigned int)PsIsSystemWideMitigationOptionSet(9LL) )
                {
                  v58 = -1073741637;
                  goto LABEL_258;
                }
                if ( v251 == (HANDLE)-1LL )
                {
                  v57 = (unsigned __int8 *)Object;
                  v83 = 0;
                }
                else
                {
                  v58 = ObpReferenceObjectByHandleWithTag(
                          (ULONG_PTR)v251,
                          512,
                          (__int64)PsProcessType,
                          PreviousMode,
                          0x79517350u,
                          &Object,
                          0LL,
                          0LL);
                  if ( v58 < 0 )
                    goto LABEL_258;
                  v83 = 1;
                  v57 = (unsigned __int8 *)Object;
                  if ( Object != KeGetCurrentThread()->ApcState.Process )
                  {
                    v189 = *((_DWORD *)Object + 468);
                    if ( (v189 & 0x100) != 0 )
                    {
                      memset(SubjectContext, 0, 32);
                      SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, (PSECURITY_SUBJECT_CONTEXT)SubjectContext);
                      IsSandboxedToken = RtlIsSandboxedToken((PSECURITY_SUBJECT_CONTEXT)SubjectContext, 1);
                      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)SubjectContext);
                      if ( RtlIsSandboxedToken(0LL, PreviousMode)
                        || !IsSandboxedToken
                        || (v57 = (unsigned __int8 *)Object, (*((_DWORD *)Object + 468) & 0x400) == 0) )
                      {
                        v195 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode);
                        v57 = (unsigned __int8 *)Object;
                        if ( !v195 )
                        {
                          v58 = -1073741790;
                          goto LABEL_260;
                        }
                      }
                      v191 = HIDWORD(v253);
                    }
                    else
                    {
                      v191 = HIDWORD(v253);
                      if ( (BYTE4(v253) & 8) == 0 && (v117 & 1) == 0 && (v189 & 0x800) != 0 )
                      {
                        v58 = -1073741790;
                        goto LABEL_260;
                      }
                    }
                    v192 = 0;
                    if ( !v118 )
                      v192 = 2304;
                    v193 = -v118;
                    v194 = (v193 != 0 ? 0x100 : 0) | 0x800;
                    if ( (v191 & 8) == 0 )
                      v194 = v193 != 0 ? 0x900 : 0;
                    if ( (v191 & 2) != 0 )
                      v194 |= 0x200u;
                    else
                      v192 |= 0x200u;
                    v196 = v191 >> 2;
                    v197 = v194 | 0x400;
                    if ( (v196 & 1) == 0 )
                      v197 = v194;
                    v198 = v192 | 0x400;
                    v199 = (v196 & 1) == 0;
                    goto LABEL_852;
                  }
                  v117 = HIDWORD(v253);
                }
                if ( !v118 && (*((_DWORD *)v57 + 468) & 0x100) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_260;
                }
                v158 = (v117 >> 3) & 1;
                if ( !v158 && !v118 && (*((_DWORD *)v57 + 468) & 0x800) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_260;
                }
                v200 = (v117 >> 1) & 1;
                if ( v200 && (*((_DWORD *)v57 + 468) & 0x300) == 0x100 )
                {
                  v58 = -1073741790;
                  goto LABEL_260;
                }
                v201 = (v117 >> 2) & 1;
                if ( v201 && (*((_DWORD *)v57 + 468) & 0x500) == 0x100 )
                {
                  v58 = -1073741790;
                  goto LABEL_260;
                }
                if ( v118 )
                {
                  v202 = 2304;
                }
                else
                {
                  v202 = 0;
                  if ( v158 )
                    v202 = 2048;
                }
                v192 = (v200 ^ 1) << 9;
                v197 = v202 | 0x200;
                if ( !v200 )
                  v197 = v202;
                if ( v201 )
                  v197 |= 0x400u;
                v198 = v192 | 0x400;
                v199 = v201 == 0;
LABEL_852:
                if ( v199 )
                  v192 = v198;
                RtlInterlockedSetClearBits((volatile signed __int32 *)v57 + 468, v197, v192);
                v58 = 0;
                v57 = (unsigned __int8 *)Object;
                goto LABEL_260;
              case 3:
                if ( HIDWORD(v253) >= 4 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 2) != 0 )
                  goto LABEL_298;
                if ( (BYTE4(v253) & 1) != 0 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 2) != 0 )
                {
LABEL_298:
                  if ( (BYTE4(v253) & 1) == 0 )
                  {
                    v58 = -1073741811;
                    goto LABEL_259;
                  }
                }
                v156 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v57);
                if ( v156 )
                {
                  v183 = ExEnableHandleExceptions(v156, BYTE4(v253) & 1);
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 61);
                  if ( !v183 )
                    LODWORD(v8) = -1073741790;
                  v58 = (int)v8;
                }
                else
                {
                  v58 = -1073741558;
                }
                goto LABEL_258;
              case 4:
                v157 = HIDWORD(v253);
                if ( (HIDWORD(v253) & 0xFFFFFFF0) != 0 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 1) != 0 && (BYTE4(v253) & 2) != 0 )
                {
                  v157 = HIDWORD(v253) & 0xFFFFFFFD;
                  HIDWORD(v253) &= ~2u;
                }
                if ( (v157 & 4) != 0 && (v157 & 8) != 0 )
                {
                  v157 &= ~8u;
                  HIDWORD(v253) = v157;
                }
                v184 = v157 & 1;
                if ( (v157 & 1) == 0 && (*((_DWORD *)v57 + 468) & 0x1000) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                v185 = (v157 >> 2) & 1;
                if ( !v185 && (*((_DWORD *)v57 + 502) & 2) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                v186 = (v157 >> 1) & 1;
                if ( !v186 && (v157 & 1) == 0 && (*((_DWORD *)v57 + 468) & 0x2000) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                v187 = (v157 >> 3) & 1;
                if ( !v187 && !v185 && (*((_DWORD *)v57 + 502) & 4) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                if ( v184 || v186 )
                {
                  IsGuiThread = PsIsGuiThread((__int64)CurrentThread);
                  v57 = (unsigned __int8 *)Object;
                  if ( IsGuiThread )
                  {
                    v58 = -1073741431;
                    goto LABEL_259;
                  }
                }
                v58 = 0;
                if ( v184 )
                {
                  _InterlockedOr((volatile signed __int32 *)v57 + 468, 0x3000u);
                }
                else
                {
                  if ( !v186 )
                    goto LABEL_808;
                  _InterlockedOr((volatile signed __int32 *)v57 + 468, 0x2000u);
                }
                v57 = (unsigned __int8 *)Object;
LABEL_808:
                if ( v185 )
                {
                  _InterlockedOr((volatile signed __int32 *)v57 + 502, 6u);
                  goto LABEL_258;
                }
                if ( !v187 )
                  goto LABEL_259;
                _InterlockedOr((volatile signed __int32 *)v57 + 502, 4u);
                goto LABEL_258;
              case 6:
                if ( (HIDWORD(v253) & 0xFFFFFFFE) != 0 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 1) == 0 && (*((_DWORD *)v57 + 468) & 0x80u) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                v58 = 0;
                if ( (BYTE4(v253) & 1) == 0 )
                  goto LABEL_259;
                _InterlockedOr((volatile signed __int32 *)v57 + 468, 0x80u);
                goto LABEL_258;
              case 7:
                if ( (BYTE4(v253) & 8) != 0 || (BYTE4(v253) & 0x10) != 0 )
                  goto LABEL_617;
                if ( (HIDWORD(v253) & 0xFFFFFFE0) != 0 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (*((_DWORD *)v57 + 468) & 1) == 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 4) == 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                _InterlockedOr((volatile signed __int32 *)v57 + 468, 4u);
                v58 = 0;
                goto LABEL_258;
              case 9:
                if ( (HIDWORD(v253) & 0xFFFFFFFC) != 0 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 1) == 0 && (*((_DWORD *)v57 + 468) & 0x10000) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 1) == 0 && (BYTE4(v253) & 2) == 0 && (*((_DWORD *)v57 + 468) & 0x20000) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                v58 = 0;
                if ( (BYTE4(v253) & 1) != 0 )
                {
                  v82 = 0x10000;
                  v81 = 0x20000;
                  goto LABEL_257;
                }
                if ( (BYTE4(v253) & 2) == 0 )
                  goto LABEL_259;
                v82 = 0x20000;
                v81 = 0x10000;
                goto LABEL_257;
              case 10:
                v116 = HIDWORD(v253);
                if ( (HIDWORD(v253) & 0xFFFFFFE0) != 0 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 1) != 0 && (BYTE4(v253) & 8) != 0 )
                  v116 = HIDWORD(v253) & 0xFFFFFFF7;
                if ( (v116 & 2) != 0 && (v116 & 0x10) != 0 )
                  v116 &= ~0x10u;
                v132 = v116 & 1;
                v133 = 0x80000;
                if ( (v116 & 1) == 0 && (*((_DWORD *)v57 + 468) & 0x80000) != 0 )
                  goto LABEL_773;
                v134 = (v116 >> 1) & 1;
                if ( !v134 && (*((_DWORD *)v57 + 468) & 0x200000) != 0 )
                  goto LABEL_773;
                v135 = (v116 >> 2) & 1;
                if ( !v135 && (*((_DWORD *)v57 + 468) & 0x40000) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                v136 = (v116 >> 3) & 1;
                if ( !v136 && (v116 & 1) == 0 && (*((_DWORD *)v57 + 468) & 0x100000) != 0 )
                  goto LABEL_773;
                v137 = (v116 >> 4) & 1;
                if ( !v137 && !v134 && (*((_DWORD *)v57 + 468) & 0x400000) != 0 )
                {
                  v58 = -1073741790;
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
                RtlInterlockedSetClearBits((volatile signed __int32 *)v57 + 468, v139, v138);
                v58 = 0;
                goto LABEL_258;
              case 13:
                v119 = HIDWORD(v253);
                if ( (HIDWORD(v253) & 0xFFFFFFF8) != 0 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 1) == 0 && (BYTE4(v253) & 4) != 0 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 1) != 0 && (BYTE4(v253) & 2) != 0 )
                  v119 = HIDWORD(v253) & 0xFFFFFFFD;
                NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v57);
                v121 = NoChildProcessRestrictedPolicy;
                v122 = v119 & 1;
                if ( (v119 & 1) == 0 && NoChildProcessRestrictedPolicy - 1 <= 1 )
                {
                  v58 = -1073741790;
                  goto LABEL_258;
                }
                v123 = (v119 >> 2) & 1;
                if ( v123 && (_DWORD)v121 == 1 )
                {
                  v58 = -1073741790;
                  goto LABEL_258;
                }
                v124 = (v119 >> 1) & 1;
                if ( v124 )
                  goto LABEL_399;
                if ( v122 )
                  goto LABEL_400;
                if ( (_DWORD)v121 == 3 )
                {
                  v58 = -1073741790;
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
                    v58 = 0;
                    goto LABEL_258;
                  }
                  v144 = 2LL;
                  goto LABEL_445;
                }
                if ( v124 )
                {
                  v144 = 3LL;
                  v125 = Object;
LABEL_445:
                  PspSetNoChildProcessRestrictedPolicy(v125, v144, v121);
                  goto LABEL_446;
                }
                break;
              case 14:
                if ( (HIDWORD(v253) & 0xFFFFFFE0) != 0 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 1) == 0 && (*((_DWORD *)v57 + 468) & 0x40000000) != 0
                  || ((HIDWORD(v253) >> 1) & 1) == 0 && *((int *)v57 + 468) < 0
                  || ((HIDWORD(v253) >> 3) & 1) == 0 && (*((_DWORD *)v57 + 469) & 0x2000) != 0
                  || ((HIDWORD(v253) >> 2) & 1) == 0 && (*((_DWORD *)v57 + 469) & 0x1000) != 0 )
                {
                  goto LABEL_773;
                }
                v203 = (HIDWORD(v253) >> 4) & 1;
                if ( !v203 && (*((_DWORD *)v57 + 502) & 1) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                if ( v203 )
                {
                  IsCoreIsolationMitigationPolicyEnforceable = KeIsCoreIsolationMitigationPolicyEnforceable();
                  v57 = (unsigned __int8 *)Object;
                  if ( !IsCoreIsolationMitigationPolicyEnforceable )
                  {
LABEL_617:
                    v58 = -1073741637;
                    goto LABEL_259;
                  }
                }
                if ( (BYTE4(v253) & 1) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)v57 + 468, 0x40000000u);
                  v57 = (unsigned __int8 *)Object;
                }
                if ( ((HIDWORD(v253) >> 1) & 1) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)v57 + 468, 0x80000000);
                  _InterlockedOr((volatile signed __int32 *)Object + 383, 0x200000u);
                  PspWriteProcessSecurityDomain((__int64)Object, _InterlockedIncrement64(&PsNextSecurityDomain), 1);
                  KeSynchronizeSecurityDomain((_KPROCESS *)Object);
                  PspSynchronizeThreadIsolationDomains((__int64)Object);
                  v57 = (unsigned __int8 *)Object;
                }
                if ( ((HIDWORD(v253) >> 2) & 1) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)v57 + 469, 0x1000u);
                  v57 = (unsigned __int8 *)Object;
                }
                if ( ((HIDWORD(v253) >> 3) & 1) != 0 )
                {
                  _InterlockedOr((volatile signed __int32 *)v57 + 469, 0x2000u);
                  v57 = (unsigned __int8 *)Object;
                }
                if ( !v203 )
                {
LABEL_480:
                  v58 = 0;
                  goto LABEL_259;
                }
                PspApplyCoreIsolationPolicy((__int64)v57);
                v58 = 0;
                goto LABEL_258;
              case 15:
                v159 = HIDWORD(v253);
                if ( (HIDWORD(v253) & 0xFFFFFC00) != 0 )
                {
                  v58 = -1073741811;
                  goto LABEL_259;
                }
                if ( (BYTE4(v253) & 0x10) != 0 )
                {
                  v159 = HIDWORD(v253) | 1;
                  HIDWORD(v253) |= 1u;
                }
                if ( (v159 & 0x200) != 0 )
                {
                  v159 |= 4u;
                  HIDWORD(v253) = v159;
                }
                if ( (v159 & 0x40) != 0 )
                {
                  v159 |= 0x20u;
                  HIDWORD(v253) = v159;
                }
                v205 = (v159 >> 4) & 1;
                if ( !v205 && (*((_DWORD *)v57 + 469) & 0x100000) != 0
                  || (v159 & 1) == 0 && (*((_DWORD *)v57 + 469) & 0x4000) != 0 )
                {
                  goto LABEL_773;
                }
                if ( (v159 & 1) != 0 && (*((_DWORD *)v57 + 469) & 0x4000) == 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                v206 = (v159 >> 9) & 1;
                if ( v206 && *((int *)v57 + 469) >= 0 )
                  goto LABEL_773;
                v207 = (v159 >> 2) & 1;
                if ( !v207 && (*((_DWORD *)v57 + 469) & 0x20000) != 0 )
                  goto LABEL_773;
                if ( v207 && (*((_DWORD *)v57 + 469) & 0x20000) == 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                v208 = (v159 >> 6) & 1;
                if ( !v208 && (*((_DWORD *)v57 + 469) & 0x400000) != 0 )
                  goto LABEL_773;
                v209 = (v159 >> 5) & 1;
                if ( !v209 && (*((_DWORD *)v57 + 469) & 0x200000) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                v210 = (v159 >> 8) & 1;
                if ( !v210 && (*((_DWORD *)v57 + 469) & 0x40000000) != 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                v211 = (v159 >> 1) & 1;
                if ( v211 && (*((_DWORD *)v57 + 469) & 0x8000) == 0 )
                  goto LABEL_773;
                if ( ((v159 >> 3) & 1) == 0 && (*((_DWORD *)v57 + 469) & 0x40000) != 0 )
                  goto LABEL_773;
                if ( ((v159 >> 3) & 1) != 0 && (*((_DWORD *)v57 + 469) & 0x40000) == 0 )
                  goto LABEL_773;
                v212 = (v159 >> 7) & 1;
                if ( !v212 && (*((_DWORD *)v57 + 469) & 0x800000) != 0 )
                  goto LABEL_773;
                if ( v212 && (*((_DWORD *)v57 + 469) & 0x800000) == 0 )
                {
                  v58 = -1073741790;
                  goto LABEL_259;
                }
                if ( v205 )
                {
                  _InterlockedOr((volatile signed __int32 *)v57 + 469, 0x100000u);
                  v57 = (unsigned __int8 *)Object;
                }
                if ( !v206 && v207 )
                {
                  _InterlockedAnd((volatile signed __int32 *)v57 + 469, 0x7FFFFFFFu);
                  v57 = (unsigned __int8 *)Object;
                }
                if ( v208 )
                {
                  _InterlockedOr((volatile signed __int32 *)v57 + 469, 0x200000u);
                  _InterlockedOr((volatile signed __int32 *)Object + 469, 0x400000u);
                }
                else
                {
                  if ( !v209 )
                    goto LABEL_940;
                  _InterlockedOr((volatile signed __int32 *)v57 + 469, 0x200000u);
                }
                v57 = (unsigned __int8 *)Object;
LABEL_940:
                if ( v210 )
                {
                  _InterlockedOr((volatile signed __int32 *)v57 + 469, 0x40000000u);
                  v57 = (unsigned __int8 *)Object;
                }
                if ( !v211 )
                {
                  _InterlockedAnd((volatile signed __int32 *)v57 + 469, 0xFFFF7FFF);
                  v57 = (unsigned __int8 *)Object;
                }
                v58 = 0;
                goto LABEL_259;
              default:
                goto LABEL_617;
            }
            goto LABEL_446;
          }
          v84 = HIDWORD(v253);
          if ( (HIDWORD(v253) & 0xFFFFFFFC) == 0 )
          {
            if ( (BYTE4(v253) & 1) != 0 && (BYTE4(v253) & 2) != 0 )
              v84 = HIDWORD(v253) & 0xFFFFFFFD;
            RedirectionTrustPolicy = PspGetRedirectionTrustPolicy(v57);
            v86 = v84 & 1;
            if ( (v84 & 1) == 0 && RedirectionTrustPolicy == 1 )
            {
              v58 = -1073741790;
LABEL_258:
              v57 = (unsigned __int8 *)Object;
              goto LABEL_259;
            }
            v107 = (v84 >> 1) & 1;
            if ( !v107 )
            {
              if ( v86 )
                goto LABEL_350;
              if ( RedirectionTrustPolicy == 2 )
              {
                v58 = -1073741790;
                goto LABEL_258;
              }
            }
            if ( !v86 )
            {
              if ( !v107 )
              {
LABEL_446:
                v58 = 0;
                goto LABEL_258;
              }
              v108 = 2LL;
              goto LABEL_351;
            }
LABEL_350:
            v108 = 1LL;
LABEL_351:
            PspSetRedirectionTrustPolicy(Object, v108);
            v58 = 0;
            goto LABEL_258;
          }
          v58 = -1073741811;
LABEL_259:
          v83 = 0;
LABEL_260:
          if ( v83 == 1 )
            ObfDereferenceObjectWithTag(v57, 0x79517350u);
          return v58;
        }
        v75 = HIDWORD(v253);
        if ( (HIDWORD(v253) & 0xFFFFFFE0) != 0 )
        {
          v58 = -1073741811;
          goto LABEL_259;
        }
        if ( (BYTE4(v253) & 1) != 0 && ((BYTE4(v253) & 8) != 0 || (BYTE4(v253) & 0x10) != 0) )
          v75 = HIDWORD(v253) & 0xFFFFFFE7;
        if ( (v75 & 2) != 0 && (v75 & 0x10) != 0 )
          v75 &= ~0x10u;
        v76 = (v75 >> 3) & 1;
        if ( v76 && (v75 & 0x10) != 0 )
        {
          v58 = -1073741811;
          goto LABEL_259;
        }
        v77 = (v75 >> 1) & 1;
        if ( v77 + (v75 & 1) > 1 )
        {
          v58 = -1073741811;
          goto LABEL_259;
        }
        if ( (v75 & 1) != 0 )
          goto LABEL_243;
        v160 = v57[1528];
        if ( (_BYTE)v160 == 8 )
          goto LABEL_946;
        LOBYTE(v11) = 8;
        if ( (unsigned int)SeCompareSigningLevels(v11, v160, 0x140000000LL, a4) )
          goto LABEL_948;
        v57 = (unsigned __int8 *)Object;
LABEL_946:
        v213 = v57[1529];
        if ( (_BYTE)v213 == 8 )
          goto LABEL_773;
        LOBYTE(v11) = 8;
        if ( !(unsigned int)SeCompareSigningLevels(v11, v213, v21, a4) )
        {
          v57 = (unsigned __int8 *)Object;
LABEL_773:
          v58 = -1073741790;
          goto LABEL_259;
        }
LABEL_948:
        v57 = (unsigned __int8 *)Object;
        if ( !v77 )
        {
          LOBYTE(a2) = 6;
          if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 1528), a2, v21, a4) )
          {
            LOBYTE(a2) = 6;
            if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 1529), a2, v21, a4) )
            {
              v58 = -1073741790;
              goto LABEL_258;
            }
          }
          v57 = (unsigned __int8 *)Object;
        }
LABEL_243:
        if ( (*((_DWORD *)v57 + 468) & 0x3000000) != 0 && (v75 & 0x10) == 0 && !v77 && !v76 && (v75 & 1) == 0 )
        {
          v58 = -1073741790;
          goto LABEL_259;
        }
        v58 = 0;
        if ( (v75 & 1) != 0 )
        {
          LOBYTE(v11) = 8;
          if ( (unsigned int)SeCompareSigningLevels(v11, v57[1528], v21, a4) )
            *((_BYTE *)Object + 1528) = 8;
          LOBYTE(v78) = 8;
          if ( (unsigned int)SeCompareSigningLevels(v78, *((unsigned __int8 *)Object + 1529), v79, v80) )
            *((_BYTE *)Object + 1529) = 8;
        }
        else
        {
          if ( !v77 )
            goto LABEL_250;
          LOBYTE(a2) = 6;
          if ( !(unsigned int)SeCompareSigningLevels(v57[1528], a2, v21, a4) )
          {
            v58 = -1073741790;
            goto LABEL_258;
          }
          LOBYTE(v148) = 6;
          if ( (unsigned int)SeCompareSigningLevels(v148, *((unsigned __int8 *)Object + 1529), v149, v150) )
            *((_BYTE *)Object + 1529) = 6;
        }
        v57 = (unsigned __int8 *)Object;
LABEL_250:
        if ( v75 )
          LODWORD(v8) = 0x800000;
        v81 = ((v75 & 8) == 0) << 24;
        v82 = (unsigned int)v8 | 0x1000000;
        if ( !v76 )
          v82 = (int)v8;
        if ( ((v75 >> 4) & 1) != 0 )
          v82 |= 0x2000000u;
        else
          v81 |= 0x2000000u;
LABEL_257:
        RtlInterlockedSetClearBits((volatile signed __int32 *)v57 + 468, v82, v81);
        goto LABEL_258;
      case 53:
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        if ( (_DWORD)a4 != 16 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *v5;
        if ( SubjectContext[8] )
          return RtlRemoveDynamicUserFunctionTable(*(__int64 *)SubjectContext);
        else
          return RtlInsertDynamicUserFunctionTable(*(__int64 *)SubjectContext);
      case 54:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v90 = *(_DWORD *)v5;
        v295 = *(_DWORD *)v5;
        if ( (v90 & 0xFFFFFFFE) != 0 )
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
        v91 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( v91 )
        {
          ExEnableHandleExceptions(v91, v90 & 1);
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
      case 56:
        *(_OWORD *)SubjectContext = 0LL;
        v214 = 0LL;
        v285 = 0LL;
        if ( PreviousMode != 1 )
          goto LABEL_963;
        v215 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
          v215 = (__int64)v5;
        *(_DWORD *)SubjectContext = *(_DWORD *)v215;
        v216 = *(_QWORD *)(v215 + 8);
        *(_QWORD *)&SubjectContext[8] = v216;
        if ( !*(_WORD *)SubjectContext )
          return -1073741811;
        if ( (v216 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v217 = (void *)ExAllocatePool2(0x40uLL);
        v214 = v217;
        v285 = v217;
        if ( !v217 )
          return -1073741670;
        memmove(v217, *(const void **)&SubjectContext[8], *(unsigned __int16 *)SubjectContext);
        *(_QWORD *)&SubjectContext[8] = v214;
        v5 = (__int128 *)SubjectContext;
        v311 = SubjectContext;
        v7 = v251;
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
          if ( v214 )
            ExFreePoolWithTag(v214, 0);
          return v71;
        }
        v103 = IoRevokeHandlesForProcess((__int64)v5, Object);
        if ( v214 )
          ExFreePoolWithTag(v214, 0);
LABEL_330:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v103;
      case 57:
        return MmProcessWorkingSetControl((ULONG_PTR)v7);
      case 59:
        if ( (_DWORD)a4 != 4 )
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
          v283 = *(_DWORD *)v5 != 0;
          if ( KeGetCurrentThread()->ApcState.Process == Object )
          {
            v249 = -1073741790;
          }
          else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          {
            v249 = 0;
            v218 = v283;
            KeSetCheckStackExtentsProcess(Object, v283);
            if ( !v218 && (*((_DWORD *)Object + 124) & 0x20000) != 0 )
              _InterlockedAnd((volatile signed __int32 *)Object + 124, 0xFFFDFFFF);
          }
          else
          {
            v249 = -1073741727;
          }
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v249;
        }
        return result;
      case 62:
        if ( (_DWORD)a4 != 16 )
          return -1073741820;
        v317 = *v5;
        if ( (_WORD)v317 != 1 || DWORD1(v317) )
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
        if ( *((_QWORD *)&v317 + 1) )
          _InterlockedOr((volatile signed __int32 *)Object + 125, 0x100u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 125, 0xFFFFFEFF);
        goto LABEL_24;
      case 63:
        v314 = 0LL;
        if ( (_DWORD)a4 != 8 )
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
        v314 = *(PVOID *)v5;
        v48 = PsSetProcessFaultInformation((__int64)Object, &v314);
        goto LABEL_157;
      case 65:
        if ( (_DWORD)a4 != 32 )
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
          v219 = MmReleaseCommitForMemResetPages((__int64)Object, (*(_DWORD *)&SubjectContext[4] >> 2) & 1);
        else
          v219 = MmSetCommitReleaseEligibility((__int64)Object, SubjectContext[4] & 1);
        v48 = v219;
LABEL_157:
        v20 = Object;
LABEL_158:
        ObfDereferenceObjectWithTag(v20, 0x79517350u);
        return v48;
      case 66:
      case 67:
        if ( (a4 & 7) != 0 || (unsigned int)a4 > 0x100 )
          return -1073741820;
        memmove(v327, v5, (unsigned int)a4);
        v220 = (unsigned int)v4 >> 3;
        if ( v6 == 67 )
        {
          result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
          if ( result < 0 )
            return result;
        }
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v251,
                   0x2000,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v48 = KeSetCpuSetsProcess((__int64)Object, v220, (__int64)v327, v6 == 67, v6 != 67);
        goto LABEL_157;
      case 68:
        if ( !(unsigned int)PsIsSessionInitializationProcess(KeGetCurrentThread()->ApcState.Process) )
          return -1073741727;
        v287 = 0LL;
        v222 = ObReferenceObjectByHandle(v251, 0x200u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v287, 0LL);
        v48 = v222;
        Object = v287;
        if ( v222 >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v287 + 383, 0x40u);
          ObfDereferenceObject(Object);
        }
        return v48;
      case 70:
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
      case 71:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v59 = *(_DWORD *)v5;
        v298 = *(_DWORD *)v5;
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
        v60 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        if ( !v60 )
          goto LABEL_405;
        ExEnableRaiseUMExceptionOnInvalidHandleClose(v60, v59);
        goto LABEL_206;
      case 72:
        return PsIumEnableOnDemandDebugWithResponse((ULONG_PTR)v7, v5, a4);
      case 74:
        if ( (_DWORD)a4 != 1 )
          return -1073741820;
        v223 = *(_BYTE *)v5;
        v267 = *(_BYTE *)v5;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v251,
                   0x2000,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v223 )
          _InterlockedOr((volatile signed __int32 *)Object + 383, 0x200u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 383, 0xFFFFFDFF);
        goto LABEL_24;
      case 77:
        v314 = 0LL;
        v315 = 0;
        if ( (_DWORD)a4 != 12 )
          return -1073741820;
        v314 = *(PVOID *)v5;
        v70 = *((_DWORD *)v5 + 2);
        v315 = v70;
        if ( (_DWORD)v314 != 1 || (HIDWORD(v314) & 0xFFFFFFF8) != 0 || (~HIDWORD(v314) & v70) != 0 )
          return -1073741811;
        if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
          return -1073741822;
        v71 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)v251,
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
          v74 = guard_dispatch_icall_no_overrides(Object, &v314, v72, v73);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
          return v74;
        }
      case 80:
        result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
        if ( result < 0 )
          return result;
        if ( (_DWORD)v4 != 1 )
          return -1073741820;
        v221 = *(_BYTE *)v5;
        v266 = *(_BYTE *)v5;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v251,
                   0x2000,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        if ( v221 )
          _InterlockedOr((volatile signed __int32 *)Object + 124, 0x8000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)Object + 124, 0xF7FFFFFF);
        KeRecomputeCpuSetAffinityProcess((__int64)Object);
        goto LABEL_24;
      case 82:
        if ( (unsigned int)a4 < 8 )
          return -1073741820;
        memset_0(v321, 0, sizeof(v321));
        if ( (unsigned int)v4 >= 0x90 )
          LODWORD(v4) = 144;
        memmove(v321, v5, (unsigned int)v4);
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v251,
                   512,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v48 = PoSetProcessEnergyTrackingState((__int64)Object, v321);
        v20 = Object;
        if ( v48 >= 0 )
          goto LABEL_25;
        goto LABEL_158;
      case 83:
        return -1073741637;
      case 85:
        if ( (_DWORD)a4 != 24 )
          return -1073741820;
        memset_0(pszDest, 0, 0x41uLL);
        v224 = *v5;
        *(_OWORD *)SubjectContext = v224;
        *(_QWORD *)&SubjectContext[16] = *((_QWORD *)v5 + 2);
        v225 = (const char *)v224;
        if ( (unsigned __int64)(v224 + 65) > 0x7FFFFFFF0000LL || (__int64)v224 + 65 < (unsigned __int64)v224 )
          v225 = *(const char **)SubjectContext;
        RtlStringCbCopyA(pszDest, 0x41uLL, v225);
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v251,
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
        v48 = EtwSetProcessTelemetryCoverage((_KPROCESS *)Object, (__int64)SubjectContext);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *((_DWORD *)v5 + 3) = *(_DWORD *)&SubjectContext[12];
        *((_DWORD *)v5 + 4) = *(_DWORD *)&SubjectContext[16];
        return v48;
      case 87:
        break;
      case 90:
        return SeCodeIntegritySetInformationProcess((__int64)v7, a2, v5, a4);
      case 91:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v297 = *(_DWORD *)v5;
        v87 = v297;
        if ( (v297 & 0xFFFFFFFE) != 0 )
          return -1073741811;
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)v251,
                   0x2000,
                   (__int64)PsProcessType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        LOBYTE(v88) = 1;
        PspSetProcessForegroundBackgroundRequest(Object, v87 & 1, v88);
        goto LABEL_24;
      case 95:
        if ( (_DWORD)a4 != 8 )
          return -1073741820;
        v54 = *(_QWORD *)v5;
        v313 = *(void **)v5;
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
        v48 = ObpReferenceObjectByHandleWithTag(
                v54,
                4096,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &v284,
                0LL,
                0LL);
        v20 = Object;
        if ( v48 < 0 )
          goto LABEL_158;
        v48 = PspCombineSecurityDomains((__int64)Object, (signed __int32 *)v284);
        ObfDereferenceObjectWithTag(v284, 0x79517350u);
        goto LABEL_157;
      case 97:
        if ( (_DWORD)a4 != 8 )
          return -1073741820;
        v263 = *(void **)v5;
        if ( ((unsigned int)v263 & 0xFFFFFFFE) != 0 || v7 != (HANDLE)-1LL )
          return -1073741811;
        v226 = KeGetCurrentThread()->ApcState.Process;
        Object = v226;
        Blink = v226[1].ProcessListEntry.Blink;
        if ( !Blink )
          return -1073741790;
        v228 = 0LL;
        v229 = (__int64 *)v226[1].ReadyTime;
        if ( v229 )
          v228 = *v229;
        v230 = (unsigned __int8)v263 & 1;
        Flink = (int)Blink[124].Flink;
        if ( ((unsigned __int8)v263 & 1) != 0 )
          v232 = Flink | 1;
        else
          v232 = Flink & 0xFFFFFFFE;
        LODWORD(Blink[124].Flink) = v232;
        if ( v228 )
        {
          v233 = *(_DWORD *)(v228 + 1140);
          if ( v230 )
            v234 = v233 | 1;
          else
            v234 = v233 & 0xFFFFFFFE;
          *(_DWORD *)(v228 + 1140) = v234;
        }
        return (int)v8;
      case 98:
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741823;
        if ( (_DWORD)a4 != 32 )
          return -1073741820;
        if ( !KeIsUserCetAllowed() || !_bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
          return -1073741637;
        return PspSetupUserFiberShadowStack(*v5, *((_QWORD *)v5 + 1), v5[1], (_QWORD *)v5 + 3);
      case 99:
        if ( v7 != (HANDLE)-1LL )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741823;
        if ( (_DWORD)a4 != 8 )
          return -1073741820;
        if ( KeIsUserCetAllowed() && _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x14u) )
          return PspFreeUserFiberShadowStack(*(PVOID *)v5);
        return -1073741637;
      case 100:
        memset(SubjectContext, 0, 20);
        if ( (_DWORD)a4 != 20 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *v5;
        *(_DWORD *)&SubjectContext[16] = *((_DWORD *)v5 + 4);
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
        v48 = PspSyscallProviderOptIn((__int64)Object, (__int64)SubjectContext);
        goto LABEL_157;
      case 101:
        LODWORD(Handle) = 0;
        v235 = 0LL;
        if ( (_DWORD)a4 != 16 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *v5;
        v236 = 16 * *(unsigned __int16 *)SubjectContext;
        if ( !v236 )
          return -1073741811;
        if ( !*(_QWORD *)&SubjectContext[8] )
          return -1073741811;
        v237 = v236;
        ProbeForWrite(*(volatile void **)&SubjectContext[8], v236, 8u);
        if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741790;
        v314 = 0LL;
        result = ObReferenceObjectByHandle(v251, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v314, 0LL);
        Object = v314;
        if ( result < 0 )
          return result;
        if ( v314 == KeGetCurrentThread()->ApcState.Process && (*((_DWORD *)v314 + 469) & 0x40000000) != 0 )
        {
          v48 = -1073741790;
        }
        else if ( (*((_DWORD *)v314 + 469) & 0x4000) != 0 )
        {
          v239 = (_QWORD *)ExAllocatePool2(0x101uLL);
          v235 = v239;
          v263 = v239;
          if ( v239 )
          {
            v240 = *(_QWORD *)&SubjectContext[8];
            memmove(v239, *(const void **)&SubjectContext[8], v237);
            v48 = PspProcessDynamicEHContinuationTargets(
                    (ULONG_PTR)Object,
                    (__int64)v235,
                    *(unsigned __int16 *)SubjectContext,
                    &Handle);
            v252 = v48;
            while ( 1 )
            {
              v250 = (unsigned int)v8;
              if ( (unsigned int)v8 >= (unsigned int)Handle )
                break;
              *(_QWORD *)(v240 + 16LL * (unsigned int)v8 + 8) = v235[2 * (unsigned int)v8 + 1];
              LODWORD(v8) = (_DWORD)v8 + 1;
            }
          }
          else
          {
            v48 = -1073741801;
          }
        }
        else
        {
          v48 = -1073741637;
        }
        v238 = Object;
        if ( Object )
          goto LABEL_1055;
        goto LABEL_1056;
      case 102:
        LODWORD(Handle) = 0;
        v235 = 0LL;
        if ( (_DWORD)a4 != 16 )
          return -1073741820;
        *(_OWORD *)SubjectContext = *v5;
        v241 = 24 * (unsigned int)*(unsigned __int16 *)SubjectContext;
        if ( !(_DWORD)v241 )
          return -1073741811;
        if ( !*(_QWORD *)&SubjectContext[8] )
          return -1073741811;
        v242 = (unsigned int)v241;
        ProbeForWrite(*(volatile void **)&SubjectContext[8], v241, 8u);
        if ( *(_WORD *)&SubjectContext[2] || *(_DWORD *)&SubjectContext[4] )
          return -1073741811;
        if ( PreviousMode != 1 )
          return -1073741790;
        v314 = 0LL;
        result = ObReferenceObjectByHandle(v251, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v314, 0LL);
        Object = v314;
        if ( result < 0 )
          return result;
        if ( v314 == KeGetCurrentThread()->ApcState.Process && (*((_DWORD *)v314 + 469) & 0x40000000) != 0 )
        {
          v48 = -1073741790;
        }
        else if ( (*((_DWORD *)v314 + 469) & 0x4000) != 0 )
        {
          v243 = (_QWORD *)ExAllocatePool2(0x101uLL);
          v235 = v243;
          v263 = v243;
          if ( v243 )
          {
            v244 = *(_QWORD *)&SubjectContext[8];
            memmove(v243, *(const void **)&SubjectContext[8], v242);
            v48 = PspProcessDynamicEnforcedAddressRanges(
                    (ULONG_PTR)Object,
                    (__int64)Object + 1936,
                    (__int64)v235,
                    *(unsigned __int16 *)SubjectContext,
                    &Handle);
            v252 = v48;
            while ( 1 )
            {
              v250 = (unsigned int)v8;
              if ( (unsigned int)v8 >= (unsigned int)Handle )
                break;
              *(_DWORD *)(v244 + 24LL * (unsigned int)v8 + 16) = v235[3 * (unsigned int)v8 + 2];
              LODWORD(v8) = (_DWORD)v8 + 1;
            }
          }
          else
          {
            v48 = -1073741801;
          }
        }
        else
        {
          v48 = -1073741637;
        }
        v238 = Object;
        if ( Object )
LABEL_1055:
          ObfDereferenceObject(v238);
LABEL_1056:
        if ( v235 )
          ExFreePoolWithTag(v235, 0);
        return v48;
      case 105:
        if ( (_DWORD)a4 != 8 )
          return -1073741820;
        v306 = *(_QWORD *)v5;
        if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & v306) != 0 )
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
        v245 = KeGetCurrentThread()->ApcState.Process;
        Object = v245;
        if ( v245[1].ReadyTime )
          return -1073741811;
        if ( PsIsSystemProcess((__int64)v245) )
          return -1073741637;
        else
          return PspEnableProcessOptionalXStateFeatures((__int64)Object, v306);
      case 106:
        return PfSnSetAltPrefetchParam((ULONG_PTR)v7, v5, a4);
      case 107:
        if ( (unsigned int)a4 < 0x10 || (a4 & 7) != 0 )
          return -1073741820;
        v161 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(0x101uLL);
        v162 = v161;
        RunRef = v161;
        if ( v161 )
        {
          memmove(v161, v5, v4);
          if ( (unsigned int)(v4 - 8) >> 3 < HIDWORD(v162->Ptr) || (v162->Count & 0xFFFFFFFE) != 0 )
          {
            v163 = -1073741811;
          }
          else
          {
            v314 = 0LL;
            v163 = ObReferenceObjectByHandle(v251, 0x200u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v314, 0LL);
            Object = v314;
            if ( v163 >= 0 )
              v163 = PspAssignCpuPartitionsToProcess(
                       (__int64)v314,
                       PreviousMode,
                       (__int64)&v162[1],
                       HIDWORD(v162->Ptr),
                       v162->Count & 1);
          }
        }
        else
        {
          v163 = -1073741670;
        }
        if ( v162 )
          ExFreePoolWithTag(v162, 0);
        if ( Object )
          ObfDereferenceObject(Object);
        return v163;
      case 108:
        if ( (_DWORD)a4 != 4 )
          return -1073741820;
        v268 = *(_DWORD *)v5;
        v55 = v268;
        if ( !(_WORD)v268 || (v268 & 0xFFFC) != 0 )
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
        v56 = result;
        if ( result >= 0 )
        {
          if ( (v55 & 1) != 0
            && (unsigned int)dword_140E085C0 > 5
            && tlgKeywordOn((__int64)&dword_140E085C0, 0x400000000000LL) )
          {
            v248[0] = HIBYTE(v268);
            *(_QWORD *)&SubjectContext[32] = v248;
            v323 = 1LL;
            v314 = (PVOID)0x1000000;
            v324 = &v314;
            v325 = 8;
            v326 = 0;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E085C0,
              (unsigned __int8 *)byte_14005122B,
              0LL,
              0LL,
              4u,
              (PEVENT_DATA_DESCRIPTOR)SubjectContext);
          }
          if ( (v55 & 2) == 0
            || (v56 = PspSetProcessPriorityClass((__int64)Object, BYTE2(v268), (__int64)v251, PreviousMode), v56 >= 0) )
          {
            MmGetMinWsPagePriority();
            if ( (unsigned int)Feature_ForegroundBoost_ApiRemoval__private_IsEnabledDeviceUsageNoInline()
              || (v55 & 1) == 0 )
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
          return v56;
        }
        return result;
      case 112:
        if ( (_DWORD)a4 != 8 )
          return -1073741820;
        Handle = 0LL;
        v48 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)v7,
                512,
                (__int64)PsProcessType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL,
                0LL);
        if ( v48 >= 0 && (v48 = PspSchedulerSharedDataRegionCreate((_KPROCESS *)Object, (__int64 *)&Handle), v48 >= 0) )
        {
          *(_QWORD *)v5 = Handle;
          Handle = 0LL;
          v48 = 0;
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
        return v48;
      case 113:
        if ( (_DWORD)a4 )
          return -1073741820;
        if ( v7 != (HANDLE)-1LL )
          return -1073741637;
        KeChangeMemoryAttributes(PreviousMode);
        return 0;
      default:
        return -1073741821;
    }
  }
  if ( (_DWORD)a2 == 87 && !(_DWORD)a4 || (unsigned int)a4 < 4 && (_DWORD)a2 == 96 )
    return -1073741820;
  result = EtwCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process, PreviousMode);
  if ( result >= 0 )
  {
    if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode)
      && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    {
      return -1073741727;
    }
    v260 = 0;
    if ( v6 == 87 )
    {
      v14 = *(_BYTE *)v5;
      v260 = *(_BYTE *)v5 & 1;
      v13 = v14 & 3;
    }
    else
    {
      v13 = *(_DWORD *)v5;
    }
    v260 = v13;
    if ( (v13 & 0xFFFFFF80) != 0 )
    {
      return -1073741811;
    }
    else
    {
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)v251,
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
        v15 = (((v260 >> 2) & 1) << 19) | 0x100000;
        if ( (v260 & 8) == 0 )
          v15 = ((v260 >> 2) & 1) << 19;
        v16 = v15 | 0x20000000;
        if ( (v260 & 0x10) == 0 )
          v16 = v15;
        v17 = v16 | 0x10000000;
        if ( (v260 & 0x20) == 0 )
          v17 = v16;
        v18 = v17 | 0x80000000;
        if ( (v260 & 0x40) == 0 )
          v18 = v17;
        _InterlockedOr((volatile signed __int32 *)Object + 383, v18);
        _InterlockedAnd((volatile signed __int32 *)Object + 124, 0xFCFFFFFF);
        v19 = ((v260 & 1) << 24) | 0x2000000;
        if ( (v260 & 2) == 0 )
          v19 = (v260 & 1) << 24;
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
