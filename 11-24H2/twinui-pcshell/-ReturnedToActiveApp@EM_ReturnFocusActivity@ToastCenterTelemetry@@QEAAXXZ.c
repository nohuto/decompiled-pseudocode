/*
 * XREFs of ?ReturnedToActiveApp@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18038537C
 * Callers:
 *     ?ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801E158C (-ReturnFocus@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B5C88 (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ToastCenterTelemetry::EM_ReturnFocusActivity::ReturnedToActiveApp(
        ToastCenterTelemetry::EM_ReturnFocusActivity *this)
{
  const struct _tlgProvider_t *v2; // rax

  v2 = ToastCenterLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807E86BB,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL));
}
