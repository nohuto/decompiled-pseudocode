/*
 * XREFs of ?LogSendOnSystemButtonEvent@BamoSystemButtonEventControllerProxyImpl@BamoImpl@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18015C32C
 * Callers:
 *     ?OnSystemButtonEvent@BamoSystemButtonEventControllerProxyImpl@BamoImpl@@QEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18015C5D0 (-OnSystemButtonEvent@BamoSystemButtonEventControllerProxyImpl@BamoImpl@@QEAAJAEBUSystemButtonEve.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x180008414 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$00@@U3@@-$.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoSystemButtonEventControllerProxyImpl::LogSendOnSystemButtonEvent(
        BamoImpl::BamoSystemButtonEventControllerProxyImpl *this,
        const struct SystemButtonEventInfo *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // ecx
  int v6; // [rsp+50h] [rbp-20h] BYREF
  int v7; // [rsp+54h] [rbp-1Ch] BYREF
  int v8; // [rsp+58h] [rbp-18h] BYREF
  __int64 v9; // [rsp+60h] [rbp-10h] BYREF
  char v10; // [rsp+90h] [rbp+20h] BYREF
  char v11; // [rsp+98h] [rbp+28h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v10 = *(_BYTE *)(v3 + 13);
    v11 = *(_BYTE *)(v3 + 12);
    v6 = *(_DWORD *)(v3 + 8);
    v9 = *(_QWORD *)v3;
    v5 = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 36LL);
    v8 = *(_DWORD *)(v4 + 24);
    v7 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v2,
      (__int64)&unk_180222B09,
      v2,
      v3,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v9,
      (__int64)&v6,
      (__int64)&v11,
      (__int64)&v10);
  }
}
