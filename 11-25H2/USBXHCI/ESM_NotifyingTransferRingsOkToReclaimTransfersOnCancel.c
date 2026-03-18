/*
 * XREFs of ESM_NotifyingTransferRingsOkToReclaimTransfersOnCancel @ 0x14002F860
 * Callers:
 *     <none>
 * Callees:
 *     TR_OkToReclaimTransfersOnCancel @ 0x14002F8D8 (TR_OkToReclaimTransfersOnCancel.c)
 */

__int64 __fastcall ESM_NotifyingTransferRingsOkToReclaimTransfersOnCancel(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) )
  {
    v3 = *(_QWORD *)(v1 + 136);
    v4 = 1;
    for ( *(_DWORD *)(v3 + 20) = 0; v4 <= *(_DWORD *)(v3 + 8); ++v4 )
      TR_OkToReclaimTransfersOnCancel(*(_QWORD *)(104LL * (v4 - 1) + *(_QWORD *)(v1 + 136) + 48));
  }
  else
  {
    TR_OkToReclaimTransfersOnCancel(*(_QWORD *)(v1 + 88));
  }
  return 29LL;
}
