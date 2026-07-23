/*
 * XREFs of InitBootProcessor @ 0x140C0CC88
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402313D4 (VslGetNestedPageProtectionFlags.c)
 *     MiEnumerateSystemImages @ 0x1402BBF00 (MiEnumerateSystemImages.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     KeAdjustInterruptTime @ 0x1404B9764 (KeAdjustInterruptTime.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1404FA0D0 (DbgBreakPointWithStatus.c)
 *     _strupr @ 0x1404FAAD0 (_strupr.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 *     atol @ 0x1404FB4C0 (atol.c)
 *     RtlStringCbCatExA @ 0x140537748 (RtlStringCbCatExA.c)
 *     RtlStringCbCopyExA @ 0x1405377FC (RtlStringCbCopyExA.c)
 *     RtlStringCbPrintfA @ 0x140537878 (RtlStringCbPrintfA.c)
 *     HalInitializeBios @ 0x140539620 (HalInitializeBios.c)
 *     HvlPhase1Initialize @ 0x14057FDE0 (HvlPhase1Initialize.c)
 *     PsInitializeWin32kKernelExports @ 0x1405E1D80 (PsInitializeWin32kKernelExports.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14077E230 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x14077E280 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x14077E5C0 (LdrFindResource_U.c)
 *     RtlNlsInitState @ 0x14077E764 (RtlNlsInitState.c)
 *     RtlpInitializeStackTraceDatabase @ 0x14077F1A8 (RtlpInitializeStackTraceDatabase.c)
 *     EtwInitialize @ 0x1407A65A0 (EtwInitialize.c)
 *     ExpInitLicensing @ 0x1407B9018 (ExpInitLicensing.c)
 *     ExPreInitializeNls @ 0x1407BB72C (ExPreInitializeNls.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFindMessage @ 0x1409B98E0 (RtlFindMessage.c)
 *     HalInitSystem @ 0x140B4D700 (HalInitSystem.c)
 *     KeInitializeXSaveStructures @ 0x140B588FC (KeInitializeXSaveStructures.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     MmInitSystem @ 0x140BE02E8 (MmInitSystem.c)
 *     PsInitSystem @ 0x140BE07F8 (PsInitSystem.c)
 *     VmInitSystem @ 0x140BE0898 (VmInitSystem.c)
 *     ExBurnMemory @ 0x140C0C860 (ExBurnMemory.c)
 *     ExpInitializeBootEnvironment @ 0x140C0C9AC (ExpInitializeBootEnvironment.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140C0CA10 (ExpRevokeBootLoaderPagePrivileges.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140C0DC08 (InitializeDynamicPartitioningPolicy.c)
 *     DbgkInitialize @ 0x140C18074 (DbgkInitialize.c)
 *     InbvDriverInitialize @ 0x140C1C230 (InbvDriverInitialize.c)
 *     PpInitSystem @ 0x140C24784 (PpInitSystem.c)
 *     KeNumaInitialize @ 0x140C28CA4 (KeNumaInitialize.c)
 *     PsInitializeWin32kServiceTable @ 0x140C368CC (PsInitializeWin32kServiceTable.c)
 *     PsInitializeQuotaSystem @ 0x140C37CA8 (PsInitializeQuotaSystem.c)
 *     RtlInitializeExceptionLog @ 0x140C38AF8 (RtlInitializeExceptionLog.c)
 *     SeInitSystem @ 0x140C3BDD8 (SeInitSystem.c)
 *     VerifierInitSystem @ 0x140C3D310 (VerifierInitSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x140C42424 (BootApplicationPersistentDataInitialize.c)
 *     ExComputeTickCountMultiplier @ 0x140C427F4 (ExComputeTickCountMultiplier.c)
 *     ExInitSystem @ 0x140C42854 (ExInitSystem.c)
 *     HeadlessInit @ 0x140C442D4 (HeadlessInit.c)
 *     WheaSelLogInitialize @ 0x140C461E0 (WheaSelLogInitialize.c)
 *     WheaInitializeServices @ 0x140C467B0 (WheaInitializeServices.c)
 *     CmInitSystem0 @ 0x140C4A528 (CmInitSystem0.c)
 *     KeInitializeClock @ 0x140C624A0 (KeInitializeClock.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 */

__int64 __fastcall InitBootProcessor(unsigned int *a1)
{
  ULONG_PTR v2; // rdx
  unsigned int *v3; // rcx
  ULONG_PTR v4; // rax
  char *v5; // rdi
  char *v6; // rax
  char *v7; // rax
  unsigned __int64 v8; // rdx
  ULONG_PTR v9; // rax
  unsigned int *v10; // rdx
  ULONG_PTR v11; // r8
  ULONG_PTR v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  int inited; // eax
  ULONG v21; // r12d
  void *Pool2; // rax
  void *v23; // r15
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // r8
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  size_t v29; // rdx
  const char *v30; // r8
  NTSTRSAFE_PSTR *v31; // r9
  NTSTATUS Message; // eax
  NTSTATUS v33; // eax
  size_t v34; // rdx
  const char *v35; // r8
  NTSTATUS v36; // eax
  NTSTATUS v37; // eax
  NTSTATUS v38; // eax
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  __int64 v41; // rax
  void *v42; // rdi
  PMESSAGE_RESOURCE_ENTRY *MessageEntry; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  int dwFlagsa; // [rsp+30h] [rbp-D8h]
  ULONG ResourceLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  PMESSAGE_RESOURCE_ENTRY v48; // [rsp+40h] [rbp-C8h] BYREF
  size_t DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+60h] [rbp-A8h] BYREF
  PVOID ResourceBuffer; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v52[2]; // [rsp+70h] [rbp-98h] BYREF
  _LDR_RESOURCE_INFO ResourceInfo; // [rsp+80h] [rbp-88h] BYREF
  CHAR SourceString[64]; // [rsp+98h] [rbp-70h] BYREF
  char pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF

  dword_140FD08F4 = -1;
  qword_140FCFE08 = (__int64)&PspTimeZoneStateBuffer;
  dword_140FCFE3C = 259;
  word_140FCFD48 = -535;
  dword_140FCFE38 = 1;
  word_140FCFD88 = -535;
  dword_140FCFE78 = (unsigned __int16)NtBuildNumber;
  v2 = *a1;
  v48 = 0LL;
  ResourceDataEntry = 0LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  if ( __PAIR64__(a1[1], v2) != 10 || a1[2] != 368 )
  {
    v4 = 0LL;
    goto LABEL_84;
  }
  v3 = (unsigned int *)*((_QWORD *)a1 + 30);
  v4 = *v3;
  if ( (_DWORD)v4 != 4400 || v3[746] != 167772176 )
LABEL_84:
    KeBugCheckEx(0x100u, v2, a1[1], a1[2], v4);
  *(_DWORD *)(MmWriteableSharedUserData + 708) = v3[725];
  ExpInitLicensing(PspHostSiloGlobals);
  RtlNlsInitState((__int64)PspHostSiloGlobals);
  if ( (VslGetNestedPageProtectionFlags(0LL) & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges((__int64)a1);
  v5 = (char *)*((_QWORD *)a1 + 27);
  LODWORD(InitializationPhase) = 0;
  if ( v5 )
  {
    strupr(v5);
    v6 = strstr(v5, "BURNMEMORY");
    if ( v6 )
    {
      v7 = strstr(v6, "=");
      if ( v7 )
      {
        v8 = (__int64)atol(v7 + 1) << 8;
        if ( v8 )
          ExBurnMemory((__int64)a1, v8);
      }
    }
    if ( strstr(v5, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v9 = 0LL;
  v10 = (unsigned int *)*((_QWORD *)a1 + 4);
  while ( v10 != a1 + 8 )
  {
    v11 = *((_QWORD *)v10 + 4);
    v12 = *((_QWORD *)v10 + 5);
    if ( v11 < v9 )
      KeBugCheckEx(0x31u, (ULONG_PTR)v10, v11, v12, v9);
    v10 = *(unsigned int **)v10;
    v9 = v11 + v12;
  }
  v13 = *((_QWORD *)a1 + 28);
  if ( v13 )
  {
    InitNlsTableBase = *(_QWORD *)(v13 + 16);
    ExPreInitializeNls();
  }
  ExLeapSecondData = *(PVOID *)(*((_QWORD *)a1 + 30) + 2976LL);
  WheaInitializeServices();
  guard_dispatch_icall_no_overrides(HalIommuDispatch, v14);
  qword_1410087F8 = __rdtsc();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, (__int64)a1) )
    KeBugCheck(0x5Cu);
  qword_141008800 = __rdtsc();
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmInitSystem0(a1);
  if ( !PopEnergyEstimationEnabled )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  ResourceBuffer = 0LL;
  ResourceLength[0] = 0;
  *(_DWORD *)(MmWriteableSharedUserData + 4) = ExpTickCountMultiplier;
  *(_DWORD *)(MmWriteableSharedUserData + 572) = 0;
  ResourceInfo.Type = 11LL;
  ResourceInfo.Name = 1LL;
  ResourceInfo.Language = 0LL;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &ResourceInfo, 3u, &ResourceDataEntry) >= 0
    && LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, &ResourceBuffer, ResourceLength) >= 0 )
  {
    KiBugCodeMessages = ResourceBuffer;
  }
  CmNtGlobalFlag2 &= 0x201Fu;
  *(_DWORD *)(MmWriteableSharedUserData + 600) = CmGlobalValidationRunlevel;
  *(_BYTE *)(MmWriteableSharedUserData + 651) = 1;
  v15 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v15;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v15 << 16;
  if ( InitTickRolloverDelayLength != 4 || InitTickRolloverDelayType != 4 )
    InitTickRolloverDelay = 0;
  if ( InitTickRolloverDelay )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-InitTickRolloverDelay, 1);
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 840) = KeQueryPerformanceCounter(0LL);
    KiSystemTimeErrorAccumulator = 0LL;
  }
  NtGlobalFlag |= CmNtGlobalFlag;
  NtGlobalFlag2 |= CmNtGlobalFlag2;
  *(_DWORD *)(MmWriteableSharedUserData + 960) = 1;
  *(_BYTE *)(MmWriteableSharedUserData + 964) = 1;
  *(_WORD *)(MmWriteableSharedUserData + 874) = 1;
  if ( !(unsigned __int8)ExInitSystem(0LL) )
    goto LABEL_102;
  WheaSelLogInitialize(a1);
  KeNumaInitialize();
  VerifierInitSystem(a1);
  InitializeDynamicPartitioningPolicy();
  KeInitializeXSaveStructures();
  *(_QWORD *)&KiSystemAvailableCpus.Count = 2097153LL;
  memset_0(&KiSystemAvailableCpus.8, 0, sizeof(KiSystemAvailableCpus.8));
  KiAvailableCpusSubscriptionLock = 0LL;
  qword_140F225A8 = (__int64)&KiAvailableCpusSubscriptionList;
  KiAvailableCpusSubscriptionList = (__int64)&KiAvailableCpusSubscriptionList;
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  MmInitSystem(0LL, (ULONG_PTR)a1, v16);
  qword_1410087A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  v17 = 0LL;
  v18 = *((_QWORD *)a1 + 30);
  if ( v18 )
  {
    v19 = *(_DWORD **)(v18 + 2904);
    if ( v19 )
    {
      if ( (*v19 & 8) != 0 )
        v17 = *(_QWORD *)(v18 + 4376);
    }
  }
  SymCryptEntropyAccumulatorInit1(KiProcessorBlock[0] + 37312, v17);
  EtwInitialize(0, (__int64)a1);
  KiHwPolicyDriverImageBase = 0LL;
  inited = VmInitSystem(0);
  if ( inited < 0 )
    KeBugCheckEx(0x31u, inited, 0x13uLL, 0LL, 0LL);
  HalInitializeBios(0, a1);
  InbvDriverInitialize(0LL, a1, 0LL);
  if ( KiBugCodeMessages )
  {
    v21 = ResourceLength[0];
    Pool2 = (void *)ExAllocatePool2(0x40uLL, ResourceLength[0], 0x6342694BuLL);
    v23 = Pool2;
    if ( !Pool2 )
      KeBugCheck(0x7Du);
    memmove(Pool2, KiBugCodeMessages, v21);
    KiBugCodeMessages = v23;
  }
  if ( a1[3] < 2 )
  {
    IopAutoReboot = 0;
    KeBugCheckEx(0x196u, a1[3], 2uLL, 0LL, 0LL);
  }
  v52[1] = 0LL;
  v52[0] = a1;
  MiEnumerateSystemImages((__int64)InitLoadDebuggerSymbols, (__int64)v52, 0);
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  KiHaltOnAddressFlags = ((unsigned int)HvlEnlightenments >> 28) & 4 | 1 | KiHaltOnAddressFlags & 0xF9 | (KeGetCurrentPrcb()->SchedulerAssist != 0LL ? 2 : 0);
  ExpInitializeBootEnvironment((__int64)a1);
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v26 = KeKernelCetWrssEnabledScenarios;
    if ( (KeKernelCetWrssEnabledScenarios & 2) != 0 && (_BYTE)KdDebuggerNotPresent && !BYTE1(KdDebuggerNotPresent) )
    {
      v26 = KeKernelCetWrssEnabledScenarios & 0xFD;
      KeKernelCetWrssDebuggerRevoked = 1;
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios & 0xFD;
    }
    v25 = 1698LL;
    v27 = __readmsr(0x6A2u);
    if ( v26 )
      v28 = v27 | 2;
    else
      v28 = v27 & 0xFFFFFFFFFFFFFFFDuLL;
    v24 = HIDWORD(v28);
    __writemsr(0x6A2u, v28);
  }
  PsInitializeWin32kServiceTable(v25, v24);
  PsInitializeWin32kKernelExports();
  if ( (MiFlags & 0x40000) != 0 )
    MiEnumerateSystemImages((__int64)MiProtectKernelCfgData, 0LL, 0);
  HvlPhase1Initialize((__int64)a1);
  if ( **((_DWORD **)a1 + 30) >= 0x1130u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  *(_DWORD *)(MmWriteableSharedUserData + 692) = 2147418111;
  *(_DWORD *)(MmWriteableSharedUserData + 696) = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, &v48);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString((PSTRING)&DestinationString[1], (PCSZ)v48->Text);
    LOWORD(DestinationString[1]) -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(MessageEntry) = BYTE1(CmNtCSDVersion);
    v33 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString[1], MessageEntry);
    if ( v33 < 0 )
      KeBugCheckEx(0x31u, v33, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      v48 = 0LL;
      v36 = RtlStringCbCatExA(pszDest, v34, v35, (NTSTRSAFE_PSTR *)&v48, DestinationString, dwFlagsa);
      if ( v36 < 0 )
        KeBugCheckEx(0x31u, v36, 6uLL, 0LL, 0LL);
      v37 = RtlStringCbPrintfA((NTSTRSAFE_PSTR)v48, DestinationString[0], "v.%u", HIWORD(CmNtCSDVersion));
      if ( v37 < 0 )
        KeBugCheckEx(0x31u, v37, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v38 = RtlStringCbCopyExA(pszDest, v29, v30, v31, DestinationString, dwFlags);
    if ( v38 < 0 )
      KeBugCheckEx(0x31u, v38, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - LOWORD(DestinationString[0]);
  }
  RtlInitAnsiString((PSTRING)&DestinationString[1], pszDest);
  v39 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, (PCANSI_STRING)&DestinationString[1], 1u);
  if ( v39 < 0 )
    KeBugCheckEx(0x31u, v39, 9uLL, 0LL, 0LL);
  v40 = RtlStringCbPrintfA(SourceString, 0x40uLL, "%u.%u", 6, 3);
  if ( v40 < 0 )
    KeBugCheckEx(0x31u, v40, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, SourceString) )
LABEL_102:
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v41 = ExAllocatePool2(0x40uLL, 0x800000uLL, 0x63617453uLL);
    v42 = (void *)v41;
    if ( v41 )
    {
      if ( (int)RtlpInitializeStackTraceDatabase(v41, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v42, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  HandleTableListLock = 0LL;
  qword_140FD9FC0 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  ExpFreeListCount = HalQueryMaximumProcessorCount();
  if ( !(unsigned __int8)ObInitSystem(0LL) )
    KeBugCheck(0x5Eu);
  SymCryptModuleInit(103LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !(unsigned __int8)PsInitSystem(0, a1) || (int)DbgkInitialize() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  *(_DWORD *)(MmWriteableSharedUserData + 620) = 10;
  *(_DWORD *)(MmWriteableSharedUserData + 624) = 0;
  *(_DWORD *)(MmWriteableSharedUserData + 608) = 26100;
  *(_WORD *)(MmWriteableSharedUserData + 618) = KeProcessorArchitecture;
  *(_WORD *)(MmWriteableSharedUserData + 44) = -31132;
  *(_WORD *)(MmWriteableSharedUserData + 46) = -31132;
  *(_DWORD *)(MmWriteableSharedUserData + 932) = 0;
  return 0LL;
}
