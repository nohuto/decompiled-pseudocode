/*
 * XREFs of ?LogSendResizeEnded@BamoResizeControllerClientProxyImpl@BamoImpl@@AEAAXIAEBUtagPOINT@@0@Z @ 0x18011BA54
 * Callers:
 *     ?ResizeEnded@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0@Z @ 0x1801244AC (-ResizeEnded@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180001E60 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoResizeControllerClientProxyImpl::LogSendResizeEnded(
        BamoImpl::BamoResizeControllerClientProxyImpl *this,
        __int64 a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // edx
  _DWORD v9[6]; // [rsp+40h] [rbp-18h] BYREF
  const struct tagPOINT *v10; // [rsp+70h] [rbp+18h] BYREF
  const struct tagPOINT *v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v7 = *(_QWORD *)(v5 + 16);
    LODWORD(v11) = v6;
    v8 = *(_DWORD *)(v7 + 36);
    v9[0] = *(_DWORD *)(v5 + 24);
    LODWORD(v10) = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      (__int64)&unk_180219DC9,
      v5,
      v6,
      (__int64)v9,
      (__int64)&v10,
      (__int64)&v11);
  }
}
