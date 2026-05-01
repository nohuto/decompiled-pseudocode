/*
 * XREFs of ?WindowTabHostActivePinnedSite@WindowTabHostTelemetry@@SAXXZ @ 0x180582D00
 * Callers:
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180582BC0 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018E94C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void WindowTabHostTelemetry::WindowTabHostActivePinnedSite(void)
{
  const struct _tlgProvider_t *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // r9
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    if ( tlgKeywordOn((__int64)v0, 0x400000000000LL) )
    {
      v3 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v1,
        byte_180811E64,
        0LL,
        v2,
        (__int64)&v3);
    }
  }
}
