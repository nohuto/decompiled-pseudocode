/*
 * XREFs of _lambda_587ef53c84617e0761e1b198e15c72f6_::operator() @ 0x1800E607C
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086EF0 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     wil::details::lambda_call__lambda_587ef53c84617e0761e1b198e15c72f6___::_lambda_call__lambda_587ef53c84617e0761e1b198e15c72f6___ @ 0x1800E5F1C (wil--details--lambda_call__lambda_587ef53c84617e0761e1b198e15c72f6___--_lambda_call__lambda_587e.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006BD5C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

ULONG __fastcall lambda_587ef53c84617e0761e1b198e15c72f6_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG result; // eax

  v1 = *a1;
  if ( *(_BYTE *)(*a1 + 4) )
    result = EventActivityIdControl(4u, (LPGUID)(v1 + 24));
  *(_DWORD *)v1 = 2;
  if ( (unsigned int)dword_18024E248 > 5 )
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
             (__int64)&dword_18024E248,
             byte_180213744,
             (const GUID *)(v1 + 8),
             0LL);
  return result;
}
