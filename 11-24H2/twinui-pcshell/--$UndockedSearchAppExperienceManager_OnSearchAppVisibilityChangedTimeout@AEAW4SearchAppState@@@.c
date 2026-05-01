/*
 * XREFs of ??$UndockedSearchAppExperienceManager_OnSearchAppVisibilityChangedTimeout@AEAW4SearchAppState@@@SearchAppExperienceManagerTelemetry@@SAXAEAW4SearchAppState@@@Z @ 0x1803AF844
 * Callers:
 *     ?OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803BDCB0 (-OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800824C8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D09B8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

int __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnSearchAppVisibilityChangedTimeout<enum SearchAppState &>(
        int *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = SearchAppLauncherLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = *a1;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                    (__int64)v2,
                    byte_1807F11BE,
                    0LL,
                    v3,
                    (__int64)&v5);
  }
  return (int)v2;
}
