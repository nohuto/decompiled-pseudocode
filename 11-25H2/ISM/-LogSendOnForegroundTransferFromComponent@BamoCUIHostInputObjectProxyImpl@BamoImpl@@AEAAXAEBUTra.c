/*
 * XREFs of ?LogSendOnForegroundTransferFromComponent@BamoCUIHostInputObjectProxyImpl@BamoImpl@@AEAAXAEBUTransferForegroundInfo@@@Z @ 0x18012F01C
 * Callers:
 *     ?OnForegroundTransferFromComponent@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJAEBUTransferForegroundInfo@@@Z @ 0x18012F300 (-OnForegroundTransferFromComponent@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJAEBUTransferFo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180001E60 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoCUIHostInputObjectProxyImpl::LogSendOnForegroundTransferFromComponent(
        BamoImpl::BamoCUIHostInputObjectProxyImpl *this,
        const struct TransferForegroundInfo *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  int *v4; // r9
  int v5; // edx
  _DWORD v6[6]; // [rsp+40h] [rbp-18h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF
  int v8; // [rsp+78h] [rbp+20h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v7 = *v4;
    v5 = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 36LL);
    v6[0] = *(_DWORD *)(v3 + 24);
    v8 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_18021319E,
      v3,
      (__int64)v4,
      (__int64)v6,
      (__int64)&v8,
      (__int64)&v7);
  }
}
