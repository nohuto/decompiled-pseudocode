/*
 * XREFs of ?SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D57D0
 * Callers:
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800D4A50 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006BF2C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D0A4C (-Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall RawInputProvidersTracing::SpatialInputControllerCollection_Released_(RawInputProvidersTracing *this)
{
  const struct _tlgProvider_t *v1; // rcx
  __int64 v2; // rcx

  v1 = RawInputProvidersTracing::Provider((__int64)this);
  if ( *(_DWORD *)v1 > 4u && tlgKeywordOn((__int64)v1, 2LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v2,
      byte_1802099F6,
      0LL,
      0LL);
}
