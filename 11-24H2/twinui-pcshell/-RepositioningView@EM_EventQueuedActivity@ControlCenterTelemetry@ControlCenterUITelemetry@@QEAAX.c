/*
 * XREFs of ?RepositioningView@EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXXZ @ 0x1800E52B4
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800E4500 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 * Callees:
 *     ?Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E5C38 (-Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_EventQueuedActivity::RepositioningView(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_EventQueuedActivity *this)
{
  const struct _tlgProvider_t *v2; // rax

  v2 = ControlCenterLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807E8B19,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL));
}
