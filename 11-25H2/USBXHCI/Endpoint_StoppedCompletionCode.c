/*
 * XREFs of Endpoint_StoppedCompletionCode @ 0x140015010
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x140013E5C (Control_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x140016760 (Isoch_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x140017A48 (Bulk_ProcessTransferEventWithED0.c)
 *     Endpoint_TransferEventHandler @ 0x140021020 (Endpoint_TransferEventHandler.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x14004DA4C (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     <none>
 */

bool __fastcall Endpoint_StoppedCompletionCode(int a1)
{
  return (unsigned int)(a1 - 26) <= 2;
}
