/*
 * XREFs of DwmpTerminateSessionProcess @ 0x18000E730
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@54@Z @ 0x18000114C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U2@@-$_.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800025A4 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000283C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180003628 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 *     ??0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z @ 0x18000A8A8 (--0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z.c)
 *     ??1CallWithHangTimeout@@QEAA@XZ @ 0x18000AB18 (--1CallWithHangTimeout@@QEAA@XZ.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x18000CA54 (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000D0FC (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000D2CC (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@details@wil@@QEAA_NXZ @ 0x18000D6F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@det.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000EF88 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000FB24 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 */

__int64 __fastcall DwmpTerminateSessionProcess(int a1)
{
  RTL_SRWLOCK *v2; // rdi
  _DWORD *v3; // rax
  unsigned int v4; // edx
  CApiPortClient *v5; // rcx
  __int16 v6; // r8
  void *v7; // r9
  HANDLE v8; // rbx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _unnamed_type_gDwmInitTelemetryAggregator_ *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-49h]
  void *v18; // [rsp+30h] [rbp-39h]
  __int16 v19; // [rsp+38h] [rbp-31h]
  GUID *v20; // [rsp+50h] [rbp-19h] BYREF
  GUID *v21; // [rsp+58h] [rbp-11h] BYREF
  __int64 v22; // [rsp+60h] [rbp-9h] BYREF
  _BYTE DestinationString[34]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v24; // [rsp+8Ah] [rbp+21h]
  int v25; // [rsp+92h] [rbp+29h]
  __int16 v26; // [rsp+96h] [rbp+2Dh]
  PVOID Buffer; // [rsp+D8h] [rbp+6Fh] BYREF
  int v28; // [rsp+E0h] [rbp+77h] BYREF
  DWORD ExitCode; // [rsp+E8h] [rbp+7Fh] BYREF

  ExitCode = 0;
  v2 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
  {
    v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v3 )
      v2 = (RTL_SRWLOCK *)CallWithHangTimeout::CallWithHangTimeout(v3, v4);
  }
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18001E6D8 = GetCurrentThreadId();
  if ( ghDwmProcess )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
    {
      if ( v2 )
      {
        v8 = ghDwmProcess;
        AcquireSRWLockExclusive(v2 + 2);
        LODWORD(v2[3].Ptr) = GetProcessId(v8);
        if ( v2 != (RTL_SRWLOCK *)-16LL )
          ReleaseSRWLockExclusive(v2 + 2);
      }
    }
    LODWORD(Buffer) = 0;
    v28 = 536870913;
    v9 = CApiPortClient::SendRequest(v5, &v28, v6, v7, v17, (int *)&Buffer, v18, v19);
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180014D78, 2u, v9, 0x71Eu, 0LL);
    WaitForDwmExit(&ExitCode, 0LL);
  }
  memset(DestinationString, 0, sizeof(DestinationString));
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v10 = 0;
  Buffer = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)DestinationString, L"Window Manager");
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[16], &gwszDwmAccountName);
  v11 = LsaLookupManageSidNameMapping(1LL, DestinationString, &Buffer);
  if ( v11 < 0 )
  {
    v10 = v11 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180014D78, 2u, v11 | 0x10000000, 0x292u, 0LL);
  }
  if ( Buffer )
    LsaLookupFreeMemory(Buffer);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180014D78, 2u, v10, 0x723u, 0LL);
  }
  else if ( IsDwmMonitorExtDwmProcessCreatedPresent() )
  {
    DwmMonitorExtCleanup();
  }
  dword_18001E6D8 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl)
    && v2 )
  {
    CallWithHangTimeout::~CallWithHangTimeout((struct _TP_TIMER **)v2);
    operator delete(v2);
  }
  if ( (unsigned int)dword_18001A000 > 5
    && (qword_18001A010 & 0x400000000000LL) != 0
    && (qword_18001A018 & 0x400000000000LL) == qword_18001A018 )
  {
    LODWORD(Buffer) = a1;
    v20 = &gDwmInitTargetAppSessionGuid;
    v28 = v10;
    v21 = &gDwmInitTelemetryActivityId;
    v22 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v12,
      (__int64)&unk_1800157AC,
      v13,
      v14,
      (__int64)&v22,
      (__int64 *)&v21,
      (__int64)&v28,
      (__int64)&Buffer,
      (__int64 *)&v20);
  }
  TraceLoggingWriteEtw(9, v10, 0);
  _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v15);
  return (unsigned int)v10;
}
