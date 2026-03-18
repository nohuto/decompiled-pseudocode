/*
 * XREFs of xxxDestroyThreadInfo @ 0x14015F444
 * Callers:
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     UserThreadCallout @ 0x140166CD0 (UserThreadCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x140023A28 (ApiSetEditionGetProcessWindowStation.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400280F8 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x140045BD8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     FreeHwndList @ 0x140047064 (FreeHwndList.c)
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x14004721C (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 *     DestroyThreadsObjects @ 0x14005FF70 (DestroyThreadsObjects.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x14006041C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140060DA0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x140061184 (-CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140061204 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x140092B70 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x140097A5C (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     EtwTraceThreadExit @ 0x14009C14C (EtwTraceThreadExit.c)
 *     MarkThreadsObjects @ 0x14009E070 (MarkThreadsObjects.c)
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400A3FA0 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400B1FE8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     IsKSTThread @ 0x1400BB410 (IsKSTThread.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CFC50 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400DD6B8 (-UninitializeThreadInfoIocp@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1400DD798 (ProtectHandle.c)
 *     LockObjectAssignment @ 0x1400EC2C0 (LockObjectAssignment.c)
 *     ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400EF0B8 (-ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F78E4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     FreeMessageList @ 0x1401001D0 (FreeMessageList.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140106314 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ?IsAnyPriorityFloorSet@tagTHREADINFO@@QEAA_NXZ @ 0x14010AB80 (-IsAnyPriorityFloorSet@tagTHREADINFO@@QEAA_NXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EA98 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14010FD70 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     ?OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x140110E88 (-OnDestroyed@CLastWokenThread@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x14011FC6C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140121A30 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     ?ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x14013D188 (-ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxWindowEvent @ 0x140140F70 (xxxWindowEvent.c)
 *     UserDeactivateMITInputProcessing @ 0x14014B168 (UserDeactivateMITInputProcessing.c)
 *     zzzDestroyQueue @ 0x140161AA0 (zzzDestroyQueue.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     EtwTraceInputProcessDelay @ 0x1401693E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x140169CA0 (EtwTraceMessageCheckDelay.c)
 *     DisableDelegation @ 0x140189550 (DisableDelegation.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1401934A0 (ApiSetEditionSystemGenerateMove.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14019EDF0 (--0-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14019F5FC (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1401A2850 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1401A2B98 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1401A2BF8 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1401A2E38 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1401A2F3C (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1401A34E8 (NullifyLookasideRef.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1401A3B98 (CleanupRimDevObjInUserModeCallback.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CleanUpRoutingInfoForThread@CoreMessagingKPort@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x1401A7B7C (-CleanUpRoutingInfoForThread@CoreMessagingKPort@@QEAAXQEAUtagTHREADINFO@@@Z.c)
 *     CleanupResources @ 0x1401B7088 (CleanupResources.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1401D3584 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1401F4F34 (-zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?RevokeThreadAsKST@KST@InputTraceLogging@@SAXXZ @ 0x140212238 (-RevokeThreadAsKST@KST@InputTraceLogging@@SAXXZ.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140215790 (DeactivateKSTInputProcessingHelper.c)
 *     ?RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ @ 0x14021FF90 (-RevokeThreadAsInput@CInputThreadBase@@QEAAXXZ.c)
 *     CleanupIAMAccess @ 0x14023AD9C (CleanupIAMAccess.c)
 *     IsCleanupIAMAccessSupported @ 0x14023B3C4 (IsCleanupIAMAccessSupported.c)
 *     Is_PostMessageSupported @ 0x14023B518 (Is_PostMessageSupported.c)
 *     IsxxxMNEndMenuStateSupported @ 0x14023B588 (IsxxxMNEndMenuStateSupported.c)
 *     MagContextThreadCallout @ 0x14023B5C0 (MagContextThreadCallout.c)
 *     _PostMessage @ 0x14023B8A8 (_PostMessage.c)
 *     xxxMNEndMenuState @ 0x14023B948 (xxxMNEndMenuState.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void xxxDestroyThreadInfo()
{
  __int64 v0; // rcx
  struct tagTHREADINFO *v1; // rbx
  ULONG_PTR v2; // rsi
  __int64 v3; // r13
  struct _NT_TIB *Self; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  volatile signed __int32 *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 (*v17)(void); // rax
  int v18; // eax
  int v19; // r12d
  void (__fastcall *v20)(struct tagTHREADINFO *); // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  DelayZonePalmRejection *Instance; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 (*v27)(void); // rax
  int v28; // eax
  void (__fastcall *v29)(struct tagTHREADINFO *); // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 (*v32)(void); // rax
  int v33; // eax
  void (*v34)(void); // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 (*v37)(void); // rax
  int v38; // eax
  void (*v39)(void); // rax
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  __int64 (*v42)(void); // rax
  int v43; // eax
  void (*v44)(void); // rax
  __int64 UserSessionState; // rbx
  __int64 v46; // rcx
  __int64 i; // rax
  __int64 v48; // rcx
  __int64 (*v49)(void); // rax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rdx
  char *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 (*v56)(void); // rax
  int v57; // eax
  void (__fastcall *v58)(ULONG_PTR); // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 (*v61)(void); // rax
  int v62; // eax
  void (__fastcall *v63)(ULONG_PTR); // rax
  void (__fastcall *v64)(ULONG_PTR); // rax
  _QWORD *ProcessWindowStation; // rax
  __int64 v66; // rdx
  _QWORD *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 (*v72)(void); // rax
  int v73; // eax
  void (__fastcall *v74)(_QWORD *); // rax
  __int64 v75; // rcx
  __int64 *v76; // r14
  __int64 v77; // rbx
  struct tagTHREADINFO *v78; // rax
  __int64 v79; // rdx
  struct tagTHREADINFO *v80; // rcx
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 (*v84)(void); // rax
  int v85; // eax
  __int64 v86; // rbx
  void (__fastcall *v87)(__int64 *, __int64); // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 (*v90)(void); // rax
  int v91; // eax
  __int64 v92; // rbx
  void (__fastcall *v93)(__int64, __int64 *); // rax
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 (*v97)(void); // rax
  int v98; // eax
  __int64 v99; // rbx
  void (__fastcall *v100)(__int64); // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 (*v103)(void); // rax
  int v104; // eax
  __int64 v105; // rbx
  void (__fastcall *v106)(__int64); // rax
  __int64 v107; // rbx
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rbx
  __int64 v114; // rcx
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 (*v118)(void); // rax
  int v119; // eax
  void (__fastcall *v120)(ULONG_PTR, __int64 *); // rax
  ULONG_PTR *v121; // r14
  __int64 *v122; // rcx
  ULONG_PTR v123; // rbx
  __int64 v124; // rcx
  struct tagPROCESSINFO *v125; // rax
  __int64 (*v126)(void); // rax
  int v127; // eax
  __int64 v128; // rbx
  void (__fastcall *v129)(ULONG_PTR, __int64); // rax
  __int64 v130; // rbx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 (*v135)(void); // rax
  int v136; // eax
  void (__fastcall *v137)(__int64); // rax
  __int64 (*v138)(void); // rax
  int v139; // eax
  void (__fastcall *v140)(ULONG_PTR); // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 (*v143)(void); // rax
  int v144; // eax
  void (__fastcall *v145)(ULONG_PTR); // rax
  const signed __int64 *v146; // r15
  __int64 v147; // rcx
  __int64 v148; // rcx
  __int64 v149; // rcx
  LONG v150; // ebx
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rcx
  void *v154; // rcx
  __int64 v155; // rcx
  __int64 v156; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 v160; // r8
  __int64 v161; // rbx
  __int64 v162; // rcx
  __int64 v163; // rax
  void *v164; // rcx
  int v165; // r15d
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rbx
  __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  struct tagPROCESSINFO **v174; // r13
  __int64 v175; // rcx
  __int64 v176; // rcx
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // rdx
  _QWORD *v180; // rcx
  __int64 (*v181)(void); // rax
  int v182; // eax
  void (__fastcall *v183)(ULONG_PTR); // rax
  void (*v184)(void); // rax
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 (*v187)(void); // rax
  int v188; // eax
  void (*v189)(void); // rax
  __int64 v190; // rdx
  __int64 v191; // rcx
  _QWORD *v192; // rbx
  _QWORD *v193; // r14
  __int64 (*v194)(void); // rax
  int v195; // eax
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 (*v198)(void); // rax
  int v199; // eax
  void (*v200)(void); // rax
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 (*v206)(void); // rax
  int v207; // eax
  void (__fastcall *v208)(ULONG_PTR); // rax
  __int64 v209; // rcx
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // rbx
  __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 (*v215)(void); // rax
  int v216; // eax
  struct tagPROCESSINFO *v217; // rbx
  void (__fastcall *v218)(struct tagPROCESSINFO *); // rax
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 (*v223)(void); // rax
  int v224; // eax
  void (__fastcall *v225)(ULONG_PTR); // rax
  __int64 v226; // rdx
  int v227; // eax
  void **v228; // r14
  void *v229; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v231; // r8
  __int64 v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // rax
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // rdx
  __int64 v239; // rcx
  __int64 (*v240)(void); // rax
  int v241; // eax
  void (__fastcall *v242)(ULONG_PTR); // rax
  int v243; // edx
  void *v244; // rcx
  void *v245; // rcx
  __int64 v246; // rcx
  __int64 v247; // rax
  __int64 v248; // rdx
  __int64 v249; // rcx
  __int64 (*v250)(void); // rax
  int v251; // eax
  _QWORD *v252; // rbx
  __int64 v253; // rcx
  __int64 v254; // rax
  __int64 v255; // rdx
  __int64 v256; // rcx
  void (*v257)(void); // rax
  unsigned __int64 v258; // rax
  __int64 v259; // rcx
  __int64 v260; // rax
  struct tagTHREADINFO *v261; // rdx
  __int64 v262; // r14
  const signed __int64 *v263; // r13
  __int64 v264; // rcx
  __int64 v265; // rdx
  __int64 v266; // rcx
  __int64 (*v267)(void); // rax
  __int64 v268; // rbx
  void (__fastcall *v269)(__int64, ULONG_PTR); // rax
  struct tagTHREADINFO *v270; // rax
  struct tagTHREADINFO **v271; // rcx
  __int64 v272; // rcx
  char *v273; // rbx
  char *v274; // rcx
  __int64 v275; // rcx
  __int64 v276; // rcx
  __int64 v277; // rcx
  __int64 v278; // rcx
  __int64 v279; // rcx
  tagQ *v280; // rcx
  __int64 v281; // rcx
  __int64 v282; // rcx
  __int64 v283; // rcx
  __int64 v284; // rcx
  void *v285; // rcx
  void *v286; // r8
  __int64 v287; // rcx
  __int64 v288; // rax
  __int64 v289; // rcx
  __int64 v290; // rax
  __int64 v291; // rcx
  int v292; // ebx
  __int64 v293; // rcx
  __int64 v294; // rax
  _QWORD *v295; // rbx
  char *v296; // rbx
  __int64 v297; // rax
  __int64 v298; // rax
  signed __int32 v299[8]; // [rsp+0h] [rbp-168h] BYREF
  int v300; // [rsp+28h] [rbp-140h]
  _QWORD v301[2]; // [rsp+60h] [rbp-108h] BYREF
  void **v302; // [rsp+70h] [rbp-F8h]
  void *v303[2]; // [rsp+78h] [rbp-F0h] BYREF
  const signed __int64 *v304; // [rsp+88h] [rbp-E0h]
  __int64 v305; // [rsp+90h] [rbp-D8h]
  ULONG_PTR v306; // [rsp+A8h] [rbp-C0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v307; // [rsp+B0h] [rbp-B8h]
  _QWORD *v308; // [rsp+B8h] [rbp-B0h]
  _QWORD *v309; // [rsp+C0h] [rbp-A8h]
  volatile signed __int32 *v310; // [rsp+C8h] [rbp-A0h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v311[2]; // [rsp+D0h] [rbp-98h] BYREF
  char v312[8]; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v313; // [rsp+E8h] [rbp-80h]
  _BYTE v314[16]; // [rsp+108h] [rbp-60h] BYREF
  _QWORD v315[10]; // [rsp+118h] [rbp-50h] BYREF
  _DWORD *Address; // [rsp+170h] [rbp+8h]
  int v317; // [rsp+178h] [rbp+10h] BYREF
  __int64 *v318; // [rsp+180h] [rbp+18h] BYREF
  struct tagPROCESSINFO **v319; // [rsp+188h] [rbp+20h]

  LOBYTE(v311[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v311, 0LL, 0x14u, 0);
  v307 = v311[1];
  v1 = PtiCurrent(v0);
  v2 = (ULONG_PTR)v1;
  v303[1] = v1;
  v319 = (struct tagPROCESSINFO **)((char *)v1 + 464);
  v3 = *((_QWORD *)v1 + 58);
  v305 = v3;
  Self = KeGetPcr()->NtTib.Self;
  if ( v1 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v5) + 68712) )
  {
    *(_QWORD *)(W32GetUserSessionState(v6) + 68712) = 0LL;
    W32GetUserSessionState(v7);
  }
  if ( Self )
    Self[2].StackBase = 0LL;
  v8 = (char *)v1 + 1680;
  v308 = (_QWORD *)((char *)v1 + 1680);
  v9 = *((_QWORD *)v1 + 210);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 1680) = 0LL;
    *(_QWORD *)(*(_QWORD *)v8 + 1360LL) &= ~0x8000000uLL;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v1 + 170) &= ~0x8000000uLL;
  }
  v10 = (_QWORD *)((char *)v1 + 496);
  v302 = (void **)((char *)v1 + 496);
  v11 = *((_QWORD *)v1 + 62);
  if ( v11 && *(struct tagTHREADINFO **)(v11 + 288) == v1 && (int)IsCleanupIAMAccessSupported() >= 0 )
    CleanupIAMAccess(*v10);
  if ( *(struct tagTHREADINFO **)(W32GetUserSessionState(v8) + 19000) == v1 )
    *(_QWORD *)(W32GetUserSessionState(v13) + 19000) = 0LL;
  v14 = (volatile signed __int32 *)((char *)v1 + 528);
  v310 = (volatile signed __int32 *)((char *)v1 + 528);
  _InterlockedOr((volatile signed __int32 *)v1 + 132, 0x41u);
  v16 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 48);
  v17 = *(__int64 (**)(void))(v16 + 4720);
  if ( v17 )
  {
    v18 = v17();
    v19 = -1073741637;
  }
  else
  {
    v19 = -1073741637;
    v18 = -1073741637;
  }
  if ( v18 >= 0 )
  {
    v16 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v16, v15) + 48);
    v20 = *(void (__fastcall **)(struct tagTHREADINFO *))(v16 + 4728);
    if ( v20 )
      v20(v1);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v16) + 3264) )
  {
    W32GetUserSessionState(v22);
    Instance = DelayZonePalmRejection::GetInstance(v23);
    if ( Instance )
      DelayZonePalmRejection::CleanUpDelayZonesOnThreadExit(Instance, v1);
  }
  v26 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 48);
  v27 = *(__int64 (**)(void))(v26 + 1424);
  if ( v27 )
    v28 = v27();
  else
    v28 = -1073741637;
  if ( v28 >= 0 )
  {
    v26 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v26, v25) + 48);
    v29 = *(void (__fastcall **)(struct tagTHREADINFO *))(v26 + 1432);
    if ( v29 )
      v29(v1);
  }
  v31 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v26, v25) + 48);
  v32 = *(__int64 (**)(void))(v31 + 1440);
  if ( v32 )
    v33 = v32();
  else
    v33 = -1073741637;
  if ( v33 >= 0 )
  {
    v31 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v31, v30) + 48);
    v34 = *(void (**)(void))(v31 + 1448);
    if ( v34 )
      v34();
  }
  v36 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v31, v30) + 48);
  v37 = *(__int64 (**)(void))(v36 + 1456);
  if ( v37 )
    v38 = v37();
  else
    v38 = -1073741637;
  if ( v38 >= 0 )
  {
    v36 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v36, v35) + 48);
    v39 = *(void (**)(void))(v36 + 1464);
    if ( v39 )
      v39();
  }
  if ( *v10 )
  {
    v40 = *(_QWORD **)(*v10 + 224LL);
    if ( v40 && (struct tagTHREADINFO *)v40[4] == v1 )
    {
      v40 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v40, v35) + 48);
      v42 = (__int64 (*)(void))v40[186];
      v43 = v42 ? v42() : -1073741637;
      if ( v43 >= 0 )
      {
        v40 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v40, v41) + 48);
        v44 = (void (*)(void))v40[187];
        if ( v44 )
          v44();
      }
    }
    UserSessionState = W32GetUserSessionState(v40);
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 66104), 0);
    v46 = *v10;
    if ( *(struct tagPROCESSINFO **)(*v10 + 256LL) == *v319 )
    {
      for ( i = *((_QWORD *)*v319 + 41); i && (i == v2 || *(_QWORD *)(i + 496) != v46); i = *(_QWORD *)(i + 704) )
        ;
      if ( !i )
        *(_QWORD *)(v46 + 256) = 0LL;
    }
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 66104), 0LL);
  }
  v304 = (const signed __int64 *)(v2 + 1360);
  if ( (*(_BYTE *)(v2 + 1360) & 8) != 0 )
  {
    v48 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v36, v35) + 48);
    v49 = *(__int64 (**)(void))(v48 + 1504);
    v50 = v49 ? v49() : -1073741637;
    if ( v50 >= 0 )
    {
      v51 = W32GetUserSessionState(v48);
      MagContextThreadCallout(v51 + 66080, v2);
    }
  }
  EtwTraceThreadExit((PETHREAD *)v2);
  if ( (_InterlockedCompareExchange(v14, 0, 0) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay((struct tagTHREADINFO *)v2);
    EtwTraceInputProcessDelay((struct tagTHREADINFO *)v2);
  }
  v53 = *(char **)(v2 + 1512);
  if ( v53 )
  {
    GreDeleteFastMutex(v53);
    *(_QWORD *)(v2 + 1512) = 0LL;
  }
  v55 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v53, v52) + 48);
  v56 = *(__int64 (**)(void))(v55 + 1520);
  if ( v56 )
    v57 = v56();
  else
    v57 = -1073741637;
  if ( v57 >= 0 )
  {
    v55 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v55, v54) + 48);
    v58 = *(void (__fastcall **)(ULONG_PTR))(v55 + 1528);
    if ( v58 )
      v58(v2);
  }
  v309 = (_QWORD *)(v2 + 712);
  if ( *(_QWORD *)(v2 + 712) )
  {
    v60 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v55, v54) + 48);
    v61 = *(__int64 (**)(void))(v60 + 1536);
    if ( v61 )
      v62 = v61();
    else
      v62 = -1073741637;
    if ( v62 >= 0 )
    {
      v60 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v60, v59) + 48);
      v63 = *(void (__fastcall **)(ULONG_PTR))(v60 + 1544);
      if ( v63 )
        v63(v2);
    }
    if ( *(_QWORD *)(v2 + 712) )
    {
      v64 = *(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v60, v59) + 48) + 5040LL);
      if ( v64 )
        v64(v2);
    }
  }
  ProcessWindowStation = (_QWORD *)ApiSetEditionGetProcessWindowStation();
  v67 = ProcessWindowStation;
  if ( ProcessWindowStation )
  {
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v315, ProcessWindowStation);
    if ( v67[10] == v2 )
    {
      v71 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v69, v68) + 48);
      v72 = *(__int64 (**)(void))(v71 + 1552);
      v73 = v72 ? v72() : -1073741637;
      if ( v73 >= 0 )
      {
        v74 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v71, v70) + 48) + 1560LL);
        if ( v74 )
          v74(v67);
      }
    }
    if ( v67[11] == v2 )
      v67[11] = 0LL;
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v315);
  }
  while ( *(_QWORD *)(v2 + 648) )
  {
    SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v301);
    v76 = *(__int64 **)(v2 + 648);
    v77 = *v76;
    if ( *v76 != *(_QWORD *)v301[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(v301);
      if ( v77 )
      {
        v301[0] = *(_QWORD *)(v77 + 88);
        ++*(_DWORD *)(v301[0] + 8LL);
      }
      else
      {
        v301[0] = &gSmartObjNullRef;
      }
    }
    v318 = v76;
    v78 = PtiCurrent(v75);
    v80 = (struct tagTHREADINFO *)v76[4];
    if ( v78 == v80 )
      ++*((_DWORD *)v76 + 10);
    else
      v318 = 0LL;
    if ( (struct tagTHREADINFO *)v2 != v80 )
    {
      MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v318);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v301);
      break;
    }
    v81 = *((_DWORD *)v76 + 2);
    if ( (v81 & 0x100) != 0 )
    {
      v83 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v80, v79) + 48);
      v84 = *(__int64 (**)(void))(v83 + 1584);
      if ( v84 )
        v85 = v84();
      else
        v85 = -1073741637;
      if ( v85 >= 0 )
      {
        v86 = *(_QWORD *)v301[0];
        v87 = *(void (__fastcall **)(__int64 *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v83, v82) + 48)
                                                        + 1592LL);
        if ( v87 )
          v87(v76, v86);
      }
LABEL_110:
      if ( v318 )
      {
        *((_DWORD *)v318 + 10) = 0;
        v318 = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported() >= 0 )
        xxxMNEndMenuState(v76);
      goto LABEL_114;
    }
    *((_DWORD *)v76 + 2) = v81 & 0xFFFFFFFB;
    *(_DWORD *)(*(_QWORD *)(v2 + 472) + 436LL) &= ~0x100000u;
    v89 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v80, v79) + 48);
    v90 = *(__int64 (**)(void))(v89 + 1632);
    if ( v90 )
      v91 = v90();
    else
      v91 = -1073741637;
    if ( v91 >= 0 )
    {
      v92 = *(_QWORD *)v301[0];
      v93 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v89, v88) + 48) + 1640LL);
      if ( v93 )
        v93(v92, v76);
    }
    if ( (**(_DWORD **)v301[0] & 1) != 0 )
      goto LABEL_110;
    v94 = *(_QWORD *)v301[0];
    if ( (**(_DWORD **)v301[0] & 0x8000) != 0 )
      goto LABEL_110;
    if ( v318 )
    {
      *((_DWORD *)v318 + 10) = 0;
      v318 = 0LL;
    }
    v96 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v94, v88) + 48);
    v97 = *(__int64 (**)(void))(v96 + 1648);
    if ( v97 )
      v98 = v97();
    else
      v98 = -1073741637;
    if ( v98 >= 0 )
    {
      v99 = *(_QWORD *)v301[0];
      v96 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v96, v95) + 48);
      v100 = *(void (__fastcall **)(__int64))(v96 + 1656);
      if ( v100 )
        v100(v99);
    }
    v102 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v96, v95) + 48);
    v103 = *(__int64 (**)(void))(v102 + 1664);
    if ( v103 )
      v104 = v103();
    else
      v104 = -1073741637;
    if ( v104 >= 0 )
    {
      v105 = *(_QWORD *)v301[0];
      v106 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v102, v101) + 48) + 1672LL);
      if ( v106 )
        v106(v105);
    }
    if ( (**(_DWORD **)v301[0] & 0x40000000) != 0 )
    {
      v112 = *(_QWORD *)v301[0];
      **(_DWORD **)v301[0] &= ~0x20000000u;
    }
    else
    {
      v107 = *(_QWORD *)v301[0];
      if ( v107 == W32GetUserSessionState(*(_QWORD *)v301[0]) + 65832 )
      {
        v109 = W32GetUserSessionState(v108);
        *(_DWORD *)(v109 + 67056) &= ~0x800000u;
        v111 = W32GetUserSessionState(v110);
        NullifyLookasideRef(*(void **)(v111 + 65920));
      }
      else
      {
        v113 = *(_QWORD *)v301[0];
        NullifyLookasideRef(*(void **)(*(_QWORD *)v301[0] + 88LL));
        v115 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v114) + 19856) + 32LL);
        if ( v115 )
          NSInstrumentation::CTypeIsolation<24576,96>::Free(v115, v113);
        if ( *(_QWORD *)v301[0] != *v76 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2940LL);
        v112 = *(_QWORD *)v301[0];
        if ( *(_QWORD *)v301[0] == *v76 )
          *v76 = 0LL;
      }
    }
    v117 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v112, v101) + 48);
    v118 = *(__int64 (**)(void))(v117 + 1616);
    if ( v118 )
      v119 = v118();
    else
      v119 = -1073741637;
    if ( v119 >= 0 )
    {
      v120 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v117, v116) + 48)
                                                         + 1624LL);
      if ( v120 )
        v120(v2, v76);
    }
LABEL_114:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v318);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v301);
  }
  v121 = (ULONG_PTR *)(v2 + 752);
  v306 = v2 + 752;
  v122 = *(__int64 **)(v2 + 752);
  if ( v122 )
  {
    HMAssignmentUnlock(v122 + 2);
    HMAssignmentUnlock((__int64 *)(*v121 + 24));
    HMAssignmentUnlock((__int64 *)(*v121 + 8));
    v123 = *v121;
    v122 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v124) + 19856) + 40LL);
    if ( v122 )
      NSInstrumentation::CTypeIsolation<28672,112>::Free(v122, v123);
    *v121 = 0LL;
  }
  v125 = *v319;
  if ( *v319 && *((_QWORD *)v125 + 42) == v2 )
    *((_QWORD *)v125 + 42) = 0LL;
  while ( *(_QWORD *)(v2 + 664) )
  {
    v122 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v122, v66) + 48);
    v126 = (__int64 (*)(void))v122[210];
    if ( v126 )
      v127 = v126();
    else
      v127 = -1073741637;
    if ( v127 >= 0 )
    {
      v128 = *(_QWORD *)(v2 + 664);
      v122 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v122, v66) + 48);
      v129 = (void (__fastcall *)(ULONG_PTR, __int64))v122[211];
      if ( v129 )
        v129(v2, v128);
    }
  }
  if ( (_InterlockedCompareExchange(v14, 0, 0) & 0x800) != 0 )
  {
    v122 = (__int64 *)*((_QWORD *)*v302 + 1);
    v130 = v122[3];
    if ( v130 )
    {
      Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v314, v2, v122[3]);
      v134 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v132, v131) + 48);
      v135 = *(__int64 (**)(void))(v134 + 1696);
      if ( v135 )
        v136 = v135();
      else
        v136 = -1073741637;
      if ( v136 >= 0 )
      {
        v137 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v134, v133) + 48) + 1704LL);
        if ( v137 )
          v137(v130);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v314);
    }
  }
  if ( *v319 && *((_QWORD *)*v319 + 104) )
  {
    v122 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v122, v66) + 48);
    v138 = (__int64 (*)(void))v122[214];
    v139 = v138 ? v138() : -1073741637;
    if ( v139 >= 0 )
    {
      v122 = *(__int64 **)(W32GetWin32kBaseApiSetTable(v122, v66) + 48);
      v140 = (void (__fastcall *)(ULONG_PTR))v122[215];
      if ( v140 )
        v140(v2);
    }
  }
  v142 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v122, v66) + 48);
  v143 = *(__int64 (**)(void))(v142 + 1728);
  if ( v143 )
    v144 = v143();
  else
    v144 = -1073741637;
  if ( v144 >= 0 )
  {
    v142 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v142, v141) + 48);
    v145 = *(void (__fastcall **)(ULONG_PTR))(v142 + 1736);
    if ( v145 )
      v145(v2);
  }
  v146 = v304;
  if ( (*v304 & 0x400000) != 0 )
  {
    *v304 &= ~0x400000uLL;
    if ( *(_BYTE *)(W32GetUserSessionState(v142) + 19288) != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3041LL);
    *(_BYTE *)(W32GetUserSessionState(v147) + 19288) = 0;
    if ( *(_DWORD *)(W32GetUserSessionState(v148) + 19304) )
    {
      v150 = *(_DWORD *)(W32GetUserSessionState(v149) + 19304);
      v152 = W32GetUserSessionState(v151);
      KeReleaseSemaphore(*(PRKSEMAPHORE *)(v152 + 19296), 0, v150, 0);
      *(_DWORD *)(W32GetUserSessionState(v153) + 19304) = 0;
    }
  }
  v154 = *(void **)(v2 + 1536);
  if ( v154 )
  {
    CleanupRimDevObjInUserModeCallback(v154);
    *(_QWORD *)(v2 + 1536) = 0LL;
  }
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( IsInputThread(v155) )
      UserDeactivateMITInputProcessing();
  }
  else if ( IsInputThread(v155) )
  {
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      KeEnterCriticalRegion();
      CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
      v159 = W32GetUserSessionState(v158);
      LOBYTE(v160) = 1;
      ExAcquireFastResourceExclusive(*(_QWORD *)(v159 + 16), CurrentThreadWin32Thread + 176, v160);
    }
    UserDeactivateMITInputProcessing();
    if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
    {
      v161 = PsGetCurrentThreadWin32Thread();
      v163 = W32GetUserSessionState(v162);
      ExReleaseFastResource(*(_QWORD *)(v163 + 16), v161 + 176);
      KeLeaveCriticalRegion();
    }
  }
  if ( IsKSTThread(v156) )
    DeactivateKSTInputProcessingHelper();
  if ( _bittest64(v146, 0x28u) )
  {
    if ( v3 )
    {
      CoreMessagingKPort::CleanUpRoutingInfoForThread(
        *(CoreMessagingKPort **)(*(_QWORD *)(v3 + 1216) + 72440LL),
        (struct tagTHREADINFO *const)v2);
      goto LABEL_213;
    }
LABEL_216:
    v165 = 0;
  }
  else
  {
LABEL_213:
    if ( !v3 )
      goto LABEL_216;
    if ( *(_QWORD *)(v3 + 328) != v2 )
      goto LABEL_216;
    v165 = 1;
    if ( *(_QWORD *)(v2 + 704) )
      goto LABEL_216;
  }
  if ( v3 )
  {
    if ( *(_WORD *)(*(_QWORD *)(v2 + 520) + 154LL) )
    {
      v164 = (void *)*(unsigned __int16 *)(*(_QWORD *)(v2 + 520) + 154LL);
      if ( *(unsigned __int16 *)(v3 + 808) >= 0xFFFF - (int)v164 )
      {
        *(_WORD *)(v3 + 808) = -1;
      }
      else
      {
        v164 = (void *)*(unsigned __int16 *)(*(_QWORD *)(v2 + 520) + 154LL);
        *(_WORD *)(v3 + 808) += (_WORD)v164;
      }
    }
    if ( v165
      && *(_WORD *)(v3 + 808)
      && (unsigned int)dword_14029AF48 > 5
      && tlgKeywordOn((__int64)&dword_14029AF48, 0x200000000000LL) )
    {
      v317 = v166;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_14029AF48,
        byte_140274911,
        v166,
        v167,
        (__int64)&v317);
    }
  }
  if ( v165 )
  {
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 816) & 0x200000LL) != 0 )
      {
        RIMIDEProcessRemoveInjectionDevices(v3);
        v168 = *(_QWORD *)(v3 + 888);
        if ( v168 )
        {
          *(_QWORD *)(v168 + 96) = 0LL;
          v164 = *(void **)(v168 + 88);
          if ( v164 )
          {
            ZwClose(v164);
            *(_QWORD *)(v168 + 88) = 0LL;
          }
        }
      }
      if ( (*(_DWORD *)(v3 + 816) & 0x2000000) != 0 )
      {
        v169 = W32GetUserSessionState(v164);
        CInputConfig::zzzCleanupInputSpaces(*(CInputConfig **)(v169 + 18688), (const struct tagPROCESSINFO *)v3);
      }
    }
    v171 = *(_QWORD *)(W32GetUserSessionState(v164) + 43280);
    v174 = v319;
    if ( (struct tagPROCESSINFO *)v171 == *v319 && !*(_DWORD *)(W32GetUserSessionState(v171) + 43316) )
    {
      LOBYTE(v300) = 0;
      xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 4LL, 0LL, v300, 0LL, 0LL, 0LL, v307, 0LL);
      W32GetUserSessionState(v175);
    }
    if ( *v174 && (unsigned int)IsCurrentProcessDwm(v171, v170, v172, v173) )
      xxxDwmProcessShutdown(1LL);
  }
  else
  {
    v174 = v319;
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v312);
  if ( *v308 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3241LL);
  if ( *(_QWORD *)(W32GetUserSessionState(v176) + 19000) == v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3242LL);
  if ( *v309 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3243LL);
  if ( *v121 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 3244LL);
  v180 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v178, v177) + 48);
  v181 = (__int64 (*)(void))v180[218];
  if ( v181 )
    v182 = v181();
  else
    v182 = -1073741637;
  if ( v182 >= 0 )
  {
    v180 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v180, v179) + 48);
    v183 = (void (__fastcall *)(ULONG_PTR))v180[219];
    if ( v183 )
      v183(v2);
  }
  if ( (int)IsFreeDelayedHooksSupported >= 0 )
  {
    v180 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v180, v179) + 48);
    v184 = (void (*)(void))v180[355];
    if ( v184 )
      v184();
  }
  v186 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v180, v179) + 48);
  v187 = *(__int64 (**)(void))(v186 + 1760);
  if ( v187 )
    v188 = v187();
  else
    v188 = -1073741637;
  if ( v188 >= 0 )
  {
    v186 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v186, v185) + 48);
    v189 = *(void (**)(void))(v186 + 1768);
    if ( v189 )
      v189();
  }
  v192 = *(_QWORD **)(W32GetUserSessionState(v186) + 63288);
  if ( v192 )
  {
    do
    {
      v193 = (_QWORD *)*v192;
      if ( v192[3] == v2 )
      {
        v191 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v191, v190) + 48);
        v194 = *(__int64 (**)(void))(v191 + 1776);
        v195 = v194 ? v194() : -1073741637;
        if ( v195 >= 0 )
          FreeHwndList((__int64)v192);
      }
      v192 = v193;
    }
    while ( v193 );
  }
  v197 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v191, v190) + 48);
  v198 = *(__int64 (**)(void))(v197 + 1792);
  if ( v198 )
    v199 = v198();
  else
    v199 = -1073741637;
  if ( v199 >= 0 )
  {
    v197 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v197, v196) + 48);
    v200 = *(void (**)(void))(v197 + 1800);
    if ( v200 )
      v200();
  }
  v201 = W32GetUserSessionState(v197);
  CActivationObjectManager::OnThreadTermination(*(CActivationObjectManager **)(v201 + 18920));
  DestroyThreadsObjects();
  v205 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v203, v202) + 48);
  v206 = *(__int64 (**)(void))(v205 + 1808);
  if ( v206 )
    v207 = v206();
  else
    v207 = -1073741637;
  if ( v207 >= 0 )
  {
    v208 = *(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v205, v204) + 48) + 1816LL);
    if ( v208 )
      v208(v2);
  }
  HMAssignmentUnlock((__int64 *)(v2 + 480));
  if ( *(_DWORD *)(W32GetUserSessionState(v209) + 36464) == 1 )
  {
    *(_DWORD *)(W32GetUserSessionState(v211) + 2728) = 0;
    _InterlockedOr(v299, 0);
    CleanupResources();
  }
  if ( v165 )
  {
    if ( (*((_DWORD *)*v174 + 3) & 0x1000000) != 0 )
    {
      v212 = *(_QWORD *)(v2 + 504);
      if ( v212 )
      {
        if ( *(_QWORD *)(v212 + 168) && (int)Is_PostMessageSupported() >= 0 )
          PostMessage(*(_QWORD *)(v212 + 168), 1114LL);
      }
    }
    v214 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v211, v210) + 48);
    v215 = *(__int64 (**)(void))(v214 + 1840);
    if ( v215 )
      v216 = v215();
    else
      v216 = -1073741637;
    if ( v216 >= 0 )
    {
      v217 = *v174;
      v218 = *(void (__fastcall **)(struct tagPROCESSINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v214, v213) + 48)
                                                            + 1848LL);
      if ( v218 )
        v218(v217);
    }
    *((_DWORD *)*v174 + 3) &= ~0x2000u;
    *((_DWORD *)*v174 + 3) &= ~0x10000000u;
    Address = *(_DWORD **)(*(_QWORD *)(v2 + 520) + 208LL);
    if ( Address )
    {
      ProbeForWrite(Address, 4uLL, 4u);
      *Address = 0;
    }
    DestroyProcessesObjects(*v174);
  }
  HMAssignmentUnlock((__int64 *)(v2 + 832));
  v220 = *(_QWORD *)(v2 + 1576);
  if ( v220 )
  {
    GreDeleteFastMutex((char *)v220);
    *(_QWORD *)(v2 + 1576) = 0LL;
  }
  if ( !*(_QWORD *)(v2 + 472) )
    goto LABEL_317;
  v222 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v220, v219) + 48);
  v223 = *(__int64 (**)(void))(v222 + 3440);
  if ( v223 )
    v224 = v223();
  else
    v224 = -1073741637;
  if ( v224 >= 0 )
  {
    v225 = *(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v222, v221) + 48) + 3448LL);
    if ( v225 )
      v225(v2);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 472) + 432LL) -= *(_DWORD *)(v2 + 792),
        v226 = *(_QWORD *)(v2 + 472),
        v227 = 0,
        (v220 = *(_QWORD *)(v226 + 528)) != 0)
    && (v227 = 1, *(_QWORD *)(v220 + 1688))
    || (v220 = *(_QWORD *)(v226 + 536)) != 0 && ((unsigned int)(v227 + 1) > 1 || *(_QWORD *)(v220 + 1696)) )
  {
    v228 = v302;
    v229 = *v302;
    *(_QWORD *)(W32GetUserSessionState(v220) + 16912) = v229;
    ApiSetEditionSystemGenerateMove(0LL);
  }
  else
  {
LABEL_317:
    v228 = v302;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v220);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v231 = (_QWORD *)(CurrentProcessWin32Process + 328);
  v232 = *(_QWORD *)(CurrentProcessWin32Process + 328);
  if ( v232 )
  {
    if ( v232 == v2 )
      goto LABEL_326;
    v233 = v232;
    do
    {
      v234 = *(_QWORD *)(v233 + 704);
      v235 = v233;
      if ( !v234 )
        break;
      v231 = (_QWORD *)(v233 + 704);
      v233 = *(_QWORD *)(v233 + 704);
      v235 = v234;
    }
    while ( v234 != v2 );
    if ( v235 == v2 )
    {
LABEL_326:
      *v231 = *(_QWORD *)(v2 + 704);
      *(_QWORD *)(v2 + 704) = 0LL;
    }
  }
  v303[0] = 0LL;
  LockObjectAssignment(v303, *v228);
  v239 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v237, v236) + 48);
  v240 = *(__int64 (**)(void))(v239 + 1856);
  if ( v240 )
    v241 = v240();
  else
    v241 = -1073741637;
  if ( v241 >= 0 )
  {
    v242 = *(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v239, v238) + 48) + 1864LL);
    if ( v242 )
      v242(v2);
  }
  if ( *(_DWORD *)(v2 + 1704) )
  {
    KeSetKernelStackSwapEnable(1u);
    *(_DWORD *)(v2 + 1704) = 0;
  }
  if ( *v174 )
    --*((_DWORD *)*v174 + 94);
  UninitializeThreadInfoIocp((struct tagTHREADINFO *)v2, v238);
  v244 = *(void **)(v2 + 1632);
  if ( v244 )
  {
    ObCloseHandle(v244, 0);
    *(_QWORD *)(v2 + 1632) = 0LL;
  }
  v245 = *(void **)(v2 + 760);
  if ( v245 )
  {
    if ( (int)ProtectHandle(v245, v243, (struct _OBJECT_TYPE *)ExEventObjectType, 0) >= 0
      && (*(_DWORD *)v304 & 0x1000000) == 0 )
    {
      ObCloseHandle(*(HANDLE *)(v2 + 760), 1);
    }
    *(_QWORD *)(v2 + 760) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v245) + 16264) )
  {
    v246 = *(_QWORD *)(W32GetUserSessionState(v246) + 16264);
    if ( *(_QWORD *)(v246 + 16) == v2 )
    {
      v247 = W32GetUserSessionState(v246);
      HMAssignmentUnlock((__int64 *)(v247 + 16264));
    }
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v246) + 18960) == v2 )
  {
    v250 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v249, v248) + 48) + 1352LL);
    if ( v250 )
      v251 = v250();
    else
      v251 = -1073741637;
    if ( v251 >= 0 )
    {
      xxxWindowEvent(32773LL, 0LL, 0xFFFFFFFC, 0, 4);
      xxxWindowEvent(3LL, 0LL, 0, 0, 4);
    }
    v252 = v303[0];
    if ( *(_QWORD *)(*((_QWORD *)v303[0] + 1) + 192LL) && (int)Is_PostMessageSupported() >= 0 )
    {
      v254 = W32GetUserSessionState(v253);
      PostMessage(*(_QWORD *)(v252[1] + 192LL), *(unsigned int *)(v254 + 63344));
    }
    DisableDelegation();
    v249 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v256, v255) + 48);
    v257 = *(void (**)(void))(v249 + 1872);
    if ( v257 )
      v257();
  }
  v258 = (unsigned __int64)*v174;
  if ( !*v174 )
  {
    v258 = PsGetCurrentProcessWin32Process(v249);
    if ( v258 )
      v258 &= -(__int64)(*(_QWORD *)v258 != 0LL);
  }
  CLastWokenThread::OnDestroyed(
    *(CLastWokenThread **)(*(_QWORD *)(v258 + 1216) + 3056LL),
    (const struct tagTHREADINFO *)v2);
  v260 = W32GetUserSessionState(v259);
  v262 = v260;
  if ( *(_QWORD *)(v260 + 19136) == v2 )
    *(_QWORD *)(v260 + 19136) = 0LL;
  v263 = v304;
  v264 = *(unsigned int *)v304;
  if ( (v264 & 0x2000) != 0 )
    DelegationAPI::ScrubDelegateThreadWindows((DelegationAPI *)v2, v261);
  if ( (*v263 & 0x2000000000LL) != 0 )
    DelegationAPI::ScrubShellHandwritingDelegateThread((DelegationAPI *)v2, v261);
  if ( *(_QWORD *)(v2 + 472) )
  {
    v266 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v264, v261) + 48);
    v267 = *(__int64 (**)(void))(v266 + 1216);
    if ( v267 )
      v19 = v267();
    if ( v19 >= 0 )
    {
      v268 = *(_QWORD *)(v2 + 472);
      v269 = *(void (__fastcall **)(__int64, ULONG_PTR))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v266, v265) + 48)
                                                       + 1224LL);
      if ( v269 )
        v269(v268, v2);
    }
    ++*(_DWORD *)(*(_QWORD *)(v2 + 472) + 440LL);
    zzzDestroyQueue(*(tagQ **)(v2 + 472), (tagTHREADINFO *)v2);
  }
  if ( *(_QWORD *)(v2 + 696) )
    tagTHREADINFO::AssignQueueWorker(v2, 0LL, 536LL, 1696LL, 696);
  if ( *v302 )
  {
    v270 = (struct tagTHREADINFO *)(v2 + 776);
    v261 = *(struct tagTHREADINFO **)(v2 + 776);
    v271 = *(struct tagTHREADINFO ***)(v2 + 784);
    if ( *((_QWORD *)v261 + 1) != v2 + 776 || *v271 != v270 )
      __fastfail(3u);
    *v271 = v261;
    *((_QWORD *)v261 + 1) = v271;
    *(_QWORD *)(v2 + 784) = v2 + 776;
    *(_QWORD *)v270 = v270;
  }
  FreeMessageList(v2 + 848, (__int64)v261);
  v273 = (char *)(W32GetUserSessionState(v272) + 16904);
  while ( 1 )
  {
    v274 = *(char **)v273;
    if ( !*(_QWORD *)v273 )
      break;
    if ( *((_QWORD *)v274 + 1) == v2 || *((_QWORD *)v274 + 2) == v2 )
    {
      *(_QWORD *)v273 = *(_QWORD *)v274;
      GreDeleteFastMutex(v274);
    }
    else
    {
      v273 = *(char **)v273;
    }
  }
  MarkThreadsObjects(v2);
  if ( *(_QWORD *)(W32GetUserSessionState(v275) + 69296) == v2 )
  {
    *(_QWORD *)(W32GetUserSessionState(v276) + 69296) = 0LL;
    W32GetUserSessionState(v277);
  }
  if ( *(_QWORD *)(v262 + 19136) == v2 )
    *(_QWORD *)(v262 + 19136) = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v276) + 63280) == v2 )
    *(_QWORD *)(W32GetUserSessionState(v278) + 63280) = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v278) + 19000) == v2 )
    *(_QWORD *)(W32GetUserSessionState(v279) + 19000) = 0LL;
  v280 = *(tagQ **)(v2 + 472);
  if ( v280 && !tagQ::IsAnyThreadAttached(v280) )
  {
    v282 = *(_QWORD *)(W32GetUserSessionState(v281) + 18944);
    if ( v282 == *(_QWORD *)(v2 + 472) )
      *(_QWORD *)(W32GetUserSessionState(v282) + 18944) = 0LL;
    v283 = *(_QWORD *)(W32GetUserSessionState(v282) + 18952);
    if ( v283 == *(_QWORD *)(v2 + 472) )
      *(_QWORD *)(W32GetUserSessionState(v283) + 18952) = 0LL;
    v284 = *(_QWORD *)(W32GetUserSessionState(v283) + 19232);
    if ( v284 == *(_QWORD *)(v2 + 472) )
      *(_QWORD *)(W32GetUserSessionState(v284) + 19232) = 0LL;
  }
  v285 = v303[0];
  if ( v303[0] )
  {
    v286 = *(void **)(v2 + 488);
    if ( v286 )
    {
      if ( v286 != (void *)(v2 + 1096) )
      {
        RtlFreeHeap(*((PVOID *)v303[0] + 17), 0, v286);
        *(_QWORD *)(v2 + 488) = v2 + 1096;
      }
    }
  }
  if ( IsInputThread((__int64)v285) )
  {
    v288 = W32GetUserSessionState(v287);
    CInputThreadBase::RevokeThreadAsInput(*(CInputThreadBase **)(v288 + 18808));
  }
  if ( IsKSTThread(v287) )
  {
    InputTraceLogging::KST::RevokeThreadAsKST();
    v290 = W32GetUserSessionState(v289);
    CInputThreadBase::RevokeThreadAsInput(*(CInputThreadBase **)(v290 + 3112));
  }
  if ( (_InterlockedCompareExchange(v310, 0, 0) & 4) != 0 && *(_QWORD *)(v2 + 520) )
  {
    GreDeleteFastMutex(*(char **)(v2 + 520));
    *(_QWORD *)(v2 + 520) = 0LL;
  }
  DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)v303);
  v292 = *(_DWORD *)(W32GetUserSessionState(v291) + 63496);
  if ( v292 == (unsigned int)PsGetCurrentThreadId() )
  {
    v294 = W32GetUserSessionState(v293);
    DeferrableUnlockObjectAssignment<tagWINDOWSTATION>((_QWORD **)(v294 + 63552));
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0_EtwWriteTransfer(v293, &CompleteGuiThreadExecution, &W32kControlGuid);
  while ( 1 )
  {
    v295 = *(_QWORD **)(v2 + 1672);
    if ( !v295 )
      break;
    *(_QWORD *)(v2 + 1672) = *v295;
    if ( (_UNKNOWN *)*(v295 - 1) != &gSmartObjNullRef && !--*(_DWORD *)(*(v295 - 1) + 8LL) )
    {
      if ( *(_BYTE *)(*(v295 - 1) + 12LL) )
      {
        v296 = (char *)*(v295 - 1);
        v297 = W32GetUserSessionState(v293);
        Win32FreeToPagedLookasideListImpl(*(char **)(v297 + 42624), v296);
      }
    }
  }
  v298 = W32GetUserSessionState(v293);
  --*(_DWORD *)(v298 + 36464);
  *v263 |= 0x80uLL;
  if ( tagTHREADINFO::IsAnyPriorityFloorSet((tagTHREADINFO *)v2) )
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  if ( v312[0] )
    --*(_DWORD *)(v313 + 28);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v311);
}
