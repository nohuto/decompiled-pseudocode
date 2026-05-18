/*
 * XREFs of DllMain @ 0x18000DA84
 * Callers:
 *     dllmain_dispatch @ 0x180003928 (dllmain_dispatch.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180001200 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     __security_check_cookie @ 0x1800021B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180003154 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005EB4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180008FE8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z @ 0x18000D1EC (-UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@details@wil@@QEAA_NXZ @ 0x18000D6F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2@@@det.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  HANDLE CurrentProcess; // rax
  struct _GUID *v4; // rdx
  unsigned __int16 *v5; // r8
  unsigned __int16 *v6; // r9
  DWORD CurrentProcessId; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const char *v11; // r9
  REGHANDLE v12; // rcx
  int dwOptionsa; // [rsp+20h] [rbp-E0h]
  DWORD dwOptions[2]; // [rsp+20h] [rbp-E0h]
  int samDesired; // [rsp+28h] [rbp-D8h]
  int lpSecurityAttributes; // [rsp+30h] [rbp-D0h]
  int phkResult; // [rsp+38h] [rbp-C8h]
  int lpdwDisposition; // [rsp+40h] [rbp-C0h]
  int v20; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+50h] [rbp-B0h]
  int v22; // [rsp+58h] [rbp-A8h]
  int v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+68h] [rbp-98h]
  HKEY hKey; // [rsp+70h] [rbp-90h] BYREF
  DWORD pSessionId[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  WCHAR ValueName[40]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 Data[40]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      DisableThreadLibraryCalls(hinstDLL);
      CurrentProcess = GetCurrentProcess();
      UtilGetProcessTelemetryAppSessionGuid(CurrentProcess, v4, v5, v6);
      EventActivityIdControl(3u, &gDwmInitTelemetryActivityId);
      memset_0(Data, 0, 0x4AuLL);
      v24 = gDwmInitTelemetryActivityId.Data4[7];
      v23 = gDwmInitTelemetryActivityId.Data4[6];
      v22 = gDwmInitTelemetryActivityId.Data4[5];
      v21 = gDwmInitTelemetryActivityId.Data4[4];
      v20 = gDwmInitTelemetryActivityId.Data4[3];
      lpdwDisposition = gDwmInitTelemetryActivityId.Data4[2];
      phkResult = gDwmInitTelemetryActivityId.Data4[1];
      lpSecurityAttributes = gDwmInitTelemetryActivityId.Data4[0];
      samDesired = gDwmInitTelemetryActivityId.Data3;
      dwOptionsa = gDwmInitTelemetryActivityId.Data2;
      if ( (int)StringCchPrintfW(
                  Data,
                  37LL,
                  L"%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",
                  gDwmInitTelemetryActivityId.Data1,
                  dwOptionsa,
                  samDesired,
                  lpSecurityAttributes,
                  phkResult,
                  lpdwDisposition,
                  v20,
                  v21,
                  v22,
                  v23,
                  v24) >= 0 )
      {
        hKey = 0LL;
        if ( !RegCreateKeyExW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\Dwm",
                0,
                0LL,
                1u,
                0xF003Fu,
                0LL,
                &hKey,
                0LL) )
        {
          pSessionId[0] = 0;
          CurrentProcessId = GetCurrentProcessId();
          if ( ProcessIdToSessionId(CurrentProcessId, pSessionId) )
          {
            memset_0(ValueName, 0, 0x44uLL);
            dwOptions[0] = pSessionId[0];
            if ( (int)StringCchPrintfW(ValueName, 34LL, L"%s_%08X", L"DwmInitSessionActivityId", *(_QWORD *)dwOptions) >= 0 )
              RegSetKeyValueW(hKey, 0LL, ValueName, 1u, Data, 0x4Au);
          }
          RegCloseKey(hKey);
        }
      }
      TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_18001A000);
      if ( (unsigned int)dword_18001A000 > 5
        && (qword_18001A010 & 0x400000000000LL) != 0
        && (qword_18001A018 & 0x400000000000LL) == qword_18001A018 )
      {
        *(_QWORD *)pSessionId = &gDwmInitTelemetryActivityId;
        hKey = (HKEY)&gDwmInitTargetAppSessionGuid;
        v27 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>>(
          v8,
          (__int64)&unk_180015822,
          v9,
          v10,
          (__int64)&v27,
          (__int64 *)pSessionId,
          &hKey);
      }
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionOnDWMCallouts2>::GetImpl'::`2'::impl) )
      {
        if ( CallWithHangTimeout::s_isRemoteProcessBeingDebuggedFunction )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            133LL,
            (__int64)"onecoreuap\\internal\\ds\\inc\\winlogon\\CallWithHangTimeout.h",
            v11);
        CallWithHangTimeout::s_isRemoteProcessBeingDebuggedFunction = IsDWMBeingDebugged;
      }
    }
  }
  else
  {
    v12 = RegHandle;
    RegHandle = 0LL;
    dword_18001A000 = 0;
    EventUnregister(v12);
  }
  return 1;
}
