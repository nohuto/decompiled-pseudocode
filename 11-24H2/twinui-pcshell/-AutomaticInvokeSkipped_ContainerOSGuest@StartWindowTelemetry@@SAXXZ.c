/*
 * XREFs of ?AutomaticInvokeSkipped_ContainerOSGuest@StartWindowTelemetry@@SAXXZ @ 0x18045D6B0
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x18024AADC (--0XamlLauncher@@QEAA@XZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E8790 (-Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall StartWindowTelemetry::AutomaticInvokeSkipped_ContainerOSGuest(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rax

  v1 = LauncherTelemetryLogging::Provider(a1);
  if ( *(_DWORD *)v1 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v1,
      byte_1807F9980,
      0LL);
}
