/*
 * XREFs of DwmpTerminateSessionProcess @ 0x18000DFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@54@Z @ 0x18000114C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U2@@-$_.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x1800035EC (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x18000C5D0 (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000CBDC (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000CDAC (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000E74C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x18000F3AC (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 */

__int64 __fastcall DwmpTerminateSessionProcess(int a1)
{
  CApiPortClient *v2; // rcx
  __int16 v3; // r8
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _unnamed_type_gDwmInitTelemetryAggregator_ *v10; // rcx
  void *v12; // [rsp+20h] [rbp-39h]
  __int16 v13; // [rsp+28h] [rbp-31h]
  GUID *v14; // [rsp+50h] [rbp-9h] BYREF
  GUID *v15; // [rsp+58h] [rbp-1h] BYREF
  __int64 v16; // [rsp+60h] [rbp+7h] BYREF
  _BYTE DestinationString[34]; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+8Ah] [rbp+31h]
  int v19; // [rsp+92h] [rbp+39h]
  __int16 v20; // [rsp+96h] [rbp+3Dh]
  PVOID Buffer; // [rsp+C8h] [rbp+6Fh] BYREF
  int v22; // [rsp+D0h] [rbp+77h] BYREF
  DWORD ExitCode; // [rsp+D8h] [rbp+7Fh] BYREF

  ExitCode = 0;
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18001D6A8 = GetCurrentThreadId();
  if ( ghDwmProcess )
  {
    LODWORD(Buffer) = 0;
    v22 = 536870913;
    v4 = CApiPortClient::SendRequest(v2, &v22, v3, (int *)&Buffer, v12, v13);
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180014D68, 2u, v4, 0x6C4u, 0LL);
    WaitForDwmExit(&ExitCode, 0LL);
  }
  memset(DestinationString, 0, sizeof(DestinationString));
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v5 = 0;
  Buffer = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)DestinationString, L"Window Manager");
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[16], gwszDwmAccountName);
  v6 = LsaLookupManageSidNameMapping(1LL, DestinationString, &Buffer);
  if ( v6 < 0 )
  {
    v5 = v6 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180014D68, 2u, v6 | 0x10000000, 0x27Cu, 0LL);
  }
  if ( Buffer )
    LsaLookupFreeMemory(Buffer);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180014D68, 2u, v5, 0x6C9u, 0LL);
  }
  else if ( IsDwmMonitorExtDwmProcessCreatedPresent() )
  {
    DwmMonitorExtCleanup();
  }
  dword_18001D6A8 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  if ( (unsigned int)dword_180019000 > 5
    && (qword_180019010 & 0x400000000000LL) != 0
    && (qword_180019018 & 0x400000000000LL) == qword_180019018 )
  {
    LODWORD(Buffer) = a1;
    v14 = &gDwmInitTargetAppSessionGuid;
    v22 = v5;
    v15 = &gDwmInitTelemetryActivityId;
    v16 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v7,
      (__int64)&unk_1800159EF,
      v8,
      v9,
      (__int64)&v16,
      (__int64 *)&v15,
      (__int64)&v22,
      (__int64)&Buffer,
      (__int64 *)&v14);
  }
  TraceLoggingWriteEtw(9, v5, 0);
  _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v10);
  return (unsigned int)v5;
}
