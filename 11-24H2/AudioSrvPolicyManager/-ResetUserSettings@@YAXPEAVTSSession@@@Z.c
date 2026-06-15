/*
 * XREFs of ?ResetUserSettings@@YAXPEAVTSSession@@@Z @ 0x18003E828
 * Callers:
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x1800405E4 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800019F0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800033B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ResetUserSettings(struct TSSession *a1)
{
  const struct _tlgProvider_t *v2; // rax

  v2 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v2 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v2,
      (__int64)&unk_180058199);
  *((_DWORD *)a1 + 272) = 1;
}
