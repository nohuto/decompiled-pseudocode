/*
 * XREFs of ??$TriedLaunchingApp@AEB_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAXAEB_N@Z @ 0x18032A380
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x180332AE0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_180332AE0.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180057F64 (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180331DFC (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::TriedLaunchingApp<bool const &>(
        __int64 a1,
        char *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = GamingPostureCoreTelemetryProvider::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v6 = *(_QWORD *)(a1 + 272);
    v8 = *a2;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
                    (__int64)v4,
                    byte_1807E6759,
                    (const GUID *)(v6 + 8),
                    v5,
                    (__int64)&v8);
  }
  return (int)v4;
}
