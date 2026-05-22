/*
 * XREFs of ?LogSendOnHandEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@AEAAXAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x18011B0CC
 * Callers:
 *     ?OnHandEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x18011F3E8 (-OnHandEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4HandEventType@Intern.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180001FC4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void BamoImpl::BamoMPCInputObjectProxyImpl::LogSendOnHandEvent(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // r10
  __int64 v7; // rax
  int v8; // edx
  int v9; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v10[5]; // [rsp+44h] [rbp-14h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 v13; // [rsp+80h] [rbp+28h] BYREF
  va_list va1; // [rsp+80h] [rbp+28h]
  va_list va2; // [rsp+88h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    LODWORD(v13) = *v6;
    v7 = *(_QWORD *)(v5 + 16);
    LODWORD(v11) = v4;
    v8 = *(_DWORD *)(v7 + 36);
    v10[0] = *(_DWORD *)(v5 + 24);
    v9 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_1802177A4,
      v4,
      v5,
      (__int64)v10,
      (__int64)&v9,
      (__int64)va1,
      (__int64)va);
  }
}
