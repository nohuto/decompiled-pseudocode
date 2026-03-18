/*
 * XREFs of TR_AttemptStateChange @ 0x140005E00
 * Callers:
 *     Isoch_MapTransfers @ 0x14000DF10 (Isoch_MapTransfers.c)
 *     Bulk_EvtDmaCallback @ 0x140017B70 (Bulk_EvtDmaCallback.c)
 *     Isoch_EvtDmaCallback @ 0x14001FDC0 (Isoch_EvtDmaCallback.c)
 *     Isoch_EP_StopMapping @ 0x140033CB0 (Isoch_EP_StopMapping.c)
 *     Bulk_EP_StartMapping @ 0x140038C50 (Bulk_EP_StartMapping.c)
 * Callees:
 *     ESM_AddEvent @ 0x140006A44 (ESM_AddEvent.c)
 */

__int64 __fastcall TR_AttemptStateChange(__int64 a1, signed __int32 a2, __int32 a3)
{
  unsigned __int32 v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  if ( a2 == 5 )
    v3 = _InterlockedExchange((volatile __int32 *)(a1 + 108), a3);
  else
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), a3, a2);
  if ( a2 == v3 || a2 == 5 )
  {
    if ( !a3 )
    {
      v5 = *(_QWORD *)(a1 + 56);
      if ( !*(_BYTE *)(v5 + 37)
        || (v6 = *(_QWORD *)(v5 + 144),
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 20)) == *(_DWORD *)(v6 + 8)) )
      {
LABEL_9:
        ESM_AddEvent((PVOID)(v5 + 304));
      }
    }
  }
  else if ( a2 == 3 && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 0, 1) == 1 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v5 + 37) )
      goto LABEL_9;
    v7 = *(_QWORD *)(v5 + 144);
    if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 20)) == *(_DWORD *)(v7 + 8) )
      goto LABEL_9;
  }
  return v3;
}
