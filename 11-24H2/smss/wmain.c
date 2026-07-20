/*
 * XREFs of wmain @ 0x140001510
 * Callers:
 *     NtProcessStartupW_AfterSecurityCookieInitialized @ 0x1400011B0 (NtProcessStartupW_AfterSecurityCookieInitialized.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmscpParseArgs @ 0x140001FE0 (SmscpParseArgs.c)
 *     SmscpLoadSubSystemsForMuSession @ 0x140002580 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpInternalLogFailure @ 0x1400036FC (SmpInternalLogFailure.c)
 *     SmpLoadPnPSerializeSettings @ 0x140003930 (SmpLoadPnPSerializeSettings.c)
 *     SmpGetFirstSessionId @ 0x140003A88 (SmpGetFirstSessionId.c)
 *     SmscpExecuteInitialCommand @ 0x140003B40 (SmscpExecuteInitialCommand.c)
 *     SmpDereferenceKnownSubSys @ 0x140006A10 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSingleSubSys @ 0x140006EC0 (SmpWaitForSingleSubSys.c)
 *     SmpUnlockKnownSubSysList @ 0x1400079F0 (SmpUnlockKnownSubSysList.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140007A20 (SmpSearchKnownSubSysDatabase.c)
 *     SmpWaitForSubSysStartup @ 0x140008D90 (SmpWaitForSubSysStartup.c)
 *     SmpGetCoreProcessIds @ 0x14000CAC0 (SmpGetCoreProcessIds.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpReadyBootSync @ 0x14000DFA8 (SmpReadyBootSync.c)
 *     SmpInit @ 0x1400150FC (SmpInit.c)
 *     SmpTerminate @ 0x14001913C (SmpTerminate.c)
 *     SmpUnhandledExceptionFilter @ 0x140019234 (SmpUnhandledExceptionFilter.c)
 *     SmscpNotifySmOfFailure @ 0x140019884 (SmscpNotifySmOfFailure.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall wmain(int a1, PCWSTR *a2, __int64 a3, int a4)
{
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // r8
  void *v11; // rcx
  int j; // eax
  unsigned int v13; // ebx
  int SubSystemsForMuSession; // edi
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // ebx
  NTSTATUS v18; // eax
  __int64 v19; // rbx
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rbx
  unsigned int i; // ebx
  unsigned int FirstSessionId; // eax
  unsigned int v33; // eax
  void *v34; // rsi
  int v35; // eax
  __int64 v36; // rdi
  NTSTATUS v37; // ebx
  int v38; // [rsp+40h] [rbp-238h] BYREF
  int v39; // [rsp+44h] [rbp-234h]
  struct _UNICODE_STRING v40; // [rsp+48h] [rbp-230h] BYREF
  int v41; // [rsp+58h] [rbp-220h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-218h] BYREF
  int ProcessInformation; // [rsp+70h] [rbp-208h] BYREF
  _DWORD v44[3]; // [rsp+74h] [rbp-204h] BYREF
  _DWORD v45[2]; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v46; // [rsp+88h] [rbp-1F0h] BYREF
  __int64 v47; // [rsp+90h] [rbp-1E8h] BYREF
  int v48; // [rsp+98h] [rbp-1E0h]
  __int128 v49; // [rsp+A0h] [rbp-1D8h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-1C8h]
  _QWORD v51[2]; // [rsp+B8h] [rbp-1C0h] BYREF
  int v52; // [rsp+C8h] [rbp-1B0h]
  __int64 v53; // [rsp+D0h] [rbp-1A8h] BYREF
  _OWORD v54[2]; // [rsp+D8h] [rbp-1A0h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-180h]
  int v56; // [rsp+100h] [rbp-178h]
  LARGE_INTEGER Interval[2]; // [rsp+108h] [rbp-170h] BYREF
  __int128 SystemInformation; // [rsp+118h] [rbp-160h] BYREF
  __int128 v59; // [rsp+128h] [rbp-150h]
  _BYTE v60[224]; // [rsp+140h] [rbp-138h] BYREF
  unsigned __int64 Parameters; // [rsp+220h] [rbp-58h] BYREF
  __int64 v62; // [rsp+228h] [rbp-50h]
  __int64 v63; // [rsp+230h] [rbp-48h]
  __int64 v64; // [rsp+238h] [rbp-40h]

  memset(v54, 0, sizeof(v54));
  v55 = 0LL;
  v56 = 0;
  v40 = 0LL;
  v38 = 0;
  v49 = 0LL;
  v50 = 0LL;
  Parameters = (unsigned __int64)&v40;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v45[0] = 2;
  v45[1] = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie|ProcessUserModeIOPL, v45, 8u);
  ProcessInformation = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, &ProcessInformation, 4u);
  RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  *(_OWORD *)&Interval[0].LowPart = *((_OWORD *)off_140030E50 - 1);
  if ( qword_140030E68 )
    __fastfail(5u);
  xmmword_140030E70 = 0LL;
  if ( !(unsigned int)EtwEventRegister(Interval, tlgEnableCallback, &dword_140030E48, &qword_140030E68) )
    EtwEventSetInformation(qword_140030E68, 2LL, off_140030E50, *(unsigned __int16 *)off_140030E50);
  if ( (unsigned int)EtwEventRegister(&SmssEventProvider, 0LL, 0LL, &SmpTraceHandle) )
    SmpTraceHandle = 0LL;
  qword_140032530 = 0LL;
  WPP_MAIN_CB = 0LL;
  qword_140032538 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_Smss;
  v7 = &WPP_MAIN_CB;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  v8 = &WPP_REGISTRATION_GUIDS;
  do
  {
    v9 = *v8++;
    *(_QWORD *)&DestinationString.Length = v9;
    DestinationString.Buffer = 0LL;
    v7[4] = v9;
    EtwRegisterTraceGuidsW(WppControlCallback, v7, v9, 1LL, &DestinationString, 0LL, 0LL, v7 + 1, v38);
    v7 = (__int64 *)*v7;
  }
  while ( v7 );
  SmpHostSmss = (unsigned int)RtlGetCurrentServiceSessionId() == 0;
  SystemInformation = 0LL;
  v59 = 0LL;
  NtQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL);
  SmpSoftBoot = (BYTE8(v59) & 4) != 0;
  SmpSoftBootSystemHiveReady = (BYTE8(v59) & 0x20) != 0;
  SmpBugcheckRecovery = (WORD4(v59) & 0x4000) != 0LL;
  if ( a1 <= 1 )
  {
    SmpPrimarySmss = 1;
    SmpReadyBootSync();
    RtlInitUnicodeStringEx(&SmpHelperCmd, *a2);
    RtlSetThreadIsCritical(1u, 0LL, 0);
    v44[0] = 11;
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBasePriority, v44, 4u);
    if ( (MEMORY[0x7FFE02F0] & 0x20) != 0 )
    {
      v38 = 3;
      v18 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityUpdateMode, &v38, 4u);
      v19 = (unsigned int)v18;
      if ( v18 < 0 )
      {
        SmpLogFailure("wmain", 353LL, (unsigned int)v18);
        RtlInitUnicodeString(&v40, L"Session Manager failed to set affinity update mode");
        LODWORD(v20) = v19;
        v62 = v19;
        goto LABEL_56;
      }
    }
    if ( a4 )
      SmpDebug = a4;
    v53 = 0LL;
    v46 = 0LL;
    RtlInitializeSRWLock(&v49);
    v21 = TpAllocPool((char *)&v49 + 8, 0LL);
    v22 = (unsigned int)v21;
    v39 = v21;
    if ( v21 < 0 )
    {
      SmpLogFailure("wmain", 380LL, (unsigned int)v21);
      RtlInitUnicodeString(&v40, L"Thread pool allocation");
      SmpInitProgressByLine = 390;
      SmpInitReturnStatus = v22;
      SmpInitLastCall = (__int64)TpAllocPool;
      LODWORD(v20) = v22;
      v62 = v22;
      goto LABEL_56;
    }
    LODWORD(v50) = SmpNumberInitialSessions;
    v23 = TpSetPoolMinThreads(*((_QWORD *)&v49 + 1), (unsigned int)(SmpNumberInitialSessions + 1));
    v24 = v23;
    v39 = v23;
    if ( v23 < 0 )
    {
      SmpLogFailure("wmain", 406LL, (unsigned int)v23);
      RtlInitUnicodeString(&v40, L"Configuring thread pool minimum thread number");
      SmpInitProgressByLine = 416;
      SmpInitReturnStatus = v24;
      SmpInitLastCall = (__int64)TpSetPoolMinThreads;
      LODWORD(v20) = v24;
      v62 = v24;
      goto LABEL_56;
    }
    SmpCallbackEnviron = 3;
    xmmword_140032568 = 0LL;
    qword_140032578 = 0LL;
    xmmword_140032580 = 0LL;
    qword_140032590 = 0LL;
    dword_140032598 = 0;
    dword_14003259C = 1;
    dword_1400325A0 = 72;
    *(_QWORD *)&xmmword_140032568 = *((_QWORD *)&v49 + 1);
    v25 = SmpInit();
    v26 = (unsigned int)v25;
    if ( v25 < 0 )
    {
      SmpLogFailure("wmain", 428LL, (unsigned int)v25);
      RtlInitUnicodeString(&v40, L"Session Manager Initialization");
      LODWORD(v20) = v26;
      v62 = v26;
      goto LABEL_56;
    }
    v27 = TpAllocAlpcCompletion(&v53, SmpApiConnectionPort, SmpApiCallback, &v49, &SmpCallbackEnviron);
    v28 = (unsigned int)v27;
    v39 = v27;
    if ( v27 < 0 )
    {
      SmpLogFailure("wmain", 446LL, (unsigned int)v27);
      RtlInitUnicodeString(&v40, L"ALPC Completion object allocation");
      SmpInitProgressByLine = 456;
      SmpInitReturnStatus = v28;
      SmpInitLastCall = (__int64)TpAllocAlpcCompletion;
      LODWORD(v20) = v28;
      v62 = v28;
      goto LABEL_56;
    }
    v29 = TpAllocWork(&v46, SmpCreateInitialSession, 0LL, &SmpCallbackEnviron);
    v30 = v29;
    v39 = v29;
    if ( v29 < 0 )
    {
      SmpLogFailure("wmain", 476LL, (unsigned int)v29);
      RtlInitUnicodeString(&v40, L"Thread pool work object allocation.");
      SmpInitProgressByLine = 486;
      SmpInitReturnStatus = v30;
      SmpInitLastCall = (__int64)TpAllocWork;
      LODWORD(v20) = v30;
      v62 = v30;
      goto LABEL_56;
    }
    for ( i = 0; ; ++i )
    {
      v44[1] = i;
      if ( i >= SmpNumberInitialSessions )
        break;
      TpPostWork(v46);
      if ( (unsigned int)SmpNumberInitialSessions > 1 && !i )
      {
        v48 = 0;
        v47 = 0LL;
        v51[0] = 1LL;
        v51[1] = &v47;
        v52 = 2;
        do
        {
          FirstSessionId = SmpGetFirstSessionId();
          SmpWaitForSubSysStartup(FirstSessionId, 2LL, 0LL, &v47);
          v33 = SmpGetFirstSessionId();
          v34 = (void *)SmpSearchKnownSubSysDatabase(v33, v51);
          SmpUnlockKnownSubSysList(&v47);
        }
        while ( !v34 );
        v35 = SmpWaitForSingleSubSys(v34);
        v36 = v35;
        v39 = v35;
        if ( v35 < 0 )
        {
          SmpLogFailure("wmain", 537LL, (unsigned int)v35);
          RtlInitUnicodeString(&v40, L"Failed to locate core GUI process.");
          SmpInitProgressByLine = 543;
          SmpInitReturnStatus = v36;
          SmpInitLastCall = (__int64)SmpWaitForSingleSubSys;
          LODWORD(v20) = v36;
          v62 = v36;
          goto LABEL_56;
        }
        SmpDereferenceKnownSubSys(v34);
      }
    }
    SmpGetCoreProcessIds(0LL, &DestinationString);
    v37 = NtWaitForMultipleObjects(1u, SmpCoreSubsysProcess, WaitAny, 0, 0LL);
    if ( v37 )
    {
      RtlInitUnicodeString(&v40, L"Unexpected error code from NtWaitForMultipleObjects");
      LODWORD(v54[0]) = v37;
    }
    else
    {
      RtlInitUnicodeString(&v40, L"Master Subsystem Process");
      if ( NtQueryInformationProcess(SmpCoreSubsysProcess[0], ProcessBasicInformation, v54, 0x30u, 0LL) < 0 )
      {
        v20 = -1073741823LL;
LABEL_55:
        v62 = v20;
LABEL_56:
        SmpLogFailureString((__int64)"wmain", 0x263u, (__int64)v40.Buffer, v20);
        SmpTerminate(&Parameters, 1u, 4u);
        __debugbreak();
      }
      v37 = v54[0];
    }
    v20 = v37;
    goto LABEL_55;
  }
  DestinationString = 0LL;
  v41 = 0;
  if ( a4 )
    SmpDebug = a4;
  SmpDefaultEnvironment = 0LL;
  RtlCreateTagHeap(*(HANDLE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PWSTR)L"SMSC!", (PWSTR)L"PARS");
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (int)SmscpParseArgs((unsigned int)a1, a2, &v41, &DestinationString) >= 0 )
  {
    v11 = *(void **)SmscpSharedWindow;
    *(_OWORD *)SmscpSharedWindow = 0LL;
    *(_DWORD *)SmscpSharedWindow = 0;
    NtSetEvent(v11, 0LL);
    Interval[0].QuadPart = -50000000LL;
    for ( j = RtlConnectToSm(0LL, 0LL, 0LL, &SmpApiConnectionPort);
          j < 0;
          j = RtlConnectToSm(0LL, 0LL, 0LL, &SmpApiConnectionPort) )
    {
      SmpLogFailure("SmscMain", 277LL, (unsigned int)j);
      NtDelayExecution(0, Interval);
      Interval[0].QuadPart = -50000000LL;
    }
    v13 = *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL);
    SmpLoadPnPSerializeSettings();
    SubSystemsForMuSession = SmscpLoadSubSystemsForMuSession(v13);
    if ( SubSystemsForMuSession >= 0 )
    {
      v17 = SmscpExecuteInitialCommand(v13, &v41, &DestinationString);
      if ( v17 >= 0 )
        return 0LL;
      memset_0(v60, 0, sizeof(v60));
      v15 = (unsigned int)v17;
      v16 = 313LL;
    }
    else
    {
      memset_0(v60, 0, sizeof(v60));
      v15 = (unsigned int)SubSystemsForMuSession;
      v16 = 299LL;
    }
    SmpInternalLogFailure("SmscMain", v16, v15, v60);
    SmscpNotifySmOfFailure();
    __debugbreak();
  }
  if ( DestinationString.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  return 0LL;
}
