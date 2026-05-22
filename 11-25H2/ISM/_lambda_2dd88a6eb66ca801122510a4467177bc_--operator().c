/*
 * XREFs of _lambda_2dd88a6eb66ca801122510a4467177bc_::operator() @ 0x1800E4C0C
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086910 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     wil::details::lambda_call__lambda_2dd88a6eb66ca801122510a4467177bc___::_lambda_call__lambda_2dd88a6eb66ca801122510a4467177bc___ @ 0x1800E4AAC (wil--details--lambda_call__lambda_2dd88a6eb66ca801122510a4467177bc___--_lambda_call__lambda_2dd8.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006BF2C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

ULONG __fastcall lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG result; // eax

  v1 = *a1;
  if ( *(_BYTE *)(*a1 + 4) )
    result = EventActivityIdControl(4u, (LPGUID)(v1 + 24));
  *(_DWORD *)v1 = 2;
  if ( (unsigned int)dword_180244248 > 5 )
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
             (__int64)&dword_180244248,
             byte_18020A0B2,
             (const GUID *)(v1 + 8),
             0LL);
  return result;
}
