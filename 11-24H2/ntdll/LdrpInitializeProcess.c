/*
 * XREFs of LdrpInitializeProcess @ 0x1800AEF54
 * Callers:
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1800044C0 (RtlInitUnicodeStringEx.c)
 *     LdrpInitializeNlsInfo @ 0x1800095A8 (LdrpInitializeNlsInfo.c)
 *     TpInitializePackage @ 0x180022E0C (TpInitializePackage.c)
 *     RtlCreateTagHeap @ 0x180022EE0 (RtlCreateTagHeap.c)
 *     LdrpInitializeProcessHeap @ 0x18002385C (LdrpInitializeProcessHeap.c)
 *     LdrpInitializeTls @ 0x1800266A4 (LdrpInitializeTls.c)
 *     RtlSetHeapInformation @ 0x18002BE70 (RtlSetHeapInformation.c)
 *     LdrpEnableUMGLTracingStateSync @ 0x18002C434 (LdrpEnableUMGLTracingStateSync.c)
 *     RtlInitializeCriticalSectionEx @ 0x180030BC0 (RtlInitializeCriticalSectionEx.c)
 *     RtlEncodePointer @ 0x1800314C0 (RtlEncodePointer.c)
 *     LdrpPrepareModuleForExecution @ 0x1800315A4 (LdrpPrepareModuleForExecution.c)
 *     LdrpReleaseLoaderLock @ 0x180031810 (LdrpReleaseLoaderLock.c)
 *     LdrpInitializeGraphRecurse @ 0x1800324A0 (LdrpInitializeGraphRecurse.c)
 *     RtlSetBits @ 0x180032C60 (RtlSetBits.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180033134 (RtlRemoveInvertedFunctionTable.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     RtlInsertInvertedFunctionTable @ 0x180033C34 (RtlInsertInvertedFunctionTable.c)
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180036070 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003BF70 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpAllocateModuleEntry @ 0x18003D080 (LdrpAllocateModuleEntry.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     LdrpCallTlsInitializers @ 0x18003F930 (LdrpCallTlsInitializers.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     LdrpAcquireLoaderLock @ 0x180049720 (LdrpAcquireLoaderLock.c)
 *     EtwEventRegister @ 0x180049E00 (EtwEventRegister.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     RtlAppendUnicodeToString @ 0x18007F450 (RtlAppendUnicodeToString.c)
 *     RtlGetNtSystemRoot @ 0x18007F510 (RtlGetNtSystemRoot.c)
 *     RtlFreeAnsiString @ 0x180081430 (RtlFreeAnsiString.c)
 *     LdrpEnableParallelLoading @ 0x180085804 (LdrpEnableParallelLoading.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18008CC80 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpLogDllState @ 0x18008D5E0 (LdrpLogDllState.c)
 *     LdrpProcessMappedModule @ 0x18008FFE0 (LdrpProcessMappedModule.c)
 *     LdrpInsertDataTableEntry @ 0x180090B20 (LdrpInsertDataTableEntry.c)
 *     LdrpCorProcessImports @ 0x180090F80 (LdrpCorProcessImports.c)
 *     LdrpLogEtwHotPatchStatus @ 0x180091078 (LdrpLogEtwHotPatchStatus.c)
 *     RtlAppendUnicodeStringToString @ 0x180092390 (RtlAppendUnicodeStringToString.c)
 *     RtlpInitCurrentDir @ 0x180094888 (RtlpInitCurrentDir.c)
 *     SbObtainTraceHandle @ 0x1800A2E50 (SbObtainTraceHandle.c)
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 *     RtlQueryApplicationKeyOption @ 0x1800A5448 (RtlQueryApplicationKeyOption.c)
 *     LdrQueryImageFileExecutionOptions @ 0x1800A5530 (LdrQueryImageFileExecutionOptions.c)
 *     LdrpDrainWorkQueue @ 0x1800AB680 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800ACA84 (LdrpDropLastInProgressCount.c)
 *     LdrpCorInitialize @ 0x1800ACFF8 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x1800AD1EC (LdrpLoadWow64.c)
 *     LdrpInitShimEngine @ 0x1800AD3A8 (LdrpInitShimEngine.c)
 *     LdrpInitializeDllPath @ 0x1800AD900 (LdrpInitializeDllPath.c)
 *     LdrInitializePerThreadRng @ 0x1800AEE78 (LdrInitializePerThreadRng.c)
 *     LdrpInitializeKernel32Functions @ 0x1800C6FD8 (LdrpInitializeKernel32Functions.c)
 *     LdrpFreeLoadContextOfNode @ 0x1800D4388 (LdrpFreeLoadContextOfNode.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E04DC (LdrpProtectAndRelocateImage.c)
 *     RtlControlStackTraceDataBase @ 0x1800E0DE4 (RtlControlStackTraceDataBase.c)
 *     RtlpInitializeThreadActivationContextStack @ 0x1800E8D90 (RtlpInitializeThreadActivationContextStack.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800EB3E0 (LdrpThreadTokenSetMainThreadToken.c)
 *     LdrpAcquireSchedulerSharedDataSlot @ 0x1800EBDA4 (LdrpAcquireSchedulerSharedDataSlot.c)
 *     RtlInitializeHistoryTable @ 0x1800ECACC (RtlInitializeHistoryTable.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800EF5B0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpInsertModuleToIndex @ 0x1800EF830 (LdrpInsertModuleToIndex.c)
 *     LdrpCaptureCriticalThunks @ 0x1800F0054 (LdrpCaptureCriticalThunks.c)
 *     RtlpInitParameterBlock @ 0x1800F0D78 (RtlpInitParameterBlock.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x1800F1640 (LdrpInitializeSmtDelayedSleep.c)
 *     RtlpInitDeferredCriticalSection @ 0x1800F2B90 (RtlpInitDeferredCriticalSection.c)
 *     LdrpInitializePolicy @ 0x1800F30E0 (LdrpInitializePolicy.c)
 *     LdrpThreadTokenUnsetMainThreadToken @ 0x1800F3FB8 (LdrpThreadTokenUnsetMainThreadToken.c)
 *     LdrpAllocateSchedulerSharedData @ 0x1800F4700 (LdrpAllocateSchedulerSharedData.c)
 *     LdrpInitializeImportRedirection @ 0x1800F56E8 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800F5EA4 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrpInitializeSnapsBuffer @ 0x1800F62DC (LdrpInitializeSnapsBuffer.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800F6404 (RtlpInitializeNonVolatileFlush.c)
 *     LdrpInitializePatchData @ 0x1800F649C (LdrpInitializePatchData.c)
 *     RtlNormalizeProcessParams @ 0x1800F6660 (RtlNormalizeProcessParams.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180102188 (LdrpInitializeCfgScpHelpers.c)
 *     RtlInitializeHeapLogging @ 0x180102270 (RtlInitializeHeapLogging.c)
 *     LdrpInitParallelLoadingSupport @ 0x180104C78 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCorFixupImage @ 0x180104EE0 (LdrpCorFixupImage.c)
 *     LdrpCorValidateImage @ 0x180108CF4 (LdrpCorValidateImage.c)
 *     _cpu_check_features @ 0x180109AC0 (_cpu_check_features.c)
 *     LdrpCheckAppDirType @ 0x180113030 (LdrpCheckAppDirType.c)
 *     AVrfInitializeVerifier @ 0x180113994 (AVrfInitializeVerifier.c)
 *     RtlInitializeHeapManager @ 0x180114300 (RtlInitializeHeapManager.c)
 *     RtlpInitEnvironmentBlock @ 0x180119204 (RtlpInitEnvironmentBlock.c)
 *     Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline @ 0x18011B080 (Feature_Servicing_LoaderSnapsBuffer__private_IsEnabledDeviceUsageNoInline.c)
 *     LdrpIncludeAlternateForwarders @ 0x18011CDA4 (LdrpIncludeAlternateForwarders.c)
 *     TpSetDefaultPoolCpuSets @ 0x18011D1BC (TpSetDefaultPoolCpuSets.c)
 *     LdrpDoDebuggerBreak @ 0x18011D788 (LdrpDoDebuggerBreak.c)
 *     RtlInitializeExceptionLog @ 0x18011D7CC (RtlInitializeExceptionLog.c)
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline @ 0x180138C60 (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline.c)
 *     RtlInitializeProcessorFeaturesBitMap @ 0x1801454C8 (RtlInitializeProcessorFeaturesBitMap.c)
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x180149944 (LdrImageDirectoryEntryToLoadConfigEx.c)
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x180159C8C (SymCryptDetectCpuFeaturesByCpuid.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtQuerySystemInformation @ 0x180160710 (NtQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x180160B50 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x180162740 (ZwOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x180162DA0 (NtQuerySymbolicLinkObject.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180170498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
  char *v64; // rax
  __int64 v65; // r14
  int v66; // ecx
  struct _TEB *v67; // r14
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  __int64 v75; // r15
  __int64 v76; // rcx
  int v77; // eax
  int v78; // ecx
  __int64 v79; // rcx
  void (*v80)(void); // rax
  const char *v81; // rcx
  char i; // al
  ULONG BufferSize[2]; // [rsp+20h] [rbp-408h]
  PULONG ReturnedLength; // [rsp+28h] [rbp-400h]
  PULONG ReturnedLengtha; // [rsp+28h] [rbp-400h]
  PULONG ReturnedLengthb; // [rsp+28h] [rbp-400h]
  _UNICODE_STRING *ReturnedLengthc; // [rsp+28h] [rbp-400h]
  __int64 v88; // [rsp+30h] [rbp-3F8h]
  int v89; // [rsp+50h] [rbp-3D8h] BYREF
  char v90; // [rsp+54h] [rbp-3D4h] BYREF
  char v91; // [rsp+55h] [rbp-3D3h] BYREF
  char v92[2]; // [rsp+56h] [rbp-3D2h] BYREF
  int v93; // [rsp+58h] [rbp-3D0h]
  int v94; // [rsp+5Ch] [rbp-3CCh]
  __int64 v95; // [rsp+60h] [rbp-3C8h] BYREF
  _UNICODE_STRING v96; // [rsp+68h] [rbp-3C0h] BYREF
  HANDLE v97; // [rsp+78h] [rbp-3B0h] BYREF
  unsigned int Buffer; // [rsp+80h] [rbp-3A8h] BYREF
  int v99; // [rsp+84h] [rbp-3A4h] BYREF
  ULONG v100; // [rsp+88h] [rbp-3A0h] BYREF
  _UNICODE_STRING SubKey; // [rsp+90h] [rbp-398h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-388h] BYREF
  _UNICODE_STRING Destination; // [rsp+A8h] [rbp-380h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-368h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+D0h] [rbp-358h] BYREF
  __m128i ImagePathName; // [rsp+E0h] [rbp-348h] BYREF
  __int64 v107; // [rsp+F0h] [rbp-338h]
  HANDLE LinkHandle; // [rsp+F8h] [rbp-330h] BYREF
  __int64 v109; // [rsp+100h] [rbp-328h]
  PVOID BaseOfImage; // [rsp+108h] [rbp-320h]
  ULONG Size[4]; // [rsp+110h] [rbp-318h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+120h] [rbp-308h] BYREF
  __m128i v113; // [rsp+130h] [rbp-2F8h] BYREF
  PVOID ProcedureAddress; // [rsp+140h] [rbp-2E8h] BYREF
  PIMAGE_NT_HEADERS v115; // [rsp+148h] [rbp-2E0h] BYREF
  __int64 v116; // [rsp+150h] [rbp-2D8h]
  __int64 SystemInformation; // [rsp+158h] [rbp-2D0h] BYREF
  PIMAGE_NT_HEADERS v118; // [rsp+160h] [rbp-2C8h] BYREF
  struct _TEB *v119; // [rsp+168h] [rbp-2C0h]
  __int64 **v120; // [rsp+170h] [rbp-2B8h] BYREF
  __int64 v121; // [rsp+178h] [rbp-2B0h]
  _QWORD v122[2]; // [rsp+180h] [rbp-2A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+190h] [rbp-298h] BYREF
  __int128 v124; // [rsp+1C0h] [rbp-268h] BYREF
  __int64 v125; // [rsp+1D0h] [rbp-258h]
  _QWORD v126[3]; // [rsp+1D8h] [rbp-250h] BYREF
  _QWORD v127[2]; // [rsp+1F0h] [rbp-238h] BYREF
  __int128 v128; // [rsp+200h] [rbp-228h]
  __int128 v129; // [rsp+210h] [rbp-218h]
  __int128 v130; // [rsp+220h] [rbp-208h]
  __int64 v131; // [rsp+230h] [rbp-1F8h]
  PS_MITIGATION_OPTIONS_MAP MitigationOptionsMap; // [rsp+240h] [rbp-1E8h]
  PS_MITIGATION_OPTIONS_MAP v133; // [rsp+260h] [rbp-1C8h]
  PS_MITIGATION_OPTIONS_MAP v134; // [rsp+280h] [rbp-1A8h]
  __m128i v135; // [rsp+2A0h] [rbp-188h] BYREF
  __int64 *v136; // [rsp+2B0h] [rbp-178h]
  int v137; // [rsp+2C0h] [rbp-168h]
  int *v138; // [rsp+2C8h] [rbp-160h]
  __int64 v139[16]; // [rsp+370h] [rbp-B8h] BYREF

  BaseOfImage = a2;
  v109 = a1;
  UnicodeString = 0LL;
  ImagePathName = 0LL;
  v113 = 0LL;
  Destination = 0LL;
  v4 = 0;
  OutHeaders = 0LL;
  DestinationString = 0LL;
  SubKey = 0LL;
  ProcedureAddress = 0LL;
  Size[0] = 0;
  v115 = 0LL;
  LinkHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v122[0] = 1441812LL;
  v122[1] = L"\\KnownDlls";
  Handle = 0LL;
  v97 = 0LL;
  v120 = 0LL;
  v95 = 0LL;
  v116 = 0LL;
  memset_thunk_772440563353939046(&v135, 0, 0xD0uLL);
  v96 = 0LL;
  memset_thunk_772440563353939046(v139, 0, 0x80uLL);
  SystemInformation = 0LL;
  RtlpUnhandledExceptionFilter = RtlEncodePointer(0LL);
  v5 = NtCurrentTeb();
  v119 = v5;
  ProcessEnvironmentBlock = (__int64)v5->ProcessEnvironmentBlock;
  LdrInitializePerThreadRng((__int64)v5);
  PebLdr = 88;
  byte_1801D18C4 = 1;
  qword_1801D18D8 = (__int64)&qword_1801D18D0;
  qword_1801D18D0 = (__int64)&qword_1801D18D0;
  qword_1801D18E8 = (__int64)&qword_1801D18E0;
  qword_1801D18E0 = (__int64)&qword_1801D18E0;
  qword_1801D18F8 = (__int64)&qword_1801D18F0;
  qword_1801D18F0 = (__int64)&qword_1801D18F0;
  byte_1801D1908 = 0;
  qword_1801D1910 = 0LL;
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
  memset_thunk_772440563353939046(&unk_1801D2CA0, 0, 0xD0uLL);
  xmmword_1801D2C88 = 0LL;
  qword_1801D2C98 = 0LL;
  memset_thunk_772440563353939046(&unk_1801D2CA0, 0, 0x60uLL);
  memset_thunk_772440563353939046(&unk_1801D2D00, 0, 0x60uLL);
  stru_1801D2D70.Value = 0LL;
  SRWLock.0 = 0LL;
  qword_1801D2D90 = (__int64)&qword_1801D2D88;
  qword_1801D2D88 = (__int64)&qword_1801D2D88;
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
  v94 = 1;
  UseCOR = 0;
  LOBYTE(v2) = 0;
  v93 = v2;
  v99 = 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(ProcessEnvironmentBlock + 16), 0LL, &OutHeaders);
  v11 = OutHeaders;
  LdrpAppHeaders = (__int64)OutHeaders;
  v12 = 32LL;
  if ( LdrpIsSecureProcess && (OutHeaders->FileHeader.Characteristics & 0x20) == 0 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      5579,
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
  v118 = 0LL;
  RtlImageNtHeaderEx(3u, a2, 0LL, &v118);
  SizeOfImage = v118->OptionalHeader.SizeOfImage;
  RtlInsertInvertedFunctionTable(a2, SizeOfImage);
  v124 = 0LL;
  v125 = 0LL;
  RtlpxLookupFunctionTable(a2, (char **)&v124);
  LdrProtectMrdata(0);
  xmmword_1801E6440 = v124;
  qword_1801E6450 = v125;
  LODWORD(qword_1801E6450) = SizeOfImage;
  RtlRemoveInvertedFunctionTable((__int64)a2);
  LdrProtectMrdata(1);
  LdrpCaptureCriticalThunks();
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  MitigationOptionsMap = LdrSystemDllInitBlock.MitigationOptionsMap;
  v16 = (_mm_srli_si128(*(__m128i *)LdrSystemDllInitBlock.MitigationOptionsMap.Map, 8).m128i_u64[0] >> 4) & 3;
  LdrpEnforceIntegrityContinuity = (_BYTE)v16 == 1;
  if ( (_BYTE)v16 == 1 || (v133 = LdrSystemDllInitBlock.MitigationOptionsMap, v17 = (_BYTE)v16 == 3, v18 = 0, v17) )
    v18 = 1;
  LdrpAuditIntegrityContinuity = v18;
  v19 = LdrpInitializeExecutionOptions(
          (ULONG_PTR)&SubKey,
          ProcessEnvironmentBlock,
          (__int64)a2,
          &Handle,
          &v97,
          (__int64)&v95);
  v89 = v19;
  if ( v19 < 0 )
  {
    LODWORD(ReturnedLength) = v5->ClientId.UniqueProcess;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      5728,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      ReturnedLength,
      v19);
    return v89;
  }
  if ( LdrpImageExpansionMitigation == 2 )
    LdrpIsHotPatchingEnabled = 0;
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    LdrpDebugFlags |= 1u;
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
    5786,
    (__int64)"LdrpInitializeProcess",
    2,
    "Initializing process 0x%p\n",
    v5->ClientId.UniqueProcess);
  v121 = 0LL;
  WowTebOffset = v5->WowTebOffset;
  UseWOW64 = WowTebOffset > 0;
  if ( v11 )
  {
    if ( v11->OptionalHeader.Magic == 267 && WowTebOffset <= 0 )
    {
      UseCOR = 1;
      LOBYTE(v2) = 1;
      v93 = v2;
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
      v93 = v2;
    }
  }
  LdrpSystemDllBase = BaseOfImage;
  if ( !UseWOW64 )
    v121 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
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
  v89 = result;
  if ( result < 0 )
    return result;
  BitMapHeader.SizeOfBitMap = 64;
  BitMapHeader.Buffer = (unsigned int *)(ProcessEnvironmentBlock + 128);
  dword_1801CD210 = 1024;
  qword_1801CD218 = ProcessEnvironmentBlock + 576;
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &BitMapHeader;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &dword_1801CD210;
  *(_BYTE *)BitMapHeader.Buffer |= 1u;
  memset_thunk_772440563353939046(&xmmword_1801CCE38, 0, 0x58uLL);
  RtlpFlsContext.0 = 0LL;
  xmmword_1801CCE38 = 0LL;
  xmmword_1801CCE48 = 0LL;
  xmmword_1801CCE58 = 0LL;
  xmmword_1801CCE68 = 0LL;
  qword_1801CCE80 = (__int64)&qword_1801CCE78;
  qword_1801CCE78 = (__int64)&qword_1801CCE78;
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
      6035,
      (__int64)"LdrpInitializeProcess",
      2,
      "Stack trace database size is %Id Mb\n",
      v25 >> 20);
    v126[0] = 0LL;
    v126[1] = 0LL;
    v126[2] = v25;
    RtlControlStackTraceDataBase(0LL, 24LL, v126);
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
  v134 = LdrSystemDllInitBlock.MitigationOptionsMap;
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
      6108,
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
  qword_1801D3268 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  RtlpInitializeThreadActivationContextStack(v119);
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
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CB6F0);
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
  v107 = v28;
  ImagePathName = *(__m128i *)(v28 + 96);
  SubKey.Buffer = (wchar_t *)_mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( (Handle || v97)
    && (int)RtlQueryApplicationKeyOption(v97, Handle, L"DebugProcessHeapOnly", 4LL, (__int64)&v99, 4, v88, 0LL) >= 0
    && dword_1801CB578
    && v99 )
  {
    dword_1801CB578 = 0;
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
    v100 = 0;
    v32 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v122;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LdrProtectMrdata(0);
    v89 = ZwOpenDirectoryObject(&LdrpKnownDllDirectoryHandle, 3u, &ObjectAttributes);
    LdrProtectMrdata(1);
    if ( v89 < 0 )
    {
      LODWORD(v88) = v89;
      ReturnedLengthb = (PULONG)v122;
      v33 = 6403;
LABEL_113:
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        v33,
        (__int64)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        ReturnedLengthb,
        v88);
      return v89;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = LdrpKnownDllDirectoryHandle;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180173D50;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v34 = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    v89 = v34;
    if ( v34 < 0 )
    {
      LODWORD(v88) = v34;
      ReturnedLengthb = (PULONG)&unk_180173D50;
      v33 = 6426;
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
      v35 = NtQuerySymbolicLinkObject(LinkHandle, &LdrpKnownDllPath, &v100);
      v89 = v35;
      if ( v35 >= 0 )
        break;
      if ( v35 != -1073741789 )
      {
        LODWORD(ReturnedLengtha) = v35;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          6461,
          (__int64)"LdrpInitializeProcess",
          0,
          "Querying the known DLL directory link object failed with status 0x%08lx\n",
          ReturnedLengtha);
        return v89;
      }
      RtlFreeHeap(v26, 0, v36);
      v32 = v100;
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
          6513,
          (__int64)"LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        return -1073741801;
      }
      v94 = 0;
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
  v96.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v46);
  if ( !v96.Buffer )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      6606,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    return -1073741801;
  }
  v96.Length = 0;
  v96.MaximumLength = v46;
  RtlAppendUnicodeStringToString(&v96, &Destination);
  v47 = v96.Length;
  v96.Buffer[((unsigned __int64)v96.Length >> 1) - 1] = 59;
  RtlpSystem32Dirs = (__int128)v96;
  LdrpSystem32 = (__int128)v96;
  LOWORD(LdrpSystem32) = v47 - 2;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    if ( v43 )
    {
      RtlAppendUnicodeStringToString(&v96, &Destination);
      RtlAppendUnicodeToString(&v96, L"forwarders\\alt;");
    }
    RtlAppendUnicodeStringToString(&v96, &Destination);
    RtlAppendUnicodeToString(&v96, L"forwarders;");
  }
  if ( v46 > v44 )
  {
    RtlAppendUnicodeStringToString(&v96, &DestinationString);
    RtlAppendUnicodeToString(&v96, L"\\system;");
    RtlAppendUnicodeStringToString(&v96, &DestinationString);
    RtlAppendUnicodeToString(&v96, L";");
    RtlpSystemDirs = v96;
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
    v113.m128i_i16[0] = v51;
    if ( ImagePathName.m128i_u16[1] - (unsigned __int64)ImagePathName.m128i_u16[0] >= 2 )
      v51 += 2;
    v113.m128i_i16[1] = v51;
    v113.m128i_i64[1] = v48;
  }
  else
  {
    v113 = ImagePathName;
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
  v53 = qword_1801D18F0;
  if ( *(__int64 **)(qword_1801D18F0 + 8) != &qword_1801D18F0 )
    goto LABEL_276;
  *v52 = qword_1801D18F0;
  v52[1] = &qword_1801D18F0;
  *(_QWORD *)(v53 + 8) = v52;
  qword_1801D18F0 = (__int64)v52;
  if ( !v116 )
    goto LABEL_169;
  v54 = (_QWORD *)(v116 + 32);
  if ( (__int64 *)v52[1] != &qword_1801D18F0 )
LABEL_276:
    __fastfail(3u);
  *v54 = v52;
  v54[1] = &qword_1801D18F0;
  v52[1] = v54;
  qword_1801D18F0 = (__int64)v54;
LABEL_169:
  inited = LdrpInitParallelLoadingSupport();
  v89 = inited;
  if ( inited < 0 )
  {
    LODWORD(ReturnedLengtha) = inited;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      6837,
      (__int64)"LdrpInitializeProcess",
      0,
      "Failed to initialize Parallel loader, st = 0x%x\n",
      ReturnedLengtha);
    return v89;
  }
  LdrpDrainWorkQueue(0);
  LdrpInitializeDllPath(0LL, 0LL, (__int64)v139);
  v136 = v139;
  v137 = 512;
  v135 = ImagePathName;
  v138 = &v89;
  ModuleEntry = LdrpAllocateModuleEntry((__int64)&v135);
  if ( !ModuleEntry )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      6858,
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
  v61 = v93;
  if ( UseCOR )
  {
    v62 = v60 | 0x400000;
    *(_DWORD *)(v59 + 104) = v62;
    if ( v61 )
      *(_DWORD *)(v59 + 104) = v62 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v59 + 248) = 0LL;
  *(__m128i *)(v59 + 88) = v113;
  v63 = OutHeaders;
  if ( OutHeaders->OptionalHeader.ImageBase != *(_QWORD *)(ProcessEnvironmentBlock + 16) && !v61 && !UseWOW64 )
  {
    result = LdrpProtectAndRelocateImage(*(PVOID *)(ProcessEnvironmentBlock + 16));
    v89 = result;
    if ( result < 0 )
      return result;
    v59 = LdrpImageEntry;
  }
  *(_QWORD *)(v59 + 48) = *(_QWORD *)(ProcessEnvironmentBlock + 16);
  LdrpInsertDataTableEntry(v59);
  ReturnedLengthc = (_UNICODE_STRING *)(LdrpImageEntry + 88);
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
    6950,
    (__int64)"LdrpInitializeProcess",
    2,
    "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n");
  LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), (unsigned __int16 *)(LdrpImageEntry + 72), 5285);
  LdrpInsertModuleToIndex(LdrpImageEntry, v63);
  result = LdrpProcessMappedModule(LdrpImageEntry, 0, UseWOW64 == 0);
  v89 = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 9;
  v89 = RtlpInitCurrentDir(&UnicodeString.Length);
  if ( v89 < 0 )
  {
    ReturnedLengthc = &UnicodeString;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      6987,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n");
  }
  if ( !v94 )
    RtlFreeAnsiString(&UnicodeString);
  if ( AvrfAppVerifierMode )
  {
    v64 = LdrpAllocateModuleEntry(0LL);
    v65 = (__int64)v64;
    if ( !v64 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        7012,
        (__int64)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
      return -1073741801;
    }
    *(_DWORD *)(*((_QWORD *)v64 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v64 + 19) - 52LL) = -1;
    *((_DWORD *)v64 + 26) |= *(_DWORD *)(v95 + 104);
    *((_QWORD *)v64 + 31) = *(_QWORD *)(v95 + 248);
    *((_WORD *)v64 + 55) = 0;
    *(_OWORD *)(v64 + 72) = *(_OWORD *)(v95 + 72);
    *(_OWORD *)(v64 + 88) = *(_OWORD *)(v95 + 88);
    *((_DWORD *)v64 + 32) = *(_DWORD *)(v95 + 128);
    *((_DWORD *)v64 + 72) = *(_DWORD *)(v95 + 288);
    *((_QWORD *)v64 + 6) = *(_QWORD *)(v95 + 48);
    LdrpInsertDataTableEntry((__int64)v64);
    LdrpLogDllState(*(_QWORD *)(v65 + 48), (unsigned __int16 *)(v65 + 72), 5285);
    result = RtlImageNtHeaderEx(3u, *(PVOID *)(v65 + 48), 0LL, &v115);
    v89 = result;
    if ( result < 0 )
      return result;
    LdrpInsertModuleToIndex(v65, v115);
    result = LdrpProcessMappedModule(v65, 0, 1);
    v89 = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v65 + 56) = *(_QWORD *)(v95 + 56);
    LdrpLogDllState(*(_QWORD *)(v65 + 48), (unsigned __int16 *)(v65 + 72), 5293);
    *(_DWORD *)(*(_QWORD *)(v65 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (AvrfAppVerifierMode & 2) != 0 )
    {
      v66 = AVrfInitializeVerifier(0LL, 0LL, 0LL, 1LL, BaseOfImage, 0LL);
      v89 = v66;
      if ( v66 >= 0 && (AvrfAppVerifierMode & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v65 + 152) + 56LL) = 9;
        v66 = v89;
      }
    }
    else
    {
      v90 = 0;
      v66 = LdrpInitializeGraphRecurse(*(__int64 **)(v65 + 152), 0LL, &v90);
      v89 = v66;
    }
    if ( v66 < 0 )
      return v66;
  }
  LdrpDropLastInProgressCount();
  if ( !LdrpIsSecureProcess )
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
    if ( v97 )
    {
      NtClose(v97);
      v97 = 0LL;
    }
    result = LdrpLoadWow64(&Destination);
    v89 = result;
    if ( result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        LdrpDoDebuggerBreak();
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      g_LdrpWow64LdrpInitialize(v109);
LABEL_266:
      if ( Handle )
        NtClose(Handle);
      if ( v97 )
        NtClose(v97);
      cpu_check_features();
      if ( (g_SymCryptFlags & 1) == 0 )
      {
        SymCryptDetectCpuFeaturesByCpuid();
        _InterlockedOr(&g_SymCryptFlags, 1u);
        v94 = 6750220;
        v81 = "v103.12.0__2026-05-07T00:16:03+00:00_0df2f18_2026-05-07T21:50:22";
        for ( i = aV1031202026050[0]; i; i = *v81 )
        {
          LOBYTE(v94) = i;
          ++v81;
        }
        g_SymCryptCpuFeaturesPresentCheck = ~g_SymCryptCpuFeaturesNotPresent;
      }
      return 0;
    }
    return result;
  }
  LdrpInitializeCfgScpHelpers();
  LdrpSchedulerSharedDataListHeadLock.0 = 0LL;
  qword_1801D1978 = (__int64)&LdrpSchedulerSharedDataListHead;
  LdrpSchedulerSharedDataListHead = (__int64)&LdrpSchedulerSharedDataListHead;
  LdrpAllocateSchedulerSharedData();
  v67 = v119;
  LdrpAcquireSchedulerSharedDataSlot(v119, v68, v69, v70, *(_QWORD *)BufferSize);
  if ( UseCOR )
  {
    result = LdrpCorInitialize((char **)&v120);
    v89 = result;
    if ( result < 0 )
      return result;
    if ( v61 )
    {
      result = LdrpCorValidateImage(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      v89 = result;
      if ( result < 0 )
        return result;
    }
    if ( (v67->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v109 + 128) = __ROR8__(LdrpCorExeMainRoutine, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  v71 = LdrpInitializeTls();
  v89 = v71;
  if ( v71 < 0 )
  {
    LODWORD(ReturnedLengthc) = v71;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7292,
      (__int64)"LdrpInitializeProcess",
      0,
      "Initializing TLS slots failed with status 0x%08lx\n",
      ReturnedLengthc);
    return v89;
  }
  if ( *(_BYTE *)(LdrpNtdllHotPatchContext + 12) )
    LdrpLogEtwHotPatchStatus(
      (unsigned __int16 *)&v113,
      LdrpNtDllDataTableEntry,
      0LL,
      *(_DWORD *)(LdrpNtdllHotPatchContext + 8),
      0);
  if ( v120 )
  {
    v91 = 0;
    v72 = LdrpInitializeGraphRecurse(v120[19], 0LL, &v91);
    v89 = v72;
    if ( v72 < 0 )
    {
      LODWORD(ReturnedLengthc) = v72;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        7329,
        (__int64)"LdrpInitializeProcess",
        0,
        "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
        ReturnedLengthc);
      return v89;
    }
  }
  v73 = LdrpInitializeImportRedirection();
  v89 = v73;
  if ( v73 < 0 )
  {
    LODWORD(ReturnedLengthc) = v73;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7345,
      (__int64)"LdrpInitializeProcess",
      0,
      "Loading of import redirection module failed with status 0x%08x\n",
      ReturnedLengthc);
    return v89;
  }
  if ( (unsigned __int16)(v63->OptionalHeader.Subsystem - 2) <= 1u )
  {
    v74 = LdrpInitializeKernel32Functions(&ProcedureAddress);
    v89 = v74;
    if ( v74 < 0 )
    {
      LODWORD(ReturnedLengthc) = v74;
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        7367,
        (__int64)"LdrpInitializeProcess",
        0,
        "Calling LdrpInitializeKernel32Functions failed with status 0x%08lx\n",
        ReturnedLengthc);
      return v89;
    }
  }
  LdrpDrainWorkQueue(0);
  SbObtainTraceHandle(0LL);
  v75 = v121;
  if ( v121 && *(_DWORD *)(v121 + 528) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    LdrpInitShimEngine(v75);
  }
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    RtlpForceCSDebugInfoCreation = 1;
  v76 = v107;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
    *(_DWORD *)(v107 + 1036) = 1;
  LdrpEnableParallelLoading(*(_DWORD *)(v76 + 1036));
  LdrInitState = 1;
  *(_DWORD *)(*(_QWORD *)(LdrpImageEntry + 152) + 56LL) = 2;
  *v138 = 0;
  if ( v61 )
  {
    v77 = LdrpCorProcessImports(LdrpImageEntry);
LABEL_248:
    v89 = v77;
    v78 = v77;
    goto LABEL_249;
  }
  LdrpThreadTokenSetMainThreadToken();
  v137 |= 1u;
  LdrpMapAndSnapDependency((__int64)&v135);
  LdrpDrainWorkQueue(1);
  if ( LdrpMainThreadToken )
    LdrpThreadTokenUnsetMainThreadToken();
  v78 = v89;
  if ( v89 >= 0 )
  {
    v77 = LdrpPrepareModuleForExecution(LdrpImageEntry, (__int64)v138);
    goto LABEL_248;
  }
LABEL_249:
  if ( v78 < 0 )
  {
    LODWORD(ReturnedLengthc) = v78;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      7606,
      (__int64)"LdrpInitializeProcess",
      0,
      "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
      ReturnedLengthc);
    return v89;
  }
  LdrInitState = 2;
  result = LdrpInitializePatchData();
  v89 = result;
  if ( result >= 0 )
  {
    if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
      LdrpDoDebuggerBreak();
    LdrpDropLastInProgressCount();
    if ( !Kernel32ThreadInitThunkFunction
      || (result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))Kernel32ThreadInitThunkFunction)(1LL, 0LL, 0LL),
          v89 = result,
          result >= 0)
      && (result = LdrpInitializePerUserWindowsDirectory(ProcedureAddress), v89 = result, result >= 0) )
    {
      LdrpProcessInitContextRecord = v109;
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      v92[0] = 0;
      v89 = LdrpInitializeGraphRecurse(*(__int64 **)(LdrpImageEntry + 152), (__int64)v138, v92);
      LdrpReleaseLoaderLock(v79, 9, v89);
      LdrpFreeLoadContextOfNode(*(_QWORD *)(LdrpImageEntry + 152), v138);
      LdrpDropLastInProgressCount();
      LdrpProcessInitContextRecord = 0LL;
      LdrpReleaseDllPath(v139);
      if ( v89 < 0 )
      {
        LODWORD(ReturnedLengthc) = v89;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          7754,
          (__int64)"LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          ReturnedLengthc);
        return v89;
      }
      LdrpInitializeSmtDelayedSleep();
      if ( *(_WORD *)(LdrpImageEntry + 110) )
      {
        v127[0] = 72LL;
        v127[1] = 1LL;
        v128 = 0LL;
        v129 = 0LL;
        v130 = 0LL;
        v131 = 0LL;
        RtlActivateActivationContextUnsafeFast((__int64)v127, *(_QWORD *)(LdrpImageEntry + 136));
        LdrpCallTlsInitializers(1u, LdrpImageEntry);
        RtlDeactivateActivationContextUnsafeFast((__int64)v127);
      }
      if ( g_ShimsEnabled
        && !((unsigned __int8 (__fastcall *)(_UNICODE_STRING *, __int64))(__ROR8__(
                                                                            g_pfnSE_InstallAfterInit,
                                                                            64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
              &SubKey,
              v75) )
      {
        g_ShimsEnabled = 0;
        LdrUnloadDll(g_pShimEngineModule);
        g_pShimEngineModule = 0LL;
      }
      v80 = *(void (**)(void))(ProcessEnvironmentBlock + 560);
      if ( v80 )
        v80();
      goto LABEL_266;
    }
  }
  return result;
}
