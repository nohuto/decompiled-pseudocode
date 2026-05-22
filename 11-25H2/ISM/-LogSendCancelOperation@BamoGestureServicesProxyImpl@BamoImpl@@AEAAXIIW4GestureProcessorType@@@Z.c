/*
 * XREFs of ?LogSendCancelOperation@BamoGestureServicesProxyImpl@BamoImpl@@AEAAXIIW4GestureProcessorType@@@Z @ 0x180118DA4
 * Callers:
 *     ?CancelOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x1801139FC (-CancelOperation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEAVBamoDragManagerClientPrincipal.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x180002640 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void BamoImpl::BamoGestureServicesProxyImpl::LogSendCancelOperation()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  int v4; // r11d
  __int64 v5; // rax
  int v6; // edx
  int v7; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+54h] [rbp-24h] BYREF
  int v9; // [rsp+58h] [rbp-20h] BYREF
  int v10; // [rsp+5Ch] [rbp-1Ch] BYREF
  _DWORD v11[6]; // [rsp+60h] [rbp-18h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v7 = v2;
    v8 = v1;
    v9 = v4;
    v6 = *(_DWORD *)(v5 + 36);
    v11[0] = *(_DWORD *)(v3 + 24);
    v10 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v0,
      (__int64)&unk_18020C3AA,
      v1,
      v2,
      (__int64)v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7);
  }
}
