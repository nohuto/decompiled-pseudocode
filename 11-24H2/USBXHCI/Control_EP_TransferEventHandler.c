/*
 * XREFs of Control_EP_TransferEventHandler @ 0x140005EB0
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x140002700 (Endpoint_TransferEventHandler.c)
 * Callees:
 *     Control_ProcessTransferEventWithED1 @ 0x140005EE0 (Control_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1400077FC (Control_ProcessTransferEventWithED0.c)
 */

__int64 __fastcall Control_EP_TransferEventHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Control_ProcessTransferEventWithED1();
  else
    return Control_ProcessTransferEventWithED0();
}
