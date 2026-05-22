/*
 * XREFs of ?MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXXZ @ 0x1800B8FD0
 * Callers:
 *     ?OnMouseSnappedToGaze@MPCManager@@QEAAXXZ @ 0x1800B9D54 (-OnMouseSnappedToGaze@MPCManager@@QEAAXXZ.c)
 * Callees:
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013A30 (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006BF2C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

void __fastcall ISMTracing::MPCManager_OnMouseSnappedToGaze_(ISMTracing *this)
{
  const struct _tlgProvider_t *v1; // rax

  v1 = ISMTracing::Provider();
  if ( *(_DWORD *)v1 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v1,
      byte_180206C9A,
      0LL,
      0LL);
}
