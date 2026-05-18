/*
 * XREFs of ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000B030
 * Callers:
 *     DwmpCreateSessionProcess @ 0x18000DDB0 (DwmpCreateSessionProcess.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800010A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlg.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800025A4 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000283C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180003154 (memset_0.c)
 *     IsWaitForInputIdlePresent @ 0x1800032FC (IsWaitForInputIdlePresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x1800034BC (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180003628 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 *     ??0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z @ 0x18000A8A8 (--0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z.c)
 *     ??1CallWithHangTimeout@@QEAA@XZ @ 0x18000AB18 (--1CallWithHangTimeout@@QEAA@XZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000AC58 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x18000C128 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x18000C608 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x18000CA54 (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000D0FC (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@details@wil@@QEAA_NXZ @ 0x18000D6F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@det.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000EEE8 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x18000F44C (DwmpSignalSessionShutdown.c)
 */

__int64 __fastcall DwmpCreateSessionProcessWorker(PVOID Parameter)
{
  unsigned int v1; // r12d
  HANDLE v2; // r15
  RTL_SRWLOCK *v3; // rsi
  _DWORD *v4; // rax
  unsigned int v5; // edx
  signed int v6; // edi
  HANDLE v7; // rbx
  int v8; // eax
  HANDLE EventW; // rbx
  signed int LastError; // eax
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // eax
  signed int v14; // eax
  HANDLE hProcess; // rbx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+60h] [rbp-79h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+80h] [rbp-59h] BYREF
  HANDLE hToken; // [rsp+140h] [rbp+67h] BYREF
  GUID *v23; // [rsp+148h] [rbp+6Fh] BYREF
  GUID *v24; // [rsp+150h] [rbp+77h] BYREF
  __int64 v25; // [rsp+158h] [rbp+7Fh] BYREF

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
    v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
      v3 = (RTL_SRWLOCK *)CallWithHangTimeout::CallWithHangTimeout(v4, v5);
  }
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18001E6D8 = GetCurrentThreadId();
  if ( v1 && (!ghDwmProcess || GetProcessId(ghDwmProcess) != v1) )
  {
    v6 = 1;
    goto LABEL_57;
  }
  if ( ghDwmProcess )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
    {
      if ( v3 )
      {
        v7 = ghDwmProcess;
        AcquireSRWLockExclusive(v3 + 2);
        LODWORD(v3[3].Ptr) = GetProcessId(v7);
        if ( v3 != (RTL_SRWLOCK *)-16LL )
          ReleaseSRWLockExclusive(v3 + 2);
      }
    }
    v8 = CleanupOldDwmProcess();
    v6 = v8;
    if ( v8 < 0 )
    {
      v11 = 1289;
LABEL_55:
      v12 = v8;
      goto LABEL_56;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
    {
      if ( v3 )
      {
        AcquireSRWLockExclusive(v3 + 2);
        LODWORD(v3[3].Ptr) = 0;
        if ( v3 != (RTL_SRWLOCK *)-16LL )
          ReleaseSRWLockExclusive(v3 + 2);
      }
    }
  }
  if ( gDwmFirstLaunch )
  {
    EventW = CreateEventW(0LL, 1, 0, L"Global\\LSA_SUBSYSTEM_INITIALIZED");
    if ( !EventW )
    {
      if ( GetLastError() != 183 )
        goto LABEL_30;
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
        DoStackCaptureDirect(v6, 0x1C3u);
        v11 = 1312;
LABEL_27:
        v12 = v6;
LABEL_56:
        DoStackCaptureDirect(v12, v11);
        goto LABEL_57;
      }
    }
    WaitForSingleObject(EventW, 0xFFFFFFFF);
    CloseHandle(EventW);
LABEL_30:
    if ( IsDwmMonitorExtDwmProcessCreatedPresent() )
      DwmMonitorExtInitialize();
  }
  if ( IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(1LL);
  v8 = MapDwmVirtualAccountAndAdjustPrivileges();
  v6 = v8;
  if ( v8 < 0 )
  {
    v11 = 1330;
    goto LABEL_55;
  }
  v13 = LogonDwmAccountAndSetTokenIntegrityLevel(&hToken);
  v6 = v13;
  if ( v13 < 0 )
  {
    DoStackCaptureDirect(v13, 0x535u);
    v2 = hToken;
    goto LABEL_57;
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
    v14 = GetLastError();
    v6 = v14;
    if ( v14 > 0 )
      v6 = (unsigned __int16)v14 | 0x80070000;
    v11 = 1353;
    if ( v6 >= 0 )
      v6 = -2003304445;
    goto LABEL_27;
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
LABEL_57:
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
    LODWORD(qword_18001AE4C) = qword_18001AE4C + 1;
    ++HIDWORD(qword_18001AE4C);
    if ( SHIDWORD(qword_18001AE4C) > 10 )
    {
      _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v16);
      HIDWORD(qword_18001AE4C) = 0;
    }
    if ( (unsigned int)dword_18001A000 > 5
      && (qword_18001A010 & 0x400000000000LL) != 0
      && (qword_18001A018 & 0x400000000000LL) == qword_18001A018 )
    {
      LODWORD(hToken) = v6;
      v23 = &gDwmInitTargetAppSessionGuid;
      v25 = 0x1000000LL;
      v24 = &gDwmInitTelemetryActivityId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        (__int64)v16,
        (__int64)&unk_180015877,
        v17,
        v18,
        (__int64)&v25,
        (__int64 *)&v24,
        (__int64)&hToken,
        (__int64 *)&v23);
    }
    _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v16);
    TraceLoggingWriteEtw(2LL, (unsigned int)v6, 0LL);
  }
  dword_18001E6D8 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  if ( v6 < 0 )
  {
    DwmpSignalSessionShutdown();
    DoStackCaptureDirect(v6, 0x5E1u);
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
