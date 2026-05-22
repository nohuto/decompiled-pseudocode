/*
 * XREFs of ?LogSendSetCursorShellVisibility@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_K_N@Z @ 0x18011BED0
 * Callers:
 *     ?SetCursorShellVisibility@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K_N@Z @ 0x180125470 (-SetCursorShellVisibility@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800055A4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoSystemCursorControllerProxyImpl::LogSendSetCursorShellVisibility(
        BamoImpl::BamoSystemCursorControllerProxyImpl *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  int v6; // edx
  int v7; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+44h] [rbp-14h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h] BYREF
  char v10; // [rsp+78h] [rbp+20h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v10 = v2;
    v9 = v4;
    v6 = *(_DWORD *)(v5 + 36);
    v8 = *(_DWORD *)(v3 + 24);
    v7 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v1,
      (__int64)&unk_1802176BD,
      v2,
      v3,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v9,
      (__int64)&v10);
  }
}
