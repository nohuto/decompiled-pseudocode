/*
 * XREFs of InitBootProcessor @ 0x140BF9C88
 * Callers:
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14025D590 (VslGetNestedPageProtectionFlags.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     MiEnumerateSystemImages @ 0x14036E320 (MiEnumerateSystemImages.c)
 *     HalQueryMaximumProcessorCount @ 0x1404477E0 (HalQueryMaximumProcessorCount.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     KeAdjustInterruptTime @ 0x1404BFC58 (KeAdjustInterruptTime.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1404FA090 (DbgBreakPointWithStatus.c)
 *     _strupr @ 0x1404FAA90 (_strupr.c)
 *     strstr @ 0x1404FB230 (strstr.c)
 *     atol @ 0x1404FB480 (atol.c)
 *     RtlStringCbCatExA @ 0x140537758 (RtlStringCbCatExA.c)
 *     RtlStringCbCopyExA @ 0x14053780C (RtlStringCbCopyExA.c)
 *     RtlStringCbPrintfA @ 0x140537888 (RtlStringCbPrintfA.c)
 *     HalInitializeBios @ 0x140539590 (HalInitializeBios.c)
 *     HvlPhase1Initialize @ 0x14057F2B0 (HvlPhase1Initialize.c)
 *     PsInitializeWin32kKernelExports @ 0x1405D88F4 (PsInitializeWin32kKernelExports.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14076F0B0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x14076F100 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x14076F440 (LdrFindResource_U.c)
 *     RtlNlsInitState @ 0x14076F5E4 (RtlNlsInitState.c)
 *     RtlpInitializeStackTraceDatabase @ 0x140770028 (RtlpInitializeStackTraceDatabase.c)
 *     EtwInitialize @ 0x140797090 (EtwInitialize.c)
 *     ExpInitLicensing @ 0x1407A9718 (ExpInitLicensing.c)
 *     ExPreInitializeNls @ 0x1407ABE2C (ExPreInitializeNls.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlFindMessage @ 0x1409AE2A0 (RtlFindMessage.c)
 *     HalInitSystem @ 0x140B3B6C0 (HalInitSystem.c)
 *     KeInitializeXSaveStructures @ 0x140B46908 (KeInitializeXSaveStructures.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     MmInitSystem @ 0x140BCD2E8 (MmInitSystem.c)
 *     PsInitSystem @ 0x140BCD7F8 (PsInitSystem.c)
 *     VmInitSystem @ 0x140BCD898 (VmInitSystem.c)
 *     ExBurnMemory @ 0x140BF9860 (ExBurnMemory.c)
 *     ExpInitializeBootEnvironment @ 0x140BF99AC (ExpInitializeBootEnvironment.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140BF9A10 (ExpRevokeBootLoaderPagePrivileges.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140BFAC08 (InitializeDynamicPartitioningPolicy.c)
 *     DbgkInitialize @ 0x140C04FD4 (DbgkInitialize.c)
 *     InbvDriverInitialize @ 0x140C09150 (InbvDriverInitialize.c)
 *     PpInitSystem @ 0x140C11678 (PpInitSystem.c)
 *     KeNumaInitialize @ 0x140C15BC4 (KeNumaInitialize.c)
 *     PsInitializeWin32kServiceTable @ 0x140C234C0 (PsInitializeWin32kServiceTable.c)
 *     PsInitializeQuotaSystem @ 0x140C2489C (PsInitializeQuotaSystem.c)
 *     RtlInitializeExceptionLog @ 0x140C256E8 (RtlInitializeExceptionLog.c)
 *     SeInitSystem @ 0x140C289B0 (SeInitSystem.c)
 *     VerifierInitSystem @ 0x140C29ED8 (VerifierInitSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x140C2EFF8 (BootApplicationPersistentDataInitialize.c)
 *     ExComputeTickCountMultiplier @ 0x140C2F3C8 (ExComputeTickCountMultiplier.c)
 *     ExInitSystem @ 0x140C2F428 (ExInitSystem.c)
 *     HeadlessInit @ 0x140C30E74 (HeadlessInit.c)
 *     WheaSelLogInitialize @ 0x140C32DC4 (WheaSelLogInitialize.c)
 *     WheaInitializeServices @ 0x140C33394 (WheaInitializeServices.c)
 *     CmInitSystem0 @ 0x140C370C8 (CmInitSystem0.c)
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
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
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  int inited; // eax
  void *Pool2; // rax
  void *v21; // r15
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  size_t v27; // rdx
  const char *v28; // r8
  NTSTRSAFE_PSTR *v29; // r9
  int Message; // eax
  NTSTATUS v31; // eax
  size_t v32; // rdx
  const char *v33; // r8
  NTSTATUS v34; // eax
  NTSTATUS v35; // eax
  NTSTATUS v36; // eax
  NTSTATUS v37; // eax
  NTSTATUS v38; // eax
  ULONG_PTR v39; // rax
  void *v40; // rdi
  size_t *pcbRemaining; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  int dwFlagsa; // [rsp+30h] [rbp-D8h]
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+40h] [rbp-C8h] BYREF
  size_t DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A8h] BYREF
  void *v48; // [rsp+68h] [rbp-A0h]
  _QWORD v49[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v50[3]; // [rsp+80h] [rbp-88h] BYREF
  char v51[64]; // [rsp+98h] [rbp-70h] BYREF
  char pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF

  dword_140FCF974 = -1;
  qword_140FCEE88 = (__int64)&PspTimeZoneStateBuffer;
  dword_140FCEEBC = 259;
  word_140FCEDC8 = -535;
  dword_140FCEEB8 = 1;
  word_140FCEE08 = -535;
  dword_140FCEEF8 = (unsigned __int16)NtBuildNumber;
  v2 = *a1;
  ppszDestEnd = 0LL;
  v47 = 0LL;
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
  guard_dispatch_icall_no_overrides(HalIommuDispatch);
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
  v48 = 0LL;
  *(_DWORD *)(MmWriteableSharedUserData + 4) = ExpTickCountMultiplier;
  *(_DWORD *)(MmWriteableSharedUserData + 572) = 0;
  v50[0] = 11LL;
  v50[1] = 1LL;
  v50[2] = 0LL;
  if ( (int)LdrFindResource_U(0x40000000, (int)v50, 3, (__int64)&v47) >= 0 && (int)LdrAccessResource() >= 0 )
    KiBugCodeMessages = v48;
  CmNtGlobalFlag2 &= 0x201Fu;
  *(_DWORD *)(MmWriteableSharedUserData + 600) = CmGlobalValidationRunlevel;
  *(_BYTE *)(MmWriteableSharedUserData + 651) = 1;
  v14 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v14;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v14 << 16;
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
  qword_140F21E18 = (__int64)&KiAvailableCpusSubscriptionList;
  KiAvailableCpusSubscriptionList = (__int64)&KiAvailableCpusSubscriptionList;
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  MmInitSystem(0LL, (ULONG_PTR)a1, v15);
  qword_1410077A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  v16 = 0LL;
  v17 = *((_QWORD *)a1 + 30);
  if ( v17 )
  {
    v18 = *(_DWORD **)(v17 + 2904);
    if ( v18 )
    {
      if ( (*v18 & 8) != 0 )
        v16 = *(_QWORD *)(v17 + 4376);
    }
  }
  SymCryptEntropyAccumulatorInit1(KiProcessorBlock[0] + 37312, v16);
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
    v21 = Pool2;
    if ( !Pool2 )
      KeBugCheck(0x7Du);
    memmove(Pool2, KiBugCodeMessages, 0LL);
    KiBugCodeMessages = v21;
  }
  if ( a1[3] < 2 )
  {
    IopAutoReboot = 0;
    KeBugCheckEx(0x196u, a1[3], 2uLL, 0LL, 0LL);
  }
  v49[1] = 0LL;
  v49[0] = a1;
  MiEnumerateSystemImages((__int64)InitLoadDebuggerSymbols, (__int64)v49, 0);
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  KiHaltOnAddressFlags = ((unsigned int)HvlEnlightenments >> 28) & 4 | 1 | KiHaltOnAddressFlags & 0xF9 | (KeGetCurrentPrcb()->SchedulerAssist != 0LL ? 2 : 0);
  ExpInitializeBootEnvironment((__int64)a1);
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v24 = KeKernelCetWrssEnabledScenarios;
    if ( (KeKernelCetWrssEnabledScenarios & 2) != 0 && (_BYTE)KdDebuggerNotPresent && !KdDebuggerWasEverPresent )
    {
      v24 = KeKernelCetWrssEnabledScenarios & 0xFD;
      KeKernelCetWrssDebuggerRevoked = 1;
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios & 0xFD;
    }
    v23 = 1698LL;
    v25 = __readmsr(0x6A2u);
    if ( v24 )
      v26 = v25 | 2;
    else
      v26 = v25 & 0xFFFFFFFFFFFFFFFDuLL;
    v22 = HIDWORD(v26);
    __writemsr(0x6A2u, v26);
  }
  PsInitializeWin32kServiceTable(v23, v22);
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
    Message = RtlFindMessage(0x140000000LL, 0xBu, 0, 0x40000087u, (unsigned __int16 **)&ppszDestEnd);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString((PSTRING)&DestinationString[1], ppszDestEnd + 4);
    LOWORD(DestinationString[1]) -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(pcbRemaining) = BYTE1(CmNtCSDVersion);
    v31 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString[1], pcbRemaining);
    if ( v31 < 0 )
      KeBugCheckEx(0x31u, v31, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      ppszDestEnd = 0LL;
      v34 = RtlStringCbCatExA(pszDest, v32, v33, &ppszDestEnd, DestinationString, dwFlagsa);
      if ( v34 < 0 )
        KeBugCheckEx(0x31u, v34, 6uLL, 0LL, 0LL);
      v35 = RtlStringCbPrintfA(ppszDestEnd, DestinationString[0], "v.%u", HIWORD(CmNtCSDVersion));
      if ( v35 < 0 )
        KeBugCheckEx(0x31u, v35, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v36 = RtlStringCbCopyExA(pszDest, v27, v28, v29, DestinationString, dwFlags);
    if ( v36 < 0 )
      KeBugCheckEx(0x31u, v36, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - LOWORD(DestinationString[0]);
  }
  RtlInitAnsiString((PSTRING)&DestinationString[1], pszDest);
  v37 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, (PCANSI_STRING)&DestinationString[1], 1u);
  if ( v37 < 0 )
    KeBugCheckEx(0x31u, v37, 9uLL, 0LL, 0LL);
  v38 = RtlStringCbPrintfA(v51, 0x40uLL, "%u.%u", 6, 3);
  if ( v38 < 0 )
    KeBugCheckEx(0x31u, v38, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, v51) )
LABEL_102:
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v39 = ExAllocatePool2(0x40uLL, 0x800000uLL, 0x63617453uLL);
    v40 = (void *)v39;
    if ( v39 )
    {
      if ( (int)RtlpInitializeStackTraceDatabase(v39, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v40, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  HandleTableListLock = 0LL;
  qword_140FD8FE0 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  ExpFreeListCount = HalQueryMaximumProcessorCount();
  if ( !(unsigned __int8)ObInitSystem(0LL) )
    KeBugCheck(0x5Eu);
  SymCryptModuleInit(103LL, 8LL);
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
