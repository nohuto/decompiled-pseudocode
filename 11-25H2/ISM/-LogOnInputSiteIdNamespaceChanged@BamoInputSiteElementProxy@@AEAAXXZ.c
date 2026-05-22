/*
 * XREFs of ?LogOnInputSiteIdNamespaceChanged@BamoInputSiteElementProxy@@AEAAXXZ @ 0x18012E420
 * Callers:
 *     ?UpdateInputSiteIdNamespace@BamoInputSiteElementProxyImpl@BamoImpl@@QEAAJ_NW4InputSiteIdNamespace@@@Z @ 0x180070AB4 (-UpdateInputSiteIdNamespace@BamoInputSiteElementProxyImpl@BamoImpl@@QEAAJ_NW4InputSiteIdNamespac.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800020EC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall BamoInputSiteElementProxy::LogOnInputSiteIdNamespaceChanged(BamoInputSiteElementProxy *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // [rsp+48h] [rbp+10h] BYREF

  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v4 = *(_DWORD *)(v2 + 40);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v1,
      (__int64)&unk_180212312,
      v2,
      v3,
      (__int64)&v4);
  }
}
