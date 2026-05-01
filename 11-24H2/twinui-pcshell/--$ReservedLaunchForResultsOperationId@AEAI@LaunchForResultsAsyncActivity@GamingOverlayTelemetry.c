/*
 * XREFs of ??$ReservedLaunchForResultsOperationId@AEAI@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXAEAI@Z @ 0x180342C34
 * Callers:
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x180352A40 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D09B8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@GamingOverlayTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180298B7C (-Provider@GamingOverlayTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall GamingOverlayTelemetry::LaunchForResultsAsyncActivity::ReservedLaunchForResultsOperationId<unsigned int &>(
        __int64 a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  const GUID *v6; // r8
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = GamingOverlayTelemetry::Provider(a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v6 = (const GUID *)(*(_QWORD *)(a1 + 272) + 8LL);
    v8 = *a2;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                    (__int64)v4,
                    byte_1807E7755,
                    v6,
                    v5,
                    (__int64)&v8);
  }
  return (int)v4;
}
