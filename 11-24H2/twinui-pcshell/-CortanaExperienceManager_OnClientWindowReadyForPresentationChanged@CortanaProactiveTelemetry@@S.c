/*
 * XREFs of ?CortanaExperienceManager_OnClientWindowReadyForPresentationChanged@CortanaProactiveTelemetry@@SAXXZ @ 0x18037A728
 * Callers:
 *     ?_OnClientWindowReadyForPresentationChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18037F630 (-_OnClientWindowReadyForPresentationChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIClientW.c)
 * Callees:
 *     ?Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800F2B3C (-Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018E94C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnClientWindowReadyForPresentationChanged(
        __int64 a1)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // r9
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = CortanaProactiveLogging::Provider(a1);
  if ( *(_DWORD *)v1 > 4u )
  {
    v3 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (__int64)v1,
      byte_1807EAAF2,
      0LL,
      v2,
      (__int64)&v3);
  }
}
