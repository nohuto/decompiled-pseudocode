/*
 * XREFs of ?TaskflowImmersiveShellBroker_StartupBegins@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x1802AB18C
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800CF1E0 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802AB228 (-Provider@TaskFlowDataEngineTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void TaskFlowDataEngineTelemetry::TaskflowImmersiveShellBroker_StartupBegins(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = TaskFlowDataEngineTelemetry::Provider();
  if ( *(_DWORD *)v0 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v0,
      byte_1807F6544,
      0LL);
}
