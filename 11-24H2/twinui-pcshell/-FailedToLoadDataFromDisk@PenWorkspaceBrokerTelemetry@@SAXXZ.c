/*
 * XREFs of ?FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1803F2CDC
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x18004C164 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@PenWorkspaceBrokerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1803F3CEC (-Provider@PenWorkspaceBrokerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void PenWorkspaceBrokerTelemetry::FailedToLoadDataFromDisk(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = PenWorkspaceBrokerLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v0,
      byte_1807F6020,
      0LL);
}
