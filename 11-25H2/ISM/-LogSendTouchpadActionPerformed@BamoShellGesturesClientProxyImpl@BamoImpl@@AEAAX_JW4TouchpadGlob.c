/*
 * XREFs of ?LogSendTouchpadActionPerformed@BamoShellGesturesClientProxyImpl@BamoImpl@@AEAAX_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z @ 0x180157E38
 * Callers:
 *     ?TouchpadActionPerformed@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z @ 0x180158A30 (-TouchpadActionPerformed@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_JW4TouchpadGlobalActio.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180004FC8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void BamoImpl::BamoShellGesturesClientProxyImpl::LogSendTouchpadActionPerformed()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // rax
  int v5; // edx
  int v6; // [rsp+40h] [rbp-18h] BYREF
  int v7; // [rsp+44h] [rbp-14h] BYREF
  __int64 v8; // [rsp+48h] [rbp-10h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v4 = *(_QWORD *)(v2 + 16);
    v9 = v1;
    v8 = v3;
    v5 = *(_DWORD *)(v4 + 36);
    v7 = *(_DWORD *)(v2 + 24);
    v6 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v0,
      (__int64)&unk_180218809,
      v1,
      v2,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v8,
      (__int64)&v9);
  }
}
