/*
 * XREFs of ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000DEB8
 * Callers:
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E394 (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001B7C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140001C4C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     IsWerReportCreatePresent @ 0x140005BE4 (IsWerReportCreatePresent.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x14000D5C0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x14000D65C (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z @ 0x14000D714 (-DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000D848 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x14000DB00 (BlackScreenDiagnostics--GetDwmFrontBufferBitsColor.c)
 *     BlackScreenDiagnostics::GetVidPnOwnership @ 0x14000DCE0 (BlackScreenDiagnostics--GetVidPnOwnership.c)
 *     BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x14000E5D8 (BlackScreenDiagnostics--TriggerGraphicsCollection.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x14000E6F8 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ??1CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@XZ @ 0x14000E968 (--1CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA@XZ.c)
 *     ?SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z @ 0x14000E9B4 (-SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z.c)
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000EA10 (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000EB1C (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::Run(
        BlackScreenDiagnostics::CBlackScreenDiagnosticReport *a1,
        int a2,
        char a3,
        const struct _GUID *a4)
{
  UUID v7; // xmm0
  DWORD CurrentProcessId; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  const unsigned __int16 *v13; // r15
  __int64 v14; // rdx
  const WCHAR *v15; // rbx
  HRESULT v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  const unsigned __int16 *v24; // rbx
  const unsigned __int16 *v25; // rdi
  HANDLE CurrentProcess; // rax
  HRESULT v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  const unsigned __int16 *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  HRESULT v36; // eax
  __int64 v37; // rcx
  _WER_SUBMIT_RESULT pSubmitResult[2]; // [rsp+40h] [rbp-C0h] BYREF
  RPC_WSTR StringUuid; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B0h] BYREF
  UUID v41; // [rsp+58h] [rbp-A8h] BYREF
  DWORD pSessionId[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v43[2]; // [rsp+70h] [rbp-90h] BYREF
  __m128i si128; // [rsp+80h] [rbp-80h]
  HREPORT hReportHandle; // [rsp+90h] [rbp-70h] BYREF
  bool v46; // [rsp+98h] [rbp-68h]
  _QWORD v47[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v48[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v49[4]; // [rsp+E0h] [rbp-20h] BYREF

  if ( (a3 & 3) == 0 )
    goto LABEL_63;
  if ( a2 == 1 )
    goto LABEL_11;
  v7 = *a4;
  pSessionId[1] = 0;
  v41 = v7;
  pSessionId[0] = 1;
  CurrentProcessId = GetCurrentProcessId();
  ProcessIdToSessionId(CurrentProcessId, &pSessionId[1]);
  v9 = RtlPublishWnfStateData(WNF_DWM_DUMP_REQUEST, 0LL, &v41, 24LL, 0LL) | 0x10000000;
  if ( v9 < 0 )
    MicrosoftTelemetryAssertTriggeredArgs(v10, (unsigned int)v9, 0LL);
  v11 = RtlPublishWnfStateData(WNF_DWM_DUMP_REQUEST_FOR_SERVICE, 0LL, &v41, 24LL, 0LL) | 0x10000000;
  if ( v11 < 0 )
    MicrosoftTelemetryAssertTriggeredArgs(v12, (unsigned int)v11, 0LL);
  if ( !a2 )
  {
    v13 = L"Hotkey";
    goto LABEL_12;
  }
  if ( a2 == 1 )
  {
LABEL_11:
    v13 = L"LongPowerButtonHold";
    goto LABEL_12;
  }
  v13 = L"Unknown";
LABEL_12:
  hReportHandle = 0LL;
  v46 = IsWerReportCreatePresent() != 0;
  std::wstring::wstring(v47, L"WindowsBlackScreenDiagnosticsV1");
  std::wstring::wstring(v48, L"Black Screen - User Reported");
  std::wstring::wstring(v49, L"The user has invoked the Black Screen Diagnostics Tool to generate this report");
  StringUuid = 0LL;
  if ( !UuidToStringW(a4, &StringUuid) )
  {
    v15 = StringUuid;
    if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(&hReportHandle) )
    {
      v16 = WerRegisterCustomMetadata(L"BlackScreenInstanceGuid", v15);
      if ( v16 < 0 )
        MicrosoftTelemetryAssertTriggeredArgs(v17, (unsigned int)v16, 0LL);
    }
    RpcStringFreeW(&StringUuid);
  }
  if ( (a3 & 2) != 0 )
  {
    if ( (unsigned int)dword_1400180D8 > 5 && tlgKeywordOn((__int64)&dword_1400180D8, 0x800000000000LL) )
    {
      *(_QWORD *)pSubmitResult = a4;
      v40 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
        v18,
        (__int64)&unk_140013D4F,
        v19,
        v20,
        (__int64)&v40,
        (__int64 *)pSubmitResult);
    }
    LOBYTE(v14) = 1;
    BlackScreenDiagnostics::TriggerGraphicsCollection(0LL, v14, a4);
  }
  pSubmitResult[0] = 0;
  BlackScreenDiagnostics::GetVidPnOwnership(pSubmitResult);
  v23 = (unsigned int)(pSubmitResult[0] - 1);
  if ( pSubmitResult[0] == WerReportQueued )
  {
    v24 = L"DWM";
  }
  else
  {
    v23 = (unsigned int)(pSubmitResult[0] - 2);
    if ( pSubmitResult[0] == WerReportUploaded )
    {
      v24 = L"NotDWM";
    }
    else
    {
      v23 = (unsigned int)(pSubmitResult[0] - 3);
      if ( pSubmitResult[0] == WerReportDebug )
      {
        v24 = L"None";
      }
      else
      {
        v23 = (unsigned int)(pSubmitResult[0] - 4);
        if ( pSubmitResult[0] == WerReportFailed )
        {
          v24 = L"NoVidPnPresent";
        }
        else
        {
          v23 = (unsigned int)(pSubmitResult[0] - 5);
          if ( pSubmitResult[0] == WerDisabled )
          {
            v24 = L"QueryDisplayConfigFailure";
          }
          else
          {
            v23 = (unsigned int)(pSubmitResult[0] - 6);
            if ( pSubmitResult[0] == WerReportCancelled )
            {
              v24 = L"OpenAdaptorFailure";
            }
            else if ( pSubmitResult[0] == WerDisabledQueue )
            {
              v24 = L"CheckVidPnExclusiveOwnershipFailure";
            }
            else
            {
              v24 = L"Unknown";
            }
          }
        }
      }
    }
  }
  pSubmitResult[0] = 0;
  BlackScreenDiagnostics::GetDwmFrontBufferBitsColor(v23, v21, v22, (int *)pSubmitResult);
  switch ( pSubmitResult[0] )
  {
    case WerReportQueued:
      v25 = L"BlackBits";
      break;
    case WerReportUploaded:
      v25 = L"ColorBits";
      break;
    case WerReportDebug:
      v25 = L"CaptureBitsFailure";
      break;
    case WerReportFailed:
      v25 = L"FileMappingFailure";
      break;
    case WerDisabled:
      v25 = L"CheckBlackFailure";
      break;
    default:
      v25 = L"Unknown";
      break;
  }
  if ( (a3 & 1) != 0 && BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(&hReportHandle) )
  {
    CurrentProcess = GetCurrentProcess();
    v27 = WerReportAddDump(hReportHandle, CurrentProcess, 0LL, WerDumpTypeHeapDump, 0LL, 0LL, 0);
    if ( v27 < 0 )
      MicrosoftTelemetryAssertTriggeredArgs(v28, (unsigned int)v27, 0LL);
  }
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    0,
    v24);
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    1u,
    L"Unknown");
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    2u,
    v25);
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    3u,
    v13);
  *(_OWORD *)v43 = 0LL;
  LOWORD(v43[0]) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  BlackScreenDiagnostics::GetCurrentProcessVersionInfo(v43, v29, v30);
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v43, v31, v43) )
    v32 = v43[0];
  BlackScreenDiagnostics::CWatsonErrorReporting::SetReportParameter(
    (BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle,
    4u,
    v32);
  pSubmitResult[0] = WerCustomAction|WerReportFailed;
  if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(&hReportHandle) )
    WerReportSubmit(hReportHandle, WerConsentNotAsked, 4u, pSubmitResult);
  if ( (unsigned int)dword_1400180D8 > 5 && tlgKeywordOn((__int64)&dword_1400180D8, 0x800000000000LL) )
  {
    v40 = (__int64)a4;
    *(_QWORD *)pSubmitResult = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
      v33,
      (__int64)&unk_140013CA3,
      v34,
      v35,
      (__int64)pSubmitResult,
      &v40);
  }
  if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(&hReportHandle) )
  {
    v36 = WerUnregisterCustomMetadata(L"BlackScreenInstanceGuid");
    if ( v36 < 0 )
      MicrosoftTelemetryAssertTriggeredArgs(v37, (unsigned int)v36, 0LL);
  }
  std::wstring::~wstring((__int64)v43);
  BlackScreenDiagnostics::CWatsonErrorReporting::~CWatsonErrorReporting((BlackScreenDiagnostics::CWatsonErrorReporting *)&hReportHandle);
LABEL_63:
  if ( (a3 & 4) != 0 )
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::DoDisplayModeReset(a1, a4);
}
