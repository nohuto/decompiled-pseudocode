/*
 * XREFs of ?LogReceiveAcknowledgeGestureReceived@BamoMagnifierControllerProxyImpl@BamoImpl@@AEAAXXZ @ 0x180155CAC
 * Callers:
 *     ?Thunk_AcknowledgeGestureReceived_14@?$IMagnifierControllerProxy_Receive@VBamoMagnifierControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801562B0 (-Thunk_AcknowledgeGestureReceived_14@-$IMagnifierControllerProxy_Receive@VBamoMagnifierControlle.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001DE4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoMagnifierControllerProxyImpl::LogReceiveAcknowledgeGestureReceived(
        BamoImpl::BamoMagnifierControllerProxyImpl *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // edx
  int v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 36LL);
    v6 = *(_DWORD *)(v2 + 24);
    v5 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v1,
      (__int64)&unk_180218443,
      v2,
      v3,
      (__int64)&v6,
      (__int64)&v5);
  }
}
