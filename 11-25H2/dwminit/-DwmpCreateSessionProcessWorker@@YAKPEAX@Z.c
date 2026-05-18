/*
 * XREFs of ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000AED0
 * Callers:
 *     DwmpCreateSessionProcess @ 0x18000D640 (DwmpCreateSessionProcess.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800010A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlg.c)
 *     ??3@YAXPEAX_K@Z @ 0x180002594 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000282C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180003118 (memset_0.c)
 *     IsWaitForInputIdlePresent @ 0x1800032C0 (IsWaitForInputIdlePresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x180003480 (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x1800035EC (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 *     ??0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z @ 0x18000A760 (--0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z.c)
 *     ??1CallWithHangTimeout@@QEAA@XZ @ 0x18000A9B8 (--1CallWithHangTimeout@@QEAA@XZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000AAF8 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x18000BCD8 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x18000C1B8 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x18000C5D0 (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000CBDC (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@details@wil@@QEAA_NXZ @ 0x18000D040 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@det.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000E6AC (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x18000EC0C (DwmpSignalSessionShutdown.c)
 */

__int64 __fastcall DwmpCreateSessionProcessWorker(PVOID Parameter)
{
  unsigned int v1; // r12d
  HANDLE v2; // r15
  RTL_SRWLOCK *v3; // r14
  _DWORD *v4; // rax
  unsigned int v5; // edx
  signed int v6; // edi
  int v7; // eax
  unsigned int v8; // edx
  HANDLE EventW; // rbx
  signed int LastError; // eax
  int v11; // ecx
  int v12; // eax
  signed int v13; // eax
  HANDLE hProcess; // rbx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+60h] [rbp-79h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+80h] [rbp-59h] BYREF
  HANDLE hToken; // [rsp+140h] [rbp+67h] BYREF
  GUID *v22; // [rsp+148h] [rbp+6Fh] BYREF
  GUID *v23; // [rsp+150h] [rbp+77h] BYREF
  __int64 v24; // [rsp+158h] [rbp+7Fh] BYREF

  v1 = (unsigned int)Parameter;
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  memset_0(&StartupInfo, 0, sizeof(StartupInfo));
  StartupInfo.cb = 104;
  hToken = 0LL;
  StartupInfo.lpDesktop = L"Winsta0\\Default";
  v2 = 0LL;
  v3 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
  {
    v4 = operator new(0x20uLL);
    v3 = (RTL_SRWLOCK *)CallWithHangTimeout::CallWithHangTimeout(v4, v5);
  }
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18001D6A8 = GetCurrentThreadId();
  if ( v1 && (!ghDwmProcess || GetProcessId(ghDwmProcess) != v1) )
  {
    v6 = 1;
    goto LABEL_48;
  }
  if ( ghDwmProcess )
  {
    v7 = CleanupOldDwmProcess();
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 1223;
LABEL_46:
      v11 = v7;
      goto LABEL_47;
    }
  }
  if ( gDwmFirstLaunch )
  {
    EventW = CreateEventW(0LL, 1, 0, L"Global\\LSA_SUBSYSTEM_INITIALIZED");
    if ( !EventW )
    {
      if ( GetLastError() != 183 )
        goto LABEL_21;
      SetLastError(0);
      EventW = OpenEventW(0x100000u, 0, L"Global\\LSA_SUBSYSTEM_INITIALIZED");
      if ( !EventW )
      {
        LastError = GetLastError();
        v6 = LastError;
        if ( LastError > 0 )
          v6 = (unsigned __int16)LastError | 0x80070000;
        if ( v6 >= 0 )
          v6 = -2003304445;
        DoStackCaptureDirect(v6, 0x1ADu);
        v8 = 1238;
LABEL_19:
        v11 = v6;
LABEL_47:
        DoStackCaptureDirect(v11, v8);
        goto LABEL_48;
      }
    }
    WaitForSingleObject(EventW, 0xFFFFFFFF);
    CloseHandle(EventW);
LABEL_21:
    if ( IsDwmMonitorExtDwmProcessCreatedPresent() )
      DwmMonitorExtInitialize();
  }
  if ( IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(1LL);
  v7 = MapDwmVirtualAccountAndAdjustPrivileges();
  v6 = v7;
  if ( v7 < 0 )
  {
    v8 = 1256;
    goto LABEL_46;
  }
  v12 = LogonDwmAccountAndSetTokenIntegrityLevel(&hToken);
  v6 = v12;
  if ( v12 < 0 )
  {
    DoStackCaptureDirect(v12, 0x4EBu);
    v2 = hToken;
    goto LABEL_48;
  }
  SetLastError(0);
  v2 = hToken;
  if ( !CreateProcessAsUserW(
          hToken,
          L"dwm.exe",
          0LL,
          0LL,
          0LL,
          0,
          0x4000420u,
          0LL,
          0LL,
          &StartupInfo,
          &ProcessInformation) )
  {
    v13 = GetLastError();
    v6 = v13;
    if ( v13 > 0 )
      v6 = (unsigned __int16)v13 | 0x80070000;
    v8 = 1279;
    if ( v6 >= 0 )
      v6 = -2003304445;
    goto LABEL_19;
  }
  if ( ProcessInformation.hProcess )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
    {
      if ( v3 )
      {
        hProcess = ProcessInformation.hProcess;
        AcquireSRWLockExclusive(v3 + 2);
        LODWORD(v3[3].Ptr) = GetProcessId(hProcess);
        if ( v3 != (RTL_SRWLOCK *)-16LL )
          ReleaseSRWLockExclusive(v3 + 2);
      }
    }
    if ( IsWaitForInputIdlePresent() )
      WaitForInputIdle(ProcessInformation.hProcess, 0xFFFFFFFF);
    if ( WaitForSingleObject(ProcessInformation.hProcess, 0) )
    {
      ghDwmProcess = ProcessInformation.hProcess;
      ProcessInformation.hProcess = 0LL;
      if ( IsDwmMonitorExtDwmProcessCreatedPresent() )
        DwmMonitorExtDwmProcessCreated(ghDwmProcess);
    }
    else
    {
      v6 = -2147467259;
      TraceLoggingWriteEtw(4LL, 2147500037LL, 0LL);
      DwmpSignalSessionShutdown();
    }
  }
LABEL_48:
  gDwmFirstLaunch = 0;
  if ( ProcessInformation.hProcess )
  {
    CloseHandle(ProcessInformation.hProcess);
    ProcessInformation.hProcess = 0LL;
  }
  if ( ProcessInformation.hThread )
  {
    CloseHandle(ProcessInformation.hThread);
    ProcessInformation.hThread = 0LL;
  }
  if ( v2 )
    CloseHandle(v2);
  if ( IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(0LL);
  if ( v6 < 0 )
  {
    LODWORD(qword_180019E1C) = qword_180019E1C + 1;
    ++HIDWORD(qword_180019E1C);
    if ( SHIDWORD(qword_180019E1C) > 10 )
    {
      _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v15);
      HIDWORD(qword_180019E1C) = 0;
    }
    if ( (unsigned int)dword_180019000 > 5
      && (qword_180019010 & 0x400000000000LL) != 0
      && (qword_180019018 & 0x400000000000LL) == qword_180019018 )
    {
      LODWORD(hToken) = v6;
      v22 = &gDwmInitTargetAppSessionGuid;
      v24 = 0x1000000LL;
      v23 = &gDwmInitTelemetryActivityId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        (__int64)v15,
        (__int64)&unk_180015774,
        v16,
        v17,
        (__int64)&v24,
        (__int64 *)&v23,
        (__int64)&hToken,
        (__int64 *)&v22);
    }
    _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v15);
    TraceLoggingWriteEtw(2LL, (unsigned int)v6, 0LL);
  }
  dword_18001D6A8 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  if ( v6 < 0 )
  {
    DwmpSignalSessionShutdown();
    DoStackCaptureDirect(v6, 0x597u);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl)
    && v3 )
  {
    CallWithHangTimeout::~CallWithHangTimeout((struct _TP_TIMER **)v3);
    operator delete(v3);
  }
  TraceLoggingWriteEtw(10LL, (unsigned int)v6, v1);
  return 0LL;
}
