/*
 * XREFs of LdrpInitializeProcess @ 0x1800D29F4
 * Callers:
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 * Callees:
 *     _cpu_check_features @ 0x1800023C0 (_cpu_check_features.c)
 *     RtlSetHeapInformation @ 0x1800024D0 (RtlSetHeapInformation.c)
 *     LdrpEnableUMGLTracingStateSync @ 0x180002C54 (LdrpEnableUMGLTracingStateSync.c)
 *     RtlInitializeCriticalSectionEx @ 0x1800073E0 (RtlInitializeCriticalSectionEx.c)
 *     LdrpPrepareModuleForExecution @ 0x180007794 (LdrpPrepareModuleForExecution.c)
 *     LdrpReleaseLoaderLock @ 0x180007A00 (LdrpReleaseLoaderLock.c)
 *     LdrpInitializeGraphRecurse @ 0x180008690 (LdrpInitializeGraphRecurse.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     RtlInsertInvertedFunctionTable @ 0x180020C04 (RtlInsertInvertedFunctionTable.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180022E90 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180024A98 (RtlRemoveInvertedFunctionTable.c)
 *     RtlSetBits @ 0x180025530 (RtlSetBits.c)
 *     TpInitializePackage @ 0x1800340DC (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x1800341B0 (RtlCreateTagHeap.c)
 *     LdrpInitializeProcessHeap @ 0x180034DF8 (LdrpInitializeProcessHeap.c)
 *     LdrpEnableParallelLoading @ 0x18003A1C4 (LdrpEnableParallelLoading.c)
 *     EtwEventRegister @ 0x1800455F0 (EtwEventRegister.c)
 *     LdrpAcquireLoaderLock @ 0x180046860 (LdrpAcquireLoaderLock.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18004E410 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpAllocateModuleEntry @ 0x18004F520 (LdrpAllocateModuleEntry.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlGetNtSystemRoot @ 0x18006C630 (RtlGetNtSystemRoot.c)
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     LdrpCorValidateImage @ 0x18006CD44 (LdrpCorValidateImage.c)
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     LdrpInsertDataTableEntry @ 0x18006EAC0 (LdrpInsertDataTableEntry.c)
 *     LdrpCorProcessImports @ 0x18006EF20 (LdrpCorProcessImports.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006F018 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     LdrpCallTlsInitializers @ 0x180074330 (LdrpCallTlsInitializers.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180074EB0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     RtlpInitCurrentDir @ 0x1800A1C48 (RtlpInitCurrentDir.c)
 *     LdrpInitializeNlsInfo @ 0x1800AFC74 (LdrpInitializeNlsInfo.c)
 *     LdrpInitializeExecutionOptions @ 0x1800B1738 (LdrpInitializeExecutionOptions.c)
 *     RtlQueryApplicationKeyOption @ 0x1800B2918 (RtlQueryApplicationKeyOption.c)
 *     LdrQueryImageFileExecutionOptions @ 0x1800B2A00 (LdrQueryImageFileExecutionOptions.c)
 *     LdrpInitializeTls @ 0x1800B7E90 (LdrpInitializeTls.c)
 *     SbObtainTraceHandle @ 0x1800BE760 (SbObtainTraceHandle.c)
 *     LdrpInitializeKernel32Functions @ 0x1800CB874 (LdrpInitializeKernel32Functions.c)
 *     LdrpCorInitialize @ 0x1800D0840 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x1800D0A34 (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800D0BF0 (LdrpInitShimEngine.c)
 *     LdrpInitializeDllPath @ 0x1800D1140 (LdrpInitializeDllPath.c)
 *     LdrInitializePerThreadRng @ 0x1800D2918 (LdrInitializePerThreadRng.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800D8FB8 (LdrpFreeLoadContextOfNode.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E3FFC (LdrpProtectAndRelocateImage.c)
 *     RtlControlStackTraceDataBase @ 0x1800E4904 (RtlControlStackTraceDataBase.c)
 *     RtlpInitEnvironmentBlock @ 0x1800E587C (RtlpInitEnvironmentBlock.c)
 *     RtlEncodePointer @ 0x1800EBB00 (RtlEncodePointer.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x1800EEA30 (RtlpInitializeThreadActivationContextStack.c)
 *     LdrpDropLastInProgressCount @ 0x1800F05A0 (LdrpDropLastInProgressCount.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800F2010 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800F2C94 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlInitializeHistoryTable @ 0x1800F39BC (RtlInitializeHistoryTable.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F6570 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInsertModuleToIndex @ 0x1800F67F0 (LdrpInsertModuleToIndex.c)
 *     LdrpCaptureCriticalThunks @ 0x1800F70B4 (LdrpCaptureCriticalThunks.c)
 *     RtlpInitParameterBlock @ 0x1800F84E8 (RtlpInitParameterBlock.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x1800F8D08 (LdrpInitializeSmtDelayedSleep.c)
 *     RtlpInitDeferredCriticalSection @ 0x1800F9BB0 (RtlpInitDeferredCriticalSection.c)
 *     LdrpInitializePolicy @ 0x1800FA190 (LdrpInitializePolicy.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800FB008 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800FB7F0 (LdrpAllocateSchedulerSharedData.c)
 *     LdrpInitializeImportRedirection @ 0x1800FC888 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FD1A4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeSnapsBuffer @ 0x1800FD5DC (LdrpInitializeSnapsBuffer.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800FD704 (RtlpInitializeNonVolatileFlush.c)
 *     LdrpInitializePatchData @ 0x1800FD79C (LdrpInitializePatchData.c)
 *     RtlNormalizeProcessParams @ 0x1800FD960 (RtlNormalizeProcessParams.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180109B68 (LdrpInitializeCfgScpHelpers.c)
 *     RtlInitializeHeapLogging @ 0x180109C50 (RtlInitializeHeapLogging.c)
 *     LdrpInitParallelLoadingSupport @ 0x18010C758 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCorFixupImage @ 0x18010CA20 (LdrpCorFixupImage.c)
 *     LdrpCheckAppDirType @ 0x18011B140 (LdrpCheckAppDirType.c)
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 *     RtlInitializeHeapManager @ 0x18011BFFC (RtlInitializeHeapManager.c)
 *     Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline @ 0x18011E6D8 (Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline.c)
 *     LdrpIncludeAlternateForwarders @ 0x180120444 (LdrpIncludeAlternateForwarders.c)
 *     TpSetDefaultPoolCpuSets @ 0x18012085C (TpSetDefaultPoolCpuSets.c)
 *     LdrpDoDebuggerBreak @ 0x180120E28 (LdrpDoDebuggerBreak.c)
 *     RtlInitializeExceptionLog @ 0x180120E6C (RtlInitializeExceptionLog.c)
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline @ 0x18013C1A0 (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline.c)
 *     RtlInitializeProcessorFeaturesBitMap @ 0x1801486C8 (RtlInitializeProcessorFeaturesBitMap.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x18014CB44 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x18015CE7C (SymCryptDetectCpuFeaturesByCpuid.c)
 *     Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline @ 0x1801602D0 (Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x180163D20 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x180165910 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x180165F70 (NtQuerySymbolicLinkObject.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180173498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

int __fastcall LdrpInitializeProcess(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v4; // r15d
  struct _TEB *v5; // r13
  __int64 ProcessEnvironmentBlock; // rdi
  bool v7; // cc
  __int64 v8; // rcx
  _WORD *v9; // rdx
  __int16 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rcx
  int result; // eax
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
  __int64 v25; // r9
  char v26; // al
  unsigned __int64 v27; // r14
  char *v28; // rax
  int v29; // edx
  char *v30; // r12
  __int64 v31; // r9
  int v32; // r14d
  __int64 v33; // r13
  const wchar_t *NtSystemRoot; // rax
  __int16 v35; // r14
  __int64 Heap; // rax
  unsigned __int64 v37; // r14
  int v38; // eax
  __int64 v39; // r9
  __int64 v40; // r15
  UNICODE_STRING v41; // xmm1
  _WORD *v42; // xmm0_8
  wchar_t *v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  char v47; // r12
  unsigned __int64 v48; // r14
  __int64 v49; // rdx
  unsigned __int64 v50; // r15
  __int16 v51; // dx
  __int64 v52; // r8
  _WORD *v53; // rcx
  _WORD *v54; // rax
  __int16 v55; // dx
  _QWORD *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rcx
  int inited; // eax
  __int64 ModuleEntry; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // eax
  char v65; // r12
  int v66; // eax
  __int64 v67; // r13
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // rax
  __int64 v71; // r14
  int v72; // ecx
  struct _TEB *v73; // r14
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  __int64 v81; // r15
  __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rdx
  int v85; // ecx
  __int64 v86; // rcx
  void (*v87)(void); // rax
  const char *v88; // rcx
  char i; // al
  char *Format; // [rsp+20h] [rbp-408h]
  char v91; // [rsp+28h] [rbp-400h]
  _QWORD *v92; // [rsp+28h] [rbp-400h]
  char v93; // [rsp+28h] [rbp-400h]
  int v94; // [rsp+30h] [rbp-3F8h]
  int v95; // [rsp+50h] [rbp-3D8h] BYREF
  char v96; // [rsp+54h] [rbp-3D4h] BYREF
  char v97; // [rsp+55h] [rbp-3D3h] BYREF
  char v98[2]; // [rsp+56h] [rbp-3D2h] BYREF
  int v99; // [rsp+58h] [rbp-3D0h]
  int v100; // [rsp+5Ch] [rbp-3CCh]
  __int64 v101; // [rsp+60h] [rbp-3C8h] BYREF
  __int128 v102; // [rsp+68h] [rbp-3C0h] BYREF
  HANDLE v103; // [rsp+78h] [rbp-3B0h] BYREF
  unsigned int v104; // [rsp+80h] [rbp-3A8h] BYREF
  int v105; // [rsp+84h] [rbp-3A4h] BYREF
  unsigned int v106; // [rsp+88h] [rbp-3A0h] BYREF
  __int128 v107; // [rsp+90h] [rbp-398h] BYREF
  HANDLE v108; // [rsp+A0h] [rbp-388h] BYREF
  __int128 v109; // [rsp+A8h] [rbp-380h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-368h] BYREF
  __int64 v111; // [rsp+D0h] [rbp-358h] BYREF
  __m128i v112; // [rsp+E0h] [rbp-348h] BYREF
  __int64 v113; // [rsp+F0h] [rbp-338h]
  HANDLE Handle; // [rsp+F8h] [rbp-330h] BYREF
  __int64 v115; // [rsp+100h] [rbp-328h]
  __int64 v116; // [rsp+108h] [rbp-320h]
  int v117[4]; // [rsp+110h] [rbp-318h] BYREF
  UNICODE_STRING v118; // [rsp+120h] [rbp-308h] BYREF
  __m128i v119; // [rsp+130h] [rbp-2F8h] BYREF
  __int64 v120; // [rsp+140h] [rbp-2E8h] BYREF
  __int64 v121; // [rsp+148h] [rbp-2E0h] BYREF
  __int64 v122; // [rsp+150h] [rbp-2D8h] BYREF
  __int64 SystemInformation; // [rsp+158h] [rbp-2D0h] BYREF
  __int64 v124; // [rsp+160h] [rbp-2C8h] BYREF
  struct _TEB *v125; // [rsp+168h] [rbp-2C0h]
  __int64 v126; // [rsp+170h] [rbp-2B8h] BYREF
  __int64 v127; // [rsp+178h] [rbp-2B0h]
  _QWORD v128[2]; // [rsp+180h] [rbp-2A8h] BYREF
  __int128 v129; // [rsp+190h] [rbp-298h] BYREF
  __int128 v130; // [rsp+1A0h] [rbp-288h]
  __int128 v131; // [rsp+1B0h] [rbp-278h]
  __int128 v132; // [rsp+1C0h] [rbp-268h] BYREF
  __int64 v133; // [rsp+1D0h] [rbp-258h]
  _QWORD v134[3]; // [rsp+1D8h] [rbp-250h] BYREF
  _QWORD v135[2]; // [rsp+1F0h] [rbp-238h] BYREF
  __int128 v136; // [rsp+200h] [rbp-228h]
  __int128 v137; // [rsp+210h] [rbp-218h]
  __int128 v138; // [rsp+220h] [rbp-208h]
  __int64 v139; // [rsp+230h] [rbp-1F8h]
  __int128 v140; // [rsp+240h] [rbp-1E8h]
  __int64 v141; // [rsp+250h] [rbp-1D8h]
  __int128 v142; // [rsp+260h] [rbp-1C8h]
  __int64 v143; // [rsp+270h] [rbp-1B8h]
  __int128 v144; // [rsp+280h] [rbp-1A8h]
  __int64 v145; // [rsp+290h] [rbp-198h]
  __m128i v146; // [rsp+2A0h] [rbp-188h] BYREF
  __int64 *v147; // [rsp+2B0h] [rbp-178h]
  int v148; // [rsp+2C0h] [rbp-168h]
  int *v149; // [rsp+2C8h] [rbp-160h]
  __int64 v150[16]; // [rsp+370h] [rbp-B8h] BYREF

  v116 = a2;
  v115 = a1;
  UnicodeString = 0LL;
  v112 = 0LL;
  v119 = 0LL;
  v109 = 0LL;
  v4 = 0;
  v111 = 0LL;
  v118 = 0LL;
  v107 = 0LL;
  v120 = 0LL;
  v117[0] = 0;
  v121 = 0LL;
  Handle = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  *(_QWORD *)&v131 = 0LL;
  DWORD2(v131) = 0;
  v128[0] = 1441812LL;
  v128[1] = L"\\KnownDlls";
  v108 = 0LL;
  v103 = 0LL;
  v126 = 0LL;
  v101 = 0LL;
  v122 = 0LL;
  memset_thunk_772440563353939046(&v146, 0, 0xD0uLL);
  v102 = 0LL;
  memset_thunk_772440563353939046(v150, 0, 0x80uLL);
  SystemInformation = 0LL;
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v5 = NtCurrentTeb();
  v125 = v5;
  ProcessEnvironmentBlock = (__int64)v5->ProcessEnvironmentBlock;
  LdrInitializePerThreadRng((__int64)v5);
  PebLdr = 88;
  byte_1801D4944 = 1;
  qword_1801D4958 = (__int64)&qword_1801D4950;
  qword_1801D4950 = (__int64)&qword_1801D4950;
  qword_1801D4968 = (__int64)&qword_1801D4960;
  qword_1801D4960 = (__int64)&qword_1801D4960;
  qword_1801D4978 = (__int64)&qword_1801D4970;
  qword_1801D4970 = (__int64)&qword_1801D4970;
  byte_1801D4988 = 0;
  qword_1801D4990 = 0LL;
  *(_QWORD *)(ProcessEnvironmentBlock + 24) = &PebLdr;
  LdrpInitializeNlsInfo(ProcessEnvironmentBlock);
  SRWLockSpinCycleCount = 0;
  v7 = *(_DWORD *)(ProcessEnvironmentBlock + 184) <= 1u;
  if ( *(_DWORD *)(ProcessEnvironmentBlock + 184) > 1u )
    SRWLockSpinCycleCount = 10240;
  ConditionVariableSpinCycleCount = 0;
  if ( !v7 )
    ConditionVariableSpinCycleCount = 10240;
  LODWORD(RtlpWaitOnAddressSpinCycleCount) = 0;
  if ( !v7 )
    LODWORD(RtlpWaitOnAddressSpinCycleCount) = 10240;
  memset_thunk_772440563353939046(RtlpFcProcessManager, 0, 0x118uLL);
  memset_thunk_772440563353939046(&unk_1801D5D00, 0, 0xD0uLL);
  xmmword_1801D5CE8 = 0LL;
  qword_1801D5CF8 = 0LL;
  memset_thunk_772440563353939046(&unk_1801D5D00, 0, 0x60uLL);
  memset_thunk_772440563353939046(&unk_1801D5D60, 0, 0x60uLL);
  qword_1801D5DD0 = 0LL;
  qword_1801D5DE0 = 0LL;
  qword_1801D5DF0 = (__int64)&qword_1801D5DE8;
  qword_1801D5DE8 = (__int64)&qword_1801D5DE8;
  RtlpInitializeNonVolatileFlush();
  v8 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v9 = (_WORD *)(*(_QWORD *)(v8 + 104) + v8);
  if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
    v9 = *(_WORD **)(v8 + 104);
  *((_QWORD *)&v107 + 1) = v9;
  LOWORD(v107) = *(_WORD *)(v8 + 96);
  v10 = v107;
  WORD1(v107) = v107 + 2;
  if ( (unsigned __int16)v107 >= 8u && *v9 == 92 && v9[1] == 63 && v9[2] == 63 && v9[3] == 92 )
  {
    LOWORD(v107) = v107 - 8;
    WORD1(v107) = v10 - 6;
    *((_QWORD *)&v107 + 1) = v9 + 4;
    *(_WORD *)(v8 + 96) -= 8;
    *(_WORD *)(v8 + 98) -= 8;
    *(_QWORD *)(v8 + 104) += 8LL;
  }
  v100 = 1;
  UseCOR = 0;
  LOBYTE(v2) = 0;
  v99 = v2;
  v105 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v111);
  v11 = v111;
  LdrpAppHeaders = v111;
  v12 = 32LL;
  if ( LdrpIsSecureProcess && (*(_BYTE *)(v111 + 22) & 0x20) == 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      5581,
      (__int64)"LdrpInitializeProcess",
      0,
      "Secure processes must be large address aware\n",
      v91);
    return -1073741637;
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
  v124 = 0LL;
  RtlImageNtHeaderEx(3, a2, 0LL, &v124);
  v15 = *(_DWORD *)(v124 + 80);
  RtlInsertInvertedFunctionTable(a2, v15);
  v132 = 0LL;
  v133 = 0LL;
  RtlpxLookupFunctionTable(a2, (__int64)&v132);
  LdrProtectMrdata(0);
  xmmword_1801E9430 = v132;
  qword_1801E9440 = v133;
  LODWORD(qword_1801E9440) = v15;
  RtlRemoveInvertedFunctionTable(a2);
  LdrProtectMrdata(1);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  v140 = xmmword_1801EC4E0;
  v141 = qword_1801EC4F0;
  v16 = (_mm_srli_si128((__m128i)xmmword_1801EC4E0, 8).m128i_u64[0] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = (_BYTE)v16 == 1;
  if ( (_BYTE)v16 == 1 || (v142 = xmmword_1801EC4E0, v143 = qword_1801EC4F0, v17 = (_BYTE)v16 == 3, v18 = 0, v17) )
    v18 = 1;
  LdrpAuditIntegrityContinuity = v18;
  v95 = LdrpInitializeExecutionOptions(
          (unsigned __int16 *)&v107,
          ProcessEnvironmentBlock,
          a2,
          &v108,
          &v103,
          (__int64)&v101);
  if ( v95 < 0 )
  {
    LODWORD(v92) = v5->ClientId.UniqueProcess;
    v19 = "Initializing the execution options for the process %lx failed with status 0x%08lx\n";
    v20 = 5730;
LABEL_27:
    LdrpLogInternal((__int64)"minkernel\\ldr\\ldrinit.c", v20, (__int64)"LdrpInitializeProcess", 0, v19, (char)v92);
    return v95;
  }
  if ( LdrpImageExpansionMitigation == 2 )
    LdrpIsHotPatchingEnabled = 0;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrinit.c",
    5788,
    (__int64)"LdrpInitializeProcess",
    2,
    "Initializing process 0x%p\n",
    (char)v5->ClientId.UniqueProcess);
  v127 = 0LL;
  WowTebOffset = v5->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v11 )
  {
    if ( *(_WORD *)(v11 + 24) == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v2) = 1;
      v99 = v2;
      v4 = 1;
      result = LdrpCorFixupImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      if ( result < 0 )
        return result;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v22 = RtlImageDirectoryEntryToData(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, v117);
    if ( v22 )
    {
      UseCOR = 1;
      v2 = (unsigned __int8)v2;
      if ( (*(_BYTE *)(v22 + 16) & 1) != 0 )
        v2 = 1;
      v99 = v2;
    }
  }
  LdrpSystemDllBase = v116;
  if ( !UseWOW64 )
    v127 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(LARGE_INTEGER *)(ProcessEnvironmentBlock + 192);
  v23 = RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32));
  v112 = *(__m128i *)(v23 + 96);
  if ( UseWOW64 || UseCOR && v4 )
    Config = 0LL;
  else
    Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfigEx(*(_QWORD *)(ProcessEnvironmentBlock + 16));
  if ( Config )
  {
    if ( *Config >= 0x10u )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~Config[3];
    if ( *Config >= 0x14u )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= Config[4];
    if ( *Config >= 0x18u && Config[5] )
      RtlpTimeout.QuadPart = -10000LL * (int)Config[5];
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  if ( RtlpTimeout.QuadPart < -36000000000LL )
    RtlpTimeoutDisable = 1;
  result = RtlpInitDeferredCriticalSection();
  v95 = result;
  if ( result < 0 )
    return result;
  dword_1801D0220 = 64;
  qword_1801D0228 = ProcessEnvironmentBlock + 128;
  dword_1801D0210 = 1024;
  qword_1801D0218 = ProcessEnvironmentBlock + 576;
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &dword_1801D0220;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &dword_1801D0210;
  *(_BYTE *)qword_1801D0228 |= 1u;
  memset_thunk_772440563353939046(&xmmword_1801CFE38, 0, 0x58uLL);
  RtlpFlsContext = 0LL;
  xmmword_1801CFE38 = 0LL;
  xmmword_1801CFE48 = 0LL;
  xmmword_1801CFE58 = 0LL;
  xmmword_1801CFE68 = 0LL;
  qword_1801CFE80 = (__int64)&qword_1801CFE78;
  qword_1801CFE78 = (__int64)&qword_1801CFE78;
  if ( UseWOW64 )
    RtlSetBits((__int64)&dword_1801D0220, 0, 0x13u);
  RtlSetBits((__int64)&dword_1801D0220, 0x10u, 1u);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || (v26 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    v104 = 24;
    if ( (int)LdrQueryImageFileExecutionOptions((int)&v107, (int)L"StackTraceDatabaseSizeInMb", 4, (int)&v104, 4, 0LL) >= 0
      && v104 >= 0x18 )
    {
      if ( v104 <= 0x80 )
        v27 = v104 << 20;
      else
        v27 = 0x8000000LL;
    }
    else
    {
      v27 = 25165824LL;
    }
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      6037,
      (__int64)"LdrpInitializeProcess",
      2,
      "Stack trace database size is %Id Mb\n",
      v27 >> 20);
    v134[0] = 0LL;
    v134[1] = 0LL;
    v134[2] = v27;
    RtlControlStackTraceDataBase(0LL, 24LL, v134);
    v26 = LdrpShouldCreateStackTraceDb;
  }
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || v26 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  result = RtlInitializeCriticalSectionEx((__int64)&FastPebLock, 0, 0LL, v25);
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  result = RtlInitializeHeapManager(&v107);
  if ( result < 0 )
    return result;
  v144 = xmmword_1801EC4E0;
  v145 = qword_1801EC4F0;
  if ( (((unsigned __int64)xmmword_1801EC4E0 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  if ( (int)LdrpInitializeProcessHeap((__int64)Config, v111, v23, (__int64 *)(ProcessEnvironmentBlock + 48)) < 0 )
  {
    v28 = "Creating the process heap failed\n";
    v29 = 6110;
LABEL_85:
    LdrpLogInternal((__int64)"minkernel\\ldr\\ldrinit.c", v29, (__int64)"LdrpInitializeProcess", 0, v28, v93);
    return -1073741801;
  }
  v30 = *(char **)(ProcessEnvironmentBlock + 48);
  RtlpSrwLockAllowImplicitUpgrade = Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline() == 0;
  if ( (unsigned int)Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline() )
    LdrpInitializeSnapsBuffer();
  RtlInitializeCriticalSectionEx((__int64)&LdrpEnclaveListLock, 0, 0LL, v31);
  qword_1801D62C8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack(v125);
  LdrpHeap = (__int64)v30;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  if ( NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL) >= 0 )
    RtlpHypervisorSharedUserVa = SystemInformation;
  NtdllBaseTag = RtlCreateTagHeap(v30, 0, (__int64)L"NTDLL!", L"!Process");
  result = TpInitializePackage();
  if ( result < 0 )
    return result;
  if ( *(_DWORD *)(v23 + 1080) )
    TpSetDefaultPoolCpuSets(*(void **)(v23 + 1072));
  v32 = *(_DWORD *)(v23 + 1084);
  if ( v32 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpGlobalPoolLock);
    TppPoolpGlobalPoolMaxThreadsOverride = v32;
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( !UseWOW64 && !LdrpIsSecureProcess )
    LdrpEnableUMGLTracingStateSync();
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CE6F0);
  EtwEventRegister((int)&PrivateLoggerNotificationGuid, 0LL, 0LL, (__int64)&g_hPrivLoggerNotificationProvider);
  EtwEventRegister(
    (int)&UserDiagnosticGuid,
    (__int64)UserDiagnosticProviderCallback,
    0LL,
    (__int64)&g_hUserDiagnosticProvider);
  RtlInitializeHeapLogging();
  result = RtlpInitEnvironmentBlock();
  if ( result < 0 )
    return result;
  result = RtlpInitParameterBlock();
  if ( result < 0 )
    return result;
  v33 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v113 = v33;
  v112 = *(__m128i *)(v33 + 96);
  *((_QWORD *)&v107 + 1) = _mm_srli_si128(v112, 8).m128i_u64[0];
  if ( (v108 || v103)
    && (int)RtlQueryApplicationKeyOption(
              (__int64)v103,
              (__int64)v108,
              (__int64)L"DebugProcessHeapOnly",
              4u,
              (__int64)&v105,
              4,
              v94,
              0LL) >= 0
    && dword_1801CE578
    && v105 )
  {
    dword_1801CE578 = 0;
    *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
  }
  NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx((__int64)&v118, NtSystemRoot);
  v35 = v118.Length + 40;
  Heap = RtlAllocateHeap(v30, 0, (unsigned int)v118.Length + 38 + 2LL);
  if ( !Heap )
    return -1073741801;
  WORD1(v109) = v35;
  *((_QWORD *)&v109 + 1) = Heap;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v109, (const void **)&v118);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v109, &SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) == 0 )
  {
    v106 = 0;
    v37 = 48LL;
    LODWORD(v129) = 48;
    *((_QWORD *)&v129 + 1) = 0LL;
    DWORD2(v130) = 64;
    *(_QWORD *)&v130 = v128;
    v131 = 0LL;
    LdrProtectMrdata(0);
    v95 = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3LL, &v129);
    LdrProtectMrdata(1);
    if ( v95 < 0 )
    {
      v92 = v128;
      v20 = 6405;
LABEL_115:
      v19 = "Failed to open %wZ with status 0x%08lx\n";
      goto LABEL_27;
    }
    LODWORD(v129) = 48;
    *((_QWORD *)&v129 + 1) = LdrpKnownDllDirectoryHandle;
    DWORD2(v130) = 64;
    *(_QWORD *)&v130 = &unk_180176DC0;
    v131 = 0LL;
    v95 = ZwOpenSymbolicLinkObject(&Handle, 1LL, &v129);
    if ( v95 < 0 )
    {
      v92 = &unk_180176DC0;
      v20 = 6428;
      goto LABEL_115;
    }
    while ( 1 )
    {
      v40 = RtlAllocateHeap(v30, 0, v37);
      if ( !v40 )
        return -1073741801;
      LdrpKnownDllPath = 0;
      word_1801D4812 = v37;
      qword_1801D4818 = v40;
      v38 = NtQuerySymbolicLinkObject(Handle, &LdrpKnownDllPath, &v106);
      v95 = v38;
      if ( v38 >= 0 )
        break;
      if ( v38 != -1073741789 )
      {
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrinit.c",
          6463,
          (__int64)"LdrpInitializeProcess",
          0,
          "Querying the known DLL directory link object failed with status 0x%08lx\n",
          v38);
        return v95;
      }
      RtlFreeHeap((__int64)v30, 0, v40, v39);
      v37 = v106;
    }
    NtClose(Handle);
  }
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = v118;
  }
  else
  {
    v41 = *(UNICODE_STRING *)(v33 + 56);
    UnicodeString = v41;
    v42 = (_WORD *)_mm_srli_si128((__m128i)v41, 8).m128i_u64[0];
    if ( !v42 || !(unsigned __int16)_mm_cvtsi128_si32((__m128i)v41) || !*v42 )
    {
      v43 = (wchar_t *)RtlAllocateHeap(v30, 0, 8uLL);
      UnicodeString.Buffer = v43;
      if ( !v43 )
      {
        v28 = "Allocating a buffer to hold the current working directory failed\n";
        v29 = 6515;
        goto LABEL_85;
      }
      v100 = 0;
      v44 = RtlGetNtSystemRoot();
      *(_DWORD *)v43 = *(_DWORD *)v44;
      v43[2] = *(_WORD *)(v44 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v47 = 0;
  v48 = (unsigned __int16)v109;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    v47 = LdrpIncludeAlternateForwarders(v45, (unsigned __int16)v109, v46);
    v48 = 2 * v49 + 22;
    if ( v47 )
      v48 = v49 + 2 * v49 + 52;
  }
  v50 = v48;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v50 = v48 + 2 * (v118.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v33 + 80) = 0;
  }
  *((_QWORD *)&v102 + 1) = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v50);
  if ( !*((_QWORD *)&v102 + 1) )
  {
    v28 = "Failed to allocate the system dirs string!\n";
    v29 = 6608;
    goto LABEL_85;
  }
  LOWORD(v102) = 0;
  WORD1(v102) = v50;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v102, (const void **)&v109);
  v51 = v102;
  *(_WORD *)(*((_QWORD *)&v102 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v102 >> 1) - 2) = 59;
  RtlpSystem32Dirs = v102;
  LdrpSystem32 = v102;
  LOWORD(LdrpSystem32) = v51 - 2;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v47 )
    {
      RtlAppendUnicodeStringToString((unsigned __int16 *)&v102, (const void **)&v109);
      RtlAppendUnicodeToString((unsigned __int16 *)&v102, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v102, (const void **)&v109);
    RtlAppendUnicodeToString((unsigned __int16 *)&v102, L"forwarders;");
  }
  if ( v50 > v48 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v102, (const void **)&v118);
    RtlAppendUnicodeToString((unsigned __int16 *)&v102, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v102, (const void **)&v118);
    RtlAppendUnicodeToString((unsigned __int16 *)&v102, L";");
    RtlpSystemDirs = v102;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&v112);
  result = LdrpInitializeNtdllDataTableEntry(v116, &LdrpNtDllDataTableEntry, 0LL, &v109);
  if ( result < 0 )
    return result;
  v52 = 0LL;
  v53 = (_WORD *)(v112.m128i_i64[1] + v112.m128i_u16[0]);
  if ( v53 )
  {
    while ( (unsigned __int64)v53 > v112.m128i_i64[1] )
    {
      v54 = v53--;
      if ( *v53 == 92 )
      {
        v52 = (__int64)v54;
        break;
      }
    }
  }
  if ( v52 )
  {
    v55 = v112.m128i_i16[4] + v112.m128i_i16[0] - v52;
    v119.m128i_i16[0] = v55;
    if ( v112.m128i_u16[1] - (unsigned __int64)v112.m128i_u16[0] >= 2 )
      v55 += 2;
    v119.m128i_i16[1] = v55;
    v119.m128i_i64[1] = v52;
  }
  else
  {
    v119 = v112;
  }
  if ( *(int *)(LdrpNtdllHotPatchContext + 8) < 0 && LdrpIsHotPatchingEnabled )
    __fastfail(0x45u);
  if ( *(_QWORD *)LdrpNtdllHotPatchContext )
  {
    result = LdrpInitializeNtdllDataTableEntry(*(_QWORD *)LdrpNtdllHotPatchContext, &v122, LdrpNtDllDataTableEntry, 0LL);
    if ( result < 0 )
      return result;
  }
  RtlInitializeHistoryTable();
  v56 = (_QWORD *)(LdrpNtDllDataTableEntry + 32);
  v57 = qword_1801D4970;
  if ( *(__int64 **)(qword_1801D4970 + 8) != &qword_1801D4970 )
    goto LABEL_279;
  *v56 = qword_1801D4970;
  v56[1] = &qword_1801D4970;
  *(_QWORD *)(v57 + 8) = v56;
  qword_1801D4970 = (__int64)v56;
  if ( !v122 )
    goto LABEL_171;
  v58 = (_QWORD *)(v122 + 32);
  if ( (__int64 *)v56[1] != &qword_1801D4970 )
LABEL_279:
    __fastfail(3u);
  *v58 = v56;
  v58[1] = &qword_1801D4970;
  v56[1] = v58;
  qword_1801D4970 = (__int64)v58;
LABEL_171:
  inited = LdrpInitParallelLoadingSupport();
  v95 = inited;
  if ( inited < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      6839,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to initialize Parallel loader, st = 0x%x\n",
      inited);
    return v95;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (__int64)v150);
  v147 = v150;
  v148 = 512;
  v146 = v112;
  v149 = &v95;
  ModuleEntry = LdrpAllocateModuleEntry((__int64)&v146);
  if ( !ModuleEntry )
  {
    v28 = "Allocating a data table entry for the executable failed\n";
    v29 = 6860;
    goto LABEL_85;
  }
  LdrpImageEntry = ModuleEntry;
  v61 = 2LL;
  do
  {
    v62 = LdrpImageEntry;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v61;
  }
  while ( v61 );
  *(_WORD *)(**(_QWORD **)(v62 + 152) - 52LL) = -1;
  v63 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = v112;
  v64 = *(_DWORD *)(v63 + 104) | 4;
  *(_DWORD *)(v63 + 104) = v64;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x10) != 0 )
  {
    v64 |= 1u;
    *(_DWORD *)(v63 + 104) = v64;
  }
  v65 = v99;
  if ( UseCOR )
  {
    v66 = v64 | 0x400000;
    *(_DWORD *)(v63 + 104) = v66;
    if ( v65 )
      *(_DWORD *)(v63 + 104) = v66 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v63 + 248) = 0LL;
  *(__m128i *)(v63 + 88) = v119;
  v67 = v111;
  if ( *(_QWORD *)(v111 + 48) != *(_QWORD *)(ProcessEnvironmentBlock + 16) && !v65 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
    v95 = result;
    if ( result < 0 )
      return result;
    v63 = LdrpImageEntry;
  }
  *(_QWORD *)(v63 + 48) = *(_QWORD *)(ProcessEnvironmentBlock + 16);
  LdrpInsertDataTableEntry(v63);
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrinit.c",
    6952,
    (__int64)"LdrpInitializeProcess",
    2,
    "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
    LdrpImageEntry + 88);
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), (unsigned __int16 *)(LdrpImageEntry + 72), 5285);
  LdrpInsertModuleToIndex(LdrpImageEntry, v67);
  result = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  v95 = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v95 = RtlpInitCurrentDir((__int64)&UnicodeString, v68, v69);
  if ( v95 < 0 )
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      6989,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
      (char)&UnicodeString);
  if ( !v100 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v70 = LdrpAllocateModuleEntry(0LL);
    v71 = v70;
    if ( !v70 )
    {
      v28 = "Allocating a data table entry for the application verifier DLL failed\n";
      v29 = 7014;
      goto LABEL_85;
    }
    *(_DWORD *)(*(_QWORD *)(v70 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v70 + 152) - 52LL) = -1;
    *(_DWORD *)(v70 + 104) |= *(_DWORD *)(v101 + 104);
    *(_QWORD *)(v70 + 248) = *(_QWORD *)(v101 + 248);
    *(_WORD *)(v70 + 110) = 0;
    *(_OWORD *)(v70 + 72) = *(_OWORD *)(v101 + 72);
    *(_OWORD *)(v70 + 88) = *(_OWORD *)(v101 + 88);
    *(_DWORD *)(v70 + 128) = *(_DWORD *)(v101 + 128);
    *(_DWORD *)(v70 + 288) = *(_DWORD *)(v101 + 288);
    *(_QWORD *)(v70 + 48) = *(_QWORD *)(v101 + 48);
    LdrpInsertDataTableEntry(v70);
    LdrpLogDllState(*(_QWORD *)(v71 + 48), (unsigned __int16 *)(v71 + 72), 5285);
    result = RtlImageNtHeaderEx(3, *(_QWORD *)(v71 + 48), 0LL, &v121);
    v95 = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex(v71, v121);
    result = LdrpProcessMappedModule(v71, 0, 1);
    v95 = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v71 + 56) = *(_QWORD *)(v101 + 56);
    LdrpLogDllState(*(_QWORD *)(v71 + 48), (unsigned __int16 *)(v71 + 72), 5293);
    *(_DWORD *)(*(_QWORD *)(v71 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      v72 = AVrfInitializeVerifier(0, 0, 0, 1, v116, 0LL);
      v95 = v72;
      if ( v72 >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v71 + 152) + 56LL) = 9;
        v72 = v95;
      }
    }
    else
    {
      v96 = 0;
      v72 = LdrpInitializeGraphRecurse(*(__int64 **)(v71 + 152), 0LL, &v96);
      v95 = v72;
    }
    if ( v72 < 0 )
      return v72;
  }
  LdrpDropLastInProgressCount();
  if ( (unsigned int)Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline() && !LdrpIsSecureProcess )
    RtlInitializeProcessorFeaturesBitMap();
  if ( UseWOW64 )
  {
    if ( v108 )
    {
      NtClose(v108);
      v108 = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v103 )
    {
      NtClose(v103);
      v103 = 0LL;
    }
    result = LdrpLoadWow64((const void **)&v109);
    v95 = result;
    if ( result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      g_LdrpWow64LdrpInitialize(v115);
LABEL_269:
      if ( v108 )
        NtClose(v108);
      if ( v103 )
        NtClose(v103);
      cpu_check_features();
      if ( (g_SymCryptFlags & 1) == 0 )
      {
        SymCryptDetectCpuFeaturesByCpuid();
        _InterlockedOr(&g_SymCryptFlags, 1u);
        v100 = 6750216;
        v88 = "v103.8.1__2025-05-30T21:27:08+00:00_769e0a3_2025-05-30T22:24:34";
        for ( i = aV1038120250530[0]; i; i = *v88 )
        {
          LOBYTE(v100) = i;
          ++v88;
        }
        g_SymCryptCpuFeaturesPresentCheck = ~g_SymCryptCpuFeaturesNotPresent;
      }
      return 0;
    }
    return result;
  }
  LdrpInitializeCfgScpHelpers();
  LdrpSchedulerSharedDataListHeadLock = 0LL;
  qword_1801D49F8 = (__int64)&LdrpSchedulerSharedDataListHead;
  LdrpSchedulerSharedDataListHead = (__int64)&LdrpSchedulerSharedDataListHead;
  LdrpAllocateSchedulerSharedData();
  v73 = v125;
  LdrpAcquireSchedulerSharedDataSlot(v125, v74, v75, v76, Format);
  if ( UseCOR )
  {
    result = LdrpCorInitialize(&v126);
    v95 = result;
    if ( result < 0 )
      return result;
    if ( v65 )
    {
      result = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      v95 = result;
      if ( result < 0 )
        return result;
    }
    if ( (v73->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v115 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  v77 = LdrpInitializeTls();
  v95 = v77;
  if ( v77 < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      7297,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing TLS slots failed with status 0x%08lx\n",
      v77);
    return v95;
  }
  if ( *(_BYTE *)(LdrpNtdllHotPatchContext + 12) )
    LdrpLogEtwHotPatchStatus(
      (unsigned __int16 *)&v119,
      LdrpNtDllDataTableEntry,
      0LL,
      *(_DWORD *)(LdrpNtdllHotPatchContext + 8),
      0);
  if ( v126 )
  {
    v97 = 0;
    v78 = LdrpInitializeGraphRecurse(*(__int64 **)(v126 + 152), 0LL, &v97);
    v95 = v78;
    if ( v78 < 0 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrinit.c",
        7334,
        (__int64)"LdrpInitializeProcess",
        0,
        "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
        v78);
      return v95;
    }
  }
  v79 = LdrpInitializeImportRedirection();
  v95 = v79;
  if ( v79 < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      7350,
      (__int64)"LdrpInitializeProcess",
      0,
      "Loading of import redirection module failed with status 0x%08x\n",
      v79);
    return v95;
  }
  if ( (unsigned __int16)(*(_WORD *)(v67 + 92) - 2) <= 1u )
  {
    v80 = LdrpInitializeKernel32Functions(&v120);
    v95 = v80;
    if ( v80 < 0 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrinit.c",
        7372,
        (__int64)"LdrpInitializeProcess",
        0,
        "Calling LdrpInitializeKernel32Functions failed with status 0x%08lx\n",
        v80);
      return v95;
    }
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v81 = v127;
  if ( v127 && *(_DWORD *)(v127 + 528) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    LdrpInitShimEngine(v81);
  }
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    RtlpForceCSDebugInfoCreation = 1;
  v82 = v113;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    *(_DWORD *)(v113 + 1036) = 1;
  LdrpEnableParallelLoading(*(_DWORD *)(v82 + 1036));
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  *v149 = 0;
  if ( v65 )
  {
    v83 = LdrpCorProcessImports(LdrpImageEntry);
LABEL_251:
    v95 = v83;
    v85 = v83;
    goto LABEL_252;
  }
  LdrpThreadTokenSetMainThreadToken();
  v148 |= 1u;
  LdrpMapAndSnapDependency((__int64)&v146, v84);
  LdrpDrainWorkQueue(1);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  v85 = v95;
  if ( v95 >= 0 )
  {
    v83 = LdrpPrepareModuleForExecution(LdrpImageEntry, (__int64)v149);
    goto LABEL_251;
  }
LABEL_252:
  if ( v85 < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      7611,
      (__int64)"LdrpInitializeProcess",
      0,
      "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
      v85);
    return v95;
  }
  LdrInitState = 2;
  result = LdrpInitializePatchData();
  v95 = result;
  if ( result >= 0 )
  {
    if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
      LdrpDoDebuggerBreak();
    LdrpDropLastInProgressCount();
    if ( !Kernel32ThreadInitThunkFunction
      || (result = Kernel32ThreadInitThunkFunction(1LL, 0LL, 0LL), v95 = result, result >= 0)
      && (result = LdrpInitializePerUserWindowsDirectory(v120), v95 = result, result >= 0) )
    {
      LdrpProcessInitContextRecord = v115;
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      v98[0] = 0;
      v95 = LdrpInitializeGraphRecurse(*(__int64 **)(LdrpImageEntry + 152), (__int64)v149, v98);
      LdrpReleaseLoaderLock(v86, 9, v95);
      LdrpFreeLoadContextOfNode(*(_QWORD *)(LdrpImageEntry + 152), v149);
      LdrpDropLastInProgressCount();
      LdrpProcessInitContextRecord = 0LL;
      LdrpReleaseDllPath(v150);
      if ( v95 < 0 )
      {
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrinit.c",
          7759,
          (__int64)"LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          v95);
        return v95;
      }
      LdrpInitializeSmtDelayedSleep();
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v135[0] = 72LL;
        v135[1] = 1LL;
        v136 = 0LL;
        v137 = 0LL;
        v138 = 0LL;
        v139 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)v135, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(1u, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v135);
      }
      if ( g_ShimsEnabled
        && !((unsigned __int8 (__fastcall *)(__int128 *, __int64))(__ROR8__(
                                                                     g_pfnSE_InstallAfterInit,
                                                                     64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
              &v107,
              v81) )
      {
        g_ShimsEnabled = 0;
        LdrUnloadDll(g_pShimEngineModule);
        g_pShimEngineModule = 0LL;
      }
      v87 = *(void (**)(void))(ProcessEnvironmentBlock + 560);
      if ( v87 )
        v87();
      goto LABEL_269;
    }
  }
  return result;
}
