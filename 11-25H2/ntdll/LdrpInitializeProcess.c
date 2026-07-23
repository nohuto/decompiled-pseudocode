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

int __fastcall LdrpInitializeProcess(__int64 a1, void *a2)
{
  int v2; // r12d
  int v4; // r15d
  struct _TEB *v5; // r13
  __int64 ProcessEnvironmentBlock; // rdi
  bool v7; // cc
  __int64 v8; // rcx
  wchar_t *v9; // rdx
  unsigned __int16 Length; // r8
  PIMAGE_NT_HEADERS v11; // r14
  __int64 v12; // rcx
  int result; // eax
  _QWORD *v14; // rax
  unsigned int SizeOfImage; // ebx
  unsigned __int64 v16; // rax
  bool v17; // zf
  char v18; // al
  int v19; // eax
  int WowTebOffset; // ecx
  _BYTE *v21; // rax
  PRTL_USER_PROCESS_PARAMETERS v22; // r13
  _DWORD *Config; // r15
  char v24; // al
  unsigned __int64 v25; // r14
  void *v26; // r12
  int DefaultThreadpoolThreadMaximum; // r14d
  __int64 v28; // r13
  const WCHAR *NtSystemRoot; // rax
  unsigned __int16 v30; // r14
  wchar_t *Heap; // rax
  SIZE_T v32; // r14
  int v33; // edx
  NTSTATUS v34; // eax
  NTSTATUS v35; // eax
  wchar_t *v36; // r15
  _UNICODE_STRING v37; // xmm1
  _WORD *v38; // xmm0_8
  wchar_t *v39; // r14
  PWSTR v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  char v43; // r12
  unsigned __int64 v44; // r14
  __int64 v45; // rdx
  SIZE_T v46; // r15
  unsigned __int16 v47; // dx
  __int64 v48; // r8
  _WORD *v49; // rcx
  _WORD *v50; // rax
  __int16 v51; // dx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rcx
  int inited; // eax
  char *ModuleEntry; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // eax
  char v61; // r12
  int v62; // eax
  PIMAGE_NT_HEADERS v63; // r13
  __int64 v64; // rdx
  __int64 v65; // r8
  char *v66; // rax
  __int64 v67; // r14
  int v68; // ecx
  struct _TEB *v69; // r14
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  __int64 v77; // r15
  __int64 v78; // rcx
  int v79; // eax
  int v80; // ecx
  __int64 v81; // rcx
  void (*v82)(void); // rax
  const char *v83; // rcx
  char i; // al
  ULONG BufferSize[2]; // [rsp+20h] [rbp-408h]
  PULONG ReturnedLength; // [rsp+28h] [rbp-400h]
  PULONG ReturnedLengtha; // [rsp+28h] [rbp-400h]
  PULONG ReturnedLengthb; // [rsp+28h] [rbp-400h]
  _UNICODE_STRING *ReturnedLengthc; // [rsp+28h] [rbp-400h]
  __int64 v90; // [rsp+30h] [rbp-3F8h]
  int v91; // [rsp+50h] [rbp-3D8h] BYREF
  char v92; // [rsp+54h] [rbp-3D4h] BYREF
  char v93; // [rsp+55h] [rbp-3D3h] BYREF
  char v94[2]; // [rsp+56h] [rbp-3D2h] BYREF
  int v95; // [rsp+58h] [rbp-3D0h]
  int v96; // [rsp+5Ch] [rbp-3CCh]
  __int64 v97; // [rsp+60h] [rbp-3C8h] BYREF
  _UNICODE_STRING v98; // [rsp+68h] [rbp-3C0h] BYREF
  HANDLE v99; // [rsp+78h] [rbp-3B0h] BYREF
  unsigned int Buffer; // [rsp+80h] [rbp-3A8h] BYREF
  int v101; // [rsp+84h] [rbp-3A4h] BYREF
  ULONG v102; // [rsp+88h] [rbp-3A0h] BYREF
  _UNICODE_STRING SubKey; // [rsp+90h] [rbp-398h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-388h] BYREF
  _UNICODE_STRING Destination; // [rsp+A8h] [rbp-380h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-368h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+D0h] [rbp-358h] BYREF
  __m128i ImagePathName; // [rsp+E0h] [rbp-348h] BYREF
  __int64 v109; // [rsp+F0h] [rbp-338h]
  HANDLE LinkHandle; // [rsp+F8h] [rbp-330h] BYREF
  __int64 v111; // [rsp+100h] [rbp-328h]
  PVOID BaseOfImage; // [rsp+108h] [rbp-320h]
  ULONG Size[4]; // [rsp+110h] [rbp-318h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+120h] [rbp-308h] BYREF
  __m128i v115; // [rsp+130h] [rbp-2F8h] BYREF
  PVOID ProcedureAddress; // [rsp+140h] [rbp-2E8h] BYREF
  PIMAGE_NT_HEADERS v117; // [rsp+148h] [rbp-2E0h] BYREF
  __int64 v118; // [rsp+150h] [rbp-2D8h]
  __int64 SystemInformation; // [rsp+158h] [rbp-2D0h] BYREF
  PIMAGE_NT_HEADERS v120; // [rsp+160h] [rbp-2C8h] BYREF
  struct _TEB *v121; // [rsp+168h] [rbp-2C0h]
  __int64 **v122; // [rsp+170h] [rbp-2B8h] BYREF
  __int64 v123; // [rsp+178h] [rbp-2B0h]
  _QWORD v124[2]; // [rsp+180h] [rbp-2A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+190h] [rbp-298h] BYREF
  __int128 v126; // [rsp+1C0h] [rbp-268h] BYREF
  __int64 v127; // [rsp+1D0h] [rbp-258h]
  _QWORD v128[3]; // [rsp+1D8h] [rbp-250h] BYREF
  _QWORD v129[2]; // [rsp+1F0h] [rbp-238h] BYREF
  __int128 v130; // [rsp+200h] [rbp-228h]
  __int128 v131; // [rsp+210h] [rbp-218h]
  __int128 v132; // [rsp+220h] [rbp-208h]
  __int64 v133; // [rsp+230h] [rbp-1F8h]
  PS_MITIGATION_OPTIONS_MAP MitigationOptionsMap; // [rsp+240h] [rbp-1E8h]
  PS_MITIGATION_OPTIONS_MAP v135; // [rsp+260h] [rbp-1C8h]
  PS_MITIGATION_OPTIONS_MAP v136; // [rsp+280h] [rbp-1A8h]
  __m128i v137; // [rsp+2A0h] [rbp-188h] BYREF
  __int64 *v138; // [rsp+2B0h] [rbp-178h]
  int v139; // [rsp+2C0h] [rbp-168h]
  int *v140; // [rsp+2C8h] [rbp-160h]
  __int64 v141[16]; // [rsp+370h] [rbp-B8h] BYREF

  BaseOfImage = a2;
  v111 = a1;
  UnicodeString = 0LL;
  ImagePathName = 0LL;
  v115 = 0LL;
  Destination = 0LL;
  v4 = 0;
  OutHeaders = 0LL;
  DestinationString = 0LL;
  SubKey = 0LL;
  ProcedureAddress = 0LL;
  Size[0] = 0;
  v117 = 0LL;
  LinkHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v124[0] = 1441812LL;
  v124[1] = L"\\KnownDlls";
  Handle = 0LL;
  v99 = 0LL;
  v122 = 0LL;
  v97 = 0LL;
  v118 = 0LL;
  memset_thunk_772440563353939046(&v137, 0, 0xD0uLL);
  v98 = 0LL;
  memset_thunk_772440563353939046(v141, 0, 0x80uLL);
  SystemInformation = 0LL;
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v5 = NtCurrentTeb();
  v121 = v5;
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
  memset_thunk_772440563353939046(&RtlpFcProcessManager, 0, 0x118uLL);
  memset_thunk_772440563353939046(&unk_1801D5D00, 0, 0xD0uLL);
  xmmword_1801D5CE8 = 0LL;
  qword_1801D5CF8 = 0LL;
  memset_thunk_772440563353939046(&unk_1801D5D00, 0, 0x60uLL);
  memset_thunk_772440563353939046(&unk_1801D5D60, 0, 0x60uLL);
  stru_1801D5DD0.Value = 0LL;
  SRWLock.0 = 0LL;
  qword_1801D5DF0 = (__int64)&qword_1801D5DE8;
  qword_1801D5DE8 = (__int64)&qword_1801D5DE8;
  RtlpInitializeNonVolatileFlush();
  v8 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v9 = (wchar_t *)(*(_QWORD *)(v8 + 104) + v8);
  if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
    v9 = *(wchar_t **)(v8 + 104);
  SubKey.Buffer = v9;
  SubKey.Length = *(_WORD *)(v8 + 96);
  Length = SubKey.Length;
  SubKey.MaximumLength = SubKey.Length + 2;
  if ( SubKey.Length >= 8u && *v9 == 92 && v9[1] == 63 && v9[2] == 63 && v9[3] == 92 )
  {
    SubKey.Length -= 8;
    SubKey.MaximumLength = Length - 6;
    SubKey.Buffer = v9 + 4;
    *(_WORD *)(v8 + 96) -= 8;
    *(_WORD *)(v8 + 98) -= 8;
    *(_QWORD *)(v8 + 104) += 8LL;
  }
  v96 = 1;
  UseCOR = 0;
  LOBYTE(v2) = 0;
  v95 = v2;
  v101 = 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(ProcessEnvironmentBlock + 16), 0LL, &OutHeaders);
  v11 = OutHeaders;
  LdrpAppHeaders = (__int64)OutHeaders;
  v12 = 32LL;
  if ( LdrpIsSecureProcess && (OutHeaders->FileHeader.Characteristics & 0x20) == 0 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      5581,
      (__int64)"LdrpInitializeProcess",
      0,
      "Secure processes must be large address aware\n");
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
  v120 = 0LL;
  RtlImageNtHeaderEx(3u, a2, 0LL, &v120);
  SizeOfImage = v120->OptionalHeader.SizeOfImage;
  RtlInsertInvertedFunctionTable(a2, SizeOfImage);
  v126 = 0LL;
  v127 = 0LL;
  RtlpxLookupFunctionTable(a2, (char **)&v126);
  LdrProtectMrdata(0);
  xmmword_1801E9430 = v126;
  qword_1801E9440 = v127;
  LODWORD(qword_1801E9440) = SizeOfImage;
  RtlRemoveInvertedFunctionTable((__int64)a2);
  LdrProtectMrdata(1);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  MitigationOptionsMap = LdrSystemDllInitBlock.MitigationOptionsMap;
  v16 = (_mm_srli_si128(*(__m128i *)LdrSystemDllInitBlock.MitigationOptionsMap.Map, 8).m128i_u64[0] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = (_BYTE)v16 == 1;
  if ( (_BYTE)v16 == 1 || (v135 = LdrSystemDllInitBlock.MitigationOptionsMap, v17 = (_BYTE)v16 == 3, v18 = 0, v17) )
    v18 = 1;
  LdrpAuditIntegrityContinuity = v18;
  v19 = LdrpInitializeExecutionOptions(
          (ULONG_PTR)&SubKey,
          ProcessEnvironmentBlock,
          (__int64)a2,
          &Handle,
          &v99,
          (__int64)&v97);
  v91 = v19;
  if ( v19 < 0 )
  {
    LODWORD(ReturnedLength) = v5->ClientId.UniqueProcess;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      5730,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      ReturnedLength,
      v19);
    return v91;
  }
  if ( LdrpImageExpansionMitigation == 2 )
    LdrpIsHotPatchingEnabled = 0;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
    5788,
    (__int64)"LdrpInitializeProcess",
    2,
    "Initializing process 0x%p\n",
    v5->ClientId.UniqueProcess);
  v123 = 0LL;
  WowTebOffset = v5->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v11 )
  {
    if ( v11->OptionalHeader.Magic == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v2) = 1;
      v95 = v2;
      v4 = 1;
      result = LdrpCorFixupImage(*(PVOID *)(ProcessEnvironmentBlock + 16));
      if ( result < 0 )
        return result;
    }
  }
  if ( !UseWOW64 && !UseCOR )
  {
    v21 = RtlImageDirectoryEntryToData(*(PVOID *)(ProcessEnvironmentBlock + 16), 1u, 0xEu, Size);
    if ( v21 )
    {
      UseCOR = 1;
      v2 = (unsigned __int8)v2;
      if ( (v21[16] & 1) != 0 )
        v2 = 1;
      v95 = v2;
    }
  }
  LdrpSystemDllBase = BaseOfImage;
  if ( !UseWOW64 )
    v123 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  RtlpTimeout = *(LARGE_INTEGER *)(ProcessEnvironmentBlock + 192);
  v22 = RtlNormalizeProcessParams(*(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32));
  ImagePathName = (__m128i)v22->ImagePathName;
  if ( UseWOW64 || UseCOR && v4 )
    Config = 0LL;
  else
    Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfigEx(*(PVOID *)(ProcessEnvironmentBlock + 16));
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
  v91 = result;
  if ( result < 0 )
    return result;
  BitMapHeader.SizeOfBitMap = 64;
  BitMapHeader.Buffer = (unsigned int *)(ProcessEnvironmentBlock + 128);
  dword_1801D0210 = 1024;
  qword_1801D0218 = ProcessEnvironmentBlock + 576;
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &BitMapHeader;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &dword_1801D0210;
  *(_BYTE *)BitMapHeader.Buffer |= 1u;
  memset_thunk_772440563353939046(&xmmword_1801CFE38, 0, 0x58uLL);
  RtlpFlsContext.0 = 0LL;
  xmmword_1801CFE38 = 0LL;
  xmmword_1801CFE48 = 0LL;
  xmmword_1801CFE58 = 0LL;
  xmmword_1801CFE68 = 0LL;
  qword_1801CFE80 = (__int64)&qword_1801CFE78;
  qword_1801CFE78 = (__int64)&qword_1801CFE78;
  if ( UseWOW64 )
    RtlSetBits(&BitMapHeader, 0, 0x13u);
  RtlSetBits(&BitMapHeader, 0x10u, 1u);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || (v24 = LdrpShouldCreateStackTraceDb) != 0 )
  {
    Buffer = 24;
    if ( LdrQueryImageFileExecutionOptions(&SubKey, L"StackTraceDatabaseSizeInMb", 4u, &Buffer, 4u, 0LL) >= 0
      && Buffer >= 0x18 )
    {
      if ( Buffer <= 0x80 )
        v25 = Buffer << 20;
      else
        v25 = 0x8000000LL;
    }
    else
    {
      v25 = 25165824LL;
    }
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      6037,
      (__int64)"LdrpInitializeProcess",
      2,
      "Stack trace database size is %Id Mb\n",
      v25 >> 20);
    v128[0] = 0LL;
    v128[1] = 0LL;
    v128[2] = v25;
    RtlControlStackTraceDataBase(0LL, 24LL, v128);
    v24 = LdrpShouldCreateStackTraceDb;
  }
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || v24 )
    RtlpForceCSDebugInfoCreation = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    RtlpForceCSDebugInfoCreation = 1;
    RtlpForceCSToUseEvents = 1;
  }
  result = RtlInitializeCriticalSectionEx(&FastPebLock, 0, 0);
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &FastPebLock;
  result = RtlInitializeHeapManager(&SubKey);
  if ( result < 0 )
    return result;
  v136 = LdrSystemDllInitBlock.MitigationOptionsMap;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  if ( (int)LdrpInitializeProcessHeap(
              (__int64)Config,
              (__int64)OutHeaders,
              (__int64)v22,
              (__int64 *)(ProcessEnvironmentBlock + 48)) < 0 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      6110,
      (__int64)"LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    return -1073741801;
  }
  v26 = *(void **)(ProcessEnvironmentBlock + 48);
  RtlpSrwLockAllowImplicitUpgrade = Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline() == 0;
  if ( (unsigned int)Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline() )
    LdrpInitializeSnapsBuffer();
  RtlInitializeCriticalSectionEx(&LdrpEnclaveListLock, 0, 0);
  qword_1801D62C8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack(v121);
  LdrpHeap = v26;
  if ( ((unsigned __int8)&EtwpFreeRegistrationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  EtwpFreeRegistrationList = 0LL;
  PrivateLoggerNotificationEntry = 0LL;
  if ( NtQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL) >= 0 )
    RtlpHypervisorSharedUserVa = SystemInformation;
  NtdllBaseTag = RtlCreateTagHeap(v26, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
  result = TpInitializePackage();
  if ( result < 0 )
    return result;
  if ( v22->DefaultThreadpoolCpuSetMaskCount )
    TpSetDefaultPoolCpuSets(v22->DefaultThreadpoolCpuSetMasks);
  DefaultThreadpoolThreadMaximum = v22->DefaultThreadpoolThreadMaximum;
  if ( DefaultThreadpoolThreadMaximum )
  {
    RtlAcquireSRWLockExclusive(&TppPoolpGlobalPoolLock);
    TppPoolpGlobalPoolMaxThreadsOverride = DefaultThreadpoolThreadMaximum;
    RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  }
  if ( !UseWOW64 && !LdrpIsSecureProcess )
    LdrpEnableUMGLTracingStateSync();
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CE6F0);
  EtwEventRegister(&PrivateLoggerNotificationGuid, 0LL, 0LL, &g_hPrivLoggerNotificationProvider);
  EtwEventRegister(&UserDiagnosticGuid, UserDiagnosticProviderCallback, 0LL, &g_hUserDiagnosticProvider);
  RtlInitializeHeapLogging();
  result = RtlpInitEnvironmentBlock();
  if ( result < 0 )
    return result;
  result = RtlpInitParameterBlock();
  if ( result < 0 )
    return result;
  v28 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v109 = v28;
  ImagePathName = *(__m128i *)(v28 + 96);
  SubKey.Buffer = (wchar_t *)_mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( (Handle || v99)
    && (int)RtlQueryApplicationKeyOption(v99, Handle, L"DebugProcessHeapOnly", 4LL, (__int64)&v101, 4, v90, 0LL) >= 0
    && dword_1801CE578
    && v101 )
  {
    dword_1801CE578 = 0;
    *(_DWORD *)RtlpDebugPageHeapTable &= ~0x400u;
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx(&DestinationString, NtSystemRoot);
  v30 = DestinationString.Length + 40;
  Heap = (wchar_t *)RtlAllocateHeap(v26, 0, (unsigned int)DestinationString.Length + 38 + 2LL);
  if ( !Heap )
    return -1073741801;
  Destination.MaximumLength = v30;
  Destination.Buffer = Heap;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &SlashSystem32SlashString);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) == 0 )
  {
    v102 = 0;
    v32 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v124;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LdrProtectMrdata(0);
    v91 = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    LdrProtectMrdata(1);
    if ( v91 < 0 )
    {
      LODWORD(v90) = v91;
      ReturnedLengthb = (PULONG)v124;
      v33 = 6405;
LABEL_113:
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        v33,
        (__int64)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        ReturnedLengthb,
        v90);
      return v91;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180176DC0;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v34 = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    v91 = v34;
    if ( v34 < 0 )
    {
      LODWORD(v90) = v34;
      ReturnedLengthb = (PULONG)&unk_180176DC0;
      v33 = 6428;
      goto LABEL_113;
    }
    while ( 1 )
    {
      v36 = (wchar_t *)RtlAllocateHeap(v26, 0, v32);
      if ( !v36 )
        return -1073741801;
      LdrpKnownDllPath.Length = 0;
      LdrpKnownDllPath.MaximumLength = v32;
      LdrpKnownDllPath.Buffer = v36;
      v35 = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &v102);
      v91 = v35;
      if ( v35 >= 0 )
        break;
      if ( v35 != -1073741789 )
      {
        LODWORD(ReturnedLengtha) = v35;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          6463,
          (__int64)"LdrpInitializeProcess",
          0,
          "Querying the known DLL directory link object failed with status 0x%08lx\n",
          ReturnedLengtha);
        return v91;
      }
      RtlFreeHeap(v26, 0, v36);
      v32 = v102;
    }
    NtClose(LinkHandle);
  }
  if ( UseWOW64 || LdrpIsSecureProcess )
  {
    UnicodeString = DestinationString;
  }
  else
  {
    v37 = *(_UNICODE_STRING *)(v28 + 56);
    UnicodeString = v37;
    v38 = (_WORD *)_mm_srli_si128((__m128i)v37, 8).m128i_u64[0];
    if ( !v38 || !(unsigned __int16)_mm_cvtsi128_si32((__m128i)v37) || !*v38 )
    {
      v39 = (wchar_t *)RtlAllocateHeap(v26, 0, 8uLL);
      UnicodeString.Buffer = v39;
      if ( !v39 )
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          6515,
          (__int64)"LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        return -1073741801;
      }
      v96 = 0;
      v40 = RtlGetNtSystemRoot();
      *(_DWORD *)v39 = *(_DWORD *)v40;
      v39[2] = v40[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  LdrpInitializePolicy();
  v43 = 0;
  v44 = Destination.Length;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    v43 = LdrpIncludeAlternateForwarders(v41, Destination.Length, v42);
    v44 = 2 * v45 + 22;
    if ( v43 )
      v44 = v45 + 2 * v45 + 52;
  }
  v46 = v44;
  if ( (LdrpPolicyBits & 1) == 0 )
  {
    v46 = v44 + 2 * (DestinationString.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v28 + 80) = 0;
  }
  v98.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v46);
  if ( !v98.Buffer )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      6608,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    return -1073741801;
  }
  v98.Length = 0;
  v98.MaximumLength = v46;
  RtlAppendUnicodeStringToString(&v98, &Destination);
  v47 = v98.Length;
  v98.Buffer[((unsigned __int64)v98.Length >> 1) - 1] = 59;
  RtlpSystem32Dirs = (__int128)v98;
  LdrpSystem32 = (__int128)v98;
  LOWORD(LdrpSystem32) = v47 - 2;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v43 )
    {
      RtlAppendUnicodeStringToString(&v98, &Destination);
      RtlAppendUnicodeToString(&v98, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString(&v98, &Destination);
    RtlAppendUnicodeToString(&v98, L"forwarders;");
  }
  if ( v46 > v44 )
  {
    RtlAppendUnicodeStringToString(&v98, &DestinationString);
    RtlAppendUnicodeToString(&v98, L"\\system;");
    RtlAppendUnicodeStringToString(&v98, &DestinationString);
    RtlAppendUnicodeToString(&v98, L";");
    RtlpSystemDirs = v98;
  }
  if ( (unsigned int)(LdrpIllegalCWDDevices - 1) <= 0xFFFFFFFD )
    LdrpCheckAppDirType(&ImagePathName);
  result = LdrpInitializeNtdllDataTableEntry(BaseOfImage);
  if ( result < 0 )
    return result;
  v48 = 0LL;
  v49 = (_WORD *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  if ( v49 )
  {
    while ( (unsigned __int64)v49 > ImagePathName.m128i_i64[1] )
    {
      v50 = v49--;
      if ( *v49 == 92 )
      {
        v48 = (__int64)v50;
        break;
      }
    }
  }
  if ( v48 )
  {
    v51 = ImagePathName.m128i_i16[4] + ImagePathName.m128i_i16[0] - v48;
    v115.m128i_i16[0] = v51;
    if ( ImagePathName.m128i_u16[1] - (unsigned __int64)ImagePathName.m128i_u16[0] >= 2 )
      v51 += 2;
    v115.m128i_i16[1] = v51;
    v115.m128i_i64[1] = v48;
  }
  else
  {
    v115 = ImagePathName;
  }
  if ( *(int *)(LdrpNtdllHotPatchContext + 8) < 0 && LdrpIsHotPatchingEnabled )
    __fastfail(0x45u);
  if ( *(_QWORD *)LdrpNtdllHotPatchContext )
  {
    result = LdrpInitializeNtdllDataTableEntry(*(PVOID *)LdrpNtdllHotPatchContext);
    if ( result < 0 )
      return result;
  }
  RtlInitializeHistoryTable();
  v52 = (_QWORD *)(LdrpNtDllDataTableEntry + 32);
  v53 = qword_1801D4970;
  if ( *(__int64 **)(qword_1801D4970 + 8) != &qword_1801D4970 )
    goto LABEL_277;
  *v52 = qword_1801D4970;
  v52[1] = &qword_1801D4970;
  *(_QWORD *)(v53 + 8) = v52;
  qword_1801D4970 = (__int64)v52;
  if ( !v118 )
    goto LABEL_169;
  v54 = (_QWORD *)(v118 + 32);
  if ( (__int64 *)v52[1] != &qword_1801D4970 )
LABEL_277:
    __fastfail(3u);
  *v54 = v52;
  v54[1] = &qword_1801D4970;
  v52[1] = v54;
  qword_1801D4970 = (__int64)v54;
LABEL_169:
  inited = LdrpInitParallelLoadingSupport();
  v91 = inited;
  if ( inited < 0 )
  {
    LODWORD(ReturnedLengtha) = inited;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      6839,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to initialize Parallel loader, st = 0x%x\n",
      ReturnedLengtha);
    return v91;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (__int64)v141);
  v138 = v141;
  v139 = 512;
  v137 = ImagePathName;
  v140 = &v91;
  ModuleEntry = LdrpAllocateModuleEntry((__int64)&v137);
  if ( !ModuleEntry )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      6860,
      (__int64)"LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the executable failed\n");
    return -1073741801;
  }
  LdrpImageEntry = (__int64)ModuleEntry;
  v57 = 2LL;
  do
  {
    v58 = LdrpImageEntry;
    *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 24LL) = -1;
    --v57;
  }
  while ( v57 );
  *(_WORD *)(**(_QWORD **)(v58 + 152) - 52LL) = -1;
  v59 = LdrpImageEntry;
  *(__m128i *)(LdrpImageEntry + 72) = ImagePathName;
  v60 = *(_DWORD *)(v59 + 104) | 4;
  *(_DWORD *)(v59 + 104) = v60;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x10) != 0 )
  {
    v60 |= 1u;
    *(_DWORD *)(v59 + 104) = v60;
  }
  v61 = v95;
  if ( UseCOR )
  {
    v62 = v60 | 0x400000;
    *(_DWORD *)(v59 + 104) = v62;
    if ( v61 )
      *(_DWORD *)(v59 + 104) = v62 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v59 + 248) = 0LL;
  *(__m128i *)(v59 + 88) = v115;
  v63 = OutHeaders;
  if ( OutHeaders->OptionalHeader.ImageBase != *(_QWORD *)(ProcessEnvironmentBlock + 16) && !v61 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(*(PVOID *)(ProcessEnvironmentBlock + 16));
    v91 = result;
    if ( result < 0 )
      return result;
    v59 = LdrpImageEntry;
  }
  *(_QWORD *)(v59 + 48) = *(_QWORD *)(ProcessEnvironmentBlock + 16);
  LdrpInsertDataTableEntry(v59);
  ReturnedLengthc = (_UNICODE_STRING *)(LdrpImageEntry + 88);
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
    6952,
    (__int64)"LdrpInitializeProcess",
    2,
    "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n");
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), (unsigned __int16 *)(LdrpImageEntry + 72), 5285);
  LdrpInsertModuleToIndex(LdrpImageEntry, v63);
  result = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  v91 = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v91 = RtlpInitCurrentDir((__int64)&UnicodeString, v64, v65);
  if ( v91 < 0 )
  {
    ReturnedLengthc = &UnicodeString;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      6989,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n");
  }
  if ( !v96 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v66 = LdrpAllocateModuleEntry(0LL);
    v67 = (__int64)v66;
    if ( !v66 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        7014,
        (__int64)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
      return -1073741801;
    }
    *(_DWORD *)(*((_QWORD *)v66 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v66 + 19) - 52LL) = -1;
    *((_DWORD *)v66 + 26) |= *(_DWORD *)(v97 + 104);
    *((_QWORD *)v66 + 31) = *(_QWORD *)(v97 + 248);
    *((_WORD *)v66 + 55) = 0;
    *(_OWORD *)(v66 + 72) = *(_OWORD *)(v97 + 72);
    *(_OWORD *)(v66 + 88) = *(_OWORD *)(v97 + 88);
    *((_DWORD *)v66 + 32) = *(_DWORD *)(v97 + 128);
    *((_DWORD *)v66 + 72) = *(_DWORD *)(v97 + 288);
    *((_QWORD *)v66 + 6) = *(_QWORD *)(v97 + 48);
    LdrpInsertDataTableEntry((__int64)v66);
    LdrpLogDllState(*(_QWORD *)(v67 + 48), (unsigned __int16 *)(v67 + 72), 5285);
    result = RtlImageNtHeaderEx(3u, *(PVOID *)(v67 + 48), 0LL, &v117);
    v91 = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex(v67, v117);
    result = LdrpProcessMappedModule(v67, 0, 1);
    v91 = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v67 + 56) = *(_QWORD *)(v97 + 56);
    LdrpLogDllState(*(_QWORD *)(v67 + 48), (unsigned __int16 *)(v67 + 72), 5293);
    *(_DWORD *)(*(_QWORD *)(v67 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      v68 = AVrfInitializeVerifier(0LL, 0LL, 0LL, 1LL, BaseOfImage, 0LL);
      v91 = v68;
      if ( v68 >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v67 + 152) + 56LL) = 9;
        v68 = v91;
      }
    }
    else
    {
      v92 = 0;
      v68 = LdrpInitializeGraphRecurse(*(__int64 **)(v67 + 152), 0LL, &v92);
      v91 = v68;
    }
    if ( v68 < 0 )
      return v68;
  }
  LdrpDropLastInProgressCount();
  if ( (unsigned int)Feature_AdditionalProcessorFeatures__private_IsEnabledDeviceUsageNoInline() && !LdrpIsSecureProcess )
    RtlInitializeProcessorFeaturesBitMap();
  if ( UseWOW64 )
  {
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
      if ( LdrpLargePageDllKeyHandle )
      {
        NtClose(LdrpLargePageDllKeyHandle);
        LdrpLargePageDllKeyHandle = 0LL;
      }
    }
    if ( v99 )
    {
      NtClose(v99);
      v99 = 0LL;
    }
    result = LdrpLoadWow64(&Destination);
    v91 = result;
    if ( result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      g_LdrpWow64LdrpInitialize(v111);
LABEL_267:
      if ( Handle )
        NtClose(Handle);
      if ( v99 )
        NtClose(v99);
      cpu_check_features();
      if ( (g_SymCryptFlags & 1) == 0 )
      {
        SymCryptDetectCpuFeaturesByCpuid();
        _InterlockedOr(&g_SymCryptFlags, 1u);
        v96 = 6750216;
        v83 = "v103.8.1__2025-05-30T21:27:08+00:00_769e0a3_2025-05-30T22:24:34";
        for ( i = aV1038120250530[0]; i; i = *v83 )
        {
          LOBYTE(v96) = i;
          ++v83;
        }
        g_SymCryptCpuFeaturesPresentCheck = ~g_SymCryptCpuFeaturesNotPresent;
      }
      return 0;
    }
    return result;
  }
  LdrpInitializeCfgScpHelpers();
  LdrpSchedulerSharedDataListHeadLock.0 = 0LL;
  qword_1801D49F8 = (__int64)&LdrpSchedulerSharedDataListHead;
  LdrpSchedulerSharedDataListHead = (__int64)&LdrpSchedulerSharedDataListHead;
  LdrpAllocateSchedulerSharedData();
  v69 = v121;
  LdrpAcquireSchedulerSharedDataSlot(v121, v70, v71, v72, *(_QWORD *)BufferSize);
  if ( UseCOR )
  {
    result = LdrpCorInitialize((char **)&v122);
    v91 = result;
    if ( result < 0 )
      return result;
    if ( v61 )
    {
      result = LdrpCorValidateImage(*(void **)(ProcessEnvironmentBlock + 16));
      v91 = result;
      if ( result < 0 )
        return result;
    }
    if ( (v69->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v111 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  v73 = LdrpInitializeTls();
  v91 = v73;
  if ( v73 < 0 )
  {
    LODWORD(ReturnedLengthc) = v73;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7297,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing TLS slots failed with status 0x%08lx\n",
      ReturnedLengthc);
    return v91;
  }
  if ( *(_BYTE *)(LdrpNtdllHotPatchContext + 12) )
    LdrpLogEtwHotPatchStatus(
      (unsigned __int16 *)&v115,
      LdrpNtDllDataTableEntry,
      0LL,
      *(_DWORD *)(LdrpNtdllHotPatchContext + 8),
      0);
  if ( v122 )
  {
    v93 = 0;
    v74 = LdrpInitializeGraphRecurse(v122[19], 0LL, &v93);
    v91 = v74;
    if ( v74 < 0 )
    {
      LODWORD(ReturnedLengthc) = v74;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        7334,
        (__int64)"LdrpInitializeProcess",
        0,
        "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
        ReturnedLengthc);
      return v91;
    }
  }
  v75 = LdrpInitializeImportRedirection();
  v91 = v75;
  if ( v75 < 0 )
  {
    LODWORD(ReturnedLengthc) = v75;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7350,
      (__int64)"LdrpInitializeProcess",
      0,
      "Loading of import redirection module failed with status 0x%08x\n",
      ReturnedLengthc);
    return v91;
  }
  if ( (unsigned __int16)(v63->OptionalHeader.Subsystem - 2) <= 1u )
  {
    v76 = LdrpInitializeKernel32Functions(&ProcedureAddress);
    v91 = v76;
    if ( v76 < 0 )
    {
      LODWORD(ReturnedLengthc) = v76;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        7372,
        (__int64)"LdrpInitializeProcess",
        0,
        "Calling LdrpInitializeKernel32Functions failed with status 0x%08lx\n",
        ReturnedLengthc);
      return v91;
    }
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v77 = v123;
  if ( v123 && *(_DWORD *)(v123 + 528) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    LdrpInitShimEngine(v77);
  }
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    RtlpForceCSDebugInfoCreation = 1;
  v78 = v109;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    *(_DWORD *)(v109 + 1036) = 1;
  LdrpEnableParallelLoading(*(_DWORD *)(v78 + 1036));
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  *v140 = 0;
  if ( v61 )
  {
    v79 = LdrpCorProcessImports(LdrpImageEntry);
LABEL_249:
    v91 = v79;
    v80 = v79;
    goto LABEL_250;
  }
  LdrpThreadTokenSetMainThreadToken();
  v139 |= 1u;
  LdrpMapAndSnapDependency((__int64)&v137);
  LdrpDrainWorkQueue(1);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  v80 = v91;
  if ( v91 >= 0 )
  {
    v79 = LdrpPrepareModuleForExecution(LdrpImageEntry, (__int64)v140);
    goto LABEL_249;
  }
LABEL_250:
  if ( v80 < 0 )
  {
    LODWORD(ReturnedLengthc) = v80;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7611,
      (__int64)"LdrpInitializeProcess",
      0,
      "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
      ReturnedLengthc);
    return v91;
  }
  LdrInitState = 2;
  result = LdrpInitializePatchData();
  v91 = result;
  if ( result >= 0 )
  {
    if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
      LdrpDoDebuggerBreak();
    LdrpDropLastInProgressCount();
    if ( !Kernel32ThreadInitThunkFunction
      || (result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))Kernel32ThreadInitThunkFunction)(1LL, 0LL, 0LL),
          v91 = result,
          result >= 0)
      && (result = LdrpInitializePerUserWindowsDirectory(ProcedureAddress), v91 = result, result >= 0) )
    {
      LdrpProcessInitContextRecord = v111;
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      v94[0] = 0;
      v91 = LdrpInitializeGraphRecurse(*(__int64 **)(LdrpImageEntry + 152), (__int64)v140, v94);
      LdrpReleaseLoaderLock(v81, 9, v91);
      LdrpFreeLoadContextOfNode(*(_QWORD *)(LdrpImageEntry + 152), v140);
      LdrpDropLastInProgressCount();
      LdrpProcessInitContextRecord = 0LL;
      LdrpReleaseDllPath(v141);
      if ( v91 < 0 )
      {
        LODWORD(ReturnedLengthc) = v91;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          7759,
          (__int64)"LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          ReturnedLengthc);
        return v91;
      }
      LdrpInitializeSmtDelayedSleep();
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v129[0] = 72LL;
        v129[1] = 1LL;
        v130 = 0LL;
        v131 = 0LL;
        v132 = 0LL;
        v133 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)v129, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(1u, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v129);
      }
      if ( g_ShimsEnabled
        && !((unsigned __int8 (__fastcall *)(_UNICODE_STRING *, __int64))(__ROR8__(
                                                                            g_pfnSE_InstallAfterInit,
                                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
              &SubKey,
              v77) )
      {
        g_ShimsEnabled = 0;
        LdrUnloadDll(g_pShimEngineModule);
        g_pShimEngineModule = 0LL;
      }
      v82 = *(void (**)(void))(ProcessEnvironmentBlock + 560);
      if ( v82 )
        v82();
      goto LABEL_267;
    }
  }
  return result;
}
