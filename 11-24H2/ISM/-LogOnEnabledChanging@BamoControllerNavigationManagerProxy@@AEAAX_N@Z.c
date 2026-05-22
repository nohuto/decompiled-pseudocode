/*
 * XREFs of ?LogOnEnabledChanging@BamoControllerNavigationManagerProxy@@AEAAX_N@Z @ 0x180117F68
 * Callers:
 *     ?UpdateEnabled@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18012876C (-UpdateEnabled@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180082D40 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall BamoControllerNavigationManagerProxy::LogOnEnabledChanging(BamoControllerNavigationManagerProxy *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  char v4; // [rsp+50h] [rbp+18h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v5 = *(_DWORD *)(v3 + 40);
    v4 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v1,
      byte_180217CE4,
      v2,
      v3,
      (__int64)&v5,
      (__int64)&v4);
  }
}
