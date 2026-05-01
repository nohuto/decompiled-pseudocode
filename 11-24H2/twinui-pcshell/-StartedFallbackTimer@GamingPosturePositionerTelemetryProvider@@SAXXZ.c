/*
 * XREFs of ?StartedFallbackTimer@GamingPosturePositionerTelemetryProvider@@SAXXZ @ 0x1805070EC
 * Callers:
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z @ 0x180500B10 (-HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall GamingPosturePositionerTelemetryProvider::StartedFallbackTimer(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rax

  v1 = GamingPosturePositionerTelemetryProvider::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v1,
      byte_18080A0B3,
      0LL);
}
