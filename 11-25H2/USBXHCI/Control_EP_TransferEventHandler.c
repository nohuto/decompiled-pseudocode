/*
 * XREFs of Control_EP_TransferEventHandler @ 0x140012510
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x140021020 (Endpoint_TransferEventHandler.c)
 *     TR_TransferEventHandler @ 0x140023AE0 (TR_TransferEventHandler.c)
 * Callees:
 *     Control_ProcessTransferEventWithED1 @ 0x140012540 (Control_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED0 @ 0x140013E5C (Control_ProcessTransferEventWithED0.c)
 */

__int64 __fastcall Control_EP_TransferEventHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    return Control_ProcessTransferEventWithED1();
  else
    return Control_ProcessTransferEventWithED0();
}
