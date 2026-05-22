/*
 * XREFs of ?HeadEventHandlerDisabled_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D6958
 * Callers:
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800D5EA4 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006BD5C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D2908 (-Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall RawInputProvidersTracing::HeadEventHandlerDisabled_(RawInputProvidersTracing *this)
{
  const struct _tlgProvider_t *v1; // rcx
  __int64 v2; // rcx

  v1 = RawInputProvidersTracing::Provider((__int64)this);
  if ( *(_DWORD *)v1 > 4u && tlgKeywordOn((__int64)v1, 2LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v2,
      byte_180212A52,
      0LL,
      0LL);
}
