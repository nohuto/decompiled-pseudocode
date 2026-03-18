/*
 * XREFs of Endpoint_SM_NotifyTransferRingsFSEReceived @ 0x14002D204
 * Callers:
 *     ESM_NotifyingTransferRingsFSEReceived @ 0x14002D1E0 (ESM_NotifyingTransferRingsFSEReceived.c)
 * Callees:
 *     TR_FSEReceived @ 0x14002D284 (TR_FSEReceived.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x14002D2A4 (XilEndpoint_FetchStreamContextArray.c)
 */

__int64 __fastcall Endpoint_SM_NotifyTransferRingsFSEReceived(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax
  __int64 v4; // rdi
  unsigned int i; // esi

  v1 = (__int64 *)(a1 + 144);
  if ( *(_BYTE *)(a1 + 37) )
    result = XilEndpoint_FetchStreamContextArray(*v1);
  if ( !*(_BYTE *)(a1 + 37) )
    return TR_FSEReceived(*(_QWORD *)(a1 + 88));
  v4 = *v1;
  *(_DWORD *)(v4 + 20) = 0;
  for ( i = 1; i <= *(_DWORD *)(v4 + 8); ++i )
    result = TR_FSEReceived(*(_QWORD *)(104LL * (i - 1) + *v1 + 48));
  return result;
}
