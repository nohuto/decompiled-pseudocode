/*
 * XREFs of ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1801CB258
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180211CEC (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180005764 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800F3E30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     McGenEventRegister_EventRegister @ 0x1801CB434 (McGenEventRegister_EventRegister.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1801CB49C (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

void __fastcall RegisterDwmGuidWithEtw(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  DWORD CurrentProcessId; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  DWORD pdwType; // [rsp+20h] [rbp-E0h]
  DWORD pSessionId; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE *v10; // [rsp+48h] [rbp-B8h] BYREF
  GUID *v11; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR Value[40]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE pvData[80]; // [rsp+B0h] [rbp-50h] BYREF

  McGenEventRegister_EventRegister(
    &Microsoft_Windows_Dwm_Core_Provider,
    a2,
    &Microsoft_Windows_Dwm_Core_Provider_Context,
    &Microsoft_Windows_Dwm_Core_Provider_Context);
  McGenEventRegister_EventRegister(
    &Microsoft_Windows_Dwm_Compositor,
    v2,
    Microsoft_Windows_Dwm_Compositor_Context,
    Microsoft_Windows_Dwm_Compositor_Context);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803F8D18);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803F8C70);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803F8CA8);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803F8CE0);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803F8D50);
  EventActivityIdControl(3u, &gDwmCoreTelemetryActivityId);
  pSessionId = 0;
  CurrentProcessId = GetCurrentProcessId();
  if ( ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    memset_0(Value, 0, 0x44uLL);
    pdwType = pSessionId;
    if ( (int)StringCchPrintfW(Value, 34LL, L"%s_%08X", L"DwmInitSessionActivityId", pdwType) >= 0 )
    {
      memset_0(pvData, 0, 0x4AuLL);
      pcbData = 74;
      if ( !RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\Dwm", Value, 2u, 0LL, pvData, &pcbData)
        && (unsigned int)dword_1803F8CA8 > 5
        && tlgKeywordOn((__int64)&dword_1803F8CA8, 0x400000000000LL) )
      {
        v11 = &gDwmCoreTelemetryActivityId;
        v10 = pvData;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
          v4,
          (__int64)&unk_1803CF687,
          v5,
          v6,
          (__int64)&v11,
          &v10);
      }
    }
  }
}
