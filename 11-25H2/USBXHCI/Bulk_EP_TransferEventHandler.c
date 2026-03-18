/*
 * XREFs of Bulk_EP_TransferEventHandler @ 0x1400199D0
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x140021020 (Endpoint_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x140023AE0 (TR_TransferEventHandler.c)
 * Callees:
 *     Bulk_ProcessTransferEventWithED0 @ 0x140017A48 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140019A00 (Bulk_ProcessTransferEventWithED1.c)
 */

char __fastcall Bulk_EP_TransferEventHandler(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Bulk_ProcessTransferEventWithED1();
  else
    return Bulk_ProcessTransferEventWithED0(a1, a2);
}
