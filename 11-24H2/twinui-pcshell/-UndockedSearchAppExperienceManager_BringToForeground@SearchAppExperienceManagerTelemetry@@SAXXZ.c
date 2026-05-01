/*
 * XREFs of ?UndockedSearchAppExperienceManager_BringToForeground@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1800365A8
 * Callers:
 *     ?BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18003646C (-BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800824C8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

void SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_BringToForeground(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = SearchAppLauncherLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v0,
      &unk_1807F3638,
      0LL);
}
