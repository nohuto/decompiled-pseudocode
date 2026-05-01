/*
 * XREFs of ?GameExit@BroadcastDVRTraceProvider@@SAXXZ @ 0x18010A9C4
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18005A714 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?get@?$static_lazy@VBroadcastDVRTraceProvider@@@details@wil@@QEAAPEAVBroadcastDVRTraceProvider@@P6AXXZ@Z @ 0x18010AA18 (-get@-$static_lazy@VBroadcastDVRTraceProvider@@@details@wil@@QEAAPEAVBroadcastDVRTraceProvider@@.c)
 */

void __fastcall BroadcastDVRTraceProvider::GameExit(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(wil::details::static_lazy<BroadcastDVRTraceProvider>::get(
                     a1,
                     _lambda_834c0077cad59c9dc0a3a987d1005045_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v1 > 5u
    && (*(_QWORD *)(v1 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v1 + 24) & 0x200000000000LL) == *(_QWORD *)(v1 + 24) )
  {
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v1,
      byte_1807E4C4E,
      0LL);
  }
}
