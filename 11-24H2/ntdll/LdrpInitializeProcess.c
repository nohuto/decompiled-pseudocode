/*
 * XREFs of LdrpInitializeProcess @ 0x180066D74
 * Callers:
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     LdrpInitializeKernel32Functions @ 0x1800032B8 (LdrpInitializeKernel32Functions.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     RtlEncodePointer @ 0x180004AC0 (RtlEncodePointer.c)
 *     LdrpPrepareModuleForExecution @ 0x180004BA4 (LdrpPrepareModuleForExecution.c)
 *     LdrpReleaseLoaderLock @ 0x180004E10 (LdrpReleaseLoaderLock.c)
 *     LdrpInitializeGraphRecurse @ 0x180005AA0 (LdrpInitializeGraphRecurse.c)
 *     RtlSetBits @ 0x180006260 (RtlSetBits.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180006734 (RtlRemoveInvertedFunctionTable.c)
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     RtlInsertInvertedFunctionTable @ 0x180007234 (RtlInsertInvertedFunctionTable.c)
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009670 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18000F570 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpAllocateModuleEntry @ 0x180010680 (LdrpAllocateModuleEntry.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     LdrpCallTlsInitializers @ 0x180012F30 (LdrpCallTlsInitializers.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     EtwEventRegister @ 0x18001D400 (EtwEventRegister.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrpCorInitialize @ 0x180065128 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x18006531C (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800654D8 (LdrpInitShimEngine.c)
 *     LdrpInitializeDllPath @ 0x180065A30 (LdrpInitializeDllPath.c)
 *     LdrInitializePerThreadRng @ 0x180066C98 (LdrInitializePerThreadRng.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800703A0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLogDllState @ 0x180070D00 (LdrpLogDllState.c)
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 *     LdrpInsertDataTableEntry @ 0x180074240 (LdrpInsertDataTableEntry.c)
 *     LdrpCorProcessImports @ 0x1800746A0 (LdrpCorProcessImports.c)
 *     LdrpLogEtwHotPatchStatus @ 0x180074798 (LdrpLogEtwHotPatchStatus.c)
 *     RtlAppendUnicodeStringToString @ 0x180075AB0 (RtlAppendUnicodeStringToString.c)
 *     RtlpInitCurrentDir @ 0x180077FA8 (RtlpInitCurrentDir.c)
 *     RtlInitUnicodeStringEx @ 0x180082640 (RtlInitUnicodeStringEx.c)
 *     LdrpInitializeExecutionOptions @ 0x1800887A8 (LdrpInitializeExecutionOptions.c)
 *     RtlQueryApplicationKeyOption @ 0x180089988 (RtlQueryApplicationKeyOption.c)
 *     LdrQueryImageFileExecutionOptions @ 0x180089A70 (LdrQueryImageFileExecutionOptions.c)
 *     LdrpInitializeTls @ 0x18008ECD0 (LdrpInitializeTls.c)
 *     _cpu_check_features @ 0x180096D54 (_cpu_check_features.c)
 *     RtlSetHeapInformation @ 0x180096E70 (RtlSetHeapInformation.c)
 *     LdrpEnableUMGLTracingStateSync @ 0x1800975E4 (LdrpEnableUMGLTracingStateSync.c)
 *     RtlInitializeCriticalSectionEx @ 0x18009BD70 (RtlInitializeCriticalSectionEx.c)
 *     TpInitializePackage @ 0x1800A52A0 (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x1800A5370 (RtlCreateTagHeap.c)
 *     LdrpInitializeProcessHeap @ 0x1800A5FB8 (LdrpInitializeProcessHeap.c)
 *     LdrpEnableParallelLoading @ 0x1800AB384 (LdrpEnableParallelLoading.c)
 *     LdrpInitializeNlsInfo @ 0x1800AC560 (LdrpInitializeNlsInfo.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     RtlGetNtSystemRoot @ 0x1800B2C70 (RtlGetNtSystemRoot.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 *     SbObtainTraceHandle @ 0x1800B8D90 (SbObtainTraceHandle.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800D9018 (LdrpFreeLoadContextOfNode.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E502C (LdrpProtectAndRelocateImage.c)
 *     RtlControlStackTraceDataBase @ 0x1800E5934 (RtlControlStackTraceDataBase.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x1800EDBB0 (RtlpInitializeThreadActivationContextStack.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800F0760 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800F1124 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlInitializeHistoryTable @ 0x1800F1E4C (RtlInitializeHistoryTable.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F4990 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInsertModuleToIndex @ 0x1800F4C10 (LdrpInsertModuleToIndex.c)
 *     LdrpCaptureCriticalThunks @ 0x1800F5534 (LdrpCaptureCriticalThunks.c)
 *     RtlpInitParameterBlock @ 0x1800F6818 (RtlpInitParameterBlock.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x1800F70A8 (LdrpInitializeSmtDelayedSleep.c)
 *     RtlpInitDeferredCriticalSection @ 0x1800F8020 (RtlpInitDeferredCriticalSection.c)
 *     LdrpInitializePolicy @ 0x1800F8570 (LdrpInitializePolicy.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800F93E8 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F9A50 (LdrpAllocateSchedulerSharedData.c)
 *     LdrpInitializeImportRedirection @ 0x1800FA988 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FAF6C (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeSnapsBuffer @ 0x1800FB3AC (LdrpInitializeSnapsBuffer.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FB4D4 (RtlpInitializeNonVolatileFlush.c)
 *     LdrpInitializePatchData @ 0x1800FB56C (LdrpInitializePatchData.c)
 *     RtlNormalizeProcessParams @ 0x1800FB730 (RtlNormalizeProcessParams.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180107258 (LdrpInitializeCfgScpHelpers.c)
 *     RtlInitializeHeapLogging @ 0x180107340 (RtlInitializeHeapLogging.c)
 *     LdrpInitParallelLoadingSupport @ 0x180109D48 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCorFixupImage @ 0x180109FB0 (LdrpCorFixupImage.c)
 *     LdrpCorValidateImage @ 0x18010DE14 (LdrpCorValidateImage.c)
 *     LdrpCheckAppDirType @ 0x1801180BC (LdrpCheckAppDirType.c)
 *     AVrfInitializeVerifier @ 0x180118960 (AVrfInitializeVerifier.c)
 *     RtlInitializeHeapManager @ 0x18011941C (RtlInitializeHeapManager.c)
 *     RtlpInitEnvironmentBlock @ 0x18011AFD4 (RtlpInitEnvironmentBlock.c)
 *     Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline @ 0x18011CE48 (Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline.c)
 *     LdrpIncludeAlternateForwarders @ 0x18011EB74 (LdrpIncludeAlternateForwarders.c)
 *     TpSetDefaultPoolCpuSets @ 0x18011EF8C (TpSetDefaultPoolCpuSets.c)
 *     LdrpDoDebuggerBreak @ 0x18011F558 (LdrpDoDebuggerBreak.c)
 *     RtlInitializeExceptionLog @ 0x18011F59C (RtlInitializeExceptionLog.c)
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline @ 0x18013AA30 (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline.c)
 *     RtlInitializeProcessorFeaturesBitMap @ 0x180147118 (RtlInitializeProcessorFeaturesBitMap.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x18014B594 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x18015B8CC (SymCryptDetectCpuFeaturesByCpuid.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtQuerySystemInformation @ 0x180162350 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x180162790 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x180164380 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x1801649E0 (NtQuerySymbolicLinkObject.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180171498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v4; // r15d
  struct _TEB *v5; // r13
  _PEB *ProcessEnvironmentBlock; // rdi
  bool v7; // cc
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  wchar_t *Buffer; // rdx
  __int16 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 result; // rax
  _QWORD *v14; // rax
  unsigned int v15; // ebx
  unsigned __int64 v16; // rax
  bool v17; // zf
  char v18; // al
  char *v19; // rax
  int v20; // edx
  int WowTebOffset; // ecx
  __int64 v22; // rax
  __int64 v23; // r13
  _DWORD *Config; // r15
  char v25; // al
  unsigned __int64 v26; // r14
  char *v27; // rax
  int v28; // edx
  void *ProcessHeap; // r12
  unsigned __int64 v30; // r8
  volatile signed __int32 **v31; // rdx
  int v32; // r14d
  __int64 v33; // rcx
  __int64 v34; // r8
  _RTL_USER_PROCESS_PARAMETERS *v35; // r13
  HANDLE v36; // rdx
  __int64 NtSystemRoot; // rax
  __int16 v38; // r14
  __int64 Heap; // rax
  unsigned __int64 v40; // r14
  int v41; // eax
  unsigned __int64 v42; // r15
  UNICODE_STRING DosPath; // xmm1
  _WORD *v44; // xmm0_8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  wchar_t *v48; // r14
  __int64 v49; // rax
  char v50; // r12
  unsigned __int64 v51; // r14
  __int64 v52; // rdx
  unsigned __int64 v53; // r15
  __int16 v54; // dx
  __int64 v55; // r8
  _WORD *v56; // rcx
  _WORD *v57; // rax
  __int16 v58; // dx
  _QWORD *v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rcx
  int inited; // eax
  __int64 ModuleEntry; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  char v69; // r12
  int v70; // eax
  __int64 v71; // r13
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r14
  int v76; // ecx
  struct _TEB *v77; // r14
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  __int64 v85; // r15
  __int64 LowPart; // rdx
  _RTL_USER_PROCESS_PARAMETERS *v87; // rcx
  unsigned int v88; // eax
  __int64 v89; // rdx
  int v90; // ecx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rcx
  void (*PostProcessInitRoutine)(void); // rax
  const char *v97; // rcx
  char i; // al
  char *Format; // [rsp+20h] [rbp-408h]
  char v100; // [rsp+28h] [rbp-400h]
  _QWORD *v101; // [rsp+28h] [rbp-400h]
  char v102; // [rsp+28h] [rbp-400h]
  unsigned int v103; // [rsp+50h] [rbp-3D8h] BYREF
  char v104; // [rsp+54h] [rbp-3D4h] BYREF
  char v105; // [rsp+55h] [rbp-3D3h] BYREF
  char v106[2]; // [rsp+56h] [rbp-3D2h] BYREF
  int v107; // [rsp+58h] [rbp-3D0h]
  int v108; // [rsp+5Ch] [rbp-3CCh]
  __int64 v109; // [rsp+60h] [rbp-3C8h] BYREF
  __int128 v110; // [rsp+68h] [rbp-3C0h] BYREF
  HANDLE v111; // [rsp+78h] [rbp-3B0h] BYREF
  unsigned int v112; // [rsp+80h] [rbp-3A8h] BYREF
  int v113; // [rsp+84h] [rbp-3A4h] BYREF
  unsigned int v114; // [rsp+88h] [rbp-3A0h] BYREF
  __int128 v115; // [rsp+90h] [rbp-398h] BYREF
  HANDLE v116; // [rsp+A0h] [rbp-388h] BYREF
  __int128 v117; // [rsp+A8h] [rbp-380h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-368h] BYREF
  __int64 v119; // [rsp+D0h] [rbp-358h] BYREF
  __m128i ImagePathName; // [rsp+E0h] [rbp-348h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *v121; // [rsp+F0h] [rbp-338h]
  HANDLE Handle; // [rsp+F8h] [rbp-330h] BYREF
  __int64 v123; // [rsp+100h] [rbp-328h]
  __int64 v124; // [rsp+108h] [rbp-320h]
  int v125[4]; // [rsp+110h] [rbp-318h] BYREF
  UNICODE_STRING v126; // [rsp+120h] [rbp-308h] BYREF
  __m128i v127; // [rsp+130h] [rbp-2F8h] BYREF
  __int64 v128; // [rsp+140h] [rbp-2E8h] BYREF
  __int64 v129; // [rsp+148h] [rbp-2E0h] BYREF
  __int64 v130; // [rsp+150h] [rbp-2D8h] BYREF
  __int64 SystemInformation; // [rsp+158h] [rbp-2D0h] BYREF
  __int64 v132; // [rsp+160h] [rbp-2C8h] BYREF
  struct _TEB *v133; // [rsp+168h] [rbp-2C0h]
  __int64 v134; // [rsp+170h] [rbp-2B8h] BYREF
  __int64 pShimData; // [rsp+178h] [rbp-2B0h]
  _QWORD v136[2]; // [rsp+180h] [rbp-2A8h] BYREF
  __int128 v137; // [rsp+190h] [rbp-298h] BYREF
  __int128 v138; // [rsp+1A0h] [rbp-288h]
  __int128 v139; // [rsp+1B0h] [rbp-278h]
  __int128 v140; // [rsp+1C0h] [rbp-268h] BYREF
  __int64 v141; // [rsp+1D0h] [rbp-258h]
  _QWORD v142[3]; // [rsp+1D8h] [rbp-250h] BYREF
  _QWORD v143[2]; // [rsp+1F0h] [rbp-238h] BYREF
  __int128 v144; // [rsp+200h] [rbp-228h]
  __int128 v145; // [rsp+210h] [rbp-218h]
  __int128 v146; // [rsp+220h] [rbp-208h]
  __int64 v147; // [rsp+230h] [rbp-1F8h]
  __int128 v148; // [rsp+240h] [rbp-1E8h]
  __int64 v149; // [rsp+250h] [rbp-1D8h]
  __int128 v150; // [rsp+260h] [rbp-1C8h]
  __int64 v151; // [rsp+270h] [rbp-1B8h]
  __int128 v152; // [rsp+280h] [rbp-1A8h]
  __int64 v153; // [rsp+290h] [rbp-198h]
  __m128i v154; // [rsp+2A0h] [rbp-188h] BYREF
  __int64 *v155; // [rsp+2B0h] [rbp-178h]
  int v156; // [rsp+2C0h] [rbp-168h]
  unsigned int *v157; // [rsp+2C8h] [rbp-160h]
  __int64 v158[16]; // [rsp+370h] [rbp-B8h] BYREF

  v124 = a2;
  v123 = a1;
  UnicodeString = 0LL;
  ImagePathName = 0LL;
  v127 = 0LL;
  v117 = 0LL;
  v4 = 0;
  v119 = 0LL;
  v126 = 0LL;
  v115 = 0LL;
  v128 = 0LL;
  v125[0] = 0;
  v129 = 0LL;
  Handle = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  *(_QWORD *)&v139 = 0LL;
  DWORD2(v139) = 0;
  v136[0] = 1441812LL;
  v136[1] = L"\\KnownDlls";
  v116 = 0LL;
  v111 = 0LL;
  v134 = 0LL;
  v109 = 0LL;
  v130 = 0LL;
  memset_thunk_772440563353939046(&v154, 0, 0xD0uLL);
  v110 = 0LL;
  memset_thunk_772440563353939046(v158, 0, 0x80uLL);
  SystemInformation = 0LL;
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v5 = NtCurrentTeb();
  v133 = v5;
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  LdrInitializePerThreadRng((__int64)v5);
  PebLdr = 88;
  byte_1801D28C4 = 1;
  qword_1801D28D8 = (__int64)&qword_1801D28D0;
  qword_1801D28D0 = (__int64)&qword_1801D28D0;
  qword_1801D28E8 = (__int64)&qword_1801D28E0;
  qword_1801D28E0 = (__int64)&qword_1801D28E0;
  qword_1801D28F8 = (__int64)&qword_1801D28F0;
  qword_1801D28F0 = (__int64)&qword_1801D28F0;
  byte_1801D2908 = 0;
  qword_1801D2910 = 0LL;
  ProcessEnvironmentBlock->Ldr = (_PEB_LDR_DATA *)&PebLdr;
  LdrpInitializeNlsInfo(ProcessEnvironmentBlock);
  SRWLockSpinCycleCount = 0;
  v7 = ProcessEnvironmentBlock->NumberOfProcessors <= 1;
  if ( ProcessEnvironmentBlock->NumberOfProcessors > 1 )
    SRWLockSpinCycleCount = 10240;
  ConditionVariableSpinCycleCount = 0;
  if ( !v7 )
    ConditionVariableSpinCycleCount = 10240;
  LODWORD(RtlpWaitOnAddressSpinCycleCount) = 0;
  if ( !v7 )
    LODWORD(RtlpWaitOnAddressSpinCycleCount) = 10240;
  memset_thunk_772440563353939046(&RtlpFcProcessManager, 0, 0x118uLL);
  memset_thunk_772440563353939046(&unk_1801D3CA0, 0, 0xD0uLL);
  xmmword_1801D3C88 = 0LL;
  qword_1801D3C98 = 0LL;
  memset_thunk_772440563353939046(&unk_1801D3CA0, 0, 0x60uLL);
  memset_thunk_772440563353939046(&unk_1801D3D00, 0, 0x60uLL);
  qword_1801D3D70 = 0LL;
  qword_1801D3D80 = 0LL;
  qword_1801D3D90 = (__int64)&qword_1801D3D88;
  qword_1801D3D88 = (__int64)&qword_1801D3D88;
  RtlpInitializeNonVolatileFlush();
  ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
  Buffer = (wchar_t *)((char *)ProcessParameters->ImagePathName.Buffer + (unsigned __int64)ProcessParameters);
  if ( (ProcessParameters->Flags & 1) != 0 )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  *((_QWORD *)&v115 + 1) = Buffer;
  LOWORD(v115) = ProcessParameters->ImagePathName.Length;
  v10 = v115;
  WORD1(v115) = v115 + 2;
  if ( (unsigned __int16)v115 >= 8u && *Buffer == 92 && Buffer[1] == 63 && Buffer[2] == 63 && Buffer[3] == 92 )
  {
    LOWORD(v115) = v115 - 8;
    WORD1(v115) = v10 - 6;
    *((_QWORD *)&v115 + 1) = Buffer + 4;
    ProcessParameters->ImagePathName.Length -= 8;
    ProcessParameters->ImagePathName.MaximumLength -= 8;
    ProcessParameters->ImagePathName.Buffer += 4;
  }
  v108 = 1;
  UseCOR = 0;
  LOBYTE(v2) = 0;
  v107 = v2;
  v113 = 0;
  RtlImageNtHeaderEx(3, (unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress, 0LL, &v119);
  v11 = v119;
  LdrpAppHeaders = v119;
  v12 = 32LL;
  if ( LdrpIsSecureProcess && (*(_BYTE *)(v119 + 22) & 0x20) == 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      5579,
      (__int64)"LdrpInitializeProcess",
      0,
      "Secure processes must be large address aware\n",
      v100);
    return 3221225659LL;
  }
  v14 = &LdrpHashTable;
  do
  {
    v14[1] = v14;
    *v14 = v14;
    v14 += 2;
    --v12;
  }
  while ( v12 );
  v132 = 0LL;
  RtlImageNtHeaderEx(3, a2, 0LL, &v132);
  v15 = *(_DWORD *)(v132 + 80);
  RtlInsertInvertedFunctionTable(a2, v15);
  v140 = 0LL;
  v141 = 0LL;
  RtlpxLookupFunctionTable(a2, (__int64)&v140);
  LdrProtectMrdata(0);
  xmmword_1801E7440 = v140;
  qword_1801E7450 = v141;
  LODWORD(qword_1801E7450) = v15;
  RtlRemoveInvertedFunctionTable(a2);
  LdrProtectMrdata(1);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v148 = xmmword_1801EA4F0;
  v149 = qword_1801EA500;
  v16 = (_mm_srli_si128((__m128i)xmmword_1801EA4F0, 8).m128i_u64[0] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = (_BYTE)v16 == 1;
  if ( (_BYTE)v16 == 1 || (v150 = xmmword_1801EA4F0, v151 = qword_1801EA500, v17 = (_BYTE)v16 == 3, v18 = 0, v17) )
    v18 = 1;
  LdrpAuditIntegrityContinuity = v18;
  v103 = LdrpInitializeExecutionOptions(
           (unsigned int)&v115,
           (_DWORD)ProcessEnvironmentBlock,
           a2,
           (unsigned int)&v116,
           (__int64)&v111,
           (__int64)&v109);
  if ( (v103 & 0x80000000) != 0 )
  {
    LODWORD(v101) = v5->ClientId.UniqueProcess;
    v19 = "Initializing the execution options for the process %lx failed with status 0x%08lx\n";
    v20 = 5728;
LABEL_27:
    LdrpLogInternal((__int64)"minkernel\\ldr\\ldrinit.c", v20, (__int64)"LdrpInitializeProcess", 0, v19, (char)v101);
    return v103;
  }
  if ( LdrpImageExpansionMitigation == 2 )
    LdrpIsHotPatchingEnabled = 0;
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
    LdrpDebugFlags |= 1u;
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrinit.c",
    5786,
    (__int64)"LdrpInitializeProcess",
    2,
    "Initializing process 0x%p\n",
    (char)v5->ClientId.UniqueProcess);
  pShimData = 0LL;
  WowTebOffset = v5->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v11 )
  {
    if ( *(_WORD *)(v11 + 24) == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v2) = 1;
      v107 = v2;
      v4 = 1;
      result = LdrpCorFixupImage(ProcessEnvironmentBlock->ImageBaseAddress);
      if ( (int)result < 0 )
        return result;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v22 = RtlImageDirectoryEntryToData((unsigned __int64)ProcessEnvironmentBlock->ImageBaseAddress, 1, 0xEu, v125);
    if ( v22 )
    {
      UseCOR = 1;
      v2 = (unsigned __int8)v2;
      if ( (*(_BYTE *)(v22 + 16) & 1) != 0 )
        v2 = 1;
      v107 = v2;
    }
  }
  LdrpSystemDllBase = v124;
  if ( !UseWOW64 )
    pShimData = (__int64)ProcessEnvironmentBlock->pShimData;
  RtlpTimeout = ProcessEnvironmentBlock->CriticalSectionTimeout;
  v23 = RtlNormalizeProcessParams(ProcessEnvironmentBlock->ProcessParameters);
  ImagePathName = *(__m128i *)(v23 + 96);
  if ( UseWOW64 || UseCOR && v4 )
    Config = 0LL;
  else
    Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfigEx(ProcessEnvironmentBlock->ImageBaseAddress);
  if ( Config )
  {
    if ( *Config >= 0x10u )
      ProcessEnvironmentBlock->NtGlobalFlag &= ~Config[3];
    if ( *Config >= 0x14u )
      ProcessEnvironmentBlock->NtGlobalFlag |= Config[4];
    if ( *Config >= 0x18u && Config[5] )
      RtlpTimeout.QuadPart = -10000LL * (int)Config[5];
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 2) != 0 )
    LdrpDebugFlags |= 1u;
  if ( RtlpTimeout.QuadPart < -36000000000LL )
    RtlpTimeoutDisable = 1;
  result = RtlpInitDeferredCriticalSection();
  v103 = result;
  if ( (int)result < 0 )
    return result;
  dword_1801CE220 = 64;
  qword_1801CE228 = (__int64)ProcessEnvironmentBlock->TlsBitmapBits;
  dword_1801CE210 = 1024;
  qword_1801CE218 = (__int64)ProcessEnvironmentBlock->TlsExpansionBitmapBits;
  ProcessEnvironmentBlock->TlsBitmap = (_RTL_BITMAP *)&dword_1801CE220;
  ProcessEnvironmentBlock->TlsExpansionBitmap = (_RTL_BITMAP *)&dword_1801CE210;
  *(_BYTE *)qword_1801CE228 |= 1u;
  memset_thunk_772440563353939046(&xmmword_1801CDE38, 0, 0x58uLL);
  RtlpFlsContext = 0LL;
  xmmword_1801CDE38 = 0LL;
  xmmword_1801CDE48 = 0LL;
  xmmword_1801CDE58 = 0LL;
  xmmword_1801CDE68 = 0LL;
  qword_1801CDE80 = (__int64)&qword_1801CDE78;
  qword_1801CDE78 = (__int64)&qword_1801CDE78;
  if ( UseWOW64 )
    RtlSetBits((__int64)&dword_1801CE220, 0, 0x13u);
  RtlSetBits((__int64)&dword_1801CE220, 0x10u, 1u);
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || (v25 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v112 = 24;
    if ( (int)LdrQueryImageFileExecutionOptions(
                (unsigned int)&v115,
                (unsigned int)L"StackTraceDatabaseSizeInMb",
                4,
                (unsigned int)&v112,
                4,
                0LL) >= 0
      && v112 >= 0x18 )
    {
      if ( v112 <= 0x80 )
        v26 = v112 << 20;
      else
        v26 = 0x8000000LL;
    }
    else
    {
      v26 = 25165824LL;
    }
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      6035,
      (__int64)"LdrpInitializeProcess",
      2,
      "Stack trace database size is %Id Mb\n",
      v26 >> 20);
    v142[0] = 0LL;
    v142[1] = 0LL;
    v142[2] = v26;
    RtlControlStackTraceDataBase(0LL, 24LL, v142);
    v25 = LdrpShouldCreateStackTraceDb;
  }
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x1000) != 0 || v25 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  result = RtlInitializeCriticalSectionEx(&FastPebLock, 0LL, 0LL);
  if ( (int)result < 0 )
    return result;
  ProcessEnvironmentBlock->FastPebLock = (_RTL_CRITICAL_SECTION *)&FastPebLock;
  result = RtlInitializeHeapManager(&v115);
  if ( (int)result < 0 )
    return result;
  v152 = xmmword_1801EA4F0;
  v153 = qword_1801EA500;
  if ( (((unsigned __int64)xmmword_1801EA4F0 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1LL, 0LL, 0LL);
  if ( (int)LdrpInitializeProcessHeap(Config, v119, v23, &ProcessEnvironmentBlock->ProcessHeap) < 0 )
  {
    v27 = "Creating the process heap failed\n";
    v28 = 6108;
LABEL_85:
    LdrpLogInternal((__int64)"minkernel\\ldr\\ldrinit.c", v28, (__int64)"LdrpInitializeProcess", 0, v27, v102);
    return 3221225495LL;
  }
  ProcessHeap = ProcessEnvironmentBlock->ProcessHeap;
  RtlpSrwLockAllowImplicitUpgrade = Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline() == 0;
  if ( (unsigned int)Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline() )
    LdrpInitializeSnapsBuffer();
  RtlInitializeCriticalSectionEx(&LdrpEnclaveListLock, 0LL, 0LL);
  qword_1801D4268 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack(v133);
  LdrpHeap = (__int64)ProcessHeap;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  if ( NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL) >= 0 )
    RtlpHypervisorSharedUserVa = SystemInformation;
  NtdllBaseTag = RtlCreateTagHeap(ProcessHeap);
  result = TpInitializePackage();
  if ( (int)result < 0 )
    return result;
  v31 = (volatile signed __int32 **)*(unsigned int *)(v23 + 1080);
  if ( (_DWORD)v31 )
    TpSetDefaultPoolCpuSets(*(void **)(v23 + 1072));
  v32 = *(_DWORD *)(v23 + 1084);
  if ( v32 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpGlobalPoolLock, v31, v30);
    TppPoolpGlobalPoolMaxThreadsOverride = v32;
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( !UseWOW64 && !LdrpIsSecureProcess )
    LdrpEnableUMGLTracingStateSync();
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CC6F0);
  EtwEventRegister((int)&PrivateLoggerNotificationGuid, 0LL, 0LL, (__int64)&g_hPrivLoggerNotificationProvider);
  EtwEventRegister(
    (int)&UserDiagnosticGuid,
    (__int64)UserDiagnosticProviderCallback,
    0LL,
    (__int64)&g_hUserDiagnosticProvider);
  RtlInitializeHeapLogging();
  result = RtlpInitEnvironmentBlock();
  if ( (int)result < 0 )
    return result;
  result = RtlpInitParameterBlock();
  if ( (int)result < 0 )
    return result;
  v35 = ProcessEnvironmentBlock->ProcessParameters;
  v121 = v35;
  ImagePathName = (__m128i)v35->ImagePathName;
  *((_QWORD *)&v115 + 1) = _mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  v36 = v116;
  if ( (v116 || v111)
    && (int)RtlQueryApplicationKeyOption(
              (_DWORD)v111,
              (_DWORD)v116,
              (unsigned int)L"DebugProcessHeapOnly",
              4,
              (__int64)&v113,
              4) >= 0
    && dword_1801CC578
    && v113 )
  {
    dword_1801CC578 = 0;
    *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
  }
  NtSystemRoot = RtlGetNtSystemRoot(v33, v36, v34);
  RtlInitUnicodeStringEx(&v126, NtSystemRoot);
  v38 = v126.Length + 40;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, (unsigned int)v126.Length + 38 + 2LL);
  if ( !Heap )
    return 3221225495LL;
  WORD1(v117) = v38;
  *((_QWORD *)&v117 + 1) = Heap;
  RtlAppendUnicodeStringToString(&v117, &v126);
  RtlAppendUnicodeStringToString(&v117, &SlashSystem32SlashString);
  if ( (ProcessEnvironmentBlock->BitField & 2) == 0 )
  {
    v114 = 0;
    v40 = 48LL;
    LODWORD(v137) = 48;
    *((_QWORD *)&v137 + 1) = 0LL;
    DWORD2(v138) = 64;
    *(_QWORD *)&v138 = v136;
    v139 = 0LL;
    LdrProtectMrdata(0);
    v103 = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3LL, &v137);
    LdrProtectMrdata(1);
    if ( (v103 & 0x80000000) != 0 )
    {
      v101 = v136;
      v20 = 6403;
LABEL_115:
      v19 = "Failed to open %wZ with status 0x%08lx\n";
      goto LABEL_27;
    }
    LODWORD(v137) = 48;
    *((_QWORD *)&v137 + 1) = LdrpKnownDllDirectoryHandle;
    DWORD2(v138) = 64;
    *(_QWORD *)&v138 = &unk_180174D40;
    v139 = 0LL;
    v103 = ZwOpenSymbolicLinkObject(&Handle, 1LL, &v137);
    if ( (v103 & 0x80000000) != 0 )
    {
      v101 = &unk_180174D40;
      v20 = 6426;
      goto LABEL_115;
    }
    while ( 1 )
    {
      v42 = RtlAllocateHeap((__int64)ProcessHeap, 0, v40);
      if ( !v42 )
        return 3221225495LL;
      LdrpKnownDllPath = 0;
      word_1801D27B2 = v40;
      qword_1801D27B8 = v42;
      v41 = NtQuerySymbolicLinkObject(Handle, &LdrpKnownDllPath, &v114);
      v103 = v41;
      if ( v41 >= 0 )
        break;
      if ( v41 != -1073741789 )
      {
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrinit.c",
          6461,
          (__int64)"LdrpInitializeProcess",
          0,
          "Querying the known DLL directory link object failed with status 0x%08lx\n",
          v41);
        return v103;
      }
      RtlFreeHeap((__int64)ProcessHeap, 0, v42);
      v40 = v114;
    }
    NtClose(Handle);
  }
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v126;
  }
  else
  {
    DosPath = v35->CurrentDirectory.DosPath;
    UnicodeString = DosPath;
    v44 = (_WORD *)_mm_srli_si128((__m128i)DosPath, 8).m128i_u64[0];
    if ( !v44 || !(unsigned __int16)_mm_cvtsi128_si32((__m128i)DosPath) || !*v44 )
    {
      v48 = (wchar_t *)RtlAllocateHeap((__int64)ProcessHeap, 0, 8uLL);
      UnicodeString.Buffer = v48;
      if ( !v48 )
      {
        v27 = "Allocating a buffer to hold the current working directory failed\n";
        v28 = 6513;
        goto LABEL_85;
      }
      v108 = 0;
      v49 = RtlGetNtSystemRoot(v46, v45, v47);
      *(_DWORD *)v48 = *(_DWORD *)v49;
      v48[2] = *(_WORD *)(v49 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v50 = 0;
  v51 = (unsigned __int16)v117;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
  {
    v50 = LdrpIncludeAlternateForwarders();
    v51 = 2 * v52 + 22;
    if ( v50 )
      v51 = v52 + 2 * v52 + 52;
  }
  v53 = v51;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v53 = v51 + 2 * (v126.Length + 9LL);
    if ( (ProcessEnvironmentBlock->BitField & 2) != 0 )
      v35->DllPath.Length = 0;
  }
  *((_QWORD *)&v110 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v53);
  if ( !*((_QWORD *)&v110 + 1) )
  {
    v27 = "Failed to allocate the system dirs string!\n";
    v28 = 6606;
    goto LABEL_85;
  }
  LOWORD(v110) = 0;
  WORD1(v110) = v53;
  RtlAppendUnicodeStringToString(&v110, &v117);
  v54 = v110;
  *(_WORD *)(*((_QWORD *)&v110 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v110 >> 1) - 2) = 59;
  RtlpSystem32Dirs = v110;
  LdrpSystem32 = v110;
  LOWORD(LdrpSystem32) = v54 - 2;
  if ( (ProcessEnvironmentBlock->ProcessParameters->Flags & 0x20000000) != 0 )
  {
    if ( v50 )
    {
      RtlAppendUnicodeStringToString(&v110, &v117);
      RtlAppendUnicodeToString(&v110, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString(&v110, &v117);
    RtlAppendUnicodeToString(&v110, L"forwarders;");
  }
  if ( v53 > v51 )
  {
    RtlAppendUnicodeStringToString(&v110, &v126);
    RtlAppendUnicodeToString(&v110, L"\\system;");
    RtlAppendUnicodeStringToString(&v110, &v126);
    RtlAppendUnicodeToString(&v110, L";");
    RtlpSystemDirs = v110;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName);
  result = LdrpInitializeNtdllDataTableEntry(v124, &LdrpNtDllDataTableEntry, 0LL, &v117);
  if ( (int)result < 0 )
    return result;
  v55 = 0LL;
  v56 = (_WORD *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  if ( v56 )
  {
    while ( (unsigned __int64)v56 > ImagePathName.m128i_i64[1] )
    {
      v57 = v56--;
      if ( *v56 == 92 )
      {
        v55 = (__int64)v57;
        break;
      }
    }
  }
  if ( v55 )
  {
    v58 = ImagePathName.m128i_i16[4] + ImagePathName.m128i_i16[0] - v55;
    v127.m128i_i16[0] = v58;
    if ( ImagePathName.m128i_u16[1] - (unsigned __int64)ImagePathName.m128i_u16[0] >= 2 )
      v58 += 2;
    v127.m128i_i16[1] = v58;
    v127.m128i_i64[1] = v55;
  }
  else
  {
    v127 = ImagePathName;
  }
  if ( *(int *)(LdrpNtdllHotPatchContext + 8) < 0 && LdrpIsHotPatchingEnabled )
    __fastfail(0x45u);
  if ( *(_QWORD *)LdrpNtdllHotPatchContext )
  {
    result = LdrpInitializeNtdllDataTableEntry(*(_QWORD *)LdrpNtdllHotPatchContext, &v130, LdrpNtDllDataTableEntry, 0LL);
    if ( (int)result < 0 )
      return result;
  }
  RtlInitializeHistoryTable();
  v59 = (_QWORD *)(LdrpNtDllDataTableEntry + 32);
  v60 = qword_1801D28F0;
  if ( *(__int64 **)(qword_1801D28F0 + 8) != &qword_1801D28F0 )
    goto LABEL_278;
  *v59 = qword_1801D28F0;
  v59[1] = &qword_1801D28F0;
  *(_QWORD *)(v60 + 8) = v59;
  qword_1801D28F0 = (__int64)v59;
  if ( !v130 )
    goto LABEL_171;
  v61 = (_QWORD *)(v130 + 32);
  if ( (__int64 *)v59[1] != &qword_1801D28F0 )
LABEL_278:
    __fastfail(3u);
  *v61 = v59;
  v61[1] = &qword_1801D28F0;
  v59[1] = v61;
  qword_1801D28F0 = (__int64)v61;
LABEL_171:
  inited = LdrpInitParallelLoadingSupport();
  v103 = inited;
  if ( inited < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      6837,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to initialize Parallel loader, st = 0x%x\n",
      inited);
    return v103;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (__int64)v158);
  v155 = v158;
  v156 = 512;
  v154 = ImagePathName;
  v157 = &v103;
  ModuleEntry = LdrpAllocateModuleEntry((__int64)&v154);
  if ( !ModuleEntry )
  {
    v27 = "Allocating a data table entry for the executable failed\n";
    v28 = 6858;
    goto LABEL_85;
  }
  LdrpImageEntry = ModuleEntry;
  v64 = 2LL;
  v65 = 1LL;
  do
  {
    v66 = LdrpImageEntry;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v64;
  }
  while ( v64 );
  *(_WORD *)(**(_QWORD **)(v66 + 152) - 52LL) = -1;
  v67 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  v68 = *(_DWORD *)(v67 + 104) | 4;
  *(_DWORD *)(v67 + 104) = v68;
  if ( (ProcessEnvironmentBlock->BitField & 0x10) != 0 )
  {
    v68 |= 1u;
    *(_DWORD *)(v67 + 104) = v68;
  }
  v69 = v107;
  if ( UseCOR )
  {
    v70 = v68 | 0x400000;
    *(_DWORD *)(v67 + 104) = v70;
    if ( v69 )
      *(_DWORD *)(v67 + 104) = v70 | 0x1000000;
  }
  if ( (ProcessEnvironmentBlock->BitField & 4) != 0 )
    *(_QWORD *)(v67 + 248) = 0LL;
  *(__m128i *)(v67 + 88) = v127;
  v71 = v119;
  if ( *(void **)(v119 + 48) != ProcessEnvironmentBlock->ImageBaseAddress && !v69 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage((char)ProcessEnvironmentBlock->ImageBaseAddress);
    v103 = result;
    if ( (int)result < 0 )
      return result;
    v67 = LdrpImageEntry;
  }
  *(_QWORD *)(v67 + 48) = ProcessEnvironmentBlock->ImageBaseAddress;
  LdrpInsertDataTableEntry(v67, v66, v65);
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrinit.c",
    6950,
    (__int64)"LdrpInitializeProcess",
    2,
    "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
    LdrpImageEntry + 88);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 5285LL);
  LdrpInsertModuleToIndex(LdrpImageEntry, v71);
  result = LdrpProcessMappedModule(LdrpImageEntry, 0LL, UseWOW64 == 0);
  v103 = result;
  if ( (int)result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v103 = RtlpInitCurrentDir(&UnicodeString);
  if ( (v103 & 0x80000000) != 0 )
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      6987,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
      (char)&UnicodeString);
  if ( !v108 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v72 = LdrpAllocateModuleEntry(0LL);
    v75 = v72;
    if ( !v72 )
    {
      v27 = "Allocating a data table entry for the application verifier DLL failed\n";
      v28 = 7012;
      goto LABEL_85;
    }
    *(_DWORD *)(*(_QWORD *)(v72 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v72 + 152) - 52LL) = -1;
    *(_DWORD *)(v72 + 104) |= *(_DWORD *)(v109 + 104);
    *(_QWORD *)(v72 + 248) = *(_QWORD *)(v109 + 248);
    *(_WORD *)(v72 + 110) = 0;
    *(_OWORD *)(v72 + 72) = *(_OWORD *)(v109 + 72);
    *(_OWORD *)(v72 + 88) = *(_OWORD *)(v109 + 88);
    *(_DWORD *)(v72 + 128) = *(_DWORD *)(v109 + 128);
    *(_DWORD *)(v72 + 288) = *(_DWORD *)(v109 + 288);
    *(_QWORD *)(v72 + 48) = *(_QWORD *)(v109 + 48);
    LdrpInsertDataTableEntry(v72, v73, v74);
    LdrpLogDllState(*(_QWORD *)(v75 + 48), v75 + 72, 5285LL);
    result = RtlImageNtHeaderEx(3, *(_QWORD *)(v75 + 48), 0LL, &v129);
    v103 = result;
    if ( (int)result < 0 )
      return result;
    LdrpInsertModuleToIndex(v75, v129);
    result = LdrpProcessMappedModule(v75, 0LL, 1LL);
    v103 = result;
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(v75 + 56) = *(_QWORD *)(v109 + 56);
    LdrpLogDllState(*(_QWORD *)(v75 + 48), v75 + 72, 5293LL);
    *(_DWORD *)(*(_QWORD *)(v75 + 152) + 56LL) = 7;
    if ( (ProcessEnvironmentBlock->NtGlobalFlag & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      v76 = AVrfInitializeVerifier(0, 0, 0, 1, v124, 0LL);
      v103 = v76;
      if ( v76 >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v75 + 152) + 56LL) = 9;
        v76 = v103;
      }
    }
    else
    {
      v104 = 0;
      v76 = LdrpInitializeGraphRecurse(*(__int64 **)(v75 + 152), 0LL, &v104);
      v103 = v76;
    }
    if ( v76 < 0 )
      return (unsigned int)v76;
  }
  LdrpDropLastInProgressCount();
  if ( !LdrpIsSecureProcess )
    RtlInitializeProcessorFeaturesBitMap();
  if ( UseWOW64 )
  {
    if ( v116 )
    {
      NtClose(v116);
      v116 = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v111 )
    {
      NtClose(v111);
      v111 = 0LL;
    }
    result = LdrpLoadWow64((__int64)&v117);
    v103 = result;
    if ( (int)result >= 0 )
    {
      if ( ProcessEnvironmentBlock->BeingDebugged )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
      g_LdrpWow64LdrpInitialize(v123);
LABEL_268:
      if ( v116 )
        NtClose(v116);
      if ( v111 )
        NtClose(v111);
      cpu_check_features();
      if ( (g_SymCryptFlags & 1) == 0 )
      {
        SymCryptDetectCpuFeaturesByCpuid();
        _InterlockedOr(&g_SymCryptFlags, 1u);
        v108 = 6750217;
        v97 = "v103.9.1__2025-07-25T01:19:34+00:00_ac2c15c_2026-02-17T21:56:42";
        for ( i = aV1039120250725[0]; i; i = *v97 )
        {
          LOBYTE(v108) = i;
          ++v97;
        }
        g_SymCryptCpuFeaturesPresentCheck = ~g_SymCryptCpuFeaturesNotPresent;
      }
      return 0LL;
    }
    return result;
  }
  LdrpInitializeCfgScpHelpers();
  LdrpSchedulerSharedDataListHeadLock = 0LL;
  qword_1801D2978 = (__int64)&LdrpSchedulerSharedDataListHead;
  LdrpSchedulerSharedDataListHead = (__int64)&LdrpSchedulerSharedDataListHead;
  LdrpAllocateSchedulerSharedData();
  v77 = v133;
  LdrpAcquireSchedulerSharedDataSlot(v133, v78, v79, v80, Format);
  if ( UseCOR )
  {
    result = LdrpCorInitialize(&v134);
    v103 = result;
    if ( (int)result < 0 )
      return result;
    if ( v69 )
    {
      result = LdrpCorValidateImage(ProcessEnvironmentBlock->ImageBaseAddress);
      v103 = result;
      if ( (int)result < 0 )
        return result;
    }
    if ( (v77->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v123 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  v81 = LdrpInitializeTls();
  v103 = v81;
  if ( v81 < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      7292,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing TLS slots failed with status 0x%08lx\n",
      v81);
    return v103;
  }
  if ( *(_BYTE *)(LdrpNtdllHotPatchContext + 12) )
    LdrpLogEtwHotPatchStatus(
      (unsigned int)&v127,
      LdrpNtDllDataTableEntry,
      0,
      *(_DWORD *)(LdrpNtdllHotPatchContext + 8),
      0);
  if ( v134 )
  {
    v105 = 0;
    v82 = LdrpInitializeGraphRecurse(*(__int64 **)(v134 + 152), 0LL, &v105);
    v103 = v82;
    if ( v82 < 0 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrinit.c",
        7329,
        (__int64)"LdrpInitializeProcess",
        0,
        "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
        v82);
      return v103;
    }
  }
  v83 = LdrpInitializeImportRedirection();
  v103 = v83;
  if ( v83 < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      7345,
      (__int64)"LdrpInitializeProcess",
      0,
      "Loading of import redirection module failed with status 0x%08x\n",
      v83);
    return v103;
  }
  if ( (unsigned __int16)(*(_WORD *)(v71 + 92) - 2) <= 1u )
  {
    v84 = LdrpInitializeKernel32Functions(&v128);
    v103 = v84;
    if ( v84 < 0 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrinit.c",
        7367,
        (__int64)"LdrpInitializeProcess",
        0,
        "Calling LdrpInitializeKernel32Functions failed with status 0x%08lx\n",
        v84);
      return v103;
    }
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v85 = pShimData;
  if ( pShimData && *(_DWORD *)(pShimData + 528) )
  {
    ProcessEnvironmentBlock->AppCompatInfo = 0LL;
    LdrpInitShimEngine(v85);
  }
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    RtlpForceCSDebugInfoCreation = 1;
  LowPart = NtCurrentPeb()->AppCompatFlags.LowPart;
  v87 = v121;
  if ( (LowPart & 0x10000000) != 0 )
    v121->LoaderThreads = 1;
  LdrpEnableParallelLoading(v87->LoaderThreads, LowPart, 1LL);
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  *v157 = 0;
  if ( v69 )
  {
    v88 = LdrpCorProcessImports(LdrpImageEntry);
LABEL_250:
    v103 = v88;
    v90 = v88;
    goto LABEL_251;
  }
  LdrpThreadTokenSetMainThreadToken();
  v156 |= 1u;
  LdrpMapAndSnapDependency((__int64)&v154, v89);
  LdrpDrainWorkQueue(1);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  v90 = v103;
  if ( (v103 & 0x80000000) == 0 )
  {
    v88 = LdrpPrepareModuleForExecution(LdrpImageEntry, (__int64)v157);
    goto LABEL_250;
  }
LABEL_251:
  if ( v90 < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      7606,
      (__int64)"LdrpInitializeProcess",
      0,
      "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
      v90);
    return v103;
  }
  LdrInitState = 2;
  result = LdrpInitializePatchData();
  v103 = result;
  if ( (int)result >= 0 )
  {
    if ( ProcessEnvironmentBlock->BeingDebugged )
      LdrpDoDebuggerBreak();
    LdrpDropLastInProgressCount();
    if ( !Kernel32ThreadInitThunkFunction
      || (result = Kernel32ThreadInitThunkFunction(1LL, 0LL, 0LL), v103 = result, (int)result >= 0)
      && (result = LdrpInitializePerUserWindowsDirectory(v128), v103 = result, (int)result >= 0) )
    {
      LdrpProcessInitContextRecord = v123;
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock(v92, v91, v93, v94);
      v106[0] = 0;
      v103 = LdrpInitializeGraphRecurse(*(__int64 **)(LdrpImageEntry + 152), (__int64)v157, v106);
      LdrpReleaseLoaderLock(v95, 9u, v103);
      LdrpFreeLoadContextOfNode(*(_QWORD *)(LdrpImageEntry + 152), v157);
      LdrpDropLastInProgressCount();
      LdrpProcessInitContextRecord = 0LL;
      LdrpReleaseDllPath(v158);
      if ( (v103 & 0x80000000) != 0 )
      {
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrinit.c",
          7754,
          (__int64)"LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          v103);
        return v103;
      }
      LdrpInitializeSmtDelayedSleep();
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v143[0] = 72LL;
        v143[1] = 1LL;
        v144 = 0LL;
        v145 = 0LL;
        v146 = 0LL;
        v147 = 0LL;
        RtlActivateActivationContextUnsafeFast(v143, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(1u, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v143);
      }
      if ( g_ShimsEnabled
        && !((unsigned __int8 (__fastcall *)(__int128 *, __int64))(__ROR8__(
                                                                     g_pfnSE_InstallAfterInit,
                                                                     64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
              &v115,
              v85) )
      {
        g_ShimsEnabled = 0;
        LdrUnloadDll(g_pShimEngineModule);
        g_pShimEngineModule = 0LL;
      }
      PostProcessInitRoutine = ProcessEnvironmentBlock->PostProcessInitRoutine;
      if ( PostProcessInitRoutine )
        PostProcessInitRoutine();
      goto LABEL_268;
    }
  }
  return result;
}
