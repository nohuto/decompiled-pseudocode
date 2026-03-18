/*
 * XREFs of InitBootProcessor @ 0x140C0AC88
 * Callers:
 *     KiInitializeKernel @ 0x140B588B0 (KiInitializeKernel.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14027BE44 (VslGetNestedPageProtectionFlags.c)
 *     MiEnumerateSystemImages @ 0x1402C7380 (MiEnumerateSystemImages.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     HalQueryMaximumProcessorCount @ 0x1403BC0C0 (HalQueryMaximumProcessorCount.c)
 *     RtlInitAnsiString @ 0x1404654C0 (RtlInitAnsiString.c)
 *     KeAdjustInterruptTime @ 0x1404BE5A4 (KeAdjustInterruptTime.c)
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1404FC810 (DbgBreakPointWithStatus.c)
 *     _strupr @ 0x1404FD210 (_strupr.c)
 *     strstr @ 0x1404FD9B0 (strstr.c)
 *     atol @ 0x1404FDC00 (atol.c)
 *     RtlStringCbCatExA @ 0x140539F08 (RtlStringCbCatExA.c)
 *     RtlStringCbCopyExA @ 0x140539FBC (RtlStringCbCopyExA.c)
 *     RtlStringCbPrintfA @ 0x14053A038 (RtlStringCbPrintfA.c)
 *     HalInitializeBios @ 0x14053BD40 (HalInitializeBios.c)
 *     HvlPhase1Initialize @ 0x140582A60 (HvlPhase1Initialize.c)
 *     PsInitializeWin32kKernelExports @ 0x1405E4860 (PsInitializeWin32kKernelExports.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14077E300 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x14077E350 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x14077E690 (LdrFindResource_U.c)
 *     RtlNlsInitState @ 0x14077E834 (RtlNlsInitState.c)
 *     RtlpInitializeStackTraceDatabase @ 0x14077F278 (RtlpInitializeStackTraceDatabase.c)
 *     EtwInitialize @ 0x1407A6460 (EtwInitialize.c)
 *     ExpInitLicensing @ 0x1407B8BC8 (ExpInitLicensing.c)
 *     ExPreInitializeNls @ 0x1407BB2DC (ExPreInitializeNls.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408ADC70 (RtlAnsiStringToUnicodeString.c)
 *     RtlFindMessage @ 0x140A02480 (RtlFindMessage.c)
 *     HalInitSystem @ 0x140B4B6C0 (HalInitSystem.c)
 *     KeInitializeXSaveStructures @ 0x140B568AC (KeInitializeXSaveStructures.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     MmInitSystem @ 0x140BDE2E8 (MmInitSystem.c)
 *     PsInitSystem @ 0x140BDE7F8 (PsInitSystem.c)
 *     VmInitSystem @ 0x140BDE898 (VmInitSystem.c)
 *     ExBurnMemory @ 0x140C0A860 (ExBurnMemory.c)
 *     ExpInitializeBootEnvironment @ 0x140C0A9AC (ExpInitializeBootEnvironment.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140C0AA10 (ExpRevokeBootLoaderPagePrivileges.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140C0BC08 (InitializeDynamicPartitioningPolicy.c)
 *     DbgkInitialize @ 0x140C16074 (DbgkInitialize.c)
 *     InbvDriverInitialize @ 0x140C1A1F0 (InbvDriverInitialize.c)
 *     PpInitSystem @ 0x140C22754 (PpInitSystem.c)
 *     KeNumaInitialize @ 0x140C26C54 (KeNumaInitialize.c)
 *     PsInitializeWin32kServiceTable @ 0x140C3478C (PsInitializeWin32kServiceTable.c)
 *     PsInitializeQuotaSystem @ 0x140C35B68 (PsInitializeQuotaSystem.c)
 *     RtlInitializeExceptionLog @ 0x140C369B8 (RtlInitializeExceptionLog.c)
 *     SeInitSystem @ 0x140C39C80 (SeInitSystem.c)
 *     VerifierInitSystem @ 0x140C3B1B8 (VerifierInitSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x140C402D4 (BootApplicationPersistentDataInitialize.c)
 *     ExComputeTickCountMultiplier @ 0x140C406A4 (ExComputeTickCountMultiplier.c)
 *     ExInitSystem @ 0x140C40704 (ExInitSystem.c)
 *     HeadlessInit @ 0x140C42184 (HeadlessInit.c)
 *     WheaSelLogInitialize @ 0x140C44090 (WheaSelLogInitialize.c)
 *     WheaInitializeServices @ 0x140C44660 (WheaInitializeServices.c)
 *     CmInitSystem0 @ 0x140C483D8 (CmInitSystem0.c)
 *     KeInitializeClock @ 0x140C60350 (KeInitializeClock.c)
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // rax
  int inited; // eax
  void *Pool2; // rax
  void *v24; // r15
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  size_t v30; // rdx
  const char *v31; // r8
  NTSTRSAFE_PSTR *v32; // r9
  int Message; // eax
  NTSTATUS v34; // eax
  size_t v35; // rdx
  const char *v36; // r8
  NTSTATUS v37; // eax
  NTSTATUS v38; // eax
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  NTSTATUS v41; // eax
  ULONG_PTR v42; // rax
  void *v43; // rdi
  size_t *pcbRemaining; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  int dwFlagsa; // [rsp+30h] [rbp-D8h]
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+40h] [rbp-C8h] BYREF
  size_t DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A8h] BYREF
  void *v51; // [rsp+68h] [rbp-A0h]
  _QWORD v52[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v53[3]; // [rsp+80h] [rbp-88h] BYREF
  char v54[64]; // [rsp+98h] [rbp-70h] BYREF
  char pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF

  dword_140FCF8F4 = -1;
  qword_140FCEE08 = (__int64)&PspTimeZoneStateBuffer;
  dword_140FCEE3C = 259;
  word_140FCED48 = -535;
  dword_140FCEE38 = 1;
  word_140FCED88 = -535;
  dword_140FCEE78 = (unsigned __int16)NtBuildNumber;
  v2 = *a1;
  ppszDestEnd = 0LL;
  v50 = 0LL;
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
  guard_dispatch_icall_no_overrides(HalIommuDispatch, v14, v15, v16);
  qword_1410077F8 = __rdtsc();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, (__int64)a1) )
    KeBugCheck(0x5Cu);
  qword_141007800 = __rdtsc();
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmInitSystem0(a1);
  if ( !PopEnergyEstimationEnabled )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  v51 = 0LL;
  *(_DWORD *)(MmWriteableSharedUserData + 4) = ExpTickCountMultiplier;
  *(_DWORD *)(MmWriteableSharedUserData + 572) = 0;
  v53[0] = 11LL;
  v53[1] = 1LL;
  v53[2] = 0LL;
  if ( (int)LdrFindResource_U(0x40000000, (int)v53, 3, (__int64)&v50) >= 0 && (int)LdrAccessResource() >= 0 )
    KiBugCodeMessages = v51;
  CmNtGlobalFlag2 &= 0x201Fu;
  *(_DWORD *)(MmWriteableSharedUserData + 600) = CmGlobalValidationRunlevel;
  *(_BYTE *)(MmWriteableSharedUserData + 651) = 1;
  v17 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v17;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v17 << 16;
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
  qword_140F223D8 = (__int64)&KiAvailableCpusSubscriptionList;
  KiAvailableCpusSubscriptionList = (__int64)&KiAvailableCpusSubscriptionList;
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  MmInitSystem(0LL, (ULONG_PTR)a1, v18);
  qword_1410077A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  v19 = 0LL;
  v20 = *((_QWORD *)a1 + 30);
  if ( v20 )
  {
    v21 = *(_DWORD **)(v20 + 2904);
    if ( v21 )
    {
      if ( (*v21 & 8) != 0 )
        v19 = *(_QWORD *)(v20 + 4376);
    }
  }
  SymCryptEntropyAccumulatorInit1(KiProcessorBlock[0] + 37312, v19);
  EtwInitialize(0, (__int64)a1);
  KiHwPolicyDriverImageBase = 0LL;
  inited = VmInitSystem(0);
  if ( inited < 0 )
    KeBugCheckEx(0x31u, inited, 0x13uLL, 0LL, 0LL);
  HalInitializeBios(0, a1);
  InbvDriverInitialize(0LL, a1, 0LL);
  if ( KiBugCodeMessages )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL, 0LL, 0x6342694BuLL);
    v24 = Pool2;
    if ( !Pool2 )
      KeBugCheck(0x7Du);
    memmove(Pool2, KiBugCodeMessages, 0LL);
    KiBugCodeMessages = v24;
  }
  if ( a1[3] < 2 )
  {
    IopAutoReboot = 0;
    KeBugCheckEx(0x196u, a1[3], 2uLL, 0LL, 0LL);
  }
  v52[1] = 0LL;
  v52[0] = a1;
  MiEnumerateSystemImages((__int64)InitLoadDebuggerSymbols, (__int64)v52, 0LL);
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  KiHaltOnAddressFlags = ((unsigned int)HvlEnlightenments >> 28) & 4 | 1 | KiHaltOnAddressFlags & 0xF9 | (KeGetCurrentPrcb()->SchedulerAssist != 0LL ? 2 : 0);
  ExpInitializeBootEnvironment((__int64)a1);
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v27 = KeKernelCetWrssEnabledScenarios;
    if ( (KeKernelCetWrssEnabledScenarios & 2) != 0 && (_BYTE)KdDebuggerNotPresent && !BYTE1(KdDebuggerNotPresent) )
    {
      v27 = KeKernelCetWrssEnabledScenarios & 0xFD;
      KeKernelCetWrssDebuggerRevoked = 1;
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios & 0xFD;
    }
    v26 = 1698LL;
    v28 = __readmsr(0x6A2u);
    if ( v27 )
      v29 = v28 | 2;
    else
      v29 = v28 & 0xFFFFFFFFFFFFFFFDuLL;
    v25 = HIDWORD(v29);
    __writemsr(0x6A2u, v29);
  }
  PsInitializeWin32kServiceTable(v26, v25);
  PsInitializeWin32kKernelExports();
  if ( (MiFlags & 0x40000) != 0 )
    MiEnumerateSystemImages((__int64)MiProtectKernelCfgData, 0LL, 0LL);
  HvlPhase1Initialize((__int64)a1);
  if ( **((_DWORD **)a1 + 30) >= 0x1130u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  *(_DWORD *)(MmWriteableSharedUserData + 692) = 2147418111;
  *(_DWORD *)(MmWriteableSharedUserData + 696) = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage(0x140000000LL, 0xBu, 0, 0x40000087u, (unsigned __int16 **)&ppszDestEnd);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString((PSTRING)&DestinationString[1], ppszDestEnd + 4);
    LOWORD(DestinationString[1]) -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(pcbRemaining) = BYTE1(CmNtCSDVersion);
    v34 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString[1], pcbRemaining);
    if ( v34 < 0 )
      KeBugCheckEx(0x31u, v34, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      ppszDestEnd = 0LL;
      v37 = RtlStringCbCatExA(pszDest, v35, v36, &ppszDestEnd, DestinationString, dwFlagsa);
      if ( v37 < 0 )
        KeBugCheckEx(0x31u, v37, 6uLL, 0LL, 0LL);
      v38 = RtlStringCbPrintfA(ppszDestEnd, DestinationString[0], "v.%u", HIWORD(CmNtCSDVersion));
      if ( v38 < 0 )
        KeBugCheckEx(0x31u, v38, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v39 = RtlStringCbCopyExA(pszDest, v30, v31, v32, DestinationString, dwFlags);
    if ( v39 < 0 )
      KeBugCheckEx(0x31u, v39, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - LOWORD(DestinationString[0]);
  }
  RtlInitAnsiString((PSTRING)&DestinationString[1], pszDest);
  v40 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, (PCANSI_STRING)&DestinationString[1], 1u);
  if ( v40 < 0 )
    KeBugCheckEx(0x31u, v40, 9uLL, 0LL, 0LL);
  v41 = RtlStringCbPrintfA(v54, 0x40uLL, "%u.%u", 6, 3);
  if ( v41 < 0 )
    KeBugCheckEx(0x31u, v41, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, v54) )
LABEL_102:
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v42 = ExAllocatePool2(0x40uLL, 0x800000uLL, 0x63617453uLL);
    v43 = (void *)v42;
    if ( v42 )
    {
      if ( (int)RtlpInitializeStackTraceDatabase(v42, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v43, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  HandleTableListLock = 0LL;
  qword_140FD8FB0 = (__int64)&HandleTableListHead;
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
