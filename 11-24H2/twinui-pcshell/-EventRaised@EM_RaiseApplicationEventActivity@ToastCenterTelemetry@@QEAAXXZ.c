/*
 * XREFs of ?EventRaised@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802140F0
 * Callers:
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800B4688 (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 * Callees:
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B5C88 (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ToastCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised(
        ToastCenterTelemetry::EM_RaiseApplicationEventActivity *this)
{
  const struct _tlgProvider_t *v2; // rax

  v2 = ToastCenterLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807E8E22,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL));
}
