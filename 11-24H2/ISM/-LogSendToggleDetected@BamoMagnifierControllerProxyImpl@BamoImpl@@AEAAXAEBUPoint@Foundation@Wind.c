/*
 * XREFs of ?LogSendToggleDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x180157F70
 * Callers:
 *     ?ToggleDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x1801585A0 (-ToggleDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJAEBUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001DE4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoMagnifierControllerProxyImpl::LogSendToggleDetected(
        BamoImpl::BamoMagnifierControllerProxyImpl *this,
        const struct Windows::Foundation::Point *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // edx
  const struct Windows::Foundation::Point *v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2;
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 36LL);
    v7 = *(_DWORD *)(v3 + 24);
    LODWORD(v6) = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_180221BD1,
      v3,
      v4,
      (__int64)&v7,
      (__int64)&v6);
  }
}
