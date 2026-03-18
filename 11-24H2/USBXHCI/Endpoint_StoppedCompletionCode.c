/*
 * XREFs of Endpoint_StoppedCompletionCode @ 0x140003FA0
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x140002700 (Endpoint_TransferEventHandler.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1400038CC (Bulk_ProcessTransferEventWithED0.c)
 *     Control_ProcessTransferEventWithED0 @ 0x1400077FC (Control_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x140011E20 (Isoch_ProcessTransferEventWithED0.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x14004D17C (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_StoppedCompletionCode(int a1)
{
  return (unsigned int)(a1 - 26) <= 2;
}
