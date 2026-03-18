/*
 * XREFs of ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x14010F668
 * Callers:
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140109410 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     NtMITSynthesizeMouseInput @ 0x1401B8CC0 (NtMITSynthesizeMouseInput.c)
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x14020F470 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1400D799C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?InjectionSourceToString@InputTraceLogging@@CAPEBDW4InjectionSource@Mouse@1@@Z @ 0x1401B72B4 (-InjectionSourceToString@InputTraceLogging@@CAPEBDW4InjectionSource@Mouse@1@@Z.c)
 */

void InputTraceLogging::Mouse::InjectInput()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029AE30 > 4 && (qword_14029AE40 & 0x40) != 0 && (qword_14029AE48 & 0x40) == qword_14029AE48 )
  {
    v3 = InputTraceLogging::InjectionSourceToString();
    v4 = v0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_14029AE30,
      byte_1402759CF,
      v1,
      v2,
      (__int64)&v4,
      (void **)&v3);
  }
}
