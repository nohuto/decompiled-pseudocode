/*
 * XREFs of ?LogSendSetCursorShellMagnification@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_KM@Z @ 0x18011A0A8
 * Callers:
 *     ?SetCursorShellMagnification@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_KM@Z @ 0x180123510 (-SetCursorShellMagnification@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_KM@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180004FC8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoSystemCursorControllerProxyImpl::LogSendSetCursorShellMagnification(
        BamoImpl::BamoSystemCursorControllerProxyImpl *this,
        __int64 a2,
        float a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  int v7; // edx
  int v8; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+44h] [rbp-14h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  float v11; // [rsp+78h] [rbp+20h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v6 = *(_QWORD *)(v4 + 16);
    v11 = a3;
    v10 = v5;
    v7 = *(_DWORD *)(v6 + 36);
    v9 = *(_DWORD *)(v4 + 24);
    v8 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_18020EADC,
      v4,
      v5,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v10,
      (__int64)&v11);
  }
}
